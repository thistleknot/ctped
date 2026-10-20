"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
NUMERIC_FIXTURES | Exercise simple numeric rows, vectors, and fallback shapes | [mandatory] | R1
CONFIG_CORPUS | Parse each supported installed settings-file family | [mandatory] | R92-R94
PATCH_FIXTURES | Verify exact source preservation and type-safe edits | [mandatory] | R2,R95-R96
FORMULA_FIXTURES | Verify settings lookup, project references, and atomic failures | [mandatory] | R9-R10

R1. WHEN numeric text records are parsed, accept varied key/value shapes and
    reject text that cannot be represented faithfully as numeric records.
R2. WHEN a token is replaced, preserve unrelated source bytes and reject stale
    spans, nonnumeric values, and non-finite values.
R92. WHEN each supported settings fixture is parsed, preserve nested/repeated
     paths, lexical types, presence flags, comments, and source spans.
R93. WHEN unsupported or malformed settings syntax is supplied, reject it.
R94. WHEN a scalar setting is displayed, its value path uniquely identifies it.
R95. WHEN numeric, string, identifier, Boolean, or flag values are changed,
     preserve their source syntax and unrelated bytes.
R96. WHEN a numeric text batch is patched, validate all selected scalar spans
     and replacements before producing updated source text.
R9-R10. WHEN settings formulas run, use only the safe allowlist and return a
     finite numeric result; lookup failures do not mutate the document.

CLOSED
- Production corpus samples and independent synthetic variants both contribute
  coverage; tests never edit the installed sample in place.

Preconditions: tests invoke parser/model functions with temporary copies.
Failures: pytest assertions or unexpected exceptions.
"""

from __future__ import annotations

from pathlib import Path

import pytest

from const_values import (
    ConfigDocument,
    apply_numeric_text_changes,
    apply_config_changes,
    parse_config_values,
    parse_numeric_text_records,
    replace_numeric_text_value,
)
from formula import evaluate_settings_formula


@pytest.mark.parametrize(
    "text",
    (
        "# heading\n\nLAND 40 # comment\n",
        "ALPHA -2.5e1\r\nBETA .75 1.0 3 # vector\r\n",
        "ONE 1\nTWO +2.0 # retained\n",
    ),
)
def test_parse_numeric_text_records_accepts_scalar_and_vector_shapes(text: str) -> None:
    records = parse_numeric_text_records(text)

    assert records is not None
    assert records[0].line_number in {3, 1}
    assert all(record.values for record in records)


@pytest.mark.parametrize(
    "text",
    (
        "KEY value\n",
        "KEY 1\nKEY 2\n",
        "KEY 1 2 trailing\n",
        "KEY nan\n",
    ),
)
def test_parse_numeric_text_records_rejects_unrecognized_shapes(text: str) -> None:
    assert parse_numeric_text_records(text) is None


def test_replace_numeric_text_value_preserves_spacing_comments_and_newlines() -> None:
    text = "# heading\r\nMAP_SIZE  26   52 2 # dimensions\r\nOTHER 9\r\n"
    records = parse_numeric_text_records(text)
    assert records is not None

    updated = replace_numeric_text_value(text, records[0], 1, "96")

    assert updated == "# heading\r\nMAP_SIZE  26   96 2 # dimensions\r\nOTHER 9\r\n"


@pytest.mark.parametrize("replacement", ("NaN", "inf", "word", ""))
def test_replace_numeric_text_value_rejects_invalid_replacements(replacement: str) -> None:
    records = parse_numeric_text_records("KEY 1\n")
    assert records is not None

    with pytest.raises(ValueError):
        replace_numeric_text_value("KEY 1\n", records[0], 0, replacement)


@pytest.mark.parametrize(
    "text,replacements,expected",
    (
        ("A 1\nB 2 3 # vector\n", {("A", 0): "2", ("B", 1): "6"}, "A 2\nB 2 6 # vector\n"),
        ("# heading\r\nX 4 5\r\nY -2\r\n", {("X", 0): "8", ("X", 1): "10"}, "# heading\r\nX 8 10\r\nY -2\r\n"),
        ("A .5 # a\nB 1e2 # b\n", {("A", 0): "1.5", ("B", 0): "1000"}, "A 1.5 # a\nB 1000 # b\n"),
    ),
)
def test_apply_numeric_text_changes_patches_a_source_preserving_batch(
    text: str,
    replacements: dict[tuple[str, int], str],
    expected: str,
) -> None:
    records = parse_numeric_text_records(text)
    assert records is not None

    assert apply_numeric_text_changes(text, records, replacements) == expected


def test_apply_numeric_text_changes_rejects_invalid_batch() -> None:
    text = "A 1\nB 2\n"
    records = parse_numeric_text_records(text)
    assert records is not None

    with pytest.raises(ValueError, match="finite numeric"):
        apply_numeric_text_changes(text, records, {("A", 0): "3", ("B", 0): "NaN"})


SETTINGS_ROOT = Path(__file__).parents[1] / ".private_samples" / "GameData" / "default" / "gamedata"
SETTINGS_FILES = (
    "Const.txt",
    "DiffDB.txt",
    "map.txt",
    "pollution.txt",
    "gw.txt",
    "ozone.txt",
    "throne.txt",
    "civilisation.txt",
    "endgame.txt",
)


@pytest.mark.parametrize("file_name", SETTINGS_FILES)
def test_parse_config_values_covers_each_installed_settings_file(file_name: str) -> None:
    source = (SETTINGS_ROOT / file_name).read_bytes()
    text = source.decode("cp1252")

    values = parse_config_values(text, file_name)

    assert values
    assert len({value.path for value in values}) == len(values)
    assert all(text[slice(*value.value_span)] == value.raw_value for value in values)
    assert {value.kind for value in values} <= {
        "number", "string", "identifier", "boolean", "flag"
    }


@pytest.mark.parametrize(
    "file_name,key,kind",
    (
        ("Const.txt", "PERCENT_LAND", "number"),
        ("DiffDB.txt", "BASE_CONTENTMENT", "number"),
        ("map.txt", "MAP_NUM_CONTINENTS", "number"),
        ("pollution.txt", "POLLUTION_TRIGGER", "number"),
        ("gw.txt", "Probability", "number"),
        ("ozone.txt", "NORTH_POLAR_PROB", "number"),
        ("throne.txt", "THRONE_IMAGE_ZOOMED", "string"),
        ("throne.txt", "THRONE_CAN_ZOOM", "flag"),
        ("civilisation.txt", "LeaderNameMale", "identifier"),
        ("endgame.txt", "EXACTLY_ONE", "flag"),
    ),
)
def test_config_values_retain_setting_types_and_scoped_paths(
    file_name: str, key: str, kind: str
) -> None:
    text = (SETTINGS_ROOT / file_name).read_bytes().decode("cp1252")
    values = parse_config_values(text, file_name)
    assert values is not None

    match = next(value for value in values if value.key == key)

    assert match.kind == kind
    assert key in match.path
    assert match.value_span[0] < match.value_span[1]


def test_config_document_applies_multiple_types_without_touching_other_source() -> None:
    text = '# keep\r\nNAME "old value" # text\r\nCOUNT 4\r\nOPTION\r\nTAIL 9\r\n'
    values = parse_config_values(text, "throne.txt")
    assert values is not None
    by_key = {value.key: value for value in values}
    document = ConfigDocument("throne.txt", "throne.txt", text.encode("cp1252"), values)

    document.update(
        {
            by_key["NAME"].path: 'new "value"',
            by_key["COUNT"].path: "8",
            by_key["OPTION"].path: False,
        }
    )

    assert document.current_text == '# keep\r\nNAME "new \\"value\\"" # text\r\nCOUNT 8\r\n\r\nTAIL 9\r\n'
    assert document.current_bytes == document.current_text.encode("cp1252")
    assert document.original_bytes == text.encode("cp1252")


def test_config_document_rejects_invalid_batch_without_partial_changes() -> None:
    text = "COUNT 4\nNAME TOKEN\n"
    values = parse_config_values(text, "Const.txt")
    assert values is not None
    document = ConfigDocument("Const.txt", "Const.txt", text.encode(), values)

    with pytest.raises(ValueError, match="identifier"):
        document.update({values[0].path: "8", values[1].path: "two words"})

    assert document.current_text == text
    assert document.replacements == {}


def test_parse_config_values_rejects_unbalanced_blocks_and_unknown_files() -> None:
    assert parse_config_values("SETTING 1 {\n", "map.txt") is None
    assert parse_config_values("SETTING 1\n", "terrainicon.txt") is None


def test_settings_formula_reads_project_snapshot_and_has_no_pending_recursion() -> None:
    snapshot = {
        ("Const.txt", "BASE[1]"): 10,
        ("map.txt", "MAP_SIZE[1]"): 3,
    }

    result = evaluate_settings_formula(
        'value * setting("Const.txt", "BASE[1]") + ref("advance.ces", "A", "Cost")',
        current_value="2",
        setting_at=lambda file_name, path: snapshot[(file_name, path)],
        reference=lambda _structure, _name, _path: "5",
    )

    assert result == 25
    snapshot[("Const.txt", "BASE[1]")] = 999
    assert result == 25


@pytest.mark.parametrize(
    "expression",
    (
        "value / 0",
        "process.exit()",
        "value = 3",
        'setting("missing.txt", "KEY")',
        "Math.sqrt(-1)",
    ),
)
def test_settings_formula_rejects_invalid_or_unresolved_results(expression: str) -> None:
    with pytest.raises(ValueError):
        evaluate_settings_formula(
            expression,
            current_value="2",
            setting_at=lambda _file, _path: (_ for _ in ()).throw(ValueError("missing")),
        )
