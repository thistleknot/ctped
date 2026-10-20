"""tests/test_file_sort.py - File.sort_entries (original's binary insertion sort).

Spec: native sort loop 0x4752a0 and comparator 0x473f40, assembly read 2026-10-16; no governing
.spec file. Task: burndown item 3 in .tmp/plan.md. The comparison direction follows the argument
order read from the assembly and is NOT confirmed at runtime: these tests pin the algorithm as
read, so a runtime finding that flips the direction should flip the expectations here deliberately.

R1. WHEN sorting alphabetically or numerically, the result is monotone under the comparator.
R2. WHEN `reverse` is set, the result is the opposite direction.
R3. WHEN values tie, entries keep their relative order unless `reverse` is set, where the negated
    comparison (`>=`) puts a later tied entry before an earlier one (observed property of the loop as read).
R4. WHEN method is `file`, order follows the referenced positions; unknown positions sort last.
R5. WHEN the method is unknown or `file` lacks `reference_index`, fail explicitly.
"""

import pytest

from file import File
from structure import Structure
from test_file import _structure

_STRUCTURE = Structure.from_bytes(
    b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n3 // Format\nf\nFileName\tt\tt\tf\t1\n\t0\t\tNULL\n@\n",
    "sort-format-3.ces",
)
# A=10 B=9 C=100 D=2 E=10: alphabetical and numeric orders differ and A/E tie.
_DATA = b"A 10\nB 9\nC 100\nD 2\nE 10\n"


def _file() -> File:
    return File.from_bytes(_DATA, _STRUCTURE)


def _names(imported: File) -> list[str]:
    return [entry.name for entry in imported.entries]


@pytest.mark.parametrize(
    ("method", "reverse", "expected"),
    [
        ("num", False, ["C", "A", "E", "B", "D"]),
        ("num", True, ["D", "B", "E", "A", "C"]),
        ("alpha", False, ["B", "D", "C", "A", "E"]),
        ("alpha", True, ["E", "A", "C", "D", "B"]),
    ],
)
def test_sort_follows_assembly_direction_and_keeps_ties_in_order(method, reverse, expected) -> None:
    imported = _file()
    moved = imported.sort_entries("FileName", method, reverse)
    assert _names(imported) == expected
    assert moved > 0
    assert imported.entries.count == 5
    assert _names(File.from_bytes(imported.to_bytes(), _STRUCTURE)) == expected


def test_sort_by_referenced_file_position_puts_unknown_last() -> None:
    positions = {"A": 3, "B": 1, "C": None, "D": 2, "E": 0}
    imported = _file()
    imported.sort_entries("FileName", "file", False, lambda entry: positions[entry.name])
    assert _names(imported) == ["E", "B", "D", "A", "C"]


def test_sort_of_sorted_file_moves_nothing() -> None:
    imported = _file()
    imported.sort_entries("FileName", "num", False)
    assert imported.sort_entries("FileName", "num", False) == 0


def test_sort_rejects_unknown_method_and_missing_reference() -> None:
    imported = _file()
    with pytest.raises(ValueError):
        imported.sort_entries("FileName", "bogus")
    with pytest.raises(ValueError):
        imported.sort_entries("FileName", "file")


_PREREQ_FIELDS = b"Prereq\tf\tf\tt\t1\n\t0\t\tNULL\n@\n"
# A needs C, B needs nothing, C needs B, D needs A.
_PREREQ_DATA = b"A {\n Prereq C\n}\nB {\n}\nC {\n Prereq B\n}\nD {\n Prereq A\n}\n"


def _prereq_file() -> File:
    return File.from_bytes(_PREREQ_DATA, _structure(1, field_definitions=_PREREQ_FIELDS))


def _resolver(imported: File):
    return lambda instance: imported.entries.item_no_error(instance.value)


def test_sort_by_prerequisites_automatic_orders_each_after_its_prerequisites() -> None:
    """Automatic mode places prerequisites first and reparses to the same order."""
    imported = _prereq_file()
    structure = imported.structure
    moved = imported.sort_by_prerequisites("Prereq", _resolver(imported))
    assert _names(imported) == ["B", "C", "A", "D"]
    assert moved == 2
    assert imported.entries.count == 4
    assert _names(File.from_bytes(imported.to_bytes(), structure)) == ["B", "C", "A", "D"]


def test_sort_by_prerequisites_chooser_not_asked_when_single_candidate() -> None:
    """A recording chooser is never called when each position has one qualifying Entry."""
    imported = _prereq_file()
    asked: list[list[str]] = []

    def choose(candidates):
        asked.append([entry.name for entry in candidates])
        return candidates[0]

    imported.sort_by_prerequisites("Prereq", _resolver(imported), choose)
    assert _names(imported) == ["B", "C", "A", "D"]
    assert asked == []


def test_sort_by_prerequisites_chooser_picks_among_two_roots() -> None:
    """With two roots offered, the chooser's pick decides the order."""
    imported = File.from_bytes(
        b"A {\n}\nB {\n}\nC {\n Prereq A\n Prereq B\n}\n",
        _structure(1, field_definitions=_PREREQ_FIELDS),
    )
    asked: list[list[str]] = []

    def choose(candidates):
        asked.append([entry.name for entry in candidates])
        return next(entry for entry in candidates if entry.name == "B")

    imported.sort_by_prerequisites("Prereq", _resolver(imported), choose)
    assert _names(imported) == ["B", "A", "C"]
    assert asked == [["A", "B"]]


def test_sort_by_prerequisites_cycle_automatic_moves_nothing() -> None:
    """A prerequisite cycle leaves order unchanged in automatic mode."""
    imported = File.from_bytes(
        b"X {\n Prereq Y\n}\nY {\n Prereq X\n}\n",
        _structure(1, field_definitions=_PREREQ_FIELDS),
    )
    assert imported.sort_by_prerequisites("Prereq", _resolver(imported)) == 0
    assert _names(imported) == ["X", "Y"]


def test_sort_by_prerequisites_cycle_chooser_falls_back_to_all_entries() -> None:
    """In a cycle the chooser is offered all Entries and its pick is applied."""
    imported = File.from_bytes(
        b"X {\n Prereq Y\n}\nY {\n Prereq X\n}\n",
        _structure(1, field_definitions=_PREREQ_FIELDS),
    )
    asked: list[list[str]] = []

    def choose(candidates):
        asked.append([entry.name for entry in candidates])
        return candidates[1]

    imported.sort_by_prerequisites("Prereq", _resolver(imported), choose)
    assert asked == [["X", "Y"]]
    assert _names(imported) == ["Y", "X"]


def test_sort_by_prerequisites_empty_field_name_changes_nothing() -> None:
    """An empty field name sorts nothing and returns zero."""
    imported = _prereq_file()
    assert imported.sort_by_prerequisites("", _resolver(imported)) == 0
    assert _names(imported) == ["A", "B", "C", "D"]
