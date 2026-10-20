"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply formats 0, 1, 2, and 3 with varied field rows | [mandatory] | R1-R2
PARSE | Check ordered field and argument extraction through `@` | [mandatory] | R1-R2
LOOKUP | Check one-based and keyed access, including misses | [mandatory] | R3
MUTATE | Check duplicate rejection leaves order intact | [mandatory] | R4

R1. WHEN format 1 or 3 has a field table, parse fields in declared order.
R2. WHEN the first `@` is reached, do not parse subsequent metadata.
R3. WHEN a valid key is absent, item_no_error returns None.
R4. WHEN a duplicate field is added, collection contents remain unchanged.

CLOSED
- Fixtures are independently authored and include zero, one, and two arguments.

Preconditions: fixtures are complete in-memory `.ces` descriptors.
Failures are reported as assertion or unexpected exception failures.
"""

import pytest

from field import Field
from fields import Fields
from structure import Structure


def _structure(format_number: int, body: str) -> Structure:
    """Build a small descriptor with a selected format and body.

    Require: format number is supported and body contains descriptor rows.
    Guarantee: return a parsed in-memory Structure.
    Maintain: fixtures do not depend on distribution sample data.
    Assert: source bytes are retained by Structure.
    """
    metadata = {
        0: "",
        1: "f // entry count\nf // tree\nf // GL refs\nf // GL strings\nf // icon\nf // field formatting\n",
        2: "strings.txt // Filename\npath\\ // Path\n# // Comment\n%009 // Delimiter\n",
        3: "t // entry count\n",
    }[format_number]
    content = (
        f"0.3 // Version\n{format_number} // Format\n{metadata}{body}"
    ).encode("cp1252")
    return Structure.from_bytes(content, f"format-{format_number}.ces")


def test_fields_parses_ordered_rows_and_stops_at_terminator() -> None:
    """Require varied field arities; guarantee order and boundary; maintain later rows; assert three fields."""
    structure = _structure(
        3,
        """Zero\tt\tf\tf\t0
One\tt\tt\tf\t1
\t0\t\t42\tNumber
Many\tf\tf\tt\t2
\t0\t\t"Text"\tString
\t*nested.ces\t\t\tNested
@ // end fields
TreeMetadata\tt\tt\tf\t0
""",
    )

    fields = Fields.from_structure(structure)

    assert [value.name for value in fields] == ["Zero", "One", "Many"]
    assert fields.count == 3
    assert fields.item("One").arguments[0].default_value == "42"
    assert len(fields.item(3).arguments) == 2
    assert fields.item_no_error("absent") is None
    assert fields.item_no_error(4) is None


@pytest.mark.parametrize("format_number", [0, 1, 2])
def test_fields_returns_empty_for_formats_without_field_tables(format_number: int) -> None:
    """Require formats without tables; guarantee empty collection; maintain descriptor; assert zero count."""
    structure = _structure(format_number, "")

    fields = Fields.from_structure(structure)

    assert fields.count == 0
    assert list(fields) == []


def test_fields_duplicate_add_does_not_change_order() -> None:
    """Require an existing and duplicate field; guarantee rejection; maintain order; assert unchanged items."""
    structure = _structure(3, "First\tt\tf\tf\t0\nSecond\tt\tf\tf\t0\n@\n")
    fields = Fields.from_structure(structure)
    duplicate, _ = Field.from_lines(["First\tf\tf\tf\t0"], 0, False)

    with pytest.raises(ValueError, match="duplicate field name: First"):
        fields.add(duplicate)

    assert [value.name for value in fields] == ["First", "Second"]


def test_fields_name_keys_ignore_case_but_no_error_scan_is_exact() -> None:
    """Require mixed-case requests; guarantee keyed lookup semantics; maintain exact scan; assert both paths."""
    fields = Fields.from_structure(_structure(3, "Age\tt\tf\tf\t0\n@\n"))

    assert fields.item("AGE") is fields.item("Age")
    assert fields.item_no_error("AGE") is None

    duplicate, _ = Field.from_lines(["AGE\tf\tf\tf\t0"], 0, False)
    with pytest.raises(ValueError, match="duplicate field name: AGE"):
        fields.add(duplicate)
    assert fields.count == 1


def test_fields_lookup_reports_missing_and_invalid_keys() -> None:
    """Require a populated collection; guarantee explicit lookup errors; maintain state; assert exception types."""
    fields = Fields.from_structure(_structure(3, "Only\tt\tf\tf\t0\n@\n"))

    with pytest.raises(IndexError):
        fields.item(0)
    with pytest.raises(KeyError):
        fields.item("missing")
    with pytest.raises(TypeError):
        fields.item(True)

