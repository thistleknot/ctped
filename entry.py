"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
LOCATE | Skip and retain inter-entry trivia | [mandatory] | R1
PARSE | Capture format 1 brace blocks or format 3 records | [mandatory] | R2-R3
BALANCE | Ignore braces in quoted values and comments | [mandatory] | R2
VALUE | Bind schema-defined format 1/3 occurrences when Fields are supplied | [opt] | R4-R6
NESTED_BIND | Bind nested blocks to child Entry schemas when given a root | [opt] | R8
EDIT | Patch changed format-1 scalar, format-3 value, or bound nested block | [mandatory] | R9-R12
NESTED_PATCH | Patch changed child Entry text at its captured block span | [mandatory] | R12
GL_ENTRY | Resolve an Entry stored by the Structure's configured GL icon field | [mandatory] | R13
COMPAT_FIELDS | Retain input fields absent from the descriptor as opaque lexical occurrences when explicitly enabled | [opt] | R17-R18
OPAQUE_NESTED_EDIT | Allow deliberate raw editing of an inferred nested block while preserving its parent source span | [opt] | R19
GENERATE | Serialize a new format-1 block or format-3 name/value record, including generated nested blocks | [mandatory] | R14-R16
FIELD_PATHS | Expose source-ordered paths for direct and nested field instances | [mandatory] | R25
SERVE | Return verbatim entry text and next source index | [mandatory] | R7,R12

R1. WHEN trivia precedes an entry, retain it in that Entry's source text.
R2. WHEN format 1 is read, balance braces outside strings and comments.
R3. WHEN format 3 is read, consume exactly one non-comment record line.
R4. WHEN `fields` is supplied, parse field occurrences in source order; when it is `None`, expose boundaries only.
R5. WHEN a field has no arguments, store None; WHEN it has one ordinary/reference argument, store its raw token; WHEN its type starts with `*`, store its raw balanced block.
R6. WHEN a known field repeats, require its `allows_multiple` flag; reject unsupported arities.
R7. WHEN an Entry is unchanged, return its captured text without rewriting.
R8. WHEN a substructure root is provided, bind each `*<file>.ces` block as a nested Entry with its child schema; without a root, retain its raw string and captured block span.
R9. WHEN a format-1 scalar value with a captured source span changes to one valid lexical token, replace only that token and preserve all other captured text.
R10. WHEN one format-3 scalar value changes to a valid single lexical token, replace only that token and preserve all other captured text.
R11. WHEN another Entry format or a changed value without a supported source span is serialized, raise explicitly rather than discard the edit.
R12. WHEN a format-1 FieldInstance contains a schema-bound child Entry with changes, replace only its captured brace-block span with the child's serialization; retain all parent trivia and reject source-span mismatches.
R13. WHEN the Structure declares a GL icon field, return its Entry-valued FieldInstance; WHEN the field or instance is absent or scalar, return None; WHEN its value is another object type, raise TypeError.
R14. WHEN a new format-3 Entry has exactly one scalar FieldInstance and a valid name/value token, serialize it as one tab-delimited line; reject invalid tokens.
R15. WHEN a new format-1 Entry has zero-argument, ordinary/reference, or generated child-Entry FieldInstances, serialize one valid brace block; reject unsupported values.
R16. WHEN a generated format-1 Entry has an empty name, serialize it as a bare brace block suitable for a parent nested field.
R17. WHEN unknown-field tolerance is explicitly enabled, retain undeclared zero-argument and scalar occurrences with their source spans; preserve opaque unknown nested blocks during sibling edits, and keep inferred fields out of generation and scalar mass edits.
R18. WHEN tolerance is disabled, retain strict rejection of undeclared fields; WHEN an unknown occurrence cannot be safely delimited, reject it with source and line context.
R19. WHEN an explicitly selected nested `*` field remains a raw string because its child schema is unavailable or inferred, require one balanced standalone brace block and patch only its captured source span; leave scalar unknowns read-only.
R25. WHEN field-instance paths are requested, return parent fields before nested child fields in source order and index repeated field names within each owning Entry; do not mutate the Entry tree.

CLOSED
- Ordinary and reference values remain raw lexical tokens; quote stripping, type conversion, and cross-file resolution remain open.
- Nested substructures remain raw strings when no child schema root is supplied; only inferred `*?` blocks may be replaced as a whole after balanced-block validation.
- Supplied descriptors use zero or one argument per field; multi-argument schemas fail explicitly.
- Schema-bound nested format-1 Entries patch captured brace-block spans; generated nested blocks use the same tab-indented field form.
- Formats 0 and 2 have no Entry record reader.
- New format-3 entries use a tab separator and LF terminator; original CTPEditor writer parity remains unverified.
- New format-1 entries use tab-indented field lines and LF terminators; this canonical Python layout does not claim CTPEditor parity.
- The `Entry.GLEntry` getter selects the configured Structure GL icon field and returns its object-valued FieldInstance. Basis: anchored executable getter `0x42af70` retrieves the Structure's configured field, looks up its FieldInstance, reads Value, and casts object values to Entry.

Preconditions: Structure format is 1 or 3; input lines retain their line endings.
Failures: malformed headers, unsupported formats, unterminated blocks, and
unsupported edits raise explicit errors with source and line context.
"""

from dataclasses import dataclass, field as dataclass_field
from pathlib import Path
import re
from typing import Sequence

from field import Field, FieldArgument, _tokens
from field_instance import FieldInstance
from field_instances import FieldInstances
from fields import Fields
from file_access import PathValue
from gl_strings import GLStringTable
from structure import Structure


_RECORD_NAME = re.compile(r"^\s*(?P<name>[^\s{}]+)")


def _data_tokens(
    text: str,
    markers: tuple[str, ...],
    source: str,
    first_line: int,
) -> tuple[tuple[str, int, int], ...]:
    """Tokenize record text while retaining exact spans and quoted tokens.

    Require: ``text`` is one captured format 1 or 3 record and markers match
    the owning data file.
    Guarantee: return lexical tokens, excluding comments and preserving spans.
    Maintain: braces inside quotes and comments are not structural tokens.
    Assert: every returned token has a valid nonempty source span.
    """
    result: list[tuple[str, int, int]] = []
    index = 0
    while index < len(text):
        if text[index].isspace():
            index += 1
            continue
        marker = next(
            (value for value in markers if text.startswith(value, index)), None
        )
        if marker is not None:
            newline = text.find("\n", index)
            index = len(text) if newline < 0 else newline + 1
            continue
        start = index
        if text[index] in "{}":
            index += 1
        elif text[index] == '"':
            index += 1
            while index < len(text):
                if text[index] == '"':
                    if index + 1 < len(text) and text[index + 1] == '"':
                        index += 2
                        continue
                    index += 1
                    break
                index += 1
            else:
                line_number = first_line + text.count("\n", 0, start)
                raise ValueError(
                    f"{source}:{line_number}: unterminated quoted value in entry"
                )
        else:
            while index < len(text):
                if text[index].isspace() or text[index] in "{}":
                    break
                if any(text.startswith(value, index) for value in markers):
                    break
                index += 1
        token = text[start:index]
        if not token:
            line_number = first_line + text.count("\n", 0, start)
            raise ValueError(f"{source}:{line_number}: invalid empty token in entry")
        result.append((token, start, index))
    assert all(start < end and text[start:end] == token for token, start, end in result)
    return tuple(result)


def _format_one_instances(
    text: str,
    fields: Fields,
    markers: tuple[str, ...],
    source: str,
    first_line: int,
    substructure_root: Path | None = None,
    bare_block: bool = False,
    allow_unknown_fields: bool = False,
) -> FieldInstances:
    """Bind format 1 field occurrences to their schema definitions.

    Require: ``text`` is one balanced named record or bare child block and
    ``fields`` is its descriptor schema.
    Guarantee: return one FieldInstance per occurrence in source order;
    nested values become child Entries when ``substructure_root`` is supplied.
    Maintain: retain raw values and preserve allowed repeated fields.
    Assert: known fields match their schema; opt-in inferred fields retain safe
    source spans and never become descriptor defaults.
    """
    tokens = _data_tokens(text, markers, source, first_line)
    opening_index = 0 if bare_block else 1
    if len(tokens) < opening_index + 2 or tokens[opening_index][0] != "{":
            raise ValueError(f"{source}:{first_line}: expected opening brace")
    schema = {field.name.casefold(): field for field in fields}
    instances = FieldInstances()
    seen: set[str] = set()
    index = opening_index + 1
    while index < len(tokens):
        token, start, _ = tokens[index]
        line_number = first_line + text.count("\n", 0, start)
        if token == "}":
            if index != len(tokens) - 1:
                raise ValueError(f"{source}:{line_number}: data follows the entry close")
            return instances
        if token == "{":
            raise ValueError(f"{source}:{line_number}: unexpected nested block")
        field = schema.get(token.casefold())
        if field is None:
            if not allow_unknown_fields:
                raise ValueError(f"{source}:{line_number}: unknown field {token}")
            next_index = index + 1
            same_line = (
                next_index < len(tokens)
                and text.count("\n", 0, tokens[next_index][1])
                == text.count("\n", 0, start)
                and tokens[next_index][0] != "}"
            )
            argument_type = (
                "*?" if same_line and tokens[next_index][0] == "{"
                else "?" if same_line else None
            )
            arguments = (
                (FieldArgument(argument_type, "", "", "Undeclared source field; type unknown", ""),)
                if argument_type is not None else ()
            )
            field = Field(token, False, False, True, None, None, arguments, "", True)
            schema[token.casefold()] = field
        key = field.name.casefold()
        if key in seen and not field.allows_multiple:
            raise ValueError(
                f"{source}:{line_number}: field {field.name} does not allow multiple instances"
            )
        seen.add(key)
        index += 1
        if not field.arguments:
            value: object = None
        elif len(field.arguments) != 1:
            raise ValueError(
                f"{source}:{line_number}: unsupported argument count for field {field.name}"
            )
        elif field.inferred and field.arguments[0].argument_type == "?":
            if index >= len(tokens) or tokens[index][0] in {"{", "}"}:
                raise ValueError(f"{source}:{line_number}: unknown field {field.name} has no scalar value")
            value_line = text.count("\n", 0, tokens[index][1])
            value_start = tokens[index][1]
            value_end = tokens[index][2]
            index += 1
            while index < len(tokens):
                next_token, next_start, next_end = tokens[index]
                if text.count("\n", 0, next_start) != value_line or next_token in {"{", "}"}:
                    break
                value_end = next_end
                index += 1
            value = text[value_start:value_end]
            instances.add(FieldInstance(field, value, (value_start, value_end)))
            continue
        elif field.inferred and field.arguments[0].argument_type == "*?":
            if index >= len(tokens) or tokens[index][0] != "{":
                raise ValueError(f"{source}:{line_number}: unknown nested field {field.name} has no block")
            block_start = tokens[index][1]
            depth = 0
            while index < len(tokens):
                structural = tokens[index][0]
                if structural == "{":
                    depth += 1
                elif structural == "}":
                    depth -= 1
                    if depth == 0:
                        block_end = tokens[index][2]
                        index += 1
                        break
                index += 1
            else:
                raise ValueError(f"{source}:{line_number}: unterminated unknown nested field {field.name}")
            instances.add(FieldInstance(field, text[block_start:block_end], (block_start, block_end)))
            continue
        elif field.arguments[0].argument_type.startswith("*"):
            if index >= len(tokens) or tokens[index][0] != "{":
                raise ValueError(
                    f"{source}:{line_number}: expected substructure block for field {field.name}"
                )
            block_start = tokens[index][1]
            depth = 0
            while index < len(tokens):
                structural = tokens[index][0]
                if structural == "{":
                    depth += 1
                elif structural == "}":
                    depth -= 1
                    if depth == 0:
                        block_end = tokens[index][2]
                        index += 1
                        break
                index += 1
            else:
                raise ValueError(
                    f"{source}:{line_number}: unterminated substructure for field {field.name}"
                )
            raw_block = text[block_start:block_end]
            if substructure_root is None:
                value: object = raw_block
            else:
                child_name = field.arguments[0].argument_type[1:].replace("\\", "/")
                child_path = (substructure_root / child_name).resolve()
                if not child_path.is_relative_to(substructure_root.resolve()):
                    raise ValueError(
                        f"{source}:{line_number}: substructure path escapes root: {child_name}"
                    )
                child_structure = Structure.from_file(child_path)
                value = Entry.from_substructure(
                    raw_block,
                    child_structure,
                    source,
                    markers,
                    substructure_root,
                    line_number,
                    allow_unknown_fields,
                )
        else:
            if index >= len(tokens) or tokens[index][0] in {"{", "}"}:
                raise ValueError(
                    f"{source}:{line_number}: missing value for field {field.name}"
                )
            value_token, value_start, value_end = tokens[index]
            value = value_token
            index += 1
            source_span = (value_start, value_end)
            instances.add(FieldInstance(field, value, source_span))
            continue
        block_span = (
            (block_start, block_end)
            if field.arguments and field.arguments[0].argument_type.startswith("*")
            else None
        )
        instances.add(FieldInstance(field, value, block_span))
    raise ValueError(f"{source}:{first_line}: missing closing brace")


def _comment_markers(
    structure: Structure, comment_char: str | None
) -> tuple[str, ...]:
    """Derive comment openers from the structure's configured comment text.

    Require: structure is parsed and an optional parent comment marker is supplied.
    Guarantee: return recognized comment openers, longest first.
    Maintain: use descriptor-defined values when they are a single token.
    Assert: no returned marker is empty.
    """
    value = comment_char if comment_char is not None else structure.comment_char or ""
    markers: list[str] = []
    if "#" in value:
        markers.append("#")
    if "//" in value:
        markers.append("//")
    if not markers and value:
        markers.append(value)
    return tuple(sorted(markers, key=len, reverse=True))


def _validate_raw_nested_block(
    value: str, markers: tuple[str, ...], source: str
) -> None:
    """Require one complete raw nested block before replacing its source span.

    Require: ``value`` is text and comment markers come from the parent Structure.
    Guarantee: accept exactly one standalone balanced brace block.
    Maintain: do not reinterpret or normalize unknown field contents.
    Assert: the first/last lexical tokens are the block delimiters.
    """
    tokens = _data_tokens(value, markers, source, 1)
    if not tokens or tokens[0][0] != "{" or tokens[-1][0] != "}":
        raise ValueError("raw nested value must be one brace block")
    depth = 0
    for index, (token, _start, _end) in enumerate(tokens):
        if token == "{":
            depth += 1
        elif token == "}":
            depth -= 1
            if depth < 0 or (depth == 0 and index != len(tokens) - 1):
                raise ValueError("raw nested value must be one balanced brace block")
    if depth != 0:
        raise ValueError("raw nested value must be one balanced brace block")
    assert tokens[0][1] == 0 and tokens[-1][2] == len(value)


def _comment_only(line: str, markers: tuple[str, ...]) -> bool:
    """Check whether a line is blank or begins with a comment marker.

    Require: line and descriptor comment markers are supplied.
    Guarantee: identify trivia that may precede an entry.
    Maintain: do not modify source text.
    Assert: the result is boolean.
    """
    content = line.lstrip()
    return not content or any(content.startswith(marker) for marker in markers)


def _scan_line(line: str, markers: tuple[str, ...]) -> tuple[str, int, int]:
    """Strip trailing comments and count braces outside quoted strings.

    Require: line is one source line and markers match its descriptor.
    Guarantee: return visible text, net brace change, and opening-brace count.
    Maintain: ignore doubled quotes inside a quoted string.
    Assert: only unquoted, uncommented braces affect the counts.
    """
    depth = 0
    openings = 0
    quoted = False
    comment_start = len(line)
    index = 0
    while index < len(line):
        character = line[index]
        if character == '"':
            if quoted and index + 1 < len(line) and line[index + 1] == '"':
                index += 2
                continue
            quoted = not quoted
            index += 1
            continue
        if not quoted:
            marker = next(
                (value for value in markers if line.startswith(value, index)), None
            )
            if marker is not None:
                comment_start = index
                break
            if character == "{":
                depth += 1
                openings += 1
            elif character == "}":
                depth -= 1
        index += 1
    return line[:comment_start], depth, openings


@dataclass(frozen=True)
class Entry:
    """A source-preserving record with optional schema-bound field instances.

    Require: construct through ``from_lines`` or ``Entries.add`` with a matching Structure.
    Guarantee: expose record name, format, field instances, and source text.
    Maintain: retain leading trivia and original line endings.
    Assert: format is either 1 or 3.
    """

    source: str
    name: str
    format: int
    source_lines: tuple[str, ...]
    field_instances: FieldInstances = dataclass_field(default_factory=FieldInstances)
    structure: Structure | None = None

    def gl_text(self, table: GLStringTable | None) -> tuple[str, str]:
        """Return this Entry's Great Library name and article from a string table.

        Spec: native Entry string variables at getters ``+0x2c`` and ``+0x34``,
        written by ``CTPProject.ImportGLNames`` (``03_CTPProject.c`` 0x427970).
        Their identities as GL name and article are inferred (txtGLName and
        txtArticle controls); key rules beyond a plain Entry name, such as the
        ``UNIT_*>ORDER`` pattern, are not recovered.
        Observed (assembly of ``ImportGLNames``, final loop): an Entry whose GL
        name is still the empty string after the table pass gets its own name as
        GL name (setter ``+0x30`` from getter ``+0x24``); the article has no such
        default. The routine rejects Structures without GL strings.
        Require: ``table`` is a GLStringTable or None.
        Guarantee: with a table and a GL-strings Structure, the name is the
        native quoted value for the Entry name, else the Entry name itself; the
        article is the native quoted value for the Entry name plus the
        Structure's article suffix when the Structure declares articles, else empty.
        Without a table, or for a Structure without GL strings, both are empty.
        Maintain: leave the Entry and table unchanged; use the last matching row.
        Assert: both results are text.
        """
        if table is None or self.structure is None or not self.structure.has_gl_strings:
            return "", ""
        name = table.native_name_for(self.name) or self.name
        suffix = self.structure.gl_article_suffix if self.structure is not None else None
        article = (table.native_name_for(self.name + suffix) or "") if suffix else ""
        assert isinstance(name, str) and isinstance(article, str)
        return name, article

    def field_instances_with_paths(self) -> tuple[tuple[str, FieldInstance, int], ...]:
        """Return source-ordered paths for this Entry and its bound children.

        Require: this Entry may contain schema-bound child Entries.
        Guarantee: return ``(path, instance, depth)`` tuples, indexing repeated
        names within each owning Entry and traversing parents before children.
        Maintain: leave values and collection order unchanged.
        Assert: every returned instance belongs to the traversed Entry tree.
        """
        result: list[tuple[str, FieldInstance, int]] = []

        def visit(current: Entry, prefix: str, depth: int) -> None:
            instances = tuple(current.field_instances)
            totals: dict[str, int] = {}
            for instance in instances:
                key = instance.field.name.casefold()
                totals[key] = totals.get(key, 0) + 1
            seen: dict[str, int] = {}
            for instance in instances:
                name = instance.field.name
                key = name.casefold()
                seen[key] = seen.get(key, 0) + 1
                if totals[key] > 1:
                    name = f"{name}[{seen[key]}]"
                path = f"{prefix}.{name}" if prefix else name
                result.append((path, instance, depth))
                if (
                    isinstance(instance.value, Entry)
                    and instance.field.arguments
                    and instance.field.arguments[0].argument_type.startswith("*")
                ):
                    visit(instance.value, path, depth + 1)

        visit(self, "", 0)
        assert all(isinstance(instance, FieldInstance) for _, instance, _ in result)
        return tuple(result)

    def same_as(self, other: "Entry", gl_table: GLStringTable | None = None) -> bool:
        """Compare name, Great Library name, article, then every Structure field.

        Spec: native ``Entry.SameAs`` (``05_Entry.c`` 0x42b360). The three
        leading string compares map to Entry getters ``+0x24/+0x2c/+0x34``; their
        identities as name, GL name and article are inferred from the editing
        form's txtName/txtGLName/txtArticle controls and from
        ``CTPProject.ImportGLNames`` writing the latter two; unverified at runtime.
        Require: ``other`` is an Entry and this Entry has a Structure.
        Guarantee: return False at the first difference, otherwise True after
        every field of this Entry's Structure compares equal via
        ``same_in_entries``. GL text is read from ``gl_table`` for both Entries;
        without a table both are empty, as in an Entry never given GL strings.
        Maintain: leave both Entries unchanged.
        Assert: return a boolean.
        """
        if not isinstance(other, Entry):
            raise TypeError("other must be an Entry")
        if self.structure is None:
            raise ValueError("same_as requires the Entry's Structure")
        if (self.name, *self.gl_text(gl_table)) != (other.name, *other.gl_text(gl_table)):
            return False
        return all(
            self.same_in_entries(field, other)
            for field in Fields.from_structure(self.structure)
        )

    @property
    def gl_entry(self) -> "Entry | None":
        """Return the Entry referenced by the Structure's GL icon field.

        Require: field instances and optional Structure metadata belong to this Entry.
        Guarantee: return the configured icon-field value when it is an Entry;
            return None when configuration, instance, or scalar value is absent.
        Maintain: do not resolve raw reference strings or mutate field values.
        Assert: reject a non-scalar, non-Entry object value.
        """
        if self.structure is None or not self.structure.gl_icon_field:
            return None
        instance = next(
            (
                item
                for item in self.field_instances
                if item.field.name == self.structure.gl_icon_field
            ),
            None,
        )
        if instance is None:
            return None
        value = instance.value
        if isinstance(value, Entry):
            return value
        if value is None or isinstance(value, (str, bytes, int, float, bool)):
            return None
        raise TypeError(
            f"GL icon field {self.structure.gl_icon_field!r} must reference an Entry"
        )

    def same_in_entries(self, field: Field, other: "Entry") -> bool:
        """Compare this Entry's instances of ``field`` with ``other``'s.

        Spec: native ``Field.SameInEntries`` (``06_Field.c`` 0x42de00, assembly
        read 2026-10-16). Basis only: Entry-level three-string prefix of
        ``Entry.SameAs`` (0x42b360) is not ported.
        Require: ``other`` is an Entry; instances are matched to ``field`` by name.
        Guarantee: a field that allows multiple instances is equal when both
        Entries hold the same number of instances and they pair off one-to-one
        (first remaining instance here against the first matching remaining
        instance there, via ``FieldInstance.same_as``); any other field is equal
        when both lack an instance, and unequal when only one has it; when both
        have one, their display strings must match exactly.
        Maintain: leave both Entries unchanged.
        Assert: return a boolean. ``allows_multiple`` is inferred to be the
        native Field flag read at slot +0x3c; that binding is unverified.
        """
        if not isinstance(other, Entry):
            raise TypeError("other must be an Entry")
        mine = [item for item in self.field_instances if item.field.name == field.name]
        theirs = [item for item in other.field_instances if item.field.name == field.name]
        if field.allows_multiple:
            if len(mine) != len(theirs):
                return False
            remaining = list(theirs)
            for item in mine:
                match = next(
                    (index for index, candidate in enumerate(remaining) if item.same_as(candidate)),
                    None,
                )
                if match is None:
                    return False
                del remaining[match]
            return True
        if not mine and not theirs:
            return True
        if not mine or not theirs:
            return False
        return mine[0].value_as_string == theirs[0].value_as_string

    @classmethod
    def from_lines(
        cls,
        lines: Sequence[str],
        start_index: int,
        structure: Structure,
        source: str | None = None,
        comment_char: str | None = None,
        fields: Fields | None = None,
        substructure_root: PathValue | None = None,
        allow_unknown_fields: bool = False,
    ) -> tuple["Entry", int]:
        """Capture one record and return the first unconsumed line index.

        Require: ``start_index`` is within source lines and Structure uses
        format 1 or 3; a parent comment marker is supplied when needed.
        Guarantee: return the entry with original lines and next index; when
        ``fields`` is supplied, bind the format-specific raw values.
        Maintain: include preceding blank/comment lines with this entry.
        Assert: format 1 blocks are balanced; format 3 consumes one record;
        an optional nested root is a directory.
        """
        if structure.format not in {1, 3}:
            raise ValueError(
                f"{source or structure.source}: unsupported Entry format {structure.format}"
            )
        if start_index < 0 or start_index >= len(lines):
            raise ValueError(f"{source or structure.source}:{start_index + 1}: no entry data")

        markers = _comment_markers(structure, comment_char)
        nested_root = Path(substructure_root).resolve() if substructure_root is not None else None
        if nested_root is not None and not nested_root.is_dir():
            raise NotADirectoryError(f"substructure root is not a directory: {nested_root}")
        index = start_index
        while index < len(lines) and _comment_only(lines[index], markers):
            index += 1
        if index >= len(lines):
            raise ValueError(f"{source or structure.source}:{index + 1}: no entry data")

        record_line = lines[index]
        match = _RECORD_NAME.match(record_line)
        if match is None:
            raise ValueError(f"{source or structure.source}:{index + 1}: missing entry name")
        name = match.group("name")
        if structure.format == 3:
            end_index = index + 1
            field_instances = FieldInstances()
            if fields is not None:
                if len(fields) != 1:
                    raise ValueError("format 3 value parsing requires exactly one field")
                field_definition = fields.item(1)
                if (
                    len(field_definition.arguments) != 1
                    or field_definition.arguments[0].argument_type != "0"
                ):
                    raise ValueError(
                        "format 3 value parsing requires one ordinary field argument"
                    )
                visible, _, _ = _scan_line(record_line, markers)
                tokens = _tokens(visible.strip())
                if len(tokens) != 2 or tokens[0].group(0) != name:
                    raise ValueError(
                        f"{source or structure.source}:{index + 1}: expected name and one value token"
                    )
                field_instances.add(FieldInstance(field_definition, tokens[1].group(0)))
        else:
            uncommented, depth, openings = _scan_line(record_line, markers)
            if "{" not in uncommented or openings < 1 or depth < 0:
                raise ValueError(
                    f"{source or structure.source}:{index + 1}: expected named opening brace"
                )
            end_index = index + 1
            while depth > 0 and end_index < len(lines):
                _, delta, _ = _scan_line(lines[end_index], markers)
                depth += delta
                end_index += 1
            if depth != 0:
                raise ValueError(
                    f"{source or structure.source}:{len(lines)}: unterminated entry {name}"
                )
            field_instances = (
                _format_one_instances(
                    "".join(lines[index:end_index]),
                    fields,
                    markers,
                    source or structure.source,
                    index + 1,
                    nested_root,
                    allow_unknown_fields=allow_unknown_fields,
                )
                if fields is not None
                else FieldInstances()
            )

        result = cls(
            source=source or structure.source,
            name=name,
            format=structure.format,
            source_lines=tuple(lines[start_index:end_index]),
            field_instances=field_instances,
            structure=structure,
        )
        assert result.to_text() == "".join(lines[start_index:end_index])
        return result, end_index

    @classmethod
    def from_substructure(
        cls,
        text: str,
        structure: Structure,
        source: str,
        markers: tuple[str, ...],
        substructure_root: Path,
        first_line: int,
        allow_unknown_fields: bool = False,
    ) -> "Entry":
        """Parse one bare brace block against its child Structure.

        Require: ``text`` is one balanced child block and its descriptor uses
        format 1; markers and root come from the containing File import.
        Guarantee: return an empty-name Entry with child Fields and exact text.
        Maintain: retain nested field order and recurse using the same root.
        Assert: the result's source text equals the supplied block.
        """
        if structure.format != 1:
            raise ValueError(
                f"{structure.source}: nested blocks require format 1, got {structure.format}"
            )
        lines = tuple(text.splitlines(keepends=True))
        field_instances = _format_one_instances(
            text,
            Fields.from_structure(structure),
            markers,
            source,
            first_line,
            substructure_root,
            bare_block=True,
            allow_unknown_fields=allow_unknown_fields,
        )
        result = cls(
            source=source,
            name="",
            format=structure.format,
            source_lines=lines,
            field_instances=field_instances,
            structure=structure,
        )
        assert result.to_text() == text
        return result

    def to_text(self) -> str:
        """Return captured text, patching supported scalar token edits.

        Require: Entry came from ``from_lines`` or is a generated format-1/3 Entry.
        Guarantee: preserve captured source exactly or serialize supported
        scalar/nested edits and generated defaulted format-1/3 records,
        including bare generated child blocks.
        Maintain: preserve leading trivia, comments, whitespace, and line endings.
        Assert: unsupported edits fail instead of being lost.
        """
        result = "".join(self.source_lines)
        if not self.source_lines and self.format in {1, 3}:
            if self.structure is None:
                raise ValueError("generated Entry requires a Structure")
            markers = _comment_markers(self.structure, None)
            if self.name or self.format == 3:
                name_tokens = _data_tokens(self.name, markers, self.source, 1)
                if (
                    len(name_tokens) != 1
                    or name_tokens[0][1:] != (0, len(self.name))
                ):
                    raise ValueError("generated Entry requires one valid name token")
            if self.format == 3:
                if self.field_instances.count != 1:
                    raise ValueError("generated format-3 Entry requires one field")
                value = self.field_instances.item(1).value
                if not isinstance(value, str):
                    raise ValueError("generated format-3 Entry requires a scalar token")
                value_tokens = _data_tokens(value, markers, self.source, 1)
                if len(value_tokens) != 1 or value_tokens[0][1:] != (0, len(value)):
                    raise ValueError("generated format-3 value must be one lexical token")
                return f"{self.name}\t{value}\n"
            lines = [f"{self.name} {{\n" if self.name else "{\n"]
            for instance in self.field_instances:
                field_name = instance.field.name
                field_tokens = _data_tokens(field_name, markers, self.source, 1)
                if len(field_tokens) != 1 or field_tokens[0][1:] != (0, len(field_name)):
                    raise ValueError("generated format-1 field requires one valid name token")
                if not instance.field.arguments:
                    if instance.value is not None:
                        raise ValueError(
                            f"generated field {field_name} must not have a value"
                        )
                    lines.append(f"\t{field_name}\n")
                    continue
                if len(instance.field.arguments) != 1:
                    raise NotImplementedError(
                        f"generated field {field_name} has an unsupported value shape"
                    )
                argument_type = instance.field.arguments[0].argument_type
                if argument_type.startswith("*") and isinstance(instance.value, Entry):
                    nested_lines = instance.value.to_text().splitlines()
                    if not nested_lines or nested_lines[0] != "{":
                        raise ValueError(
                            f"generated nested field {field_name} requires a bare block"
                        )
                    lines.append(f"\t{field_name} {nested_lines[0]}\n")
                    lines.extend(f"\t{line}\n" for line in nested_lines[1:])
                    continue
                if argument_type.startswith("*") or not isinstance(instance.value, str):
                    raise NotImplementedError(
                        f"generated field {field_name} has an unsupported value shape"
                    )
                value = instance.value
                value_tokens = _data_tokens(value, markers, self.source, 1)
                if len(value_tokens) != 1 or value_tokens[0][1:] != (0, len(value)):
                    raise ValueError(
                        f"generated field {field_name} value must be one lexical token"
                    )
                lines.append(f"\t{field_name} {value}\n")
            lines.append("}\n")
            return "".join(lines)
        changed = [value for value in self.field_instances if value.is_modified]
        if not changed:
            return result
        if self.format not in {1, 3} or (
            self.format == 3 and (len(self.field_instances) != 1 or len(changed) != 1)
        ):
            raise NotImplementedError(
                f"{self.source}: edited format-{self.format} Entry serialization is not supported"
            )
        if self.structure is None:
            raise ValueError("edited Entry has no Structure for comment validation")
        markers = _comment_markers(self.structure, None)
        if self.format == 3:
            value = self.field_instances.item(1).value
            if not isinstance(value, str) or not value or "\r" in value or "\n" in value:
                raise ValueError("format-3 edited values must be one nonempty lexical token")
            visible_value, _, _ = _scan_line(value, markers)
            value_tokens = _tokens(value)
            if visible_value != value or len(value_tokens) != 1 or value_tokens[0].span() != (0, len(value)):
                raise ValueError("format-3 edited values must be one nonempty lexical token")
            lines = list(self.source_lines)
            record_index = next(
                (index for index, line in enumerate(lines) if not _comment_only(line, markers)),
                None,
            )
            if record_index is None:
                raise ValueError("edited Entry has no record line")
            line = lines[record_index]
            visible_line, _, _ = _scan_line(line, markers)
            tokens = _tokens(visible_line.strip())
            if len(tokens) != 2 or tokens[0].group(0) != self.name:
                raise ValueError("format-3 edited Entry no longer matches its source record")
            leading = len(visible_line) - len(visible_line.lstrip())
            start, end = tokens[1].span()
            lines[record_index] = line[: leading + start] + value + line[leading + end :]
            result = "".join(lines)
            assert isinstance(result, str)
            return result

        source_text = "".join(self.source_lines)
        body_start = None
        offset = 0
        for line in self.source_lines:
            if not _comment_only(line, markers):
                body_start = offset
                break
            offset += len(line)
        if body_start is None:
            raise ValueError("edited format-1 Entry has no record body")
        patches: list[tuple[int, int, str]] = []
        for instance in changed:
            if instance.source_span is None:
                raise NotImplementedError("changed format-1 value has no source span")
            start, end = instance.source_span
            if (
                isinstance(instance.value, Entry)
                and instance.field.arguments
                and instance.field.arguments[0].argument_type.startswith("*")
            ):
                value = instance.value.to_text()
                original_nested = "".join(instance.value.source_lines)
                if source_text[body_start + start : body_start + end] != original_nested:
                    raise ValueError("nested Entry source does not match its parent span")
            elif isinstance(instance.value, str):
                value = instance.value
                if (
                    instance.field.arguments
                    and instance.field.arguments[0].argument_type.startswith("*")
                ):
                    original_value = instance._original_value
                    if (
                        not isinstance(original_value, str)
                        or source_text[body_start + start : body_start + end]
                        != original_value
                    ):
                        raise ValueError("opaque nested block source does not match its parent span")
                    _validate_raw_nested_block(value, markers, self.source)
                else:
                    tokens = _data_tokens(value, markers, self.source, 1)
                    if len(tokens) != 1 or tokens[0][1:] != (0, len(value)):
                        raise ValueError("format-1 edited values must be one nonempty lexical token")
            else:
                raise NotImplementedError("changed format-1 value has no supported serializer")
            patches.append((body_start + start, body_start + end, value))
        for start, end, value in sorted(patches, reverse=True):
            source_text = source_text[:start] + value + source_text[end:]
        return source_text

    @property
    def has_changes(self) -> bool:
        """Report direct or nested value edits.

        Require: field instances belong to this Entry.
        Guarantee: report whether any parsed value has changed.
        Maintain: do not modify source text or field state.
        Assert: return a boolean.
        """
        return any(value.is_modified for value in self.field_instances)


def _validate_raw_nested_block(
    value: str, markers: tuple[str, ...], source: str
) -> None:
    """Require one complete raw nested block before replacing its source span.

    Require: ``value`` is text and comment markers come from the parent Structure.
    Guarantee: accept exactly one standalone balanced brace block.
    Maintain: do not reinterpret or normalize unknown field contents.
    Assert: the first/last lexical tokens are the block delimiters.
    """
    tokens = _data_tokens(value, markers, source, 1)
    if not tokens or tokens[0][0] != "{" or tokens[-1][0] != "}":
        raise ValueError("raw nested value must be one brace block")
    depth = 0
    for index, (token, _start, _end) in enumerate(tokens):
        if token == "{":
            depth += 1
        elif token == "}":
            depth -= 1
            if depth < 0 or (depth == 0 and index != len(tokens) - 1):
                raise ValueError("raw nested value must be one balanced brace block")
    if depth != 0:
        raise ValueError("raw nested value must be one balanced brace block")
    assert tokens[0][1] == 0 and tokens[-1][2] == len(value)
