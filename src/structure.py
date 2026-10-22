"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Read `.ces` descriptors as bytes through file access | [mandatory] | R1
IDENTIFY | Locate declared version and format rows | [mandatory] | R1-R2
PARSE | Decode format headers and retain source rows | [mandatory] | R2-R4
GL_METADATA | Retain declared GL fields and prefix metadata | [opt] | R6-R7
SERVE | Return original bytes for unchanged descriptors | [mandatory] | R5

R1. WHEN a descriptor is loaded, read its bytes without normalizing them.
R2. WHEN a format row is parsed, require a supported value from 0 through 3.
R3. WHEN main-file character rows are absent, leave those properties unset.
R4. WHEN format metadata is read, preserve all decoded source lines for the
    later Field and CrossRef model steps.
R5. WHEN the descriptor is unchanged, return its original bytes exactly.
R6. WHEN a format-1 descriptor declares GL strings, require three metadata
    values after the final `@`; require an article suffix when its article flag
    is true, and retain each value verbatim.
R7. WHEN GL strings are not declared, leave GL metadata properties unset.
R8. WHEN a format-1 descriptor declares a tree structure, read the defining
    field name from the first record after the field-list `@` terminator.

CLOSED
- Format is read from the descriptor row; filenames do not select a format.
- Numeric `%nnn` escapes are decoded as byte values, while original bytes stay
  authoritative for output.
- Field and cross-reference interpretation remains with their later model
  steps; this class keeps their source rows available.
- The GL prefix is retained as a pattern; wildcard expansion and `.GLName`
  table lookup belong to project/template integration.

Preconditions: source bytes are a CTPEd `.ces` descriptor in Windows-1252.
Failures: missing version/format/header values, unsupported format numbers,
invalid numeric metadata, and incomplete declared GL metadata raise ``ValueError``;
file access errors pass through.
"""

from dataclasses import dataclass
from pathlib import Path
import re
from typing import Optional

from file_access import PathValue, read_file_bytes

SUPPORTED_FORMATS = frozenset({0, 1, 2, 3})
_NUMERIC_ESCAPE = re.compile(r"%(\d{3})")
_VERSION = re.compile(r"\d+(?:\.\d+)?")


def _decode_numeric_escapes(value: str) -> str:
    """Decode three-digit byte escapes in a descriptor value.

    Require: ``value`` is descriptor text.
    Guarantee: replace each ``%nnn`` with the character for byte ``nnn``.
    Maintain: leave all other characters unchanged.
    Assert: every decoded number fits in one byte.
    """

    def decode(match: re.Match[str]) -> str:
        number = int(match.group(1))
        if number > 255:
            raise ValueError(f"numeric escape is outside byte range: %{number:03d}")
        return chr(number)

    return _NUMERIC_ESCAPE.sub(decode, value)


def _content(line: str) -> str:
    """Remove a descriptor's trailing `//` comment.

    Require: ``line`` is one descriptor line.
    Guarantee: return its value portion with surrounding whitespace removed.
    Maintain: leave the input string unchanged.
    Assert: the result is a string.
    """
    return line.split("//", 1)[0].strip()


def _records(lines: tuple[str, ...]) -> tuple[tuple[int, str], ...]:
    """Return nonempty descriptor values and their source line numbers.

    Require: ``lines`` contains decoded descriptor lines.
    Guarantee: omit blank lines and lines containing only comments.
    Maintain: preserve record order and original line numbers.
    Assert: every returned value is nonempty.
    """
    result = tuple(
        (index, value)
        for index, line in enumerate(lines)
        if (value := _content(line))
    )
    assert all(value for _, value in result)
    return result


@dataclass(frozen=True)
class Structure:
    """Parsed `.ces` header with its untouched source representation.

    Require: construct through ``from_file`` or ``from_bytes``.
    Guarantee: expose format metadata, declared GL fields, and full decoded source.
    Maintain: keep original bytes available for exact unchanged output.
    Assert: ``format`` belongs to the supported descriptor formats.
    """

    source: str
    original_bytes: bytes
    source_lines: tuple[str, ...]
    version: str
    format: int
    data_start_line: int
    comment_char: Optional[str]
    delimiter_char: Optional[str]
    delimiter_char_right: Optional[str]
    delimiter_char_left: Optional[str]
    has_entry_count: Optional[bool]
    has_tree_structure: Optional[bool]
    references_gl: Optional[bool]
    has_gl_strings: Optional[bool]
    has_article: Optional[bool]
    is_gl_icon_file: Optional[bool]
    has_field_formatting: Optional[bool]
    lines_at_start_of_entry: Optional[int]
    lines_between_entries: Optional[int]
    strings_file_name: Optional[str]
    strings_file_path: Optional[str]
    strings_comment_char: Optional[str]
    strings_delimiter_char: Optional[str]
    gl_icon_field: Optional[str]
    gl_database: Optional[str]
    gl_prefix: Optional[str]
    gl_article_suffix: Optional[str]
    preq_field: Optional[str] = None

    @classmethod
    def from_file(cls, path: PathValue) -> "Structure":
        """Load a descriptor through the byte-preserving file layer.

        Require: ``path`` identifies a readable `.ces` file.
        Guarantee: return its parsed header and original bytes.
        Maintain: do not rewrite or normalize the source.
        Assert: parsed source bytes equal the file bytes read.
        """
        source_path = Path(path)
        data = read_file_bytes(source_path)
        structure = cls.from_bytes(data, str(source_path))
        assert structure.original_bytes == data
        return structure

    @classmethod
    def from_bytes(cls, data: bytes, source: str = "<memory>") -> "Structure":
        """Parse a descriptor header from Windows-1252 bytes.

        Require: ``data`` is a complete descriptor encoded as Windows-1252.
        Guarantee: parse version, format-specific headers, declared GL metadata,
        and retain all lines.
        Maintain: do not mutate ``data`` or discard source lines.
        Assert: the declared format is in ``SUPPORTED_FORMATS``.
        """
        if not isinstance(data, bytes):
            raise TypeError("descriptor data must be bytes")
        lines = tuple(data.decode("cp1252").splitlines())
        records = _records(lines)
        if not records:
            raise ValueError(f"{source}: descriptor is empty")

        version_line, version_value = records[0]
        version = version_value.split()[0]
        if not _VERSION.fullmatch(version):
            raise ValueError(f"{source}:{version_line + 1}: invalid descriptor version")

        format_record = next(
            (
                (index, value)
                for index, value in records[1:]
                if "format" in lines[index].split("//", 1)[-1].lower()
                and value.split()[:1]
                and value.split()[0].isdigit()
            ),
            None,
        )
        if format_record is None:
            raise ValueError(f"{source}: missing format row")
        format_line, format_value = format_record
        format_number = int(format_value.split()[0])
        if format_number not in SUPPORTED_FORMATS:
            raise ValueError(f"{source}:{format_line + 1}: unsupported format {format_number}")

        before_format = tuple(
            (index, value)
            for index, value in records
            if version_line < index < format_line
        )
        if len(before_format) == 4:
            comment_char, delimiter_char, delimiter_right, delimiter_left = (
                _decode_numeric_escapes(value.split()[0]) for _, value in before_format
            )
        elif not before_format:
            comment_char = delimiter_char = delimiter_right = delimiter_left = None
        else:
            raise ValueError(
                f"{source}: expected four data-character rows before the format row"
            )

        after_format_records = tuple(
            (index, value) for index, value in records if index > format_line
        )
        after_format = tuple(value for _, value in after_format_records)
        cursor = 0

        def take(label: str) -> str:
            nonlocal cursor
            if cursor >= len(after_format):
                raise ValueError(f"{source}: missing {label} after format row")
            value = after_format[cursor]
            cursor += 1
            return value.split()[0]

        def take_bool(label: str) -> bool:
            token = take(label).lower()
            return not (token.startswith("0") or token.startswith("f"))

        optional: dict[str, object] = {
            "has_entry_count": None,
            "has_tree_structure": None,
            "references_gl": None,
            "has_gl_strings": None,
            "has_article": None,
            "is_gl_icon_file": None,
            "has_field_formatting": None,
            "lines_at_start_of_entry": None,
            "lines_between_entries": None,
            "strings_file_name": None,
            "strings_file_path": None,
            "strings_comment_char": None,
            "strings_delimiter_char": None,
            "gl_icon_field": None,
            "gl_database": None,
            "gl_prefix": None,
            "gl_article_suffix": None,
        }

        if format_number == 1:
            optional["has_entry_count"] = take_bool("entry-count flag")
            optional["has_tree_structure"] = take_bool("tree flag")
            optional["references_gl"] = take_bool("Great Library reference flag")
            has_gl_strings = take_bool("Great Library strings flag")
            optional["has_gl_strings"] = has_gl_strings
            if has_gl_strings:
                optional["has_article"] = take_bool("article flag")
            optional["is_gl_icon_file"] = take_bool("icon-file flag")
            has_field_formatting = take_bool("field-formatting flag")
            optional["has_field_formatting"] = has_field_formatting
            if has_field_formatting:
                optional["lines_at_start_of_entry"] = int(take("entry-start spacing"))
                optional["lines_between_entries"] = int(take("entry spacing"))
        elif format_number == 2:
            optional["strings_file_name"] = take("strings filename")
            optional["strings_file_path"] = take("strings file path")
            optional["strings_comment_char"] = _decode_numeric_escapes(
                take("strings comment character")
            )
            optional["strings_delimiter_char"] = _decode_numeric_escapes(
                take("strings delimiter character")
            )
        elif format_number == 3:
            optional["has_entry_count"] = take_bool("entry-count flag")

        if format_number == 1 and optional["has_gl_strings"]:
            terminators = tuple(
                index
                for index, value in records
                if index > format_line and value == "@"
            )
            if not terminators:
                raise ValueError(f"{source}: GL metadata has no preceding `@` terminator")
            metadata = tuple(
                value for index, value in records if index > terminators[-1]
            )
            expected = 4 if optional["has_article"] else 3
            if len(metadata) != expected:
                raise ValueError(
                    f"{source}: expected {expected} GL metadata values after the final `@`, "
                    f"got {len(metadata)}"
                )
            optional["gl_icon_field"], optional["gl_database"], optional["gl_prefix"] = (
                metadata[:3]
            )
            if expected == 4:
                optional["gl_article_suffix"] = metadata[3]

        preq_field = None
        if format_number == 1 and optional["has_tree_structure"]:
            terminator = next(
                (
                    position
                    for position, (_, value) in enumerate(after_format_records)
                    if value == "@"
                ),
                None,
            )
            if terminator is not None and terminator + 1 < len(after_format_records):
                preq_field = after_format_records[terminator + 1][1].split()[0]

        data_start_line = (
            after_format_records[cursor][0]
            if cursor < len(after_format_records)
            else len(lines)
        )
        return cls(
            source=source,
            original_bytes=data,
            source_lines=lines,
            version=version,
            format=format_number,
            data_start_line=data_start_line,
            comment_char=comment_char,
            delimiter_char=delimiter_char,
            delimiter_char_right=delimiter_right,
            delimiter_char_left=delimiter_left,
            preq_field=preq_field,
            **optional,
        )

    def to_bytes(self) -> bytes:
        """Return the untouched descriptor bytes.

        Require: the structure was loaded from a source representation.
        Guarantee: return bytes identical to the original input.
        Maintain: do not normalize, serialize, or mutate the source.
        Assert: the result remains bytes.
        """
        assert isinstance(self.original_bytes, bytes)
        return self.original_bytes
