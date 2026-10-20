"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Provide empty, single, and multiple tree tables | [mandatory] | R1-R2
PARSE | Check source rows and malformed declarations | [mandatory] | R2-R4
COLLECTION | Check order, key lookup, remove, and clear | [mandatory] | R5-R7
SAMPLES | Parse supplied tree descriptors | [mandatory] | R8

R1. WHEN a non-tree Structure is parsed, return no CrossRefs.
R2. WHEN a tree table is parsed, retain each tag and target token in order.
R3. WHEN a row lacks a parenthesized tag or two targets, reject it.
R4. WHEN a non-row follows the table heading, reject it.
R5. WHEN tags are added, support one-based and case-insensitive key lookup.
R6. WHEN Remove receives a stored tag or ordinal, remove only that item.
R7. WHEN Clear is called, empty order and key storage.
R8. WHEN supplied tree descriptors are parsed, match their declared rows.

CLOSED
- Fixtures are independently authored; corpus evidence uses copied descriptors.
- CrossRef target object resolution is not tested as available.

Preconditions: all Structure inputs are independently constructed or copied.
Failures are reported as assertion or unexpected exception failures.
"""

from pathlib import Path

import pytest

from crossref import CrossRef
from crossrefs import CrossRefs
from structure import Structure


def _structure(tree: bool, rows: bytes = b"") -> Structure:
    """Build an independent format 1 descriptor with an optional tree table.

    Require: tree says whether a tree table exists.
    Guarantee: return a parsed Structure with a field table and optional refs.
    Maintain: descriptor content is authored within this fixture.
    Assert: the parser records the requested tree flag.
    """
    content = (
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n1 // Format\n"
        + b"f\n"
        + (b"t\n" if tree else b"f\n")
        + b"f\nf\nf\nf\nName\tt\tf\tf\t0\n@ // fields\n"
    )
    if tree:
        content += b"Prerequisites\n" + rows + b"@ // cross refs\n"
    result = Structure.from_bytes(content, "tree-fixture.ces")
    assert result.has_tree_structure is tree
    return result


def test_crossref_parses_tag_targets_and_source_text() -> None:
    """Require a tagged row with comment; guarantee tokens and source are retained."""
    line = "(A)\tadvance.ces\tPrerequisites // target field\n"

    ref = CrossRef.from_line(line, "advance.ces", 44)

    assert ref.tag_string == "(A)"
    assert ref.target_file_name == "advance.ces"
    assert ref.target_field_name == "Prerequisites"
    assert ref.source_line == line
    assert ref.source == "advance.ces"
    assert ref.line_number == 44
    assert ref.file is None and ref.field is None


@pytest.mark.parametrize(
    "line",
    ["advance.ces Prerequisites\n", "(A) advance.ces\n", "(A)\n"],
)
def test_crossref_rejects_malformed_rows(line: str) -> None:
    """Require three malformed rows; guarantee source-context rejection."""
    with pytest.raises(ValueError, match="fixture.ces:8: malformed"):
        CrossRef.from_line(line, "fixture.ces", 8)


def test_crossrefs_parses_multiple_rows_and_ignores_non_tree_structure() -> None:
    """Require a multiple-row tree fixture and non-tree fixture; preserve row order."""
    structure = _structure(
        True,
        b"// explanation\n(A) advance.ces Prerequisites\n(B) units.ces EnableAdvance\n",
    )
    refs = CrossRefs.from_structure(structure)

    assert refs.count == 2
    assert [ref.tag_string for ref in refs] == ["(A)", "(B)"]
    assert refs.item(1).target_file_name == "advance.ces"
    assert refs.item("(b)").target_field_name == "EnableAdvance"
    assert CrossRefs.from_structure(_structure(False)).count == 0


def test_crossrefs_parses_one_row_and_rejects_unexpected_text() -> None:
    """Require one-row and malformed post-heading tables; assert correct outcomes."""
    single = CrossRefs.from_structure(_structure(True, b"(A) advance.ces Prerequisites\n"))
    assert single.count == 1

    with pytest.raises(ValueError, match="unexpected text"):
        CrossRefs.from_structure(
            _structure(True, b"(A) advance.ces Prerequisites\nstray text\n")
        )


def test_crossrefs_key_duplicates_remove_and_clear() -> None:
    """Require varied collection mutations; preserve order and synchronized keys."""
    refs = CrossRefs.from_structure(
        _structure(
            True,
            b"(A) advance.ces Prerequisites\n(B) units.ces EnableAdvance\n(C) pop.ces Entertainers\n",
        )
    )
    original = list(refs)
    with pytest.raises(ValueError, match="duplicate cross-reference tag"):
        refs.add(CrossRef.from_line("(a) spare.ces Spare"))
    assert list(refs) == original

    refs.remove("(b)")
    assert [ref.tag_string for ref in refs] == ["(A)", "(C)"]
    refs.remove(1)
    assert [ref.tag_string for ref in refs] == ["(C)"]
    refs.clear()
    assert refs.count == 0
    assert refs.item_no_error("(C)") is None


def test_crossrefs_parses_supplied_tree_descriptors() -> None:
    """Require actual tree descriptor files; guarantee their reference rows are captured."""
    root = Path(__file__).parents[1] / ".private_samples" / "Structure"
    advance = CrossRefs.from_structure(Structure.from_file(root / "advance.ces"))
    buildings = CrossRefs.from_structure(Structure.from_file(root / "buildings.ces"))

    assert [ref.tag_string for ref in advance] == ["(A)", "(I)", "(U)", "(W)", "(G)", "(P)", "(T)"]
    assert [ref.tag_string for ref in buildings] == ["(I)"]
    assert advance.item("(A)").target_field_name == "Prerequisites"
    assert buildings.item(1).target_file_name == "buildings.ces"
