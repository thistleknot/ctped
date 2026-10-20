"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independently described File objects | [mandatory] | R1-R2
SNEAKY_ADD | Insert existing Files with optional keys | [mandatory] | R1-R2
LOOKUP | Check ordinals, keys, safe absence, and source filenames | [mandatory] | R3-R5
PROPAGATE | Check File editable state across duplicates | [mandatory] | R6

R1. WHEN SneakyAdd receives a File, preserve insertion order and object identity.
R2. WHEN a duplicate explicit key is added, reject without mutation.
R3. WHEN Item receives an integer or string, resolve one-based ordinal or key.
R4. WHEN ItemNoError receives an absent valid key or ordinal, return None.
R5. WHEN ItemByDataSource receives a filename, return the first exact match.
R6. WHEN a File's Editable state changes, update its duplicate Files.

CLOSED
- Fixtures use independent in-memory descriptor bytes.
- Case-sensitive filename matching follows the exact string comparison in C.
- The separate File factory Add remains open; these tests cover existing-object insertion only.

Preconditions: Files receives File objects; source names are strings.
Failures: duplicate keys and invalid argument types raise explicit errors.
"""

import pytest

from file import File
from files import Files
from file_access import FileInterface, FileReference
from structure import Structure


def _file(file_name: str, editable: bool = True) -> File:
    """Create a minimal opaque File with an independently named source.

    Require: file_name is a source filename.
    Guarantee: return an initialized format-0 File.
    Maintain: source bytes remain unchanged.
    Assert: File retains its source object.
    """
    structure = Structure.from_bytes(b"0.3 // Version\n0 // Format\n")
    result = File.from_bytes(
        b"opaque\n",
        structure,
        data_source=FileReference(FileInterface("."), file_name),
        editable=editable,
    )
    assert str(result.data_source.file_name) == file_name
    return result


def test_files_preserves_order_and_resolves_ordinals_keys_and_missing_items() -> None:
    """Require three Files; guarantee ordered and optional lookup behavior."""
    first, second, third = _file("first.txt"), _file("second.txt"), _file("third.txt")
    files = Files()
    assert files.sneaky_add(first, "main") is first
    assert files.sneaky_add(second) is second
    assert files.sneaky_add(third, "aux") is third

    assert list(files) == [first, second, third]
    assert files.item(1) is first
    assert files.item(2) is second
    assert files.item("MAIN") is first
    assert files.item_no_error(3) is third
    assert files.item_no_error("missing") is None
    assert files.item_no_error(4) is None
    assert files.count == 3


def test_files_rejects_duplicate_keys_without_mutation() -> None:
    """Require duplicate case variants; guarantee rejection before state changes."""
    files = Files()
    files.sneaky_add(_file("one.txt"), "data")

    with pytest.raises(ValueError, match="duplicate file key"):
        files.sneaky_add(_file("two.txt"), "DATA")

    assert files.count == 1
    assert str(files.item("data").data_source.file_name) == "one.txt"


@pytest.mark.parametrize(
    "requested,expected",
    [("shared.txt", "first"), ("SHARED.txt", None), ("absent.txt", None)],
)
def test_files_finds_first_exact_data_source_name(
    requested: str, expected: str | None
) -> None:
    """Require duplicate and case-varied filenames; guarantee exact first-match search."""
    files = Files()
    first = _file("shared.txt")
    files.sneaky_add(first, "first")
    files.sneaky_add(_file("shared.txt"), "second")

    found = files.item_by_data_source(requested)

    assert found is (files.item_no_error(expected) if expected is not None else None)


def test_file_editable_state_propagates_to_duplicate_files() -> None:
    """Require two duplicate Files; guarantee state propagation on both assignments."""
    first = _file("primary.txt")
    duplicate_a = _file("copy-a.txt", editable=False)
    duplicate_b = _file("copy-b.txt", editable=False)
    primary = File(
        first.source,
        first.original_bytes,
        first.structure,
        first.fields,
        first.entries,
        first.data_source,
        True,
        (duplicate_a, duplicate_b),
    )

    primary.editable = False
    assert not primary.editable
    assert not duplicate_a.editable and not duplicate_b.editable
    primary.editable = True
    assert primary.editable
    assert duplicate_a.editable and duplicate_b.editable
