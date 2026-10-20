"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain source bytes and split preserved source lines | [mandatory] | R1
FILTER | Omit blank and full-line `//` comments from active mappings | [mandatory] | R2
PARSE | Retain ordered tab-separated cells for each active row | [mandatory] | R3-R4
SAVE | Return original bytes for unchanged scripts | [mandatory] | R5

R1. WHEN bytes are loaded, retain exact original content and line endings.
R2. WHEN a line is blank or begins with `//` after leading whitespace, keep it in source bytes but do not create a mapping row.
R3. WHEN an active line has fewer than three tab-separated cells, raise a contextual ValueError.
R4. WHEN an active line has at least three cells, retain its source line number and every cell in order, including empty cells.
R5. WHEN the script is unchanged, return its original bytes exactly.

CLOSED
- Cell meanings are not assigned; the optional fourth cell is opaque.
- The `.glt` expression language is not evaluated by this module.
- Windows-1252 decoding is required by the supplied example and preserves its byte mapping.

Preconditions: input is a `.gls` text file.
Failures: active rows with fewer than three cells raise with source and line context.
"""

from dataclasses import dataclass
from pathlib import Path

from file_access import PathValue, read_file_bytes


@dataclass(frozen=True)
class TemplateRow:
    """Store one active row's source line and opaque ordered cells.

    Require: line number is positive and cells contain at least three strings.
    Guarantee: expose cells exactly as they appeared between tab delimiters.
    Maintain: retain source order and empty cells.
    Assert: every cell is a string.
    """

    line_number: int
    cells: tuple[str, ...]


@dataclass(frozen=True)
class GLScript:
    """Represent an unchanged `.gls` script and its active mapping rows.

    Require: original bytes, source lines, and rows came from one source file.
    Guarantee: expose active rows and return exact original bytes.
    Maintain: comments, blank lines, tabs, and line endings remain untouched.
    Assert: each row's source line maps to an active non-comment line.
    """

    source: str
    original_bytes: bytes
    source_lines: tuple[str, ...]
    rows: tuple[TemplateRow, ...]

    @classmethod
    def from_bytes(cls, data: bytes, source: str = "<memory>") -> "GLScript":
        """Parse active tab-separated rows without assigning cell meanings.

        Require: ``data`` contains a Windows-1252 `.gls` source.
        Guarantee: return source lines and ordered active cells.
        Maintain: retain comments, blanks, and original bytes.
        Assert: every active row has at least three cells.
        """
        if not isinstance(data, bytes):
            raise TypeError("data must be bytes")
        lines = tuple(data.decode("cp1252").splitlines(keepends=True))
        rows: list[TemplateRow] = []
        for line_number, line in enumerate(lines, start=1):
            content = line.rstrip("\r\n")
            if not content.strip() or content.lstrip().startswith("//"):
                continue
            cells = tuple(content.split("\t"))
            if len(cells) < 3:
                raise ValueError(
                    f"{source}:{line_number}: expected at least three tab-separated cells"
                )
            rows.append(TemplateRow(line_number, cells))
        result = cls(source, data, lines, tuple(rows))
        assert result.to_bytes() == data
        assert all(row.line_number > 0 for row in result.rows)
        return result

    @classmethod
    def from_file(cls, path: PathValue) -> "GLScript":
        """Load one `.gls` file and preserve its source path and bytes.

        Require: ``path`` names a readable `.gls` file.
        Guarantee: return parsed active rows and original bytes.
        Maintain: do not modify the source file.
        Assert: model source equals the requested path.
        """
        source = str(Path(path))
        result = cls.from_bytes(read_file_bytes(path), source)
        assert result.source == source
        return result

    def to_bytes(self) -> bytes:
        """Return the original source bytes unchanged.

        Require: model came from ``from_bytes`` or ``from_file``.
        Guarantee: return exact source bytes, including ignored trivia.
        Maintain: do not serialize or normalize the row cells.
        Assert: output equals the retained source bytes.
        """
        assert isinstance(self.original_bytes, bytes)
        return self.original_bytes
