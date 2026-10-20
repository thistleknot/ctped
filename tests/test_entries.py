"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independent Structures and parsed Entries | [mandatory] | R1-R4
ADD | Check empty Structure/name factory semantics | [mandatory] | R1-R2
SNEAKY_ADD | Check existing Entry insertion and automatic/private keys for duplicate source names | [mandatory] | R3-R4,R11
LOOKUP | Check ordinal, key, name, and identity lookup | [mandatory] | R5-R8
REJECT | Check generated duplicate and invalid input behavior | [mandatory] | R2-R7,R11
REMOVE | Check keyed and ordinal removal and key-index integrity | [mandatory] | R9
MOVE | Check one-based moves and key-index integrity | [mandatory] | R10

R1. WHEN Add receives a format-1/3 Structure and name, return an empty Entry linked to the Structure; File defaults are initialized outside this Collection.
R2. WHEN Add succeeds, return and store the new Entry in source order.
R3. WHEN SneakyAdd receives an Entry, store and return that same object.
R4. WHEN an Entry has a nonempty name, key it case-insensitively; empty names remain unkeyed.
R5. WHEN ordinal or keyed lookup succeeds, return the stored Entry object.
R6. WHEN ItemByName misses, return None; duplicate unkeyed names return first.
R7. WHEN a nonempty name duplicates ignoring case, reject without mutation.
R8. WHEN Count is requested, report the stored-entry count.
R9. WHEN a keyed or ordinal Entry is removed, remove that same object and keep later ordinals and keys aligned.
R10. WHEN valid ordinals are moved, preserve the moved object and relative order of intervening Entries; WHEN ordinals are invalid, leave collection order unchanged.
R11. WHEN imported source Entries share a nonempty name, retain all Entries in source order under private keys; WHEN generated Entries duplicate a name, reject without mutation.

CLOSED
- Add creates an empty Entry; File-level insertion constructs serializable defaults.
- Generated duplicate nonempty names fail; imported duplicate names remain ordered and addressable by ordinal.

Preconditions: fixtures use valid format 1/3 Structures and independently
parsed Entry objects. Failures are reported as assertion or exception failures.
"""

import pytest

from entries import Entries
from entry import Entry
from structure import Structure


def _structure(format_number: int = 3) -> Structure:
    """Build an independent Structure fixture.

    Require: ``format_number`` is 1 or 3.
    Guarantee: return a parsed Structure with the requested record format.
    Maintain: fixture bytes are independent from external samples.
    Assert: parsed format matches the request.
    """
    if format_number == 3:
        content = (
            b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n3 // Format\nf\n"
            b"Value\tt\tt\tf\t1\n\t0\t\tdefault\n@\n"
        )
    elif format_number == 1:
        content = (
            b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n"
            b"Value\tt\tt\tf\t1\n\t0\t\tdefault\n"
            b"Flag\tf\tt\tf\t0\n"
            b"Reference\tf\tt\tf\t1\n\tadvance.ces\tTARGET\tReference default\n@\n"
        )
    else:
        raise ValueError("fixture format must be 1 or 3")
    result = Structure.from_bytes(content, f"entries-fixture-{format_number}.ces")
    assert result.format == format_number
    return result


def _entry(name: str) -> Entry:
    """Parse one independent format 3 record.

    Require: ``name`` is one unquoted record token.
    Guarantee: return an Entry parsed through the record reader.
    Maintain: do not depend on external samples.
    Assert: parsed name matches the requested name.
    """
    structure = _structure()
    value, next_index = Entry.from_lines([f"{name} value\n"], 0, structure)
    assert next_index == 1 and value.name == name
    return value


def test_add_creates_empty_entries_and_preserves_order() -> None:
    """Require two Structures and names; guarantee empty factories; assert order and schema links."""
    structure = _structure()
    collection = Entries()

    first = collection.add(structure, "ALPHA")
    second = collection.add(_structure(1), "BETA")

    assert collection.count == 2
    assert list(collection) == [first, second]
    assert first.name == "ALPHA" and first.structure is structure
    assert first.format == 3 and first.source_lines == ()
    assert first.field_instances.count == 0
    assert second.name == "BETA" and second.format == 1
    assert second.field_instances.count == 0 and second.source_lines == ()


def test_sneaky_add_returns_existing_entry_and_keys_its_name() -> None:
    """Require distinct existing entries; guarantee automatic keyed lookup; assert object identity."""
    first, second = _entry("ALPHA"), _entry("BETA")
    collection = Entries()

    assert collection.sneaky_add(first) is first
    assert collection.sneaky_add(second) is second
    assert collection.item("alpha") is first
    assert collection.item(2) is second
    assert collection.item_by_name("BETA") is second
    assert collection.index_of(second) == 2
    assert collection.index_of(_entry("BETA")) is None


def test_empty_name_is_unkeyed_and_name_lookup_returns_first() -> None:
    """Require duplicate empty-name Entries; guarantee unkeyed insertion; assert first name match."""
    structure = _structure(1)
    first = Entry(str(structure.source), "", 1, (), structure=structure)
    second = Entry(str(structure.source), "", 1, (), structure=structure)
    collection = Entries()

    collection.sneaky_add(first)
    collection.sneaky_add(second)

    assert collection.count == 2
    assert collection.item(1) is first and collection.item(2) is second
    assert collection.item_by_name("") is first
    assert collection.item_no_error("missing") is None
    with pytest.raises(KeyError):
        collection.item("")


def test_generated_duplicate_name_rejects_but_imported_duplicate_is_retained() -> None:
    """Require one duplicate via each path; reject generated, retain imported order."""
    structure = _structure()
    first = Entry(str(structure.source), "Alpha", 3, (), structure=structure)
    collection = Entries()
    collection.sneaky_add(first)

    with pytest.raises(ValueError, match="duplicate entry key: ALPHA"):
        collection.add(structure, "ALPHA")
    duplicate = _entry("aLPHa")
    assert collection.sneaky_add(duplicate) is duplicate

    assert collection.count == 2 and list(collection) == [first, duplicate]
    assert collection.item_by_name("Alpha") is first


@pytest.mark.parametrize(
    "structure,name,error",
    [
        (None, "ALPHA", TypeError),
        (_structure(3), None, TypeError),
        (Structure.from_bytes(b"0.3 // Version\n0 // Format\n"), "ALPHA", ValueError),
    ],
)
def test_add_rejects_invalid_inputs(structure, name, error) -> None:
    """Require three invalid argument combinations; guarantee explicit errors; assert no insertion."""
    collection = Entries()

    with pytest.raises(error):
        collection.add(structure, name)

    assert collection.count == 0


def test_item_by_name_duplicate_unkeyed_entries_returns_first() -> None:
    """Require repeated empty names; guarantee first-match lookup; assert stable ordering."""
    structure = _structure(1)
    first = Entry(str(structure.source), "", 1, (), structure=structure)
    second = Entry(str(structure.source), "", 1, (), structure=structure)
    collection = Entries()
    collection.sneaky_add(first)
    collection.sneaky_add(second)

    assert collection.item_by_name("") is first
    assert collection.item_no_error("") is first


def test_remove_by_key_and_ordinal_reindexes_remaining_entries() -> None:
    """Require three Entries; guarantee keyed and ordinal removal preserve remaining identity/order."""
    first, middle, last = _entry("FIRST"), _entry("MIDDLE"), _entry("LAST")
    collection = Entries()
    for value in (first, middle, last):
        collection.sneaky_add(value)

    assert collection.remove("middle") is middle
    assert collection.remove(2) is last
    assert collection.count == 1
    assert collection.item(1) is first
    assert collection.item("first") is first
    with pytest.raises(KeyError):
        collection.item("middle")


def test_move_reorders_items_and_keeps_keys_aligned() -> None:
    """Require varied forward/backward moves; guarantee stable keys and identity."""
    first, middle, last = _entry("FIRST"), _entry("MIDDLE"), _entry("LAST")
    collection = Entries()
    for value in (first, middle, last):
        collection.sneaky_add(value)

    assert collection.move(3, 1) is last
    assert list(collection) == [last, first, middle]
    assert collection.item("last") is last
    assert collection.item(3) is middle
    assert collection.move(1, 2) is last
    assert list(collection) == [first, last, middle]
    assert collection.item("first") is first
    assert collection.item("middle") is middle


@pytest.mark.parametrize("source,destination", [(0, 1), (1, 4), (True, 2)])
def test_move_rejects_invalid_ordinals_without_mutation(source, destination) -> None:
    """Require three invalid source/destination forms; guarantee unchanged order."""
    collection = Entries()
    values = [_entry(name) for name in ("A", "B", "C")]
    for value in values:
        collection.sneaky_add(value)
    before = tuple(collection)

    with pytest.raises((IndexError, TypeError)):
        collection.move(source, destination)

    assert tuple(collection) == before
