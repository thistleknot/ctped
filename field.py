"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Read field rows and declared argument rows | [mandatory] | R1-R3
PARSE | Apply structure flags and decode field metadata | [mandatory] | R1-R4
SERVE | Return field and next source-line position | [contract] | R5

R1. WHEN a field row is read, parse its name, flags, and declared argument count.
R2. WHEN field formatting is enabled, read LBF/LAF spacing columns.
R3. WHEN a field declares N arguments, consume exactly N argument rows.
R4. WHEN a default is quoted, expose its value without descriptor quotes and
    retain the raw row and token.
R5. WHEN a field is parsed, return the next unconsumed source-line index.

CLOSED
- Cross-file and nested-substructure references remain raw type strings until
  their owning model steps resolve them.
- Field descriptions are retained as source text; they do not affect parsing.

Preconditions: the caller supplies decoded `.ces` lines, a valid start index,
and the structure's formatting flag. Failures: malformed flags, counts,
columns, or missing argument rows raise ``ValueError`` with source context.
"""

from dataclasses import dataclass
import re
from typing import Optional, Sequence

_TOKEN = re.compile(r'"(?:[^"]|"")*"|\S+')


def _tokens(value: str) -> tuple[re.Match[str], ...]:
    """Find quoted or whitespace-delimited values in one descriptor row.

    Require: ``value`` is a field or argument row.
    Guarantee: return tokens in source order with source positions.
    Maintain: preserve the input row and all raw token text.
    Assert: each returned token has nonzero length.
    """
    matches = tuple(_TOKEN.finditer(value))
    assert all(match.group(0) for match in matches)
    return matches


def _boolean(value: str, source: str, line_number: int) -> bool:
    """Decode a descriptor boolean using CTPEd's first-character rule.

    Require: ``value`` is nonempty descriptor text.
    Guarantee: values beginning with `0` or `f` are false; others are true.
    Maintain: do not modify the source text.
    Assert: the result is boolean.
    """
    if not value:
        raise ValueError(f"{source}:{line_number}: empty boolean value")
    return not (value[0].lower() in {"0", "f"})


def _integer(value: str, source: str, line_number: int, label: str) -> int:
    """Decode one signed integer column.

    Require: ``value`` is the raw column from a field row.
    Guarantee: return its integer value.
    Maintain: preserve no alternate numeric interpretation.
    Assert: malformed values raise a source-located ``ValueError``.
    """
    if not re.fullmatch(r"[+-]?\d+", value):
        raise ValueError(f"{source}:{line_number}: invalid {label}: {value!r}")
    return int(value)


def _default_value(token: str) -> str:
    """Remove outer descriptor quotes from a default token.

    Require: ``token`` is one lexical token.
    Guarantee: return an unquoted value when double quotes surround it.
    Maintain: preserve unquoted values exactly.
    Assert: doubled quotes inside a quoted value decode to one quote.
    """
    if token.startswith('"') and token.endswith('"'):
        return token[1:-1].replace('""', '"')
    return token


@dataclass(frozen=True)
class FieldArgument:
    """Store one argument's type, default, comment, and raw source.

    Require: construct through ``Field.from_lines``.
    Guarantee: expose both interpreted default and raw descriptor tokens.
    Maintain: preserve the original argument row.
    Assert: ``argument_type`` and ``raw_default_value`` are nonempty.
    """

    argument_type: str
    default_value: str
    raw_default_value: str
    comment: str
    raw_line: str


@dataclass(frozen=True)
class Field:
    """One `.ces` field definition and its argument definitions.

    Require: construct through ``from_lines`` with its owning structure flag.
    Guarantee: expose field presence, multiplicity, spacing, and arguments.
    Maintain: preserve field and argument source text.
    Assert: argument count equals the number of parsed arguments.
    """

    name: str
    compulsory: bool
    present_by_default: bool
    allows_multiple: bool
    lines_between_instances: Optional[int]
    lines_after_instances: Optional[int]
    arguments: tuple[FieldArgument, ...]
    raw_line: str
    inferred: bool = False

    @classmethod
    def from_lines(
        cls,
        lines: Sequence[str],
        start_index: int,
        has_field_formatting: bool,
        source: str = "<memory>",
    ) -> tuple["Field", int]:
        """Parse one field row and its declared argument rows.

        Require: ``start_index`` points at a field row; formatting state comes
        from the owning ``Structure``.
        Guarantee: return the field and first unconsumed line index.
        Maintain: do not modify source lines or skip any declared argument.
        Assert: parsed argument count matches the field declaration.
        """
        index = start_index
        while index < len(lines):
            line = lines[index]
            stripped = line.strip()
            if stripped and not stripped.startswith("//"):
                break
            index += 1
        if index >= len(lines) or lines[index].strip().startswith("@"):
            line_number = min(index + 1, len(lines))
            raise ValueError(f"{source}:{line_number}: expected field row")

        raw_line = lines[index]
        value = raw_line.split("//", 1)[0].strip()
        tokens = _tokens(value)
        required = 7 if has_field_formatting else 5
        if len(tokens) < required:
            raise ValueError(f"{source}:{index + 1}: field row has too few columns")

        parts = tuple(match.group(0) for match in tokens[:required])
        name = parts[0]
        compulsory = _boolean(parts[1], source, index + 1)
        present_by_default = _boolean(parts[2], source, index + 1)
        allows_multiple = _boolean(parts[3], source, index + 1)
        if has_field_formatting:
            lines_between_instances = _integer(
                parts[4], source, index + 1, "lines between instances"
            )
            lines_after_instances = _integer(
                parts[5], source, index + 1, "lines after instances"
            )
            argument_count = _integer(parts[6], source, index + 1, "argument count")
        else:
            lines_between_instances = None
            lines_after_instances = None
            argument_count = _integer(parts[4], source, index + 1, "argument count")
        if argument_count < 0:
            raise ValueError(f"{source}:{index + 1}: negative argument count")

        arguments = []
        next_index = index + 1
        while len(arguments) < argument_count:
            while next_index < len(lines):
                candidate = lines[next_index].strip()
                if candidate and not candidate.startswith("//"):
                    break
                next_index += 1
            if next_index >= len(lines) or lines[next_index].strip().startswith("@"):
                raise ValueError(
                    f"{source}:{next_index + 1}: missing argument row for {name}"
                )
            argument_line = lines[next_index]
            argument_value = argument_line.strip()
            argument_tokens = _tokens(argument_value)
            if len(argument_tokens) < 2:
                raise ValueError(f"{source}:{next_index + 1}: argument row has too few columns")
            type_token = argument_tokens[0].group(0)
            default_match = argument_tokens[1]
            raw_default = default_match.group(0)
            comment = argument_value[default_match.end():].strip()
            arguments.append(
                FieldArgument(
                    argument_type=type_token,
                    default_value=_default_value(raw_default),
                    raw_default_value=raw_default,
                    comment=comment,
                    raw_line=argument_line,
                )
            )
            next_index += 1

        field = cls(
            name=name,
            compulsory=compulsory,
            present_by_default=present_by_default,
            allows_multiple=allows_multiple,
            lines_between_instances=lines_between_instances,
            lines_after_instances=lines_after_instances,
            arguments=tuple(arguments),
            raw_line=raw_line,
        )
        assert len(field.arguments) == argument_count
        return field, next_index
