"""tests/test_entry_same_in_entries.py - Entry.same_in_entries behavior.

Spec: native Field.SameInEntries (06_Field.c 0x42de00, read 2026-10-16); no
governing .spec file. Basis: assembly trace recorded in plan.md.
Task: no governing task; ledger entry in plan.md ("Entry equality trace").

R1. WHEN a field allows multiple instances, equality is one-to-one pairing in any order.
R2. WHEN a single-instance field is absent in both Entries, it is equal.
R3. WHEN a single-instance field is present in only one Entry, it is unequal.
R4. WHEN both hold one instance, display strings must match exactly.
"""

import pytest

from entry import Entry
from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances


def _field(row: str) -> Field:
    value, _ = Field.from_lines([row], 0, False)
    return value


SINGLE = _field("Cost\tt\tf\tf\t0")
MULTI = _field("Prereq\tf\tf\tt\t0")


def _entry(*pairs: tuple[Field, str]) -> Entry:
    instances = FieldInstances()
    for field, value in pairs:
        instances.add(FieldInstance(field, value))
    return Entry(source="t", name="E", format=1, source_lines=(), field_instances=instances)


def test_fixture_flags() -> None:
    assert SINGLE.allows_multiple is False
    assert MULTI.allows_multiple is True


@pytest.mark.parametrize(
    ("left", "right", "expected"),
    [
        (["A", "B"], ["B", "A"], True),
        (["A", "B"], ["A", "C"], False),
        (["A", "A"], ["A", "B"], False),
        (["A"], ["A", "A"], False),
        ([], [], True),
    ],
)
def test_multiple_instances_pair_off_in_any_order(left, right, expected) -> None:
    first = _entry(*[(MULTI, v) for v in left])
    second = _entry(*[(MULTI, v) for v in right])
    assert first.same_in_entries(MULTI, second) is expected


@pytest.mark.parametrize(
    ("left", "right", "expected"),
    [
        ([], [], True),
        (["10"], [], False),
        ([], ["10"], False),
        (["10"], ["10"], True),
        (["10"], ["11"], False),
        (["10"], ["10 "], False),
    ],
)
def test_single_instance_presence_and_text(left, right, expected) -> None:
    first = _entry(*[(SINGLE, v) for v in left])
    second = _entry(*[(SINGLE, v) for v in right])
    assert first.same_in_entries(SINGLE, second) is expected


def test_other_fields_do_not_affect_result() -> None:
    first = _entry((SINGLE, "10"), (MULTI, "A"))
    second = _entry((SINGLE, "10"), (MULTI, "Z"))
    assert first.same_in_entries(SINGLE, second) is True
    assert first.same_in_entries(MULTI, second) is False


def test_rejects_non_entry() -> None:
    with pytest.raises(TypeError):
        _entry().same_in_entries(SINGLE, object())  # type: ignore[arg-type]
