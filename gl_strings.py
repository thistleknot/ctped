"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Decode source bytes as CP1252 and retain the exact original bytes | [mandatory] | R1
ROWS | Skip blank/comment lines and split delimiter cells outside quoted values | [mandatory] | R2-R4
PRESERVE | Retain source order, raw cells, empty cells, and duplicate keys | [mandatory] | R5-R6
DISPLAY | Read the final nonempty cell as the localized display name | [mandatory] | R8
LOOKUP | Return a name only when matching duplicate rows agree | [mandatory] | R9
NATIVE_NAME | Extract the quoted value used by CTPEd and retain last-row duplicate precedence | [contract] | R11-R13

R1. WHEN bytes are parsed, retain them exactly and decode using CP1252.
R2. WHEN a physical line is blank or begins with the configured comment marker after leading whitespace, skip it.
R3. WHEN a delimiter occurs outside a quoted value, split a cell and retain empty and trailing cells.
R4. WHEN a delimiter occurs inside a quoted value, retain it inside that raw cell; doubled quotes do not close the value.
R5. WHEN a data row is parsed, retain its one-based source line, exact source line text, raw cells, and first cell as key.
R6. WHEN keys repeat, preserve every row in source order without selecting precedence.
R7. WHEN a non-comment data row has an empty key or an unterminated quoted value, raise a source-located ValueError.
R8. WHEN a display name is requested, use the final nonempty cell, remove surrounding quotes, and collapse doubled quotes.
R9. WHEN duplicate rows for a key (compared ignoring case) have different display names, raise ValueError rather than selecting one by order.
R10. WHEN delimiter or comment marker is configured, require each to be exactly one character.
R11. WHEN CTPEd name lookup is requested, match the first cell case-insensitively and extract text between the first two double quotes in the source row; if no quote exists, preserve the helper's observed input-unchanged behavior.
R12. WHEN CTPEd name lookup encounters duplicate keys, use the last matching row in source order.
R13. WHEN an Entry has an article suffix, look up its name-plus-suffix as an independent key; an absent name falls back to the Entry name and an absent article stays empty.

CLOSED
- The final-nonempty-cell helper is inferred from the manual's `.GLName` description and later game tables; native lookup uses the separate recovered rule.
- This layer does not load project paths or resolve duplicate table keys.
- The final-nonempty-cell and conflict-rejection rules remain available as inferred display behavior; native lookup uses R11-R13.
- A row with only a key is retained because the observed descriptor does not establish a required number of trailing cells.

Preconditions: input is a complete CP1252 byte sequence and marker arguments are single characters.
Failures: invalid marker types, empty keys, and unterminated quoted cells raise explicit errors with source context.
"""

from dataclasses import dataclass


@dataclass(frozen=True)
class GLStringRow:
    """One raw row from a Great Library string table.

    Require: cells and source line came from ``GLStringTable.from_bytes``.
    Guarantee: expose the first raw cell as key, retain source order details,
    and derive a display name from the final nonempty cell when requested.
    Maintain: do not unquote or normalize any cell text.
    Assert: key equals the first cell and line number is one-based.
    """

    line_number: int
    key: str
    cells: tuple[str, ...]
    source_line: str

    @property
    def display_name(self) -> str:
        """Return this row's final nonempty cell with table quoting decoded.

        Require: cells came from ``GLStringTable.from_bytes``.
        Guarantee: return the final nonempty value with outer quotes removed
        and doubled quotes collapsed.
        Maintain: leave ``cells`` and ``source_line`` unchanged.
        Assert: a nonempty display cell exists.
        """
        raw_value = next(
            (cell for cell in reversed(self.cells[1:]) if cell.strip()), None
        )
        if raw_value is None:
            raise ValueError(
                f"line {self.line_number}: GL string row has no display value"
            )
        value = raw_value.strip()
        if value.startswith('"'):
            if not value.endswith('"'):
                raise ValueError(
                    f"line {self.line_number}: malformed quoted GL display value"
                )
            value = value[1:-1].replace('""', '"')
        assert isinstance(value, str)
        return value


@dataclass(frozen=True)
class GLStringTable:
    """A byte-preserving, ordered parse of a ``gl_str.txt`` table.

    Require: construct through ``from_bytes`` with CP1252 source bytes.
    Guarantee: expose every active row, including duplicate keys, in source order.
    Maintain: retain original bytes and raw field spellings for later C-parity work.
    Assert: rows retain their source line numbers and first-cell keys.
    """

    source: str
    original_bytes: bytes
    rows: tuple[GLStringRow, ...]

    @classmethod
    def from_bytes(
        cls,
        data: bytes,
        source: str = "<memory>",
        comment_char: str = "#",
        delimiter_char: str = "\t",
    ) -> "GLStringTable":
        """Parse active rows while preserving the table's raw lexical data.

        Require: ``data`` is bytes; comment and delimiter markers are one character.
        Guarantee: return all nonblank, noncomment rows with exact cells and bytes.
        Maintain: preserve source order and duplicate keys without choosing a winner.
        Assert: each row has a nonempty first cell and all quoted values close.
        """
        if not isinstance(data, bytes):
            raise TypeError("GL string table data must be bytes")
        if not isinstance(comment_char, str) or len(comment_char) != 1:
            raise ValueError("comment_char must be exactly one character")
        if not isinstance(delimiter_char, str) or len(delimiter_char) != 1:
            raise ValueError("delimiter_char must be exactly one character")

        rows: list[GLStringRow] = []
        text = data.decode("cp1252")
        for line_number, source_line in enumerate(text.splitlines(keepends=True), 1):
            line = source_line.removesuffix("\n").removesuffix("\r")
            if not line.strip() or line.lstrip().startswith(comment_char):
                continue
            cells = _split_cells(line, delimiter_char, source, line_number)
            if not cells[0]:
                raise ValueError(f"{source}:{line_number}: empty GL string key")
            rows.append(GLStringRow(line_number, cells[0], cells, source_line))

        result = cls(source, data, tuple(rows))
        assert result.original_bytes == data
        assert all(row.key == row.cells[0] for row in result.rows)
        return result

    def display_name_for(self, key: str) -> str | None:
        """Resolve a key, ignoring case, when its matching rows agree on display name.

        Spec: native ``ImportGLNames`` finds each Entry through a case-insensitive
        collection lookup (assembly of 0x427970, read 2026-10-16).
        Require: ``key`` is text.
        Guarantee: return its display name, None when absent, or raise when
        duplicate rows disagree.
        Maintain: preserve row order and never choose a duplicate winner.
        Assert: a returned name equals every matching row's display name.
        """
        if not isinstance(key, str):
            raise TypeError("GL string key must be text")
        matches = tuple(row for row in self.rows if row.key.casefold() == key.casefold())
        if not matches:
            return None
        names = {row.display_name for row in matches}
        if len(names) != 1:
            lines = ", ".join(str(row.line_number) for row in matches)
            raise ValueError(
                f"{self.source}: conflicting GL names for {key!r} at lines {lines}"
            )
        result = next(iter(names))
        assert all(row.display_name == result for row in matches)
        return result

    def native_name_for(self, key: str) -> str | None:
        """Resolve one value using the recovered CTPEd GL-name lookup.

        Require: ``key`` is text and rows came from ``from_bytes``.
        Guarantee: match the first cell without case sensitivity, extract the
        text between the first two double quotes, and use the last matching row;
        if no quote exists in a matching row, return that row without its line
        ending, matching the recovered Before/After helpers.
        Maintain: retain every original row and its ordering.
        Assert: a result belongs to the last source-ordered matching row.
        """
        if not isinstance(key, str):
            raise TypeError("GL string key must be text")
        result: str | None = None
        for row in self.rows:
            if row.key.casefold() != key.casefold():
                continue
            raw = row.source_line.removesuffix("\n").removesuffix("\r")
            first_quote = raw.find('"')
            if first_quote < 0:
                result = raw
            else:
                second_quote = raw.find('"', first_quote + 1)
                result = raw[first_quote + 1:] if second_quote < 0 else raw[first_quote + 1:second_quote]
        assert result is None or isinstance(result, str)
        return result


def _split_cells(
    line: str,
    delimiter: str,
    source: str,
    line_number: int,
) -> tuple[str, ...]:
    """Split one row outside double-quoted cells and retain raw text.

    Require: line contains no line ending and delimiter is one character.
    Guarantee: return raw cells, preserving delimiters inside quoted values.
    Maintain: doubled quotes inside a quoted value remain unchanged.
    Assert: quote state is closed at the end of the row.
    """
    cells: list[str] = []
    start = 0
    in_quotes = False
    index = 0
    while index < len(line):
        character = line[index]
        if character == '"':
            if in_quotes and index + 1 < len(line) and line[index + 1] == '"':
                index += 2
                continue
            in_quotes = not in_quotes
        elif character == delimiter and not in_quotes:
            cells.append(line[start:index])
            start = index + 1
        index += 1

    if in_quotes:
        raise ValueError(f"{source}:{line_number}: unterminated quoted GL string cell")
    cells.append(line[start:])
    result = tuple(cells)
    assert len(result) >= 1
    return result
