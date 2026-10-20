"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply independently authored format 1 and 3 records | [mandatory] | R1-R3
PARSE | Check names, boundaries, nested braces, and field values | [mandatory] | R1-R6
SAMPLES | Parse candidate format 1 and 3 files | [mandatory] | R7
ROUNDTRIP | Compare captured text including exact line endings | [mandatory] | R6
EDIT | Patch changed format-1/3 scalar value tokens | [opt] | R9-R11
REJECT | Check malformed boundaries, duplicates, and unsupported value schemas | [mandatory] | R3-R6
NESTED | Bind bare child blocks to explicitly loaded schemas | [mandatory] | R8
GL_ENTRY | Resolve the configured GL icon reference from an Entry | [mandatory] | R12
RAW_NESTED_EDIT | Validate whole raw nested-block replacements and retain source text | [contract] | R13

R1. WHEN format 1 is read, capture the complete balanced named block.
R2. WHEN format 3 is read, capture exactly one record after leading trivia.
R3. WHEN format 3 is read with a one-field ordinary schema, retain its exact value token in one FieldInstance.
R4. WHEN format 1 is read with Fields, preserve each field occurrence in source order.
R5. WHEN a value schema has another shape or a record token count is invalid, fail explicitly.
R6. WHEN an Entry is unchanged, return the exact captured source text.
R7. WHEN candidate sample data follows its descriptor grammar, parse every entry into FieldInstances; identify incompatible candidate syntax separately.
R8. WHEN a nested root is supplied, parse bare blocks as empty-name Entries with child Structure, Fields, and exact source text.
R9. WHEN a format-1 scalar value changes to one valid token, patch only its token and retain all other text.
R10. WHEN a format-3 scalar value changes to one valid token, patch only its token and retain all other text.
R11. WHEN another format or an invalid/unsupported value is edited, fail explicitly.
R12. WHEN the Structure names a GL icon field, return its Entry value; WHEN the field or instance is absent or scalar, return None; WHEN a non-scalar non-Entry object is stored, raise TypeError.
R13. WHEN a raw nested `*` value changes, accept only one balanced standalone brace block and replace only its source span; sibling bytes remain unchanged.

CLOSED
- Synthetic fixtures are independently authored; corpus checks read copied candidate samples.

Preconditions: line fixtures retain their line endings and Structures are valid.
Failures are reported as assertion or unexpected exception failures.
"""

import re
from pathlib import Path

import pytest

from entry import Entry
from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances
from fields import Fields
from structure import Structure



def _structure(format_number: int) -> Structure:
    """Build a minimal main-file descriptor for the selected record format.

    Require: format number is 1 or 3.
    Guarantee: return a parsed Structure with # and // comment markers.
    Maintain: fixture is independent of distribution descriptors.
    Assert: parsed format matches the request.
    """
    flags = "f\nf\nf\nf\nf\nf\n" if format_number == 1 else "f\n"
    content = (
        f"0.3 // Version\n#%047%047\n%032%009\n:\n}}{{\n"
        f"{format_number} // Format\n{flags}"
    ).encode("ascii")
    structure = Structure.from_bytes(content, f"fixture-{format_number}.ces")
    assert structure.format == format_number
    return structure


def _scalar_fields() -> Fields:
    """Build one ordinary field for format 3 value tests.

    Require: no external descriptor data.
    Guarantee: return one Field with one ordinary argument.
    Maintain: independent fixture values.
    Assert: the parsed collection contains exactly one field.
    """
    field, _ = Field.from_lines(["FileName\tt\tf\tf\t1", "\t0\t\tNULL"], 0, False)
    fields = Fields()
    fields.add(field)
    assert fields.count == 1
    return fields


def _format_one_fields() -> Fields:
    """Build ordinary, reference, no-value, repeatable, and nested field definitions.

    Require: no external descriptor data.
    Guarantee: return a schema spanning observed format 1 value types.
    Maintain: fields are independently parsed and inserted in order.
    Assert: all definitions have at most one argument.
    """
    definitions = (
        ("Name", "0", False),
        ("Reference", "age.ces", False),
        ("Marker", None, False),
        ("Many", "0", True),
        ("Nested", "*child.ces", False),
    )
    fields = Fields()
    for name, argument_type, allows_multiple in definitions:
        argument_count = 0 if argument_type is None else 1
        field_row = f"{name}\tt\tf\t{'t' if allows_multiple else 'f'}\t{argument_count}"
        lines = [field_row]
        if argument_type is not None:
            lines.append(f"\t{argument_type}\t\tdefault")
        field, next_index = Field.from_lines(lines, 0, False)
        assert next_index == len(lines)
        fields.add(field)
    assert all(len(field.arguments) <= 1 for field in fields)
    return fields


def test_entry_format_one_balances_nested_blocks_quotes_and_comments() -> None:
    """Require nested, quoted, and commented braces; guarantee full capture; maintain CRLF; assert next index."""
    structure = _structure(1)
    lines = [
        "// file comment\r\n",
        "\r\n",
        "AGE_ONE {\r\n",
        '  Label "brace } and ""quoted""" // { ignored\r\n',
        "  nested {\r\n",
        "    Value 1\r\n",
        "  } # nested close\r\n",
        "}\r\n",
        "// between records\r\n",
        "AGE_TWO {\r\n",
        "}\r\n",
    ]

    entry, next_index = Entry.from_lines(lines, 0, structure, "ages.txt")

    assert entry.name == "AGE_ONE"
    assert entry.format == 1
    assert next_index == 8
    assert entry.to_text() == "".join(lines[:8])
    assert "\n" not in entry.to_text().replace("\r\n", "")

    following, following_index = Entry.from_lines(lines, next_index, structure)
    assert following.name == "AGE_TWO"
    assert following.to_text() == "".join(lines[8:])
    assert following_index == len(lines)


def test_entry_format_one_binds_field_occurrences_and_retains_raw_values() -> None:
    """Require all observed value shapes; guarantee ordered field instances; maintain lexical values; assert identity."""
    structure = _structure(1)
    fields = _format_one_fields()
    lines = [
        "THING {\n",
        '  Name "value with } brace"\n',
        "  Reference AGE_ONE\n",
        "  Marker\n",
        "  Many first\n",
        '  Many "second value"\n',
        "  Nested {\n",
        "    Inner 1\n",
        "    Deeper { Leaf 2 }\n",
        "  } # nested close\n",
        "}\n",
    ]

    entry, next_index = Entry.from_lines(lines, 0, structure, fields=fields)

    assert next_index == len(lines)
    assert [instance.field.name for instance in entry.field_instances] == [
        "Name", "Reference", "Marker", "Many", "Many", "Nested"
    ]
    instances = list(entry.field_instances)
    assert [instance.value for instance in instances[:5]] == [
        '"value with } brace"', "AGE_ONE", None, "first", '"second value"'
    ]
    assert entry.field_instances.item(1).field is fields.item("Name")
    assert entry.field_instances.item(6).value == (
        "{\n    Inner 1\n    Deeper { Leaf 2 }\n  }"
    )
    assert entry.to_text() == "".join(lines)


def _gl_entry_schema() -> tuple[Structure, Fields]:
    content = b"""0.3 // Version
#%047%047
%032%009
:
}{
1 // Format
f // entry count
f // tree
t // GL references
t // GL strings
f // article
f // icon file
f // field formatting
Icon\tf\tf\tf\t1
\tuniticon.ces\tICON_\tIcon reference
@ // end fields
@ // end cross references
Icon // GL icon field
DATABASE_UNITS // GL database
UNIT_ // GL prefix
"""
    structure = Structure.from_bytes(content, "gl-entry.ces")
    fields = Fields.from_structure(structure)
    assert structure.gl_icon_field == "Icon"
    assert fields.item("Icon").arguments[0].argument_type == "uniticon.ces"
    return structure, fields


def test_entry_gl_entry_returns_configured_icon_reference() -> None:
    structure, fields = _gl_entry_schema()
    icon_entry = Entry("uniticon.txt", "ICON_WARRIOR", 1, ())
    instances = FieldInstances()
    icon_instance = FieldInstance(fields.item("Icon"), icon_entry)
    instances.add(icon_instance)
    entry = Entry("units.txt", "UNIT_WARRIOR", 1, (), instances, structure)

    assert entry.gl_entry is icon_entry
    assert icon_instance.value is icon_entry


@pytest.mark.parametrize("value", [None, "ICON_WARRIOR", 1])
def test_entry_gl_entry_returns_none_without_an_object_reference(value: object) -> None:
    structure, fields = _gl_entry_schema()
    instances = FieldInstances()
    instances.add(FieldInstance(fields.item("Icon"), value))
    entry = Entry("units.txt", "UNIT_WARRIOR", 1, (), instances, structure)

    assert entry.gl_entry is None


def test_entry_gl_entry_returns_none_when_structure_has_no_gl_field() -> None:
    entry = Entry("fixture.txt", "FIXTURE", 1, (), structure=_structure(1))

    assert entry.gl_entry is None


def test_entry_gl_entry_rejects_an_incompatible_object_reference() -> None:
    structure, fields = _gl_entry_schema()
    instances = FieldInstances()
    instances.add(FieldInstance(fields.item("Icon"), object()))
    entry = Entry("units.txt", "UNIT_WARRIOR", 1, (), instances, structure)

    with pytest.raises(TypeError, match="must reference an Entry"):
        _ = entry.gl_entry


def test_entry_format_one_parses_inline_field_values() -> None:
    """Require an entry with fields on its opening line; guarantee same-line parse; maintain text; assert raw value."""
    fields = _format_one_fields()

    entry, next_index = Entry.from_lines(
        ["THING { Name value }\n"], 0, _structure(1), fields=fields
    )

    assert next_index == 1
    assert len(entry.field_instances) == 1
    assert entry.field_instances.item(1).value == "value"
    assert entry.to_text() == "THING { Name value }\n"


def test_entry_rejects_descriptor_fields_with_multiple_arguments() -> None:
    """Require an unsupported two-argument schema; guarantee explicit failure; maintain no partial Entry."""
    field, _ = Field.from_lines(
        ["Pair\tt\tf\tf\t2", "\t0\t\t0", "\t0\t\t0"], 0, False
    )
    fields = Fields()
    fields.add(field)

    with pytest.raises(ValueError, match="unsupported argument count for field Pair"):
        Entry.from_lines(
            ["THING {\n", "  Pair left right\n", "}\n"],
            0,
            _structure(1),
            fields=fields,
        )


@pytest.mark.parametrize(
    "body,error",
    [
        ("  Unknown value\n", "unknown field"),
        ("  Name first\n  Name second\n", "does not allow multiple instances"),
        ("  Name\n", "missing value for field Name"),
    ],
)
def test_entry_format_one_rejects_unknown_duplicate_and_missing_values(
    body: str, error: str
) -> None:
    """Require invalid field rows; guarantee source error; maintain no partial Entry; assert failure."""
    with pytest.raises(ValueError, match=error):
        Entry.from_lines(
            ["THING {\n", body, "}\n"], 0, _structure(1), fields=_format_one_fields()
        )


def test_format_one_value_reader_parses_complete_descriptor_matched_samples() -> None:
    """Require every candidate format 1 file matching its descriptor; guarantee all supported rows parse."""
    sample_root = Path(__file__).parents[1] / ".private_samples"
    data_root = sample_root / "GameData" / "default" / "gamedata"
    candidates = []
    for descriptor_path in (sample_root / "Structure").glob("*.ces"):
        structure = Structure.from_file(descriptor_path)
        if structure.format != 1:
            continue
        data_path = next(
            (
                path
                for path in data_root.glob("*.txt")
                if path.stem.casefold() == descriptor_path.stem.casefold()
            ),
            None,
        )
        if data_path is not None:
            candidates.append((descriptor_path, data_path, structure))

    assert len(candidates) == 18
    total_entries = 0
    parsed_files = 0
    incompatible = {
        "citystyle": "unknown field CPIcon",
        "orders": "unknown field TargetPretest:MovePosition",
        "risks": "unknown field HutChanceBarbarian",
        "terrain": "unknown field HutTilesetIndexA",
        "tileimp": "unknown field Sound",
        "units": "unknown field GoldHunger",
        "wonder": "unknown field ProhibitSlavers",
    }
    for descriptor_path, data_path, structure in candidates:
        lines = data_path.read_bytes().decode("cp1252").splitlines(keepends=True)
        data_end = len(lines)
        while data_end and (
            not lines[data_end - 1].strip()
            or lines[data_end - 1].lstrip().startswith(("#", "//"))
        ):
            data_end -= 1
        first_data = next(
            (
                index
                for index, line in enumerate(lines[:data_end])
                if line.strip() and not line.lstrip().startswith(("#", "//"))
            ),
            data_end,
        )
        cursor = 0
        if structure.has_entry_count and first_data < data_end:
            header = lines[first_data].split("#", 1)[0].split("//", 1)[0].strip()
            if re.fullmatch(r"\d+", header):
                cursor = first_data + 1

        fields = Fields.from_structure(structure)
        bounded_lines = lines[:data_end]
        if descriptor_path.stem.casefold() in incompatible:
            with pytest.raises(
                ValueError, match=re.escape(incompatible[descriptor_path.stem.casefold()])
            ):
                while cursor < data_end:
                    _, cursor = Entry.from_lines(
                        bounded_lines,
                        cursor,
                        structure,
                        str(data_path),
                        fields=fields,
                    )
            continue
        while cursor < data_end:
            entry, cursor = Entry.from_lines(
                bounded_lines, cursor, structure, str(data_path), fields=fields
            )
            assert all(any(instance.field is field for field in fields) for instance in entry.field_instances)
            total_entries += 1
        parsed_files += 1

    assert parsed_files == 11
    assert total_entries == 965


def test_entry_format_three_consumes_one_named_record_line() -> None:
    """Require multiple format 3 rows; guarantee one-record consumption; maintain comments; assert raw text."""
    structure = _structure(3)
    lines = ["# file comment\n", '\tSOUND_ONE "name { value" # note }\n', "SOUND_TWO two\n"]

    entry, next_index = Entry.from_lines(lines, 0, structure, "sounds.txt")

    assert entry.name == "SOUND_ONE"
    assert entry.to_text() == "".join(lines[:2])
    assert next_index == 2

    following, following_index = Entry.from_lines(lines, next_index, structure)
    assert following.name == "SOUND_TWO"
    assert following.to_text() == lines[2]
    assert following_index == 3


@pytest.mark.parametrize(
    "record,expected",
    [
        ("SOUND_ONE sounds/one.wav\n", "sounds/one.wav"),
        ('SOUND_TWO "file with spaces.wav"\n', '"file with spaces.wav"'),
        ('SOUND_THREE "quoted ""name"".wav" # comment\n', '"quoted ""name"".wav"'),
    ],
)
def test_entry_format_three_retains_one_raw_value_token(
    record: str, expected: str
) -> None:
    """Require unquoted and quoted tokens; guarantee raw FieldInstance value; maintain original text."""
    entry, next_index = Entry.from_lines(
        [record], 0, _structure(3), fields=_scalar_fields()
    )

    assert next_index == 1
    assert len(entry.field_instances) == 1
    assert entry.field_instances.item(1).field.name == "FileName"
    assert entry.field_instances.item(1).value == expected
    assert entry.to_text() == record


@pytest.mark.parametrize(
    "lines,replacement,expected",
    [
        (["# lead\n", "ITEM {\n", " Name old # keep\n", "}\n"], "new", "# lead\nITEM {\n Name new # keep\n}\n"),
        (["ITEM { Name old } // tail\n"], '"new value"', 'ITEM { Name "new value" } // tail\n'),
        (["\tITEM {\r\n", "\tName old\r\n", "}\r\n"], "new", "\tITEM {\r\n\tName new\r\n}\r\n"),
    ],
)
def test_entry_format_one_scalar_edit_patches_only_its_source_token(
    lines: list[str], replacement: str, expected: str
) -> None:
    """Require three independent layout shapes; guarantee one-token patch; preserve trivia and line endings."""
    entry, _ = Entry.from_lines(lines, 0, _structure(1), fields=_format_one_fields())
    instance = entry.field_instances.item(1)
    assert instance.field.name == "Name"
    assert instance.source_span is not None
    instance.set_value(replacement)

    assert entry.to_text() == expected


@pytest.mark.parametrize("replacement", ["two words", "bad # comment", "line\nbreak"])
def test_entry_format_one_rejects_values_that_are_not_one_lexical_token(
    replacement: str,
) -> None:
    """Require invalid scalar replacements; guarantee explicit rejection; preserve source state."""
    entry, _ = Entry.from_lines(
        ["ITEM {\n", " Name old\n", "}\n"],
        0,
        _structure(1),
        fields=_format_one_fields(),
    )
    entry.field_instances.item(1).set_value(replacement)

    with pytest.raises(ValueError, match="format-1 edited values"):
        entry.to_text()


@pytest.mark.parametrize(
    "records,fields,format_number,error",
    [
        (["MISSING\n"], _scalar_fields(), 3, "expected name and one value token"),
        (["EXTRA first second\n"], _scalar_fields(), 3, "expected name and one value token"),
        (["NO_SCHEMA value\n"], Fields(), 3, "exactly one field"),
    ],
)
def test_entry_rejects_unsupported_or_malformed_value_shapes(
    records: list[str], fields: Fields, format_number: int, error: str
) -> None:
    """Require malformed records and schemas; guarantee explicit rejection; maintain source; assert error."""
    with pytest.raises(ValueError, match=error):
        Entry.from_lines(records, 0, _structure(format_number), fields=fields)


@pytest.mark.parametrize(
    "stem,expected_count",
    [
        ("messageicon", 106),
        ("newsprite", 76),
        ("sounds", 1117),
        ("speceffectid", 54),
        ("wondermovie", 30),
    ],
)
def test_format_three_value_reader_parses_complete_candidate_samples(
    stem: str, expected_count: int
) -> None:
    """Require real format 3 descriptors and data; guarantee all rows parse; maintain raw tokens; assert counts."""
    sample_root = Path(__file__).parents[1] / ".private_samples"
    descriptor_path = next(
        path
        for path in (sample_root / "Structure").glob("*.ces")
        if path.stem.casefold() == stem
    )
    data_path = next(
        path
        for path in (sample_root / "GameData" / "default" / "gamedata").glob("*.txt")
        if path.stem.casefold() == stem
    )
    structure = Structure.from_file(descriptor_path)
    fields = Fields.from_structure(structure)
    lines = data_path.read_bytes().decode("cp1252").splitlines(keepends=True)
    markers = ("#", "//")
    cursor = 0
    while cursor < len(lines) and (
        not lines[cursor].strip()
        or lines[cursor].lstrip().startswith(markers)
    ):
        cursor += 1
    if structure.has_entry_count and cursor < len(lines):
        cursor += 1

    entry_count = 0
    while cursor < len(lines):
        if all(
            not line.strip() or line.lstrip().startswith(markers)
            for line in lines[cursor:]
        ):
            break
        entry, cursor = Entry.from_lines(
            lines, cursor, structure, str(data_path), fields=fields
        )
        assert entry.field_instances.count == 1
        assert isinstance(entry.field_instances.item(1).value, str)
        assert entry.field_instances.item(1).value
        entry_count += 1

    assert entry_count == expected_count


def test_entry_accepts_a_balanced_single_line_format_one_record() -> None:
    """Require same-line opening and closing braces; guarantee one-line record; maintain text; assert complete use."""
    lines = ['EMPTY_ENTRY { Value "}" }\n']

    entry, next_index = Entry.from_lines(lines, 0, _structure(1))

    assert entry.name == "EMPTY_ENTRY"
    assert entry.to_text() == lines[0]
    assert next_index == 1


def test_entry_uses_parent_comment_marker_for_substructure() -> None:
    """Require a substructure without comment metadata; guarantee inherited marker behavior; maintain line text."""
    structure = Structure.from_bytes(b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n")
    lines = ["NESTED_ENTRY {\n", "  Value 1 # } is a comment\n", "}\n"]

    entry, next_index = Entry.from_lines(lines, 0, structure, comment_char="#")

    assert entry.to_text() == "".join(lines)
    assert next_index == 3


def test_raw_nested_without_child_schema_patches_only_its_captured_block() -> None:
    structure = _structure(1)
    fields = _format_one_fields()
    source_lines = [
        "ENTRY {\r\n",
        "  Nested {\r\n",
        "    Unknown 1\r\n",
        "  }\r\n",
        "  Name old\r\n",
        "}\r\n",
    ]
    entry, next_index = Entry.from_lines(
        source_lines, 0, structure, fields=fields
    )
    nested = next(
        instance for instance in entry.field_instances
        if instance.field.name == "Nested"
    )
    assert next_index == len(source_lines)
    assert nested.source_span is not None
    assert nested.value == "{\r\n    Unknown 1\r\n  }"

    replacement = "{\r\n    Unknown 2\r\n  }"
    nested.set_value(replacement)

    assert entry.to_text() == "".join(source_lines).replace(
        "{\r\n    Unknown 1\r\n  }", replacement, 1
    )


@pytest.mark.parametrize(
    "replacement",
    ["text", "{\n  Child 1\n", "{ } trailing", "{ } { }"],
)
def test_raw_nested_edit_rejects_non_single_balanced_blocks(replacement: str) -> None:
    entry, _ = Entry.from_lines(
        ["ENTRY {\n", "  Nested {\n", "  }\n", "}\n"],
        0,
        _structure(1),
        fields=_format_one_fields(),
    )
    nested = next(
        instance for instance in entry.field_instances
        if instance.field.name == "Nested"
    )
    nested.set_value(replacement)

    with pytest.raises(ValueError, match="raw nested value"):
        entry.to_text()


@pytest.mark.parametrize(
    "lines,expected",
    [
        (["Named {\n", "Value 1\n"], "unterminated entry Named"),
        (["not-a-block\n"], "expected named opening brace"),
        (["{\n", "}\n"], "missing entry name"),
    ],
)
def test_entry_rejects_invalid_format_one_blocks(
    lines: list[str], expected: str
) -> None:
    """Require malformed or truncated blocks; guarantee contextual ValueError; maintain input; assert message."""
    with pytest.raises(ValueError, match=expected):
        Entry.from_lines(lines, 0, _structure(1), "broken.txt")


def test_entry_rejects_non_record_formats() -> None:
    """Require format 0 structure; guarantee unsupported format error; maintain descriptor; assert rejection."""
    structure = Structure.from_bytes(b"0.3 // Version\n0 // Format\n", "const.ces")

    with pytest.raises(ValueError, match="unsupported Entry format 0"):
        Entry.from_lines(["KEY VALUE\n"], 0, structure)
