"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independent Entries and scalar descriptors | [mandatory] | R1
PARSE | Exercise arithmetic, ternaries, lookup calls, and Math functions | [mandatory] | R2-R4
PREVIEW | Confirm formula previews retain source values | [mandatory] | R5-R6
APPLY | Verify selected and cross-file values apply atomically | [mandatory] | R6-R8
PROGRESS | Verify optional traversal callbacks complete for varied operations | [mandatory] | R9
REJECT | Reject unsafe syntax and invalid resolutions without mutation | [mandatory] | R2,R7-R8

R1. WHEN fixtures are built, vary Entry names, scalar values, and reference keys independently of shipped game data.
R2. WHEN expressions are tested, include arithmetic, conditionals, nested access, supported calls, and rejected executable syntax.
R3. WHEN a formula is previewed, return expected `(Entry, old, new)` values and retain original model values.
R4. WHEN same-File lookups are used, read pre-edit target values, including the target Entry itself.
R5. WHEN a resolver provides another File's scalar, use that source value without mutation.
R6. WHEN selected ordinals are supplied, apply only those planned values.
R7. WHEN any Entry or project lookup fails, leave all batch values unchanged.
R8. WHEN a formula result is not a finite number, reject it before model mutation.
R9. WHEN an optional progress callback is supplied, report monotonic processed Entry counts from zero through total for simple and formula operations; with no callback, preserve silent model behavior.

CLOSED
- Tests use the safe expression subset; they do not claim full ECMAScript runtime conformance.
- A single batch reads source snapshots, so computed outputs are never chained recursively.

Preconditions: Python 3.10 and the repository's model modules are available.
Failures: assertion mismatches or unexpected parser exceptions fail the suite.
"""

import pytest

from file import File
from structure import Structure


def _file(source: bytes) -> File:
    """Build an independent format-1 fixture with scalar and reference fields.

    Require: ``source`` contains records matching the independent schema.
    Guarantee: return an editable File with Value, Other, and Target fields.
    Maintain: fixture content is independent of shipped game samples.
    Assert: parsed Structure uses format 1.
    """
    descriptor = (
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Value\tf\tf\tf\t1\n\t0\t\t0\n"
        b"Other\tf\tf\tf\t1\n\t0\t\t0\n"
        b"Target\tf\tf\tf\t1\n\tadvance.ces\t\tNONE\n@\n"
    )
    structure = Structure.from_bytes(descriptor, "formula-fixture.ces")
    assert structure.format == 1
    return File.from_bytes(source, structure, source="formula-fixture.txt")


def test_formula_preview_and_apply_use_pre_edit_entry_values() -> None:
    """Require multiple Entries; prove preview and apply use source snapshots."""
    source = (
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
        b"C {\n Value 2\n Other 1\n Target ADV_C\n}\n"
    )
    data_file = _file(source)

    preview = data_file.preview_mass_formula(
        "Value", 'value + entryAt("B", "Value")'
    )

    assert preview == (
        (1, "A", "3", "11"),
        (2, "B", "8", "16"),
        (3, "C", "2", "10"),
    )
    assert data_file.to_bytes() == source
    assert data_file.mass_modify(
        "Value",
        "formula",
        'value + entryAt("B", "Value")',
        entry_ordinals=(1, 3),
    ) == 2
    assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
        "11",
        "8",
        "10",
    ]


@pytest.mark.parametrize(
    "operation,operand",
    [
        ("set", "12"),
        ("add", "2"),
        ("formula", "value + 2"),
    ],
)
def test_mass_modify_progress_callback_reports_all_entries(
    operation: str, operand: str
) -> None:
    """Verify progress reaches the batch total for varied operations.

    Require: three independent scalar Entries and one valid operation.
    Guarantee: callback reports every traversed Entry in order.
    Maintain: the callback observes progress without controlling mutation.
    Assert: updates begin at zero, are monotonic, and finish at three.
    """
    data_file = _file(
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
        b"C {\n Value 2\n Other 1\n Target ADV_C\n}\n"
    )
    updates: list[tuple[int, int]] = []

    assert data_file.mass_modify(
        "Value", operation, operand, progress_callback=lambda done, total: updates.append((done, total))
    ) == 3
    assert updates[0] == (0, 3)
    assert updates[-1] == (3, 3)
    assert [done for done, _total in updates] == sorted(
        done for done, _total in updates
    )
    assert all(total == 3 for _done, total in updates)


@pytest.mark.parametrize(
    "expression,expected",
    [
        ("value * 1.5", ("4.5", "12", "3")),
        ("value + entry.Other", ("7", "10", "3")),
        (
            "value > 5 ? Math.max(value, 10) : Math.ceil(value / 2)",
            ("2", "10", "1"),
        ),
    ],
)
def test_formula_supports_scalar_ecmascript_expressions(
    expression: str, expected: tuple[str, str, str]
) -> None:
    """Require three formula shapes; verify each output across varied values."""
    data_file = _file(
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
        b"C {\n Value 2\n Other 1\n Target ADV_C\n}\n"
    )

    assert data_file.mass_modify("Value", "formula", expression) == 3
    assert tuple(
        entry.field_instances.item(1).value for entry in data_file.entries
    ) == expected


def test_formula_reads_project_reference_values_without_changing_target_file() -> None:
    """Require two reference keys; verify resolved values affect only the source File."""
    data_file = _file(
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
    )
    target_values = {"ADV_A": "7", "ADV_B": "12"}
    source_before = data_file.to_bytes()
    calls: list[tuple[str, str, str]] = []

    def resolve(structure_file: str, entry_name: str, field_path: str) -> object:
        calls.append((structure_file, entry_name, field_path))
        return target_values[entry_name]

    assert data_file.mass_modify(
        "Value",
        "formula",
        'value + ref("advance.ces", entry.Target, "Cost")',
        reference_resolver=resolve,
    ) == 2
    assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
        "10",
        "20",
    ]
    assert calls == [
        ("advance.ces", "ADV_A", "Cost"),
        ("advance.ces", "ADV_B", "Cost"),
    ]
    assert source_before != data_file.to_bytes()
    assert target_values == {"ADV_A": "7", "ADV_B": "12"}


def test_formula_indexes_repeated_fields_and_edits_one_occurrence_dimension() -> None:
    descriptor = (
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Value\tf\tf\tt\t1\n\t0\t\t0\n@\n"
    )
    structure = Structure.from_bytes(descriptor, "repeated-formula.ces")
    data_file = File.from_bytes(
        b"A {\n Value 3\n Value 8\n}\nB {\n Value 4\n Value 9\n}\n",
        structure,
        source="repeated-formula.txt",
    )

    assert data_file.mass_modify(
        "Value[2]", "formula", "value + entry.Value[0]"
    ) == 2
    assert [
        tuple(instance.value for instance in entry.field_instances)
        for entry in data_file.entries
    ] == [("3", "11"), ("4", "13")]


def test_formula_resolution_failure_after_a_valid_entry_is_atomic() -> None:
    """Require a late resolver failure; prove earlier planned values are not applied."""
    source = (
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
    )
    data_file = _file(source)

    def resolve(_structure_file: str, entry_name: str, _field_path: str) -> object:
        if entry_name == "ADV_A":
            return "7"
        raise ValueError("target is missing")

    with pytest.raises(ValueError, match="target is missing"):
        data_file.mass_modify(
            "Value",
            "formula",
            'value + ref("advance.ces", entry.Target, "Cost")',
            reference_resolver=resolve,
        )

    assert data_file.to_bytes() == source


@pytest.mark.parametrize(
    "expression,message",
    [
        ("value = 3", "unsupported formula character"),
        ("process.exit()", "unknown formula name"),
        ("1 / 0", "formula failed"),
        ("Math.sqrt(-1)", "formula failed"),
    ],
)
def test_invalid_formula_keeps_every_entry_unchanged(
    expression: str, message: str
) -> None:
    """Require invalid expressions; verify all source Entry bytes remain unchanged."""
    source = (
        b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n"
        b"B {\n Value 8\n Other 2\n Target ADV_B\n}\n"
    )
    data_file = _file(source)

    with pytest.raises(ValueError, match=message):
        data_file.mass_modify("Value", "formula", expression)

    assert data_file.to_bytes() == source


def test_formula_requires_project_context_for_ref() -> None:
    """Require no project resolver; reject cross-File syntax before mutation."""
    data_file = _file(b"A {\n Value 3\n Other 4\n Target ADV_A\n}\n")

    with pytest.raises(ValueError, match="project is loaded"):
        data_file.mass_modify(
            "Value", "formula", 'ref("advance.ces", "ADV_A", "Cost")'
        )

    assert data_file.entries.item(1).field_instances.item(1).value == "3"
