"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain source bytes and decode Windows-1252 text | [mandatory] | R1
SCAN | Validate balanced square-bracket expressions without rewriting text | [mandatory] | R2
SUBSTITUTE | Resolve direct fields and documented left-to-right numeric arithmetic | [mandatory] | R3-R5,R12-R14
CONDITION | Evaluate string equality and field-presence branches recursively | [mandatory] | R6-R8
RENDER | Evaluate conditions, field/file loops, references, aborts, project consequences, and per-render state | [mandatory] | R6-R11,R15-R25,R40,R42
GLNAME | Resolve `.GLName` through an optional caller-supplied Entry-name resolver | [opt] | R29
DATABASE | Resolve `.DB` through an optional caller-supplied active-Entry resolver | [opt] | R41
CONSEQUENCES | Resolve the documented `.Consequences` collection through an optional project resolver | [opt] | R40
SERVE | Return original bytes and source-preserving rendered text | [mandatory] | R8,R11

R1. WHEN bytes are loaded, retain exact source content.
R2. WHEN brackets are scanned, require every `[` and `]` to be paired.
R3. WHEN a simple `[.Field]` expression matches `.Name`, a supplied special field, or an Entry FieldInstance, substitute its string value.
R4. WHEN the field is absent or its value is None, substitute an empty string.
R5. WHEN an expression is numeric arithmetic, evaluate by the manual's spaced left-to-right rules; WHEN suffixed, unknown, or literal, preserve its bracket text unchanged.
R6. WHEN a conditional contains three top-level pipe-separated parts, evaluate both branch bodies recursively before testing; display only the selected branch for supported tests; string equality permits an empty operand.
R7. WHEN a conditional has an unsupported test or malformed shape, preserve its bracket text unchanged.
R8. WHEN a template is unchanged, return the original bytes exactly.
R9. WHEN a repeat has the documented field/body shape and at most one top-level separator, render the body for every matching instance in order and place separators only between results.
R10. WHEN repeated values are scalar, resolve `.Name` to the current value; WHEN they are nested Entries, resolve direct fields within that Entry.
R11. WHEN a repeat occurs inside a repeated nested Entry, resolve its FieldInstances from that current nested Entry.
R12. WHEN a numeric direct-field expression contains spaced `+`, `-`, `*`, `/`, or `%` operators, evaluate strictly from left to right without parentheses.
R13. WHEN `%` is used in arithmetic, return integer division truncated toward zero; WHEN an operand is zero for division, preserve the expression literally.
R14. WHEN the referenced field is missing, render empty; WHEN its value is nonnumeric, preserve the raw field value without applying arithmetic.
R15. WHEN one render begins, initialize its counter to zero [inferred] and keep it independent from other render calls.
R16. WHEN the contents inside `[#X]` are rendered to `+`, `-`, `0`, or `#`, increment, decrement, reset to zero, or emit the current counter respectively.
R17. WHEN rendered `[#X]` contents match no counter operation, emit nothing and leave the counter unchanged.
R18. WHEN a conditional is parsed, evaluate both branches before selecting the displayed branch; retain counter changes from both branches as required by the manual's inside-out evaluation rule.
R19. WHEN `[!X]` is evaluated, recursively render `X` and request abort of one enclosing repeat per resulting character.
R20. WHEN a repeat body requests aborts, finish that iteration, then stop that many enclosing repeats, consuming one abort level per repeat.
R21. WHEN `[*Structure.ces body|separator]` has a project-file resolver, resolve the exact case-sensitive structure filename and render its Entries in order with separators only between results.
R22. WHEN no resolver exists or the resolver reports no matching declaration, preserve the entire file-loop expression literally.
R23. WHEN a repeated FieldInstance holds a raw `.ces` reference and a reference resolver is supplied, resolve a temporary FieldInstance and read fields from its unique target Entry without mutating source data.
R24. WHEN a reference target File or Entry is missing or ambiguous, raise ValueError so the app can show a visible preview error.
R25. WHEN a reference resolver looks up a structure filename, follow the existing `FieldInstance.value_to_object` case-insensitive filename matching contract.
R26. WHEN a direct field expression contains dotted suffixes, traverse each field through the uniquely referenced or nested Entry in order.
R27. WHEN a dotted suffix has a non-Entry intermediate or unsupported base, preserve the full expression literally.
R28. WHEN a dotted suffix resolves to a missing or ambiguous cross-file target, raise ValueError without mutating source values.
R29. WHEN a GL-name resolver is supplied, resolve `.GLName` against the active Entry name, including nested or referenced Entries; when no resolver or explicit `GLName` special field is supplied, preserve the expression literally.
R39. WHEN a GL-name resolver returns None for the active Entry, preserve the expression literally; WHEN it returns an empty string, render an empty value.
R40. WHEN a consequences resolver is supplied, THEN `?Consequences` is true exactly when it returns entries, and `~Consequences body|separator` renders those Entries in resolver order with separators only between results; WHEN no resolver is supplied, THEN existing field-presence and field-repeat behavior remains unchanged.
R41. WHEN a database resolver is supplied, THEN `.DB` resolves against the active root, nested, referenced, or repeated Entry; WHEN absent, retain existing field lookup behavior.
R42. WHEN a file loop contains a field-presence condition and a nested repeat of raw references, render matching values in source order and join outer iterations with only the configured separators; reference resolution must not mutate raw values.

CLOSED
- Field values are emitted as their current raw string representation; quote decoding and type conversion are open.
- `.Name` uses the current Entry name; `.DB` is supplied by the optional resolver; other special values must be supplied explicitly.
- The `Consequences` callback supplies only project-registered cross-reference results; importing undeclared or unregistered Files is outside the renderer.
- Equality is exact and case-sensitive following Python string comparison because the supplied manual does not specify case rules; parity with the original editor remains unverified.
- Dotted suffix references resolve only through nested or imported reference Entries; raw reference resolution requires an explicit resolver. File-loop and GL-name resolution are caller-supplied; missing declarations and `.GLName` expressions without a resolver remain literal. Counter initialization at zero is inferred because the manual gives no initial value; arithmetic is manual-shaped and decimal formatting parity remains unverified.

Preconditions: callers supply a parsed Entry, optional string special fields,
and optional exact-case project-loop, case-insensitive reference, Entry-name-to-GL-name, active-Entry-to-database, and active-Entry-to-consequence resolvers.
Failures: unmatched square brackets or ambiguous resolver matches raise
ValueError; unsupported expressions and unresolved declarations remain literal.
"""

from dataclasses import dataclass
from decimal import Decimal, InvalidOperation
from pathlib import Path
import re
from typing import Callable, Mapping, Sequence

from entry import Entry
from file import File
from field_instance import FieldInstance
from field_instances import FieldInstances
from file_access import PathValue, read_file_bytes


_FIELD_NAME = re.compile(r"^[A-Za-z_][A-Za-z0-9_:]*$")
_DIRECT_FIELD_PATH = re.compile(
    r"^\.([A-Za-z_][A-Za-z0-9_:]*(?:\.[A-Za-z_][A-Za-z0-9_:]*)*)$"
)
_NUMBER = re.compile(r"^[+-]?(?:\d+(?:\.\d*)?|\.\d+)$")
_ARITHMETIC_OPERATORS = frozenset({"+", "-", "*", "/", "%"})


@dataclass
class _RenderState:
    """Hold mutable values whose lifetime is one template render.

    Require: construct once at the public ``render`` boundary.
    Guarantee: begin each render with an independent zero counter.
    Maintain: pass the same state through nested conditions and repeats.
    Assert: ``counter`` remains an integer, ``abort_levels`` is a
    nonnegative integer, and optional resolvers remain callable.
    """

    counter: int = 0
    abort_levels: int = 0
    file_resolver: Callable[[str], File | None] | None = None
    reference_resolver: Callable[[str], File | None] | None = None
    gl_name_resolver: Callable[[str], str | None] | None = None
    consequences_resolver: Callable[[Entry], Sequence[Entry]] | None = None
    consequences_cache: dict[int, tuple[Entry, ...]] | None = None
    db_resolver: Callable[[Entry], str | None] | None = None


def _validate_brackets(text: str, source: str) -> None:
    """Require balanced square brackets in template source.

    Require: ``text`` is decoded template source.
    Guarantee: every opening bracket has one later closing bracket.
    Maintain: do not interpret or alter literal bracket expressions.
    Assert: the stack is empty after the final source character.
    """
    stack: list[int] = []
    for index, character in enumerate(text):
        if character == "[":
            stack.append(index)
        elif character == "]":
            if not stack:
                raise ValueError(f"{source}: unmatched closing bracket at character {index}")
            stack.pop()
    if stack:
        raise ValueError(f"{source}: unmatched opening bracket at character {stack[-1]}")
    assert not stack


def _matching_bracket(text: str, start: int) -> int:
    """Find the matching close for one already-validated opening bracket.

    Require: ``text[start]`` is `[` and the full text is bracket-balanced.
    Guarantee: return the index of its matching `]`.
    Maintain: account for nested literal and directive brackets.
    Assert: the returned index is greater than ``start``.
    """
    depth = 0
    for index in range(start, len(text)):
        if text[index] == "[":
            depth += 1
        elif text[index] == "]":
            depth -= 1
            if depth == 0:
                assert index > start
                return index
    raise AssertionError("validated template has no matching bracket")


def _split_top_level_pipes(expression: str) -> list[str]:
    """Split one expression at pipes outside nested square brackets.

    Require: ``expression`` is a bracket-balanced directive body.
    Guarantee: return all top-level pipe-separated parts in source order.
    Maintain: preserve empty parts and nested expression text exactly.
    Assert: bracket depth returns to zero after scanning.
    """
    parts: list[str] = []
    start = 0
    depth = 0
    for index, character in enumerate(expression):
        if character == "[":
            depth += 1
        elif character == "]":
            depth -= 1
        elif character == "|" and depth == 0:
            parts.append(expression[start:index])
            start = index + 1
    parts.append(expression[start:])
    assert depth == 0
    return parts


@dataclass(frozen=True)
class GLTemplate:
    """Retain one `.glt` source and render supported fields and directives.

    Require: source bytes decode as Windows-1252 and have balanced brackets.
    Guarantee: expose exact bytes and render supported fields, conditions,
    repeats, project consequences, and Structure database names.
    Maintain: leave unsupported template syntax and literal markup intact.
    Assert: unchanged serialization equals original bytes.
    """

    source: str
    original_bytes: bytes
    text: str

    @classmethod
    def from_bytes(cls, data: bytes, source: str = "<memory>") -> "GLTemplate":
        """Parse a template's byte-preserving text and bracket structure.

        Require: ``data`` is bytes from a `.glt` source.
        Guarantee: return decoded source with exact original bytes retained.
        Maintain: preserve line endings and literal square-bracket forms.
        Assert: all square brackets are balanced and unchanged output matches input.
        """
        if not isinstance(data, bytes):
            raise TypeError("data must be bytes")
        text = data.decode("cp1252")
        _validate_brackets(text, source)
        result = cls(source, data, text)
        assert result.to_bytes() == data
        return result

    @classmethod
    def from_file(cls, path: PathValue) -> "GLTemplate":
        """Load one `.glt` file without changing its source bytes.

        Require: ``path`` names a readable template.
        Guarantee: return parsed template text and retained bytes.
        Maintain: do not modify the source file.
        Assert: model source matches the requested path.
        """
        source = str(Path(path))
        result = cls.from_bytes(read_file_bytes(path), source)
        assert result.source == source
        return result

    def render(
        self,
        entry: Entry,
        special_fields: Mapping[str, str | None] | None = None,
        file_resolver: Callable[[str], File | None] | None = None,
        reference_resolver: Callable[[str], File | None] | None = None,
        gl_name_resolver: Callable[[str], str | None] | None = None,
        consequences_resolver: Callable[[Entry], Sequence[Entry]] | None = None,
        db_resolver: Callable[[Entry], str | None] | None = None,
    ) -> str:
        """Render direct fields, conditions, field/file loops, and state directives.

        Require: ``entry`` is parsed; special values are text/None; optional
        project resolvers map structure filenames to parsed Files, Entry names
        to localized Great Library names, active Entries to consequences, and
        active Entries to their Structure database names.
        Guarantee: replace direct fields, evaluate documented arithmetic,
        conditions, repeats, file loops, GL names, Structure database names,
        consequences, aborts, and counter directives.
        Maintain: preserve unsupported directives and keep all state local.
        Assert: each evaluated directive consumes exactly one balanced bracket pair.
        """
        if not isinstance(entry, Entry):
            raise TypeError("entry must be an Entry")
        special = special_fields or {}
        if any(value is not None and not isinstance(value, str) for value in special.values()):
            raise TypeError("special field values must be strings or None")
        if file_resolver is not None and not callable(file_resolver):
            raise TypeError("file_resolver must be callable or None")
        if reference_resolver is not None and not callable(reference_resolver):
            raise TypeError("reference_resolver must be callable or None")
        if gl_name_resolver is not None and not callable(gl_name_resolver):
            raise TypeError("gl_name_resolver must be callable or None")
        if consequences_resolver is not None and not callable(consequences_resolver):
            raise TypeError("consequences_resolver must be callable or None")
        if db_resolver is not None and not callable(db_resolver):
            raise TypeError("db_resolver must be callable or None")
        state = _RenderState(
            file_resolver=file_resolver,
            reference_resolver=reference_resolver,
            gl_name_resolver=gl_name_resolver,
            consequences_resolver=consequences_resolver,
            consequences_cache={},
            db_resolver=db_resolver,
        )
        result = self._render_text(self.text, entry, special, state=state)
        assert isinstance(result, str)
        return result

    def _consequences_for(self, entry: Entry, state: _RenderState) -> tuple[Entry, ...]:
        """Return one cached, validated consequence result for an Entry.

        Require: the render state has an optional resolver and a local cache.
        Guarantee: return the resolver's ordered Entry collection as a tuple.
        Maintain: resolve each Entry at most once during this render.
        Assert: every returned value is an Entry.
        """
        if state.consequences_resolver is None:
            return ()
        if state.consequences_cache is None:
            state.consequences_cache = {}
        key = id(entry)
        if key not in state.consequences_cache:
            values = tuple(state.consequences_resolver(entry))
            if any(not isinstance(value, Entry) for value in values):
                raise TypeError("consequences_resolver must return Entries")
            state.consequences_cache[key] = values
        result = state.consequences_cache[key]
        assert all(isinstance(value, Entry) for value in result)
        return result

    def _active_entry(
        self,
        entry: Entry,
        current_instance: FieldInstance | None,
        state: _RenderState | None,
    ) -> Entry:
        """Select the Entry whose fields are active in one directive.

        Require: ``entry`` is the current root and optional instance is active.
        Guarantee: return a nested or referenced Entry when resolvable.
        Maintain: do not modify FieldInstances during reference resolution.
        Assert: the result is an Entry.
        """
        if current_instance is not None:
            if isinstance(current_instance.value, Entry):
                return current_instance.value
            if state is not None:
                referenced = self._referenced_entry(current_instance, state)
                if referenced is not None:
                    return referenced
        return entry

    def _field_value(
        self,
        name: str,
        entry: Entry,
        special_fields: Mapping[str, str | None],
        current_instance: FieldInstance | None = None,
        state: _RenderState | None = None,
    ) -> str:
        """Resolve one direct field using Entry and caller-supplied values.

        Require: ``name`` is a supported direct field identifier.
        Guarantee: return the first matching raw value or an empty string.
        Maintain: do not mutate the Entry or special-field mapping.
        Assert: the resolved value is text.
        """
        if (
            name == "DB"
            and name not in special_fields
            and state is not None
            and state.db_resolver is not None
        ):
            active_entry = self._active_entry(entry, current_instance, state)
            value = state.db_resolver(active_entry)
            if value is not None and not isinstance(value, str):
                raise TypeError("db_resolver must return str or None")
            return value or ""
        instances: FieldInstances | None = None
        if current_instance is None:
            if name == "Name":
                value = entry.name
            elif name in special_fields:
                value = special_fields[name] or ""
            else:
                instances = entry.field_instances
        elif name == "Name":
            current_value = current_instance.value
            value = (
                current_value.name
                if isinstance(current_value, Entry)
                else ""
                if current_value is None
                else current_instance.value_as_string
            )
        elif name in special_fields:
            value = special_fields[name] or ""
        elif isinstance(current_instance.value, Entry):
            instances = current_instance.value.field_instances
        elif state is not None:
            value = ""
            referenced = self._referenced_entry(current_instance, state)
            if referenced is not None:
                instances = referenced.field_instances
        else:
            value = ""
        if instances is not None:
            instance = next(
                (item for item in instances if item.field.name == name), None
            )
            value = (
                ""
                if instance is None or instance.value is None
                else instance.value_as_string
            )
        assert isinstance(value, str)
        return value

    def _field_path_value(
        self,
        path: str,
        entry: Entry,
        special_fields: Mapping[str, str | None],
        current_instance: FieldInstance | None,
        state: _RenderState,
    ) -> str | None:
        """Resolve a dotted field path through nested or referenced Entries.

        Require: ``path`` contains valid field identifiers and ``entry`` is
        parsed; reference traversal uses the render's explicit resolver.
        Guarantee: return the final field's display value, resolve terminal
        `.GLName` through the optional callback, return empty for a missing
        final field, or None when traversal cannot continue.
        Maintain: never mutate source FieldInstances while resolving references.
        Assert: each traversed object is an Entry.
        """
        names = path.split(".")
        if len(names) == 1 and names[0] == "GLName":
            active_entry = entry
            if current_instance is not None:
                if isinstance(current_instance.value, Entry):
                    active_entry = current_instance.value
                else:
                    referenced = self._referenced_entry(current_instance, state)
                    if referenced is None:
                        return None
                    active_entry = referenced
            return self._gl_name_value(active_entry, special_fields, state)
        if len(names) == 1:
            return self._field_value(
                names[0], entry, special_fields, current_instance, state
            )
        active_entry = entry
        if current_instance is not None:
            if isinstance(current_instance.value, Entry):
                active_entry = current_instance.value
            else:
                referenced = self._referenced_entry(current_instance, state)
                if referenced is None:
                    return None
                active_entry = referenced
        for index, name in enumerate(names):
            if name == "GLName" and index == len(names) - 1:
                return self._gl_name_value(active_entry, special_fields, state)
            if name == "Name":
                value: object = active_entry.name
            else:
                instance = next(
                    (
                        item
                        for item in active_entry.field_instances
                        if item.field.name == name
                    ),
                    None,
                )
                if instance is None:
                    if name in special_fields and index == len(names) - 1:
                        return special_fields[name] or ""
                    return "" if index == len(names) - 1 else None
                if instance.value is None:
                    return "" if index == len(names) - 1 else None
                value = instance.value
                if not isinstance(value, Entry):
                    value = self._referenced_entry(instance, state) or value
            if index == len(names) - 1:
                if isinstance(value, Entry):
                    return value.name
                return str(value)
            if not isinstance(value, Entry):
                return None
            active_entry = value
        raise AssertionError("field path traversal did not return")

    @staticmethod
    def _gl_name_value(
        entry: Entry,
        special_fields: Mapping[str, str | None],
        state: _RenderState,
    ) -> str | None:
        """Resolve one active Entry's localized display name.

        Require: ``entry`` is the active parsed Entry and ``state`` holds the
        optional caller resolver.
        Guarantee: return the localized string, explicit special value, or
        None when the active Entry has no matching name.
        Maintain: leave Entry and resolver-owned data unchanged.
        Assert: callback results are text or None.
        """
        if state.gl_name_resolver is None:
            return special_fields.get("GLName")
        value = state.gl_name_resolver(entry.name)
        if value is not None and not isinstance(value, str):
            raise TypeError("gl_name_resolver must return str or None")
        return value

    @staticmethod
    def _referenced_entry(
        instance: FieldInstance, state: _RenderState
    ) -> Entry | None:
        """Resolve a raw cross-file FieldInstance without changing source data.

        Require: ``instance`` belongs to a parsed field and ``state`` carries
        the optional project reference resolver.
        Guarantee: return its unique referenced Entry, or None for nonreference
        values; unresolved references with a resolver fail explicitly.
        Maintain: retain the original FieldInstance value unchanged.
        Assert: a resolved value is an Entry owned by its resolved File.
        """
        if isinstance(instance.value, Entry) or instance.value is None:
            return instance.value if isinstance(instance.value, Entry) else None
        if not instance.field.arguments:
            return None
        argument_type = instance.field.arguments[0].argument_type
        normalized = argument_type.replace("\\", "/")
        if Path(normalized).suffix.casefold() != ".ces":
            return None
        if state.reference_resolver is None:
            return None
        target_file = state.reference_resolver(Path(normalized).name)
        if target_file is None:
            raise ValueError(f"target File is not loaded: {argument_type}")
        if not isinstance(target_file, File):
            raise TypeError("reference_resolver must return File or None")
        temporary = FieldInstance(instance.field, instance.value)
        target_entry = temporary.value_to_object((target_file,))
        if not isinstance(target_entry, Entry):
            raise TypeError("reference target must resolve to an Entry")
        return target_entry

    def _condition_result(
        self,
        condition: str,
        entry: Entry,
        special_fields: Mapping[str, str | None],
        current_instance: FieldInstance | None = None,
        state: _RenderState | None = None,
    ) -> bool | None:
        """Evaluate a documented string equality or Entry field-presence test.

        Require: ``condition`` is one top-level conditional test.
        Guarantee: return its truth value or None for unsupported syntax.
        Maintain: compare string operands exactly and inspect field identities only.
        Assert: supported equality operands render to strings.
        """
        if "=" in condition:
            equality_index = condition.index("=")
            if (
                condition.count("=") != 1
                or equality_index == 0
                or condition[equality_index - 1] in "!<>"
                or condition[equality_index + 1 : equality_index + 2] in {"=", "<", ">"}
            ):
                return None
            left, right = condition.split("=", 1)
            return self._render_text(
                left.strip(), entry, special_fields, current_instance, state
            ) == self._render_text(
                right.strip(), entry, special_fields, current_instance, state
            )
        field_name = condition.strip()
        if _FIELD_NAME.fullmatch(field_name) is None:
            return None
        if field_name == "Consequences" and state is not None:
            active_entry = self._active_entry(entry, current_instance, state)
            if state.consequences_resolver is not None:
                return bool(self._consequences_for(active_entry, state))
        if current_instance is not None:
            if isinstance(current_instance.value, Entry):
                return any(
                    instance.field.name == field_name
                    for instance in current_instance.value.field_instances
                )
            referenced = (
                self._referenced_entry(current_instance, state)
                if state is not None
                else None
            )
            if referenced is not None:
                return any(
                    instance.field.name == field_name
                    for instance in referenced.field_instances
                )
            return current_instance.field.name == field_name
        return any(
            instance.field.name == field_name for instance in entry.field_instances
        )

    def _arithmetic_result(
        self,
        expression: str,
        entry: Entry,
        special_fields: Mapping[str, str | None],
        current_instance: FieldInstance | None = None,
        state: _RenderState | None = None,
    ) -> str | None:
        """Evaluate one manual-shaped numeric field expression.

        Require: expression is bracket-balanced; arithmetic operators must
        have spaces on both sides and parentheses are unsupported.
        Guarantee: return left-to-right arithmetic output, the raw leading
        field value for nonnumeric fields, an empty string for missing fields,
        or None when the whole expression must remain literal.
        Maintain: do not change Entry, FieldInstance, or source text.
        Assert: every successful arithmetic result is displayable text.
        """
        terms: list[str] = []
        operators: list[str] = []
        depth = 0
        start = 0
        for index, character in enumerate(expression):
            if character == "[":
                depth += 1
            elif character == "]":
                depth -= 1
            elif (
                depth == 0
                and character in _ARITHMETIC_OPERATORS
                and index > 0
                and index + 1 < len(expression)
                and expression[index - 1].isspace()
                and expression[index + 1].isspace()
            ):
                terms.append(expression[start:index].strip())
                operators.append(character)
                start = index + 1
        if not operators:
            return None
        terms.append(expression[start:].strip())
        if len(terms) != len(operators) + 1 or any(not term for term in terms):
            return None
        if any("(" in term or ")" in term for term in terms):
            return None

        values: list[str] = []
        for term in terms:
            field_match = _DIRECT_FIELD_PATH.fullmatch(term)
            if field_match is not None:
                value = self._field_path_value(
                    field_match.group(1),
                    entry,
                    special_fields,
                    current_instance,
                    state or _RenderState(),
                )
                if value is None:
                    return None
                values.append(value)
            elif term.startswith("[") and term.endswith("]"):
                values.append(
                    self._render_text(term, entry, special_fields, current_instance, state)
                )
            elif _NUMBER.fullmatch(term) is not None:
                values.append(term)
            else:
                return None

        if values[0] == "":
            return ""
        if _NUMBER.fullmatch(values[0]) is None:
            return values[0] if _DIRECT_FIELD_PATH.fullmatch(terms[0]) is not None else None
        if any(value == "" for value in values[1:]):
            return ""
        if any(_NUMBER.fullmatch(value) is None for value in values[1:]):
            return values[0] if _DIRECT_FIELD_PATH.fullmatch(terms[0]) is not None else None

        try:
            result = Decimal(values[0])
            for operator, value in zip(operators, values[1:]):
                operand = Decimal(value)
                if operator in {"/", "%"} and operand == 0:
                    return None
                if operator == "+":
                    result += operand
                elif operator == "-":
                    result -= operand
                elif operator == "*":
                    result *= operand
                elif operator == "/":
                    result /= operand
                else:
                    result = Decimal(int(result / operand))
        except (InvalidOperation, OverflowError, ZeroDivisionError):
            return None
        if result == result.to_integral_value():
            rendered = str(int(result))
        else:
            rendered = format(result.normalize(), "f")
        assert isinstance(rendered, str)
        return rendered

    def _render_text(
        self,
        text: str,
        entry: Entry,
        special_fields: Mapping[str, str | None],
        current_instance: FieldInstance | None = None,
        state: _RenderState | None = None,
    ) -> str:
        """Render supported bracket expressions within one text fragment.

        Require: ``text`` is bracket-balanced and model references are valid.
        Guarantee: evaluate direct fields, numeric arithmetic, supported
        nested conditionals, repeat bodies, and repeat-abort signals.
        Maintain: preserve unsupported directives and discard unknown counter
        directives without mutating source text.
        Assert: every consumed expression has a validated matching bracket;
        pending abort levels are nonnegative integers.
        """
        if state is None:
            state = _RenderState()
        pieces: list[str] = []
        cursor = 0
        while cursor < len(text):
            start = text.find("[", cursor)
            if start < 0:
                pieces.append(text[cursor:])
                break
            pieces.append(text[cursor:start])
            end = _matching_bracket(text, start)
            expression = text[start + 1 : end]
            match = _DIRECT_FIELD_PATH.fullmatch(expression.strip())
            if match is not None:
                value = self._field_path_value(
                    match.group(1),
                    entry,
                    special_fields,
                    current_instance,
                    state,
                )
                pieces.append(
                    text[start : end + 1] if value is None else value
                )
            elif expression.startswith("."):
                arithmetic = self._arithmetic_result(
                    expression, entry, special_fields, current_instance, state
                )
                pieces.append(
                    text[start : end + 1] if arithmetic is None else arithmetic
                )
            elif expression.startswith("?"):
                parts = _split_top_level_pipes(expression[1:])
                if len(parts) == 3:
                    true_text = self._render_text(
                        parts[1], entry, special_fields, current_instance, state
                    )
                    false_text = self._render_text(
                        parts[2], entry, special_fields, current_instance, state
                    )
                    result = self._condition_result(
                        parts[0], entry, special_fields, current_instance, state
                    )
                    if result is None:
                        pieces.append(text[start : end + 1])
                    else:
                        pieces.append(true_text if result else false_text)
                else:
                    pieces.append(text[start : end + 1])
            elif expression.startswith("!"):
                abort_text = self._render_text(
                    expression[1:], entry, special_fields, current_instance, state
                )
                state.abort_levels += len(abort_text)
            elif expression.startswith("#"):
                counter_token = "#" + self._render_text(
                    expression[1:], entry, special_fields, current_instance, state
                )
                if counter_token == "#+":
                    state.counter += 1
                elif counter_token == "#-":
                    state.counter -= 1
                elif counter_token == "#0":
                    state.counter = 0
                elif counter_token == "##":
                    pieces.append(str(state.counter))
                assert isinstance(state.counter, int)
            elif expression.startswith(("~", "*")):
                parts = _split_top_level_pipes(expression[1:])
                loop_source, separator, body = parts[0].partition(" ")
                loop_items: tuple[tuple[Entry, FieldInstance | None], ...] = ()
                supported = len(parts) <= 2 and bool(separator)
                if expression.startswith("~"):
                    supported = supported and _FIELD_NAME.fullmatch(loop_source) is not None
                    if supported:
                        repeat_entry = self._active_entry(entry, current_instance, state)
                        if loop_source == "Consequences" and state.consequences_resolver is not None:
                            loop_items = tuple(
                                (consequence, None)
                                for consequence in self._consequences_for(repeat_entry, state)
                            )
                        else:
                            loop_items = tuple(
                                (repeat_entry, instance)
                                for instance in repeat_entry.field_instances
                                if instance.field.name == loop_source
                            )
                else:
                    supported = (
                        supported
                        and Path(loop_source).name == loop_source
                        and loop_source.endswith(".ces")
                    )
                    if supported and state.file_resolver is not None:
                        target_file = state.file_resolver(loop_source)
                        if target_file is not None and not isinstance(target_file, File):
                            raise TypeError("file_resolver must return File or None")
                        if target_file is not None:
                            loop_items = tuple((item, None) for item in target_file.entries)
                        else:
                            supported = False
                    else:
                        supported = False
                if not supported:
                    pieces.append(text[start : end + 1])
                else:
                    rendered_parts: list[str] = []
                    for loop_entry, instance in loop_items:
                        rendered_parts.append(
                            self._render_text(
                                body,
                                loop_entry,
                                special_fields,
                                instance,
                                state,
                            )
                        )
                        if state.abort_levels:
                            state.abort_levels -= 1
                            break
                    joiner = parts[1] if len(parts) == 2 else ""
                    pieces.append(joiner.join(rendered_parts))
            else:
                pieces.append(text[start : end + 1])
            cursor = end + 1
        result_text = "".join(pieces)
        assert isinstance(state.abort_levels, int) and state.abort_levels >= 0
        assert isinstance(result_text, str)
        return result_text

    def to_bytes(self) -> bytes:
        """Return the original template bytes unchanged.

        Require: model came from ``from_bytes`` or ``from_file``.
        Guarantee: return exact source bytes, including line endings and markup.
        Maintain: rendering never mutates source or serialized content.
        Assert: return the retained byte string.
        """
        assert isinstance(self.original_bytes, bytes)
        return self.original_bytes
