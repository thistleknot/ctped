"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Use independent format 0/1/2/3 descriptors and data | [mandatory] | R1-R3
IMPORT | Build format-0/2 direct-text and format-1/3 record models | [mandatory] | R1-R4,R13-R14
ROUNDTRIP | Compare unchanged source bytes exactly | [mandatory] | R5
EDIT | Preserve format-0/2 direct text and format-1/3 value edits | [mandatory] | R8-R11,R13-R14
CORPUS | Import descriptor-matched candidate data files | [mandatory] | R3-R4
COMPATIBILITY | Verify opt-in unknown fields, duplicate keys, and legacy count headers remain source-preserved | [mandatory] | R23-R24
NESTED | Parse nested blocks when an explicit structure root is supplied | [mandatory] | R6
NESTED_EDIT | Save edits to schema-bound nested scalar values at their captured spans | [mandatory] | R9
CORPUS | Bind all supplied nested sample blocks to their child schemas | [mandatory] | R7
REMOVE | Remove three Entries across record formats and count-header states | [mandatory] | R15
INSERT | Append generated format-3 Entries and update count headers | [mandatory] | R16
INSERT_FORMAT_ONE | Append generated format-1 blocks from ordinary and nested defaults | [mandatory] | R17,R19
INSERT_ADVANCE | Add a record to the descriptor-matched Advance sample and reparse | [mandatory] | R18
MASS_MODIFY | Apply scalar operations and formulas to direct or nested dimensions as one rollback-safe batch | [mandatory] | R21,R25-R27
REORDER | Move Entries in format 1/3, preserve captured text, and update count headers | [mandatory] | R22

R1. WHEN formats 0/2 are imported, retain bytes and expose decoded direct text without Entries.
R2. WHEN formats 1/3 are imported, construct schema-bound Entries.
R3. WHEN a count flag is set, validate the decimal header and record count.
R4. WHEN an unsupported or malformed record is imported, fail with context.
R5. WHEN an unchanged File is written, return its source bytes exactly.
R6. WHEN a nested structure root is supplied, parse nested blocks as Entries with child Fields and preserve original File bytes.
R7. WHEN supplied nested-data files are checked, report schema-compatible child Entries and reject unmatched child fields explicitly.
R9. WHEN nested child scalar values change, serialize only those value tokens through the child and parent source spans; retain all other parent and sibling text exactly.
R8. WHEN a format-1/3 FieldInstance value with supported source shape changes, write the changed token and preserve all other bytes.
R9. WHEN an edited File is uneditable, reject output.
R10. WHEN a changed value without a source token span is serialized, reject unsupported output.
R11. WHEN an edited value is not one valid CP1252 lexical token, fail before returning bytes.
R13. WHEN editable format-0 text changes, encode CP1252 and preserve source line endings; WHEN unchanged after display newline normalization, return original bytes.
R14. WHEN editable format-2 text changes, encode CP1252 with CRLF line endings; WHEN unchanged after display newline normalization, return original bytes; WHEN uneditable text changes, raise PermissionError.
R15. WHEN an original format-1/3 Entry is removed, serialize without its captured source span and update a declared count header.
R16. WHEN a generated format-3 Entry is appended, serialize it after source text, preserve its newline convention, and update the declared count header.
R17. WHEN a generated format-1 Entry is appended, serialize its default fields as a brace block, preserve the source newline convention, update a declared count, and reparse.
R18. WHEN the shipped Advance descriptor/data are used, let File.add_entry append a defaulted Entry and reparse all records with the declared count updated.
R19. WHEN a nested default is added, build it from the child descriptor root and reparse it as an Entry; leave the File unchanged if the root or child schema is missing, the path escapes the root, or the schema recurs.
R20. WHEN an empty name is passed for a top-level generated Entry, reject it before collection mutation; empty names remain valid only for nested bare blocks.
R21. WHEN bulk modification targets an editable format-1/3 File, transform existing scalar instances by field and operation; apply only requested one-based Entry ordinals when supplied; skip missing fields and nonnumeric arithmetic values; ties-to-even round when requested; validate serialization and roll back every changed value on failure.
R22. WHEN an Entry is moved, serialize the Entry blocks in current collection order with their captured leading trivia; reparse to the same order, preserve unaffected text, and update a declared count.
R23. WHEN project import tolerance is enabled, preserve undeclared scalar, valueless, and nested occurrences during known-field edits; keep them out of the edit chooser.
R24. WHEN duplicate input names or a legacy count-less data file is imported, preserve source order and exact unchanged bytes without synthesizing a count header.
R25. WHEN a direct field name or displayed nested field path is mass-modified, update only matching declared scalar instances across all or selected Entries; skip inferred fields and validate/rollback the batch atomically.
R26. WHEN a safe ECMAScript scalar formula is applied, calculate all selected outputs from original Entry snapshots before mutation; require finite numeric results and preserve the full batch on serialization failure.
R27. WHEN formulas use same-File or resolver-provided cross-File field lookups, return the source scalar value without evaluating pending formulas; reject unresolved or ambiguous target Entries and unsupported field paths.

CLOSED
- Fixtures are authored independently of candidate samples.
- Format 0/2 stay direct text and never populate record Entries.
- Corpus failures caused by descriptor/data incompatibility are not counted as
  successful imports.

Preconditions: descriptor fixture bytes are valid and candidate files are read
only. Failures are reported as assertion or unexpected exception failures;
unsupported edits fail explicitly.
"""

from pathlib import Path

import pytest

from entry import Entry
from file import File
from comments import Comments
from structure import Structure


def _structure(
    format_number: int, count: bool = False, field_definitions: bytes | None = None
) -> Structure:
    """Build an independent descriptor for one supported data format.

    Require: format number is 0, 1, 2, or 3.
    Guarantee: return a parsed descriptor with the required single field.
    Maintain: fixture bytes are authored in this test.
    Assert: the parsed format and count flag match the request.
    """
    prefix = b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
    if format_number == 0:
        content = prefix + b"0 // Format\n"
    elif format_number == 1:
        content = (
            prefix
            + f"1 // Format\n{'t' if count else 'f'}\nf\nf\nf\nf\nf\n".encode()
            + (
                field_definitions
                if field_definitions is not None
                else b"Value\tt\tt\tf\t1\n\t0\t\tNULL\nFlag\tf\tt\tf\t0\nReference\tf\tt\tf\t1\n\tadvance.ces\tTARGET\tReference default\n@\n"
            )
        )
    elif format_number == 2:
        content = prefix + b"2 // Format\ngl_str.txt\npath\n#\n%009\n"
    elif format_number == 3:
        content = (
            prefix
            + f"3 // Format\n{'t' if count else 'f'}\n".encode()
            + b"FileName\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
        )
    else:
        raise ValueError(f"unsupported test format: {format_number}")
    result = Structure.from_bytes(content, f"independent-format-{format_number}.ces")
    assert result.format == format_number
    assert result.has_entry_count is (count if format_number in {1, 3} else None)
    return result


@pytest.mark.parametrize(
    "format_number,data",
    [
        (0, b"# constants\nName value\r\n"),
        (2, b"import list\twith bytes\n"),
    ],
)
def test_file_keeps_direct_text_formats_unchanged(format_number: int, data: bytes) -> None:
    """Require direct-text inputs; guarantee byte retention; maintain empty Entries."""
    imported = File.from_bytes(data, _structure(format_number))

    assert imported.entries.count == 0
    assert isinstance(imported.comments, Comments) and imported.comments.count == 0
    assert imported.to_bytes() == data


@pytest.mark.parametrize(
    "body,inferred_value",
    [
        (b"  Mystery 9\n", "9"),
        (b"  Mystery\n", None),
        (b"  Mystery {\n    Hidden 3\n  }\n", "{\n    Hidden 3\n  }"),
    ],
)
def test_opt_in_unknown_fields_retain_three_source_shapes(body, inferred_value):
    source = b"ITEM {\n  Value 7\n" + body + b"}\n"
    imported = File.from_bytes(
        source, _structure(1), allow_unknown_fields=True
    )
    entry = imported.entries.item(1)
    unknown = next(instance for instance in entry.field_instances if instance.field.inferred)
    assert unknown.value == inferred_value
    assert imported.to_bytes() == source
    if isinstance(inferred_value, str) and inferred_value != "9":
        entry.field_instances.item_by_field(unknown.field)
        known = entry.field_instances.item_by_field(imported.fields.item("Value"))
        known.set_value("8")
        changed = imported.to_bytes()
        assert b"Mystery" in changed and b"Hidden 3" in changed
        assert b"Value 8" in changed


def test_opt_in_legacy_countless_file_does_not_invent_a_header():
    root = Path(__file__).parents[1] / ".private_samples"
    structure = Structure.from_file(root / "Structure" / "risks.ces")
    source = (root / "GameData" / "default" / "gamedata" / "risks.txt").read_bytes()
    imported = File.from_bytes(
        source, structure, allow_unknown_fields=True, allow_missing_count_header=True
    )
    assert imported.entries.count == 4
    assert imported.to_bytes() == source


def test_format_zero_direct_text_round_trips_unchanged_after_display_normalization() -> None:
    source = b"# constants\r\nNAME value\r\n"
    imported = File.from_bytes(source, _structure(0))

    imported.set_raw_text(imported.raw_text.replace("\r\n", "\n"))

    assert imported.to_bytes() == source


def test_format_zero_direct_text_edit_preserves_cp1252_and_crlf() -> None:
    imported = File.from_bytes(b"NAME value\r\n", _structure(0))

    imported.set_raw_text("NAME caf\u00e9\nSECOND value\n")

    assert imported.to_bytes() == "NAME caf\u00e9\r\nSECOND value\r\n".encode("cp1252")


def test_uneditable_format_zero_rejects_changed_text() -> None:
    imported = File.from_bytes(b"NAME value\r\n", _structure(0), editable=False)
    imported.set_raw_text("NAME changed\n")

    with pytest.raises(PermissionError, match="File is not editable"):
        imported.to_bytes()


def test_format_two_direct_text_edit_serializes_cp1252_with_crlf() -> None:
    imported = File.from_bytes(b'"OLD\tvalue"\n', _structure(2))

    imported.set_raw_text('"NEW\tcaf\u00e9"\nSECOND\tvalue\n')

    assert imported.to_bytes() == '"NEW\tcaf\u00e9"\r\nSECOND\tvalue\r\n'.encode("cp1252")


def test_uneditable_format_two_rejects_changed_text() -> None:
    imported = File.from_bytes(b'"OLD\tvalue"\r\n', _structure(2), editable=False)
    imported.set_raw_text('"NEW\tvalue"\n')

    with pytest.raises(PermissionError, match="File is not editable"):
        imported.to_bytes()


@pytest.mark.parametrize(
    "format_number,count,data,expected",
    [
        (1, False, b"ITEM {\n Value 7\n}\r\n", 1),
        (1, True, b"1\nITEM {\n Value 7\n}\n", 1),
        (3, False, b"ITEM 7\n", 1),
        (3, True, b"# heading\n2\nITEM_ONE 7\nITEM_TWO 8\n", 2),
    ],
)
def test_file_imports_format_records_and_preserves_bytes(
    format_number: int, count: bool, data: bytes, expected: int
) -> None:
    """Require four record/count combinations; guarantee Entries; retain bytes exactly."""
    imported = File.from_bytes(data, _structure(format_number, count))

    assert imported.entries.count == expected
    assert isinstance(imported.comments, Comments) and imported.comments.count == 0
    assert imported.to_bytes() == data
    if format_number == 1:
        assert imported.entries.item(1).field_instances.item(1).value == "7"
    else:
        assert imported.entries.item(1).field_instances.item(1).value == "7"


@pytest.mark.parametrize(
    "operation,operand,round_off,source,expected,count",
    [
        ("set", "11", False, b"A 3\nB 5\n", b"A 11\nB 11\n", 2),
        ("concatenate", "x", False, b"A 3\nB 5\n", b"A 3x\nB 5x\n", 2),
        ("add", "2.5", True, b"A 7\nB 4\n", b"A 10\nB 6\n", 2),
        ("multiply", "0.5", False, b"A 3\nB 5\n", b"A 1.5\nB 2.5\n", 2),
    ],
)
def test_file_mass_modifies_supported_scalar_operations(
    operation: str,
    operand: str,
    round_off: bool,
    source: bytes,
    expected: bytes,
    count: int,
) -> None:
    """Require varied Entry values; apply each operation and serialize the batch."""
    imported = File.from_bytes(source, _structure(3))

    assert imported.mass_modify(
        "FileName", operation, operand, round_off=round_off
    ) == count
    assert imported.to_bytes() == expected


def test_file_mass_modify_targets_selected_ordinals_and_skips_missing_fields() -> None:
    structure = _structure(
        1,
        field_definitions=b"Value\tt\tt\tf\t1\n\t0\t\tNULL\nFlag\tf\tt\tf\t0\n@\n",
    )
    imported = File.from_bytes(
        b"A {\n Value 2\n}\nB {\n Flag\n}\nC {\n Value 8\n}\n", structure
    )

    assert imported.mass_modify("Value", "add", "5", entry_ordinals=(3,)) == 1
    assert imported.to_bytes() == (
        b"A {\n Value 2\n}\nB {\n Flag\n}\nC {\n Value 13\n}\n"
    )
    assert imported.mass_modify("Value", "set", "9", entry_ordinals=(2,)) == 0


def test_file_mass_modify_targets_exact_repeated_nested_field_path(tmp_path: Path) -> None:
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child = _structure(
        1,
        field_definitions=b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n",
    )
    (structure_root / "child.ces").write_bytes(child.to_bytes())
    parent = _structure(
        1,
        field_definitions=b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n",
    )
    source = (
        b"A {\n Nested {\n  Count 3\n }\n Nested {\n  Count 8\n }\n}\n"
        b"B {\n Nested {\n  Count 4\n }\n Nested {\n  Count 9\n }\n}\n"
        b"C {\n Nested {\n  Count 5\n }\n Nested {\n  Count 10\n }\n}\n"
    )
    imported = File.from_bytes(
        source, parent, source="owner.txt", substructure_root=structure_root
    )

    assert imported.mass_modify("Nested[2].Count", "add", "2", entry_ordinals=(1, 3)) == 2
    assert imported.to_bytes() == (
        b"A {\n Nested {\n  Count 3\n }\n Nested {\n  Count 10\n }\n}\n"
        b"B {\n Nested {\n  Count 4\n }\n Nested {\n  Count 9\n }\n}\n"
        b"C {\n Nested {\n  Count 5\n }\n Nested {\n  Count 12\n }\n}\n"
    )


def test_file_formula_mass_modifies_exact_nested_path_from_same_entry_snapshot(
    tmp_path: Path,
) -> None:
    """Require repeated nested fields; update only the exact path from source state."""
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child = _structure(
        1,
        field_definitions=b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n",
    )
    (structure_root / "child.ces").write_bytes(child.to_bytes())
    parent = _structure(
        1,
        field_definitions=b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n",
    )
    source = (
        b"OWNER {\n Nested {\n  Count 3\n }\n"
        b" Nested {\n  Count 8\n }\n}\n"
    )
    imported = File.from_bytes(
        source, parent, source="owner.txt", substructure_root=structure_root
    )

    assert imported.mass_modify(
        "Nested[2].Count",
        "formula",
        'value + entryAt("OWNER", "Nested[1].Count")',
    ) == 1
    assert b"Count 3\n }\n Nested {\n  Count 11\n" in imported.to_bytes()


def test_entry_field_paths_index_repeated_names_within_each_owner(tmp_path: Path) -> None:
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child = _structure(
        1,
        field_definitions=b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n",
    )
    (structure_root / "child.ces").write_bytes(child.to_bytes())
    parent = _structure(
        1,
        field_definitions=b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n",
    )
    imported = File.from_bytes(
        b"A {\n Nested {\n  Count 3\n }\n Nested {\n  Count 8\n }\n}\n",
        parent,
        source="owner.txt",
        substructure_root=structure_root,
    )

    assert [path for path, _, _ in imported.entries.item(1).field_instances_with_paths()] == [
        "Nested[1]",
        "Nested[1].Count",
        "Nested[2]",
        "Nested[2].Count",
    ]


def test_file_mass_modify_rolls_back_invalid_batch() -> None:
    imported = File.from_bytes(b"A 3\nB 5\n", _structure(3))

    with pytest.raises(ValueError, match="one nonempty lexical token"):
        imported.mass_modify("FileName", "set", "two words")

    assert [entry.field_instances.item(1).value for entry in imported.entries] == [
        "3",
        "5",
    ]
    assert imported.to_bytes() == b"A 3\nB 5\n"


@pytest.mark.parametrize(
    "data,new_value,expected",
    [
        (b"ITEM 7\r\n", "8", b"ITEM 8\r\n"),
        (
            b"# heading\r\nITEM\t\"two words\" # retained\r\nNEXT old\r\n",
            '"new words"',
            b"# heading\r\nITEM\t\"new words\" # retained\r\nNEXT old\r\n",
        ),
        (b"ITEM old # retained\n", "caf\u00e9", b"ITEM caf\xe9 # retained\n"),
    ],
)
def test_file_writes_changed_format_three_values_and_preserves_other_bytes(
    data: bytes, new_value: str, expected: bytes
) -> None:
    """Require three token and trivia shapes; guarantee edit serialization and reparse."""
    structure = _structure(3)
    imported = File.from_bytes(data, structure)
    instance = imported.entries.item(1).field_instances.item(1)

    assert not instance.is_modified
    instance.set_value(new_value)

    output = imported.to_bytes()
    reloaded = File.from_bytes(output, structure)

    assert output == expected
    assert reloaded.entries.item(1).field_instances.item(1).value == new_value


@pytest.mark.parametrize(
    "data,new_value,expected",
    [
        (b"ITEM {\n Value old # keep\n}\n", "new", b"ITEM {\n Value new # keep\n}\n"),
        (b"ITEM { Value old } // tail\n", '"new value"', b'ITEM { Value "new value" } // tail\n'),
        (b"# heading\r\nITEM {\r\n\tValue\told\r\n}\r\n", "new", b"# heading\r\nITEM {\r\n\tValue\tnew\r\n}\r\n"),
    ],
)
def test_file_writes_changed_format_one_value_and_preserves_other_bytes(
    data: bytes, new_value: str, expected: bytes
) -> None:
    """Require three layout and line-ending shapes; guarantee source-preserving scalar edit and reparse."""
    structure = _structure(1)
    imported = File.from_bytes(data, structure)
    imported.entries.item(1).field_instances.item(1).set_value(new_value)

    output = imported.to_bytes()
    reloaded = File.from_bytes(output, structure)

    assert output == expected
    assert reloaded.entries.item(1).field_instances.item(1).value == new_value


@pytest.mark.parametrize(
    "format_number,count,data,ordinal,expected",
    [
        (
            3,
            False,
            b"# file header\nA 1\n# belongs to B\nB 2\nC 3\n",
            2,
            b"# file header\nA 1\nC 3\n",
        ),
        (
            3,
            True,
            b"# heading\r\n3 # count\r\nA 1\r\nB 2\r\nC 3\r\n",
            2,
            b"# heading\r\n2 # count\r\nA 1\r\nC 3\r\n",
        ),
        (
            1,
            False,
            b"A {\n Value 1\n}\n# belongs to B\nB {\n Value 2\n}\nC {\n Value 3\n}\n",
            2,
            b"A {\n Value 1\n}\nC {\n Value 3\n}\n",
        ),
    ],
)
def test_file_removes_entry_source_span_and_updates_declared_count(
    format_number: int,
    count: bool,
    data: bytes,
    ordinal: int,
    expected: bytes,
) -> None:
    """Require three layout/count cases; guarantee exact span removal and reparsing."""
    structure = _structure(format_number, count)
    imported = File.from_bytes(data, structure)
    removed = imported.entries.remove(ordinal)

    output = imported.to_bytes()
    reloaded = File.from_bytes(output, structure)

    assert removed.name == "B"
    assert output == expected
    assert reloaded.entries.count == 2
    assert [entry.name for entry in reloaded.entries] == ["A", "C"]


@pytest.mark.parametrize(
    "format_number,count,data,source_ordinal,destination_ordinal,expected_names,expected",
    [
        (
            3,
            False,
            b"A 1\n# belongs to B\nB 2\nC 3\n",
            2,
            1,
            ("B", "A", "C"),
            b"# belongs to B\nB 2\nA 1\nC 3\n",
        ),
        (
            3,
            True,
            b"# heading\r\n3 # count\r\nA 1\r\nB 2\r\n# belongs to C\r\nC 3\r\n# tail\r\n",
            3,
            1,
            ("C", "A", "B"),
            b"# heading\r\n3 # count\r\n# belongs to C\r\nC 3\r\nA 1\r\nB 2\r\n# tail\r\n",
        ),
        (
            1,
            False,
            b"A {\n Value 1\n}\n# belongs to B\nB {\n Value 2\n}\nC {\n Value 3\n}\n",
            3,
            1,
            ("C", "A", "B"),
            b"C {\n Value 3\n}\nA {\n Value 1\n}\n# belongs to B\nB {\n Value 2\n}\n",
        ),
    ],
)
def test_file_moves_entries_preserving_trivia_and_reparse_order(
    format_number: int,
    count: bool,
    data: bytes,
    source_ordinal: int,
    destination_ordinal: int,
    expected_names: tuple[str, ...],
    expected: bytes,
) -> None:
    """Require three format/layout cases; guarantee order, trivia, count, and parse stability."""
    structure = _structure(format_number, count)
    imported = File.from_bytes(data, structure)
    moved = imported.move_entry(source_ordinal, destination_ordinal)

    output = imported.to_bytes()
    reloaded = File.from_bytes(output, structure)

    assert moved is imported.entries.item(destination_ordinal)
    assert [entry.name for entry in reloaded.entries] == list(expected_names)
    assert output == expected


@pytest.mark.parametrize(
    "count,data,expected",
    [
        (False, b"A 1\n", b"A 1\nB\tNULL\n"),
        (True, b"1\r\nA 1\r\n", b"2\r\nA 1\r\nB\tNULL\r\n"),
    ],
)
def test_file_appends_generated_format_three_entry(
    count: bool, data: bytes, expected: bytes
) -> None:
    """Require counted and uncounted newline forms; guarantee appended default record and reparsing."""
    structure = _structure(3, count)
    imported = File.from_bytes(data, structure)
    imported.add_entry("B")

    output = imported.to_bytes()
    reparsed = File.from_bytes(output, structure)

    assert output == expected
    assert [entry.name for entry in reparsed.entries] == ["A", "B"]
    assert reparsed.entries.item(2).field_instances.item(1).value == "NULL"


def test_file_moves_generated_entry_before_parsed_entries() -> None:
    """Require generated-first movement; guarantee serialized output follows current order."""
    structure = _structure(3)
    imported = File.from_bytes(b"A 1\nB 2\n", structure)
    generated = imported.add_entry("C")

    assert imported.move_entry(3, 1) is generated
    output = imported.to_bytes()
    reparsed = File.from_bytes(output, structure)

    assert output == b"C\tNULL\nA 1\nB 2\n"
    assert [entry.name for entry in reparsed.entries] == ["C", "A", "B"]


@pytest.mark.parametrize(
    "count,data,expected",
    [
        (False, b"A {\n Value 1\n}\n", b"A {\n Value 1\n}\nB {\n\tValue NULL\n\tFlag\n\tReference TARGET\n}\n"),
        (False, b"A {\r\n Value 1\r\n}\r\n", b"A {\r\n Value 1\r\n}\r\nB {\r\n\tValue NULL\r\n\tFlag\r\n\tReference TARGET\r\n}\r\n"),
        (True, b"1\nA {\n Value 1\n}\n", b"2\nA {\n Value 1\n}\nB {\n\tValue NULL\n\tFlag\n\tReference TARGET\n}\n"),
    ],
)
def test_file_appends_generated_format_one_entry(
    count: bool, data: bytes, expected: bytes
) -> None:
    """Require counted and uncounted files; guarantee default block output and reparsing."""
    structure = _structure(1, count)
    imported = File.from_bytes(data, structure)
    imported.add_entry("B")

    output = imported.to_bytes()
    reparsed = File.from_bytes(output, structure)

    assert output == expected
    assert [entry.name for entry in reparsed.entries] == ["A", "B"]
    assert reparsed.entries.item(2).field_instances.item(1).value == "NULL"


def test_format_one_add_requires_root_for_present_nested_default() -> None:
    structure = _structure(
        1,
        field_definitions=b"Nested\tf\tt\tf\t1\n\t*child.ces\t0\tNested block\n@\n",
    )

    imported = File.from_bytes(b"OWNER {\n}\n", structure)
    with pytest.raises(NotImplementedError, match="nested structure root"):
        imported.add_entry("B")
    assert imported.entries.count == 1


def test_file_adds_defaulted_entry_to_descriptor_matched_advance_sample() -> None:
    sample_root = Path(__file__).parents[1] / ".private_samples"
    structure_path = sample_root / "Structure" / "advance.ces"
    data_path = sample_root / "GameData" / "default" / "gamedata" / "Advance.txt"
    structure = Structure.from_file(structure_path)
    imported = File.from_bytes(
        data_path.read_bytes(), structure, source=str(data_path)
    )
    assert imported.entries.count == 107

    imported.add_entry("NEW_ADVANCE")
    output = imported.to_bytes()
    reparsed = File.from_bytes(output, structure, source=str(data_path))

    assert reparsed.entries.count == 108
    added = reparsed.entries.item("NEW_ADVANCE")
    assert {
        instance.field.name: instance.value for instance in added.field_instances
    } == {"Cost": "20", "Icon": "ICON_%n", "Age": "AGE_ONE"}


@pytest.mark.parametrize(
    "value,error",
    [
        ("two words", ValueError),
        ("bad # comment", ValueError),
        ("line\nbreak", ValueError),
        ("\U0001f642", UnicodeEncodeError),
    ],
)
def test_file_rejects_invalid_format_three_edits_before_returning_bytes(
    value: str, error: type[Exception]
) -> None:
    imported = File.from_bytes(b"ITEM old\n", _structure(3))
    imported.entries.item(1).field_instances.item(1).set_value(value)

    with pytest.raises(error):
        imported.to_bytes()


def test_file_rejects_edits_when_uneditable_and_serializes_format_one() -> None:
    uneditable = File.from_bytes(b"ITEM old\n", _structure(3), editable=False)
    uneditable.entries.item(1).field_instances.item(1).set_value("new")
    format_one = File.from_bytes(b"ITEM {\n Value old\n}\n", _structure(1))
    format_one.entries.item(1).field_instances.item(1).set_value("new")

    with pytest.raises(PermissionError, match="not editable"):
        uneditable.to_bytes()
    assert format_one.to_bytes() == b"ITEM {\n Value new\n}\n"


def test_file_parses_varied_nested_blocks_with_child_schema(tmp_path: Path) -> None:
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child_descriptor = _structure(
        1,
        field_definitions=(
            b"Kind\tf\tf\tf\t1\n\t0\t\tUNKNOWN\n"
            b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n"
        ),
    )
    (structure_root / "child.ces").write_bytes(child_descriptor.to_bytes())
    parent_structure = _structure(
        1,
        field_definitions=b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n",
    )
    data = (
        b"OWNER {\n"
        b" Nested {\n  Kind A\n  Count 3\n }\n"
        b" Nested {\n  Kind B\n  Count 8\n }\n"
        b" Nested {\n  Kind C\n  Count 0\n }\n"
        b"}\n"
    )

    imported = File.from_bytes(
        data, parent_structure, source="fixture.txt", substructure_root=structure_root
    )

    nested = [
        instance.value for instance in imported.entries.item(1).field_instances
    ]
    assert [
        instance.value
        for value in nested
        for instance in value.field_instances
        if instance.field.name == "Kind"
    ] == [
        "A",
        "B",
        "C",
    ]
    assert [
        instance.value
        for value in nested
        for instance in value.field_instances
        if instance.field.name == "Count"
    ] == [
        "3",
        "8",
        "0",
    ]
    assert all(value.name == "" for value in nested)
    assert all(value.structure.source.endswith("child.ces") for value in nested)
    assert [value.to_text() for value in nested] == [
        "{\n  Kind A\n  Count 3\n }",
        "{\n  Kind B\n  Count 8\n }",
        "{\n  Kind C\n  Count 0\n }",
    ]
    assert imported.to_bytes() == data


def test_file_saves_nested_child_edits_through_captured_spans(tmp_path: Path) -> None:
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child = _structure(
        1,
        field_definitions=(
            b"Kind\tf\tf\tf\t1\n\t0\t\tUNKNOWN\n"
            b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n"
        ),
    )
    (structure_root / "child.ces").write_bytes(child.to_bytes())
    parent = _structure(
        1,
        field_definitions=b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n",
    )
    data = (
        b"OWNER {\n"
        b" Nested {\n  Kind A\n  Count 3\n }\n"
        b" Nested {\n  Kind B\n  Count 8\n }\n"
        b" Nested {\n  Kind C\n  Count 0\n }\n"
        b"}\n"
    )
    imported = File.from_bytes(
        data, parent, source="fixture.txt", substructure_root=structure_root
    )
    nested = [instance.value for instance in imported.entries.item(1).field_instances]
    next(
        instance
        for instance in nested[0].field_instances
        if instance.field.name == "Kind"
    ).set_value("A_EDITED")
    next(
        instance
        for instance in nested[1].field_instances
        if instance.field.name == "Count"
    ).set_value("11")
    next(
        instance
        for instance in nested[2].field_instances
        if instance.field.name == "Kind"
    ).set_value("C_EDITED")

    result = imported.to_bytes()

    expected = data.replace(b"Kind A\n", b"Kind A_EDITED\n")
    expected = expected.replace(b"Count 8\n", b"Count 11\n")
    expected = expected.replace(b"Kind C\n", b"Kind C_EDITED\n")
    assert result == expected
    reparsed = File.from_bytes(
        result, parent, source="fixture.txt", substructure_root=structure_root
    )
    reparsed_nested = [
        instance.value for instance in reparsed.entries.item(1).field_instances
    ]
    assert [
        next(instance.value for instance in value.field_instances if instance.field.name == "Kind")
        for value in reparsed_nested
    ] == [
        "A_EDITED",
        "B",
        "C_EDITED",
    ]
    assert [
        next(instance.value for instance in value.field_instances if instance.field.name == "Count")
        for value in reparsed_nested
    ] == [
        "3",
        "11",
        "0",
    ]


def test_file_binds_all_real_feat_substructure_blocks_and_preserves_text() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    structure_path = root / "Structure" / "feat.ces"
    data_path = root / "GameData" / "default" / "gamedata" / "feat.txt"
    source = data_path.read_bytes()
    imported = File.from_bytes(
        source,
        Structure.from_file(structure_path),
        source=str(data_path),
        substructure_root=root / "Structure",
    )
    nested = [
        instance.value
        for entry in imported.entries
        for instance in entry.field_instances
        if instance.field.arguments
        and instance.field.arguments[0].argument_type.startswith("*")
    ]

    assert len(nested) == 5
    assert all(isinstance(value, Entry) and value.name == "" for value in nested)
    assert all(value.field_instances.count == 2 for value in nested)
    assert all(
        value.to_text().startswith("{") and value.to_text().endswith("}")
        for value in nested
    )
    assert imported.to_bytes() == source


def test_file_rejects_real_child_field_missing_from_descriptor() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    structure_path = root / "Structure" / "agecitystyle.ces"
    data_path = root / "GameData" / "default" / "gamedata" / "agecitystyle.txt"

    with pytest.raises(ValueError, match="unknown field Walls"):
        File.from_bytes(
            data_path.read_bytes(),
            Structure.from_file(structure_path),
            source=str(data_path),
            substructure_root=root / "Structure",
        )


@pytest.mark.parametrize("parent_name", ["agecitystyle.ces", "terrain.ces", "tileimp.ces"])
def test_file_adds_nested_defaults_from_real_descriptor_tree(parent_name: str) -> None:
    """Require nested schema trees; guarantee generated child Entries reparse."""
    root = Path(__file__).parents[1] / ".private_samples" / "Structure"
    structure = Structure.from_file(root / parent_name)
    data_file = File.from_bytes(
        b"",
        structure,
        source=f"generated-{parent_name}.txt",
        substructure_root=root,
    )

    added = data_file.add_entry("GENERATED_NESTED")
    output = data_file.to_bytes()
    reparsed = File.from_bytes(
        output,
        structure,
        source=f"generated-{parent_name}.txt",
        substructure_root=root,
    )
    nested = [
        instance.value
        for instance in reparsed.entries.item("GENERATED_NESTED").field_instances
        if instance.field.arguments
        and instance.field.arguments[0].argument_type.startswith("*")
    ]

    assert added is data_file.entries.item("GENERATED_NESTED")
    assert nested
    assert all(isinstance(value, Entry) for value in nested)
    assert all(value.to_text().startswith("{") for value in nested)


@pytest.mark.parametrize("root_exists", [False, True])
def test_file_nested_default_failure_does_not_append(root_exists: bool, tmp_path: Path) -> None:
    """Require absent root/schema; guarantee failure leaves Entries empty."""
    samples = Path(__file__).parents[1] / ".private_samples"
    structure = Structure.from_file(samples / "Structure" / "agecitystyle.ces")
    root = tmp_path if root_exists else None
    data_file = File.from_bytes(
        b"",
        structure,
        source="nested-default.txt",
        substructure_root=root,
    )

    expected = "No such file" if root_exists else "nested structure root"
    error = FileNotFoundError if root_exists else NotImplementedError
    with pytest.raises(error, match=expected):
        data_file.add_entry("WILL_NOT_APPEND")

    assert data_file.entries.count == 0


def test_file_rejects_cyclic_nested_default_without_appending(tmp_path: Path) -> None:
    """Require a self-referencing nested schema; guarantee bounded failure."""
    structure_path = tmp_path / "cyclic.ces"
    structure_path.write_bytes(
        _structure(
            1,
            field_definitions=b"Nested\tf\tt\tf\t1\n\t*cyclic.ces\t0\tCycle\n@\n",
        ).original_bytes
    )
    structure = Structure.from_file(structure_path)
    data_file = File.from_bytes(
        b"",
        structure,
        source="cyclic.txt",
        substructure_root=tmp_path,
    )

    with pytest.raises(ValueError, match="cyclic nested defaults"):
        data_file.add_entry("WILL_NOT_APPEND")

    assert data_file.entries.count == 0


def test_file_rejects_empty_top_level_generated_name() -> None:
    """Require a blank record name; guarantee rejection without mutation."""
    data_file = File.from_bytes(b"", _structure(1))

    with pytest.raises(ValueError, match="nonempty name"):
        data_file.add_entry("")

    assert data_file.entries.count == 0


@pytest.mark.parametrize(
    "data,message",
    [
        (b"ITEM {\n Value 7\n}\n", "entry-count header"),
        (b"not-a-count\nITEM {\n Value 7\n}\n", "invalid entry-count"),
        (b"2\nITEM {\n Value 7\n}\n", "declares 2, parsed 1"),
    ],
)
def test_file_rejects_invalid_or_mismatched_format_one_counts(
    data: bytes, message: str
) -> None:
    """Require missing, malformed, and mismatched headers; guarantee rejection."""
    with pytest.raises(ValueError, match=message):
        File.from_bytes(data, _structure(1, count=True), source="counts.txt")


def test_file_imports_compatible_candidate_corpus() -> None:
    """Require descriptor/data pairs; guarantee source duplicates are retained in order."""
    root = Path(__file__).parents[1] / ".private_samples"
    candidates = {
        "advance": 107,
        "age": 10,
        "agecitystyle": 46,
        "buildings": 52,
        "concept": 76,
        "endgameobjects": 5,
        "feat": 14,
        "goods": 72,
        "govern": 12,
        "pop": 5,
        "uniticon": 566,
        "messageicon": 106,
        "newsprite": 76,
        "sounds": 1117,
        "speceffectid": 54,
        "wondermovie": 30,
    }
    total = 0
    for stem, expected in candidates.items():
        descriptor = next(
            path for path in (root / "Structure").glob("*.ces")
            if path.stem.casefold() == stem
        )
        data_path = next(
            path for path in (root / "GameData" / "default" / "gamedata").glob("*.txt")
            if path.stem.casefold() == stem
        )
        source = data_path.read_bytes()
        imported = File.from_bytes(source, Structure.from_file(descriptor), source=str(data_path))
        assert imported.entries.count == expected
        assert imported.to_bytes() == source
        if stem == "sounds":
            assert sum(entry.name == "SOUND_ID_POPPIES" for entry in imported.entries) == 2
        if stem == "uniticon":
            assert sum(entry.name == "ICON_ORDER_CONDUCT_HIT" for entry in imported.entries) == 2
        if stem == "newsprite":
            assert sum(entry.name == "SPRITE_SWORDSMAN" for entry in imported.entries) == 2
        total += imported.entries.count

    assert total == sum(candidates.values())
