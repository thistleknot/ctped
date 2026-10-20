"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Provide varied scalar values and a named object | [mandatory] | R1-R2
STORE | Check Field association and identity-preserving assignment | [mandatory] | R1
TRACK | Detect changed values and nested Entry changes | [contract] | R13
DISPLAY | Check string and named-object display conversion | [mandatory] | R2
RESOLVE | Convert file-reference values using imported File and Entry models | [mandatory] | R3-R6
DISPLAY | Show preserved nested block text when its Entry name is empty | [mandatory] | R7
COMPARE | Check exact scalar/reference values and nested delegation | [mandatory] | R8-R12
SPAN | Preserve semantic equality when source spans differ | [mandatory] | R14

R1. WHEN a value is assigned, retain the exact object and original Field.
R2. WHEN display text is requested, convert scalar or use a nonempty object's name.
R3. WHEN the field type is scalar or nested, preserve the stored value.
R4. WHEN one matching reference File and Entry exist, replace the value with that Entry.
R5. WHEN a target File or Entry is absent or File matches are ambiguous, fail without mutation.
R6. WHEN a reference value is already an object, preserve its identity.
R7. WHEN an object's name is empty and it has `to_text()`, display its preserved text.
R8. WHEN ordinary or reference values are compared, use exact display-string equality.
R9. WHEN nested values are compared, delegate to the stored object's `same_as`.
R10. WHEN nested comparison lacks an implementation, raise NotImplementedError.
R11. WHEN the other value is not a FieldInstance, raise TypeError.
R12. WHEN nested `same_as` returns a non-boolean, reject the invalid contract.
R13. WHEN a scalar value changes from its parsed value, report it as modified; propagate nested Entry changes.
R14. WHEN otherwise equal FieldInstances have different source spans, treat their semantic values as equal.

CLOSED
- Values are independently authored and do not depend on distribution data.
- Reference fixtures use independent descriptor and data bytes.
- Nested equality fixtures use independent stand-in objects because Entry.same_as remains open.

Preconditions: tests create a Field from a minimal parsed descriptor row.
Failures are reported as assertion or unexpected exception failures.
"""

from types import SimpleNamespace

import pytest

from field import Field
from field_instance import FieldInstance
from file import File
from files import Files
from structure import Structure


def _field() -> Field:
    """Build one minimal field definition for runtime-value tests.

    Require: a valid field row is supplied.
    Guarantee: return a parsed Field definition.
    Maintain: fixture does not depend on sample files.
    Assert: the field has the expected name.
    """
    value, next_index = Field.from_lines(["Population\tt\tf\tf\t0"], 0, False)
    assert next_index == 1
    assert value.name == "Population"
    return value


def test_field_instance_tracks_scalar_and_nested_changes() -> None:
    scalar = FieldInstance(_field(), "original")
    nested_value = SimpleNamespace(has_changes=False)
    nested = FieldInstance(_field(), nested_value)

    assert not scalar.is_modified
    assert not nested.is_modified
    scalar.set_value("changed")
    nested_value.has_changes = True

    assert scalar.is_modified
    assert nested.is_modified
    scalar.set_value("original")
    nested_value.has_changes = False
    assert not scalar.is_modified
    assert not nested.is_modified


def test_source_span_does_not_change_field_instance_equality() -> None:
    field = _field()
    first = FieldInstance(field, "same", (0, 4))
    second = FieldInstance(field, "same", (8, 12))

    assert first == second


def _field_with_argument(argument_type: str) -> Field:
    value, next_index = Field.from_lines(
        ["Link\tt\tf\tf\t1", f"\t{argument_type}\tNONE"], 0, False
    )
    assert next_index == 2
    return value


class _Comparable:
    """Small nested-value stand-in that records the delegated comparison."""

    def __init__(self, result: bool) -> None:
        self.result = result
        self.compared_to: object = None

    def same_as(self, other: object) -> bool:
        self.compared_to = other
        return self.result


def _target_file(source: str = "target.ces", entry_name: str = "TARGET_ONE") -> File:
    descriptor = (
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n@\n"
    )
    structure = Structure.from_bytes(descriptor, source)
    return File.from_bytes(
        f"{entry_name} {{\n}}\n".encode(), structure, source=source.removesuffix(".ces") + ".txt"
    )


@pytest.mark.parametrize(
    "value,expected",
    [("Hello", "Hello"), (42, "42"), (3.5, "3.5"), (True, "True"), (None, "None")],
)
def test_field_instance_displays_scalar_values(value: object, expected: str) -> None:
    """Require varied scalar inputs; guarantee display strings; maintain value; assert field association."""
    instance = FieldInstance(_field(), value)

    assert instance.value_as_string == expected
    assert instance.value is value
    assert instance.field.name == "Population"


def test_field_instance_displays_named_object_and_retains_replacement() -> None:
    """Require an object with a name; guarantee name display and identity; maintain Field; assert replacement."""

    initial = SimpleNamespace(name="CityA")
    replacement = SimpleNamespace(name="CityB")
    instance = FieldInstance(_field(), initial)
    instance.set_value(replacement)

    assert instance.value is replacement
    assert instance.value_as_string == "CityB"
    assert instance.field.name == "Population"


@pytest.mark.parametrize(
    "left,right,expected",
    [("same", "same", True), ("same", "Same", False), (7, "7", True)],
)
def test_field_instance_same_as_compares_scalar_display_strings(
    left: object, right: object, expected: bool
) -> None:
    """Require varied scalar values; compare exact display text without mutation."""
    first = FieldInstance(_field_with_argument("0"), left)
    second = FieldInstance(_field_with_argument("0"), right)

    assert first.same_as(second) is expected
    assert first.value is left and second.value is right


@pytest.mark.parametrize(
    "left,right,expected",
    [("TARGET", "TARGET", True), ("TARGET", "target", False), ("A", "B", False)],
)
def test_field_instance_same_as_compares_reference_names_exactly(
    left: str, right: str, expected: bool
) -> None:
    """Require three named-object pairs; compare their display names exactly."""
    first_value = SimpleNamespace(name=left)
    second_value = SimpleNamespace(name=right)
    first = FieldInstance(_field_with_argument("target.ces"), first_value)
    second = FieldInstance(_field_with_argument("target.ces"), second_value)

    assert first.same_as(second) is expected
    assert first.value is first_value and second.value is second_value


@pytest.mark.parametrize("result", [True, False])
def test_field_instance_same_as_delegates_nested_values(result: bool) -> None:
    """Require type-2 stand-ins; delegate and preserve both value objects."""
    first_value = _Comparable(result)
    second_value = object()
    first = FieldInstance(_field_with_argument("*child.ces"), first_value)
    second = FieldInstance(_field_with_argument("*child.ces"), second_value)

    assert first.same_as(second) is result
    assert first_value.compared_to is second_value


def test_field_instance_same_as_defaults_no_argument_fields_to_scalar() -> None:
    """Require no-argument Fields; compare their display values as type 0."""
    first = FieldInstance(_field(), None)
    second = FieldInstance(_field(), None)

    assert first.same_as(second) is True


def test_field_instance_same_as_rejects_non_field_instance() -> None:
    """Require an invalid peer; guarantee explicit type failure."""
    with pytest.raises(TypeError, match="other must be a FieldInstance"):
        FieldInstance(_field(), "x").same_as(object())  # type: ignore[arg-type]


def test_field_instance_same_as_reports_missing_nested_comparison() -> None:
    """Require a type-2 raw string; report the unported Entry equality dependency."""
    first = FieldInstance(_field_with_argument("*child.ces"), "{\n}\n")
    second = FieldInstance(_field_with_argument("*child.ces"), "{\n}\n")

    with pytest.raises(NotImplementedError, match="requires its same_as implementation"):
        first.same_as(second)


def test_field_instance_same_as_rejects_non_boolean_nested_result() -> None:
    """Require a nested comparator with an invalid result; reject it explicitly."""
    value = SimpleNamespace(same_as=lambda other: "yes")
    first = FieldInstance(_field_with_argument("*child.ces"), value)
    second = FieldInstance(_field_with_argument("*child.ces"), object())

    with pytest.raises(TypeError, match="nested same_as implementation must return bool"):
        first.same_as(second)


def test_field_instance_displays_source_for_empty_name_entry() -> None:
    source = "{\n Child 7\n}"
    nested_entry = SimpleNamespace(name="", to_text=lambda: source)
    instance = FieldInstance(_field(), nested_entry)

    assert instance.value_as_string == source


@pytest.mark.parametrize(
    "argument_type,value",
    [("0", "27"), ("*target.ces", "{ Child 1 }"), ("0", 27)],
)
def test_value_to_object_preserves_scalar_and_nested_values(
    argument_type: str, value: object
) -> None:
    instance = FieldInstance(_field_with_argument(argument_type), value)

    assert instance.value_to_object(Files()) is value
    assert instance.value is value


def test_value_to_object_resolves_reference_to_entry_object() -> None:
    target_file = _target_file()
    files = Files()
    files.sneaky_add(target_file)
    instance = FieldInstance(_field_with_argument("target.ces"), "TARGET_ONE")

    resolved = instance.value_to_object(files)

    assert resolved is target_file.entries.item(1)
    assert instance.value is resolved
    assert instance.value_as_string == "TARGET_ONE"
    assert instance.value_to_object(files) is resolved


@pytest.mark.parametrize(
    "files,value,match",
    [
        ([], "TARGET_ONE", "target File is not loaded"),
        (["one", "two"], "TARGET_ONE", "target File is ambiguous"),
        (["one"], "MISSING", "target Entry is missing"),
    ],
)
def test_value_to_object_missing_or_ambiguous_target_keeps_raw_value(
    files: list[str], value: str, match: str
) -> None:
    registry = Files()
    for source in files:
        registry.sneaky_add(_target_file(f"{source}/target.ces" if source != "one" else "target.ces"))
    instance = FieldInstance(_field_with_argument("target.ces"), value)
    original = instance.value

    with pytest.raises(ValueError, match=match):
        instance.value_to_object(registry)

    assert instance.value is original

