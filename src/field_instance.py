"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
ASSOCIATE | Bind a Field definition to one runtime value | [mandatory] | R1
STORE | Retain value and optional parsed source-token span | [mandatory] | R2,R14
TRACK | Detect scalar and nested Entry edits | [contract] | R13
DISPLAY | Convert the value to display text | [mandatory] | R3
RESOLVE | Resolve cross-file references against imported entries | [contract] | R4-R7
NESTED | Display empty-name Entry values using preserved block text | [contract] | R8
COMPARE | Compare scalar/reference values or delegate nested objects | [contract] | R9-R12

R1. WHEN an instance is created, retain its Field definition.
R2. WHEN a value is assigned, retain the exact supplied Python object.
R3. WHEN display text is requested, use a nonempty object's `name` when present.
R4. WHEN a field is scalar or nested, leave its value unchanged.
R5. WHEN a reference target is uniquely loaded and its Entry name matches, store and return that Entry.
R6. WHEN its target File or Entry is missing or the File match is ambiguous, fail without mutation.
R7. WHEN the value is already an object, preserve its identity.
R8. WHEN an object's name is empty and it has `to_text()`, display that preserved text.
R9. WHEN `same_as` sees no argument or an argument type beginning with `0`, compare both values as exact display strings.
R10. WHEN `same_as` sees an argument type beginning with `*`, delegate to the stored object's `same_as` method.
R11. WHEN `same_as` sees another argument type, compare both values as exact display strings.
R12. WHEN a nested value has no `same_as` implementation, raise `NotImplementedError` rather than claim nested parity.
R13. WHEN a value differs from its parsed value, report it as modified; nested Entry changes propagate through the stored value.
R14. WHEN a format-1 scalar is parsed, retain its token span; WHEN a schema-bound nested Entry is parsed, retain its brace-block span on the parent FieldInstance; neither span changes value equality.

CLOSED
- `value_to_object` resolves only external references when the caller supplies imported Files; nested and scalar values remain unchanged.
- `Entry.same_as` remains open; type-2 FieldInstance comparison requires it.
- Values without a nonempty `name` or `to_text()` use Python string conversion for display.

Preconditions: callers provide a parsed Field definition.
Failures: non-Field definitions raise TypeError; unresolved references raise
ValueError without changing the stored value; property access failures from
named objects pass through; nested equality without an object implementation
raises NotImplementedError.
"""

from dataclasses import dataclass, field as dataclass_field
from pathlib import Path
from typing import Iterable

from field import Field

_MISSING = object()


@dataclass
class FieldInstance:
    """Associate one field definition with its current runtime value.

    Require: ``field`` is a parsed Field.
    Guarantee: expose the field, value, display text, and source-shaped comparison.
    Maintain: setting a value preserves the supplied object's identity.
    Assert: ``field`` remains a Field instance.
    """

    field: Field
    value: object
    source_span: tuple[int, int] | None = dataclass_field(default=None, compare=False)
    _original_value: object = dataclass_field(init=False, repr=False, compare=False)

    def __post_init__(self) -> None:
        """Validate the required field relationship.

        Require: dataclass initialization has supplied ``field``.
        Guarantee: reject values that are not Field definitions.
        Maintain: leave the supplied field and value unchanged.
        Assert: accepted field is a Field.
        """
        if not isinstance(self.field, Field):
            raise TypeError("field must be a Field")
        if self.source_span is not None:
            if (
                not isinstance(self.source_span, tuple)
                or len(self.source_span) != 2
                or any(isinstance(value, bool) or not isinstance(value, int) for value in self.source_span)
                or self.source_span[0] < 0
                or self.source_span[1] <= self.source_span[0]
            ):
                raise ValueError("source_span must be a nonempty ordered pair of integers")
        self._original_value = self.value
        assert isinstance(self.field, Field)

    @property
    def is_modified(self) -> bool:
        """Report whether this value or a nested Entry has changed.

        Require: the instance was parsed or constructed with a Field.
        Guarantee: detect changed scalar values, replacement objects, and
        nested values exposing ``has_changes``.
        Maintain: do not compare or mutate unrelated model state.
        Assert: return a boolean.
        """
        nested_changes = getattr(self.value, "has_changes", False)
        if isinstance(nested_changes, bool) and nested_changes:
            return True
        if isinstance(self._original_value, (str, bytes, int, float, bool, type(None))):
            return type(self.value) is not type(self._original_value) or self.value != self._original_value
        return self.value is not self._original_value

    @property
    def value_as_string(self) -> str:
        """Return display text for a scalar or Entry-like object.

        Require: value is a scalar or object value.
        Guarantee: return a string representation of the current value.
        Maintain: do not change the stored value.
        Assert: the returned result is a string.
        """
        name = getattr(self.value, "name", _MISSING)
        if name is not _MISSING and str(name):
            result = str(name)
        elif name == "" and callable(getattr(self.value, "to_text", None)):
            result = self.value.to_text()
        else:
            result = str(self.value)
        assert isinstance(result, str)
        return result

    def set_value(self, value: object) -> None:
        """Replace the runtime value without interpreting it.

        Require: ``value`` is the caller's desired scalar or object value.
        Guarantee: store that exact object.
        Maintain: preserve the associated Field definition.
        Assert: stored value has the same identity as the argument.
        """
        self.value = value
        assert self.value is value

    def same_as(self, other: "FieldInstance") -> bool:
        """Compare values using the Field's recovered argument category.

        Require: ``other`` is a FieldInstance; nested values expose ``same_as``.
        Guarantee: compare ordinary/reference values as exact display strings,
        or delegate nested-value comparison to the stored object.
        Maintain: leave both instances and values unchanged.
        Assert: return a boolean result.
        """
        if not isinstance(other, FieldInstance):
            raise TypeError("other must be a FieldInstance")
        argument_type = (
            self.field.arguments[0].argument_type
            if self.field.arguments
            else "0"
        )
        if argument_type.startswith("*"):
            compare = getattr(self.value, "same_as", None)
            if not callable(compare):
                raise NotImplementedError(
                    "nested value comparison requires its same_as implementation"
                )
            result = compare(other.value)
        else:
            result = self.value_as_string == other.value_as_string
        if not isinstance(result, bool):
            raise TypeError("nested same_as implementation must return bool")
        return result

    def value_to_object(self, files: Iterable[object]) -> object:
        """Resolve a file-reference value to its matching imported Entry.

        Require: ``files`` iterates imported File models with parsed Entries;
        the field has at most one argument.
        Guarantee: return and store the matching Entry for `.ces` reference
        arguments; return the unchanged value for scalar, nested, zero-argument,
        or already-object values.
        Maintain: do not load Files or mutate their registry; failed lookup
        leaves ``value`` untouched.
        Assert: successful resolution returns the Entry stored on the unique
        matching File.
        """
        if not self.field.arguments or getattr(
            self.value, "name", _MISSING
        ) is not _MISSING:
            return self.value
        if len(self.field.arguments) != 1:
            raise ValueError(
                f"cannot resolve multi-argument field {self.field.name}"
            )
        argument_type = self.field.arguments[0].argument_type
        if argument_type == "0" or argument_type.startswith("*"):
            return self.value
        normalized_type = argument_type.replace("\\", "/")
        if Path(normalized_type).suffix.casefold() != ".ces":
            raise ValueError(
                f"unsupported argument type for field {self.field.name}: {argument_type}"
            )
        target_name = Path(normalized_type).name.casefold()
        matching_files = []
        for file_model in files:
            structure = getattr(file_model, "structure", None)
            source = getattr(structure, "source", None)
            if source is None:
                continue
            source_name = str(source).replace("\\", "/").rsplit("/", 1)[-1]
            if source_name.casefold() == target_name:
                matching_files.append(file_model)
        if len(matching_files) != 1:
            condition = "is not loaded" if not matching_files else "is ambiguous"
            raise ValueError(f"target File {condition}: {argument_type}")
        target_file = matching_files[0]
        target_value = self.value_as_string.casefold()
        matching_entries = [
            entry
            for entry in target_file.entries
            if entry.name.casefold() == target_value
        ]
        if len(matching_entries) != 1:
            condition = "is missing" if not matching_entries else "is ambiguous"
            raise ValueError(f"target Entry {condition}: {self.value_as_string}")
        self.value = matching_entries[0]
        assert self.value is matching_entries[0]
        return self.value
