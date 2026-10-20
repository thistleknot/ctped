"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
PARSE_NUMERIC | Recognize named numeric rows and capture token spans | [mandatory] | R1-R2
PARSE_CONFIG | Parse supported nested setting text into scoped scalar occurrences | [mandatory] | R92-R94
PATCH | Replace one or many numeric tokens or typed settings without normalizing unrelated text | [mandatory] | R2,R95-R96

R1. WHEN every active source row is a unique key with numeric values and an
    optional `#` comment, return ordered numeric records; otherwise return None.
R2. WHEN a numeric token is replaced, require a finite number and a current
    source span; preserve all unrelated source characters.
R92. WHEN a supported configuration source is parsed, retain ordered nested
     blocks, repeated keys, lexical values, comments, and exact source spans.
R93. WHEN a setting path is requested, identify each occurrence uniquely by
     file, block path, key, and repeated-value ordinal; structural headers are
     metadata, not editable settings.
R94. WHEN a supported setting contains a number, quoted string, bare identifier,
     or presence flag, expose an editable typed value; reject unsupported syntax
     rather than silently changing its interpretation.
R95. WHEN a scalar or presence flag is edited, patch only its token or flag line;
     preserve comments, spacing, block boundaries, encoding, and line endings.
R96. WHEN a numeric text batch is applied, validate every key/value ordinal and
     finite numeric replacement before patching any span; preserve all other text.

CLOSED
- Numeric-only `parse_numeric_text_records` remains the compatibility path for
  simple Format 0 files; configuration parsing is opt-in by recognized caller.
- Repeated settings are distinct occurrences; parsing never collapses them into
  a dictionary or assigns meanings based only on a key name.

Preconditions: source is decoded CP1252 text and caller selects a supported
configuration family. Failures: malformed nesting, unsupported lexical forms,
stale spans, invalid numeric results, and ambiguous occurrence paths are errors.
"""

from __future__ import annotations

import ast
from dataclasses import dataclass
from decimal import Decimal
import math
from pathlib import Path
import re
from typing import Mapping

_KEY = re.compile(r"[A-Za-z_][A-Za-z0-9_]*\Z")
_NUMBER = re.compile(r"[+-]?(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][+-]?\d+)?\Z")


@dataclass(frozen=True)
class NumericTextRecord:
    """One parsed named numeric record with source-relative value spans.

    Require: construction follows ``parse_numeric_text_records``.
    Guarantee: expose the original key, numeric tokens, comment, and source line.
    Maintain: spans refer to the unchanged source string supplied to the parser.
    Assert: value count matches span count.
    """

    key: str
    values: tuple[str, ...]
    value_spans: tuple[tuple[int, int], ...]
    comment: str
    line_number: int


def parse_numeric_text_records(text: str) -> tuple[NumericTextRecord, ...] | None:
    """Parse a whole text file as unique named numeric records.

    Require: ``text`` is decoded source text.
    Guarantee: return ordered records only when every active row matches the
        supported key/value/comment shape; otherwise return None.
    Maintain: preserve the original source and capture exact value-token spans.
    Assert: parsed keys are unique and every value has a valid numeric token.
    """
    records: list[NumericTextRecord] = []
    seen_keys: set[str] = set()
    offset = 0
    for line_number, line_with_ending in enumerate(text.splitlines(keepends=True), start=1):
        line = line_with_ending.rstrip("\r\n")
        comment_start = line.find("#")
        body_end = len(line) if comment_start < 0 else comment_start
        body = line[:body_end]
        tokens = tuple(re.finditer(r"\S+", body))
        if not tokens:
            offset += len(line_with_ending)
            continue
        key = tokens[0].group(0)
        if not _KEY.fullmatch(key) or len(tokens) < 2 or key in seen_keys:
            return None
        value_tokens = tokens[1:]
        if any(not _NUMBER.fullmatch(token.group(0)) for token in value_tokens):
            return None
        values = tuple(token.group(0) for token in value_tokens)
        if any(not math.isfinite(float(value)) for value in values):
            return None
        spans = tuple(
            (offset + token.start(), offset + token.end()) for token in value_tokens
        )
        comment = line[comment_start + 1 :].strip() if comment_start >= 0 else ""
        records.append(NumericTextRecord(key, values, spans, comment, line_number))
        seen_keys.add(key)
        offset += len(line_with_ending)
    if not records:
        return None
    assert len(seen_keys) == len(records)
    assert all(len(record.values) == len(record.value_spans) for record in records)
    return tuple(records)


def replace_numeric_text_value(
    text: str,
    record: NumericTextRecord,
    value_ordinal: int,
    replacement: str,
) -> str:
    """Replace one token in a parsed record without reformatting its source.

    Require: ``record`` came from parsing this exact ``text`` value.
    Guarantee: return text with only the requested numeric token replaced.
    Maintain: preserve comments, spacing, newline style, and all other rows.
    Assert: replacement is finite numeric text and source span matches old token.
    """
    return apply_numeric_text_changes(text, (record,), {(record.key, value_ordinal): replacement})


def apply_numeric_text_changes(
    text: str,
    records: tuple[NumericTextRecord, ...],
    replacements: Mapping[tuple[str, int], str],
) -> str:
    """Patch a validated numeric-record batch against one unchanged source.

    Require: records were parsed from ``text`` and replacement keys use each
        record key plus its zero-based numeric-value ordinal.
    Guarantee: apply every finite replacement together or raise before output.
    Maintain: preserve comments, spacing, line endings, and unselected tokens.
    Assert: replacement spans are unique, current, and non-overlapping.
    """
    by_key = {record.key: record for record in records}
    edits: list[tuple[int, int, str]] = []
    for (key, ordinal), replacement in replacements.items():
        record = by_key.get(key)
        if record is None:
            raise ValueError(f"unknown numeric text record: {key!r}")
        if not 0 <= ordinal < len(record.values):
            raise ValueError("value ordinal is outside the record")
        if not _NUMBER.fullmatch(replacement) or not math.isfinite(float(replacement)):
            raise ValueError(f"invalid finite numeric value: {replacement!r}")
        start, end = record.value_spans[ordinal]
        if text[start:end] != record.values[ordinal]:
            raise ValueError("record source span no longer matches the text")
        edits.append((start, end, replacement))
    edits.sort(key=lambda edit: edit[0], reverse=True)
    updated = text
    previous_start = len(text) + 1
    for start, end, replacement in edits:
        if end > previous_start:
            raise ValueError("numeric text edits overlap")
        updated = updated[:start] + replacement + updated[end:]
        previous_start = start
    return updated


SETTINGS_FILE_NAMES = frozenset(
    {
        "const.txt", "diffdb.txt", "map.txt", "pollution.txt", "gw.txt",
        "ozone.txt", "throne.txt", "civilisation.txt", "endgame.txt",
    }
)
_CONFIG_TOKEN = re.compile(r'''"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*'|[{}]|[^\s{}]+''')
_BARE_VALUE = re.compile(r"[^\s{}#]+\Z")


@dataclass(frozen=True)
class ConfigValue:
    """One scalar or presence-flag occurrence in a supported settings file.

    Require: produced by ``parse_config_values`` from the source being edited.
    Guarantee: expose a stable scoped path and exact source spans for one value.
    Maintain: repeated keys remain distinct and lexical type is retained.
    Assert: every non-flag span contains its original raw token.
    """

    path: str
    block_path: str
    key: str
    value_index: int
    raw_value: str
    kind: str
    value_span: tuple[int, int]
    line_number: int
    comment: str


@dataclass
class ConfigDocument:
    """Hold one loaded settings source and a transactional edit overlay.

    Require: ``values`` were parsed from ``original_bytes`` and ``file_name``.
    Guarantee: expose current setting values and exact bytes after accepted edits.
    Maintain: retain original bytes/spans and stage all edits before committing.
    Assert: every staged serialization remains CP1252 and structurally parseable.
    """

    source: str
    file_name: str
    original_bytes: bytes
    values: tuple[ConfigValue, ...]
    editable: bool = True
    replacements: dict[str, object] | None = None

    def __post_init__(self) -> None:
        """Initialize an independent edit map for the loaded source."""
        if self.replacements is None:
            self.replacements = {}
        self.original_bytes.decode("cp1252")

    @property
    def original_text(self) -> str:
        """Return the exact decoded source text used by all captured spans."""
        return self.original_bytes.decode("cp1252")

    @property
    def current_text(self) -> str:
        """Serialize the full accepted edit overlay against original spans."""
        assert self.replacements is not None
        return apply_config_changes(self.original_text, self.values, self.replacements)

    @property
    def current_bytes(self) -> bytes:
        """Return current CP1252 bytes, preserving original bytes when unchanged."""
        if not self.replacements:
            return self.original_bytes
        return self.current_text.encode("cp1252")

    def current_value(self, value: ConfigValue) -> object:
        """Return a safe primitive for one value, including staged edits."""
        assert self.replacements is not None
        replacement = self.replacements.get(value.path)
        if value.kind == "flag":
            return True if replacement is None else bool(replacement)
        token = (
            encode_config_replacement(value, replacement)
            if replacement is not None
            else value.raw_value
        )
        if value.kind == "number":
            return Decimal(token)
        if value.kind == "boolean":
            return token.casefold() == "true"
        if value.kind == "string":
            decoded = ast.literal_eval(token)
            assert isinstance(decoded, str)
            return decoded
        return token

    def update(self, replacements: Mapping[str, object]) -> None:
        """Stage a complete replacement set only after atomic validation.

        Require: all paths identify values in this document.
        Guarantee: commit every replacement together or leave the overlay intact.
        Maintain: serialize against original bytes so multi-edit offsets stay valid.
        Assert: resulting text parses under the same recognized filename grammar.
        """
        if not self.editable:
            raise ValueError(f"{self.file_name} is marked uneditable")
        assert self.replacements is not None
        candidate = dict(self.replacements)
        candidate.update(replacements)
        updated = apply_config_changes(self.original_text, self.values, candidate)
        encoded = updated.encode("cp1252")
        parsed = parse_config_values(updated, self.file_name)
        if parsed is None:
            raise ValueError("edited settings no longer match the supported file structure")
        assert encoded.decode("cp1252") == updated
        self.replacements = candidate


def config_value_label(value: ConfigValue, current: object | None = None) -> str:
    """Format one typed setting value for the editable table."""
    if value.kind == "flag":
        return "On" if current is not False else "Off"
    if current is None:
        current = (
            ast.literal_eval(value.raw_value)
            if value.kind == "string"
            else value.raw_value
        )
    if isinstance(current, bool):
        return "true" if current else "false"
    return str(current)


def _comment_start(line: str) -> int:
    """Return the first unquoted supported comment marker, or line length."""
    quote: str | None = None
    escaped = False
    index = 0
    while index < len(line):
        character = line[index]
        if quote is not None:
            if escaped:
                escaped = False
            elif character == "\\":
                escaped = True
            elif character == quote:
                quote = None
            index += 1
            continue
        if character in {"'", '"'}:
            quote = character
        elif character == "#" or line.startswith("//", index):
            return index
        index += 1
    return len(line)


def _config_kind(token: str) -> str:
    """Classify a lexical scalar without assigning game-specific meaning."""
    if _NUMBER.fullmatch(token):
        if not math.isfinite(float(token)):
            raise ValueError(f"non-finite setting value: {token!r}")
        return "number"
    if len(token) >= 2 and token[0] == token[-1] and token[0] in {"'", '"'}:
        try:
            decoded = ast.literal_eval(token)
        except (SyntaxError, ValueError) as error:
            raise ValueError(f"invalid quoted setting value: {token!r}") from error
        if not isinstance(decoded, str):
            raise ValueError(f"quoted setting value is not text: {token!r}")
        return "string"
    if token.casefold() in {"true", "false"}:
        return "boolean"
    if _BARE_VALUE.fullmatch(token):
        return "identifier"
    raise ValueError(f"unsupported setting value: {token!r}")


def parse_config_values(text: str, file_name: str) -> tuple[ConfigValue, ...] | None:
    """Parse supported Gamefile settings syntax into source-spanned values.

    Require: ``text`` is CP1252-decoded source and ``file_name`` is recognized.
    Guarantee: return ordered occurrences for setting rows and nested blocks;
        return None if nesting is unbalanced or a lexical value is unsupported.
    Maintain: retain repeated keys, comments, original source positions, and
        separate block paths; omit top-level structural count headers.
    Assert: every returned value span matches its source token.
    """
    if Path(file_name).name.casefold() not in SETTINGS_FILE_NAMES:
        return None
    lines = text.splitlines(keepends=True)
    if not lines and text:
        lines = [text]
    offsets: list[int] = []
    offset = 0
    for line in lines:
        offsets.append(offset)
        offset += len(line)
    significant = []
    for index, line in enumerate(lines):
        content = line.rstrip("\r\n")
        code = content[:_comment_start(content)].strip()
        if code:
            significant.append((index, code))
    next_significant = {
        current[0]: following[1]
        for current, following in zip(significant, significant[1:])
    }

    values: list[ConfigValue] = []
    block_names: list[str] = []
    block_ordinals: list[int] = []
    block_counts: dict[tuple[str, str], int] = {}
    row_counts: dict[tuple[str, str], int] = {}
    pending_header: str | None = None
    depth = 0

    def block_path() -> str:
        return ".".join(
            f"{name}[{ordinal}]" for name, ordinal in zip(block_names, block_ordinals)
        )

    def add_row(
        tokens: list[re.Match[str]],
        base: int,
        line_number: int,
        comment: str,
        inline_pairs: bool = False,
    ) -> None:
        if not tokens:
            return
        pairs: list[tuple[re.Match[str], re.Match[str] | None]] = []
        if inline_pairs:
            if len(tokens) % 2:
                raise ValueError("inline block requires key/value pairs")
            pairs = [(tokens[i], tokens[i + 1]) for i in range(0, len(tokens), 2)]
        else:
            pairs = [(tokens[0], token) for token in tokens[1:]]
            if len(tokens) == 1:
                pairs = [(tokens[0], None)]
        parent = block_path()
        for key_match, value_match in pairs:
            key = key_match.group()
            row_key = (parent, key)
            row_counts[row_key] = row_counts.get(row_key, 0) + 1
            occurrence = row_counts[row_key]
            path = f"{parent + '.' if parent else ''}{key}[{occurrence}]"
            if value_match is None:
                start = base + key_match.start()
                end = base + key_match.end()
                values.append(
                    ConfigValue(
                        path, parent, key, 0, key, "flag", (start, end),
                        line_number, comment,
                    )
                )
                continue
            raw = value_match.group()
            start, end = base + value_match.start(), base + value_match.end()
            values.append(
                ConfigValue(
                    path, parent, key, 1, raw, _config_kind(raw), (start, end),
                    line_number, comment,
                )
            )

    malformed = False
    try:
        for line_index, line_with_ending in enumerate(lines):
            line = line_with_ending.rstrip("\r\n")
            comment_at = _comment_start(line)
            code = line[:comment_at]
            comment = line[comment_at:].lstrip("#/ ") if comment_at < len(line) else ""
            tokens = list(_CONFIG_TOKEN.finditer(code))
            if not tokens:
                continue
            braces = [token for token in tokens if token.group() in {"{", "}"}]
            if not braces:
                if (
                    len(tokens) == 1
                    and next_significant.get(line_index) == "{"
                    and tokens[0].group() not in {"true", "false"}
                ):
                    pending_header = tokens[0].group()
                    continue
                if len(tokens) == 1 and depth == 0 and _NUMBER.fullmatch(tokens[0].group()):
                    continue
                add_row(tokens, offsets[line_index], line_index + 1, comment)
                continue

            segment_start = 0
            for brace in braces:
                segment = [token for token in tokens if segment_start <= token.start() < brace.start()]
                if brace.group() == "{":
                    if pending_header is not None and not segment:
                        name, args = pending_header, ()
                    elif segment:
                        name = segment[0].group()
                        args = tuple(token.group() for token in segment[1:])
                    else:
                        name, args = "BLOCK", ()
                    pending_header = None
                    parent = block_path()
                    identity = (parent, name)
                    block_counts[identity] = block_counts.get(identity, 0) + 1
                    suffix = "(" + ",".join(args) + ")" if args else ""
                    block_names.append(name + suffix)
                    block_ordinals.append(block_counts[identity])
                    depth += 1
                    segment_start = brace.end()
                else:
                    content = [token for token in tokens if segment_start <= token.start() < brace.start()]
                    if content:
                        add_row(content, offsets[line_index], line_index + 1, comment, inline_pairs=True)
                    if depth <= 0:
                        malformed = True
                        break
                    depth -= 1
                    block_names.pop()
                    block_ordinals.pop()
                    segment_start = brace.end()
            if malformed:
                break
        if depth != 0 or pending_header is not None:
            malformed = True
    except (ValueError, OverflowError):
        return None
    if malformed or not values:
        return None
    assert all(text[value.value_span[0]:value.value_span[1]] == value.raw_value for value in values)
    assert len({value.path for value in values}) == len(values)
    return tuple(values)


def encode_config_replacement(value: ConfigValue, replacement: object) -> str:
    """Validate and encode one replacement using its original lexical type."""
    if value.kind == "flag":
        if not isinstance(replacement, bool):
            raise ValueError("presence flags require a Boolean value")
        return value.raw_value if replacement else ""
    if value.kind == "number":
        token = str(replacement).strip()
        if not _NUMBER.fullmatch(token) or not math.isfinite(float(token)):
            raise ValueError("numeric settings require a finite number")
        return token
    if value.kind == "boolean":
        if isinstance(replacement, bool):
            return "true" if replacement else "false"
        token = str(replacement).strip()
        if token.casefold() not in {"true", "false"}:
            raise ValueError("Boolean settings accept true or false")
        return token
    if not isinstance(replacement, str):
        raise ValueError("text settings require a string value")
    if value.kind == "identifier":
        token = replacement.strip()
        if not _BARE_VALUE.fullmatch(token):
            raise ValueError("identifier settings require one nonempty token")
        return token
    quote = value.raw_value[0]
    escaped = replacement.replace("\\", "\\\\").replace(quote, "\\" + quote)
    return quote + escaped + quote


def apply_config_changes(
    text: str,
    values: tuple[ConfigValue, ...],
    replacements: dict[str, object],
) -> str:
    """Apply a validated edit batch against unchanged source spans.

    Require: paths belong to values parsed from this exact source text.
    Guarantee: change only requested lexical value tokens.
    Maintain: use non-overlapping descending edits, preserving all other text.
    Assert: each source token still matches before replacement.
    """
    by_path = {value.path: value for value in values}
    edits: list[tuple[int, int, str]] = []
    for path, replacement in replacements.items():
        value = by_path.get(path)
        if value is None:
            raise ValueError(f"unknown settings value path: {path}")
        start, end = value.value_span
        if text[start:end] != value.raw_value:
            raise ValueError(f"stale settings source span for {path}")
        edits.append((start, end, encode_config_replacement(value, replacement)))
    edits.sort(key=lambda edit: edit[0], reverse=True)
    previous_start = len(text) + 1
    updated = text
    for start, end, token in edits:
        if end > previous_start:
            raise ValueError("settings edits overlap")
        updated = updated[:start] + token + updated[end:]
        previous_start = start
    return updated
