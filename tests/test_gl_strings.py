"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
LEXICAL | Use independent tabular rows with quoting, empty cells, and duplicate keys | [mandatory] | R1-R5
DISPLAY | Decode the final nonempty cell without changing raw rows | [mandatory] | R6
LOOKUP | Reject conflicting duplicate key values | [mandatory] | R7
NATIVE_LOOKUP | Exercise CTPEd's exact quoted-value and duplicate-overwrite behavior | [contract] | R9-R11
FAILURES | Reject malformed rows with source and line context | [mandatory] | R8

R1. WHEN comments and blank lines precede rows, retain correct one-based source lines.
R2. WHEN a row has empty or trailing tab cells, preserve every cell position.
R3. WHEN a quoted value contains tabs or doubled quotes, keep it in one raw cell.
R4. WHEN a key occurs more than once, retain all rows in source order.
R5. WHEN a row is parsed, preserve exact source line endings and original table bytes.
R6. WHEN a display value is requested, decode the final nonempty cell and preserve raw cells.
R7. WHEN duplicate keys disagree on display value, raise instead of choosing a row.
R8. WHEN a key is empty or quotes are unclosed, raise a source-located ValueError.
R9. WHEN native lookup sees a key, compare case-insensitively and return text between the first two quotes in its source row.
R10. WHEN duplicate native keys differ, return the last matching row's value.
R11. WHEN native lookup sees no quote, return the source row without its line ending; when the key is absent, return None.

CLOSED
- The final-nonempty-cell rule is inferred from manual examples and later corpora, not verified against CTPEd 2002.
- Conflicting duplicate values remain ambiguous and have no selected precedence.
- Native lookup has separate C-derived precedence and does not change the inferred display helper's contract.

Preconditions: fixtures are independently authored CP1252 byte strings.
Failures are explicit assertions or unexpected exceptions.
"""

import pytest

from gl_strings import GLStringTable


def test_table_preserves_comments_empty_cells_and_crlf_source() -> None:
    source = b'# Header\r\n\r\nKEY\t\t\t\t"Display name"\r\n'

    table = GLStringTable.from_bytes(source, "strings/gl_str.txt")

    assert table.original_bytes == source
    assert len(table.rows) == 1
    row = table.rows[0]
    assert row.line_number == 3
    assert row.key == "KEY"
    assert row.cells == ("KEY", "", "", "", '"Display name"')
    assert row.source_line == 'KEY\t\t\t\t"Display name"\r\n'


def test_table_keeps_embedded_tabs_and_doubled_quotes_inside_quoted_cells() -> None:
    table = GLStringTable.from_bytes(
        b'UNIT_MOBILE\t\t"Mobile\tSubneural and ""quoted"""\n'
    )

    assert table.rows[0].cells == (
        "UNIT_MOBILE",
        "",
        '"Mobile\tSubneural and ""quoted"""',
    )
    assert table.rows[0].display_name == 'Mobile\tSubneural and "quoted"'


def test_table_resolves_a_unique_key_from_its_final_nonempty_cell() -> None:
    table = GLStringTable.from_bytes(
        b'ADVANCE_AGRICULTURE\t\t\t\t"Agriculture"\t\r\n'
        b'EMPTY_LABEL\t""\n'
    )

    assert table.display_name_for("ADVANCE_AGRICULTURE") == "Agriculture"
    assert table.display_name_for("EMPTY_LABEL") == ""
    assert table.display_name_for("MISSING") is None


def test_table_accepts_duplicate_rows_only_when_display_names_agree() -> None:
    table = GLStringTable.from_bytes(
        b'KEY\t"Same"\nKEY\t\t"Same"\n'
    )

    assert table.display_name_for("KEY") == "Same"

    conflicting = GLStringTable.from_bytes(
        b'KEY\t"First"\nKEY\t"Second"\n', source="duplicate.txt"
    )
    with pytest.raises(ValueError, match="duplicate.txt: conflicting GL names for 'KEY'"):
        conflicting.display_name_for("KEY")


def test_row_without_a_display_value_fails_only_when_value_is_requested() -> None:
    table = GLStringTable.from_bytes(b'KEY\t\t\n')

    with pytest.raises(ValueError, match="line 1: GL string row has no display value"):
        table.display_name_for("KEY")


def test_table_retains_duplicate_keys_and_trailing_empty_cells_in_order() -> None:
    table = GLStringTable.from_bytes(
        b'UNIT_SWORDSMAN\t\t\t\t"Samurai"\t\n'
        b'UNIT_SWORDSMAN\t\t\t\t"Swordsman"\t\t\n'
    )

    assert [row.key for row in table.rows] == [
        "UNIT_SWORDSMAN",
        "UNIT_SWORDSMAN",
    ]
    assert table.rows[0].cells[-1] == ""
    assert table.rows[1].cells[-2:] == ("", "")
    assert [row.line_number for row in table.rows] == [1, 2]


@pytest.mark.parametrize(
    "data,message",
    [
        (b'\t"No key"\n', "empty GL string key"),
        (b'KEY\t"Unclosed\n', "unterminated quoted GL string cell"),
    ],
)
def test_table_rejects_invalid_rows_with_source_context(data: bytes, message: str) -> None:
    with pytest.raises(ValueError, match=f"fixture.txt:1: {message}"):
        GLStringTable.from_bytes(data, "fixture.txt")


def test_table_matches_keys_ignoring_case_and_still_checks_duplicates() -> None:
    table = GLStringTable.from_bytes(
        b'UNIT_Swordsman\t"Swordsman"\n'
        b'ADVANCE_X\t"One"\n'
        b'advance_x\t"Two"\n'
    )

    assert table.display_name_for("unit_SWORDSMAN") == "Swordsman"
    assert table.display_name_for("UNIT_MISSING") is None
    with pytest.raises(ValueError, match="conflicting GL names"):
        table.display_name_for("Advance_X")


def test_native_lookup_uses_first_quoted_value_and_last_duplicate() -> None:
    table = GLStringTable.from_bytes(
        b'KEY\t"First value"\t"Later cell is ignored"\r\n'
        b'key\t"Last value"\t"Also ignored"\n'
        b'NO_QUOTE\tplain text\n'
    )

    assert table.native_name_for("KEY") == "Last value"
    assert table.native_name_for("key") == "Last value"
    assert table.native_name_for("NO_QUOTE") == "NO_QUOTE\tplain text"
    assert table.native_name_for("MISSING") is None


def test_native_lookup_uses_first_quote_pair_without_unescaping() -> None:
    table = GLStringTable.from_bytes(b'KEY\t"Name with ""quote"" tail"\n')

    assert table.native_name_for("KEY") == "Name with "


def test_table_requires_single_character_markers() -> None:
    with pytest.raises(ValueError, match="delimiter_char must be exactly one character"):
        GLStringTable.from_bytes(b"KEY\tvalue\n", delimiter_char="::")
