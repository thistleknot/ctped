"""tests/test_entry_same_as.py - Entry.gl_text and Entry.same_as behavior.

Spec: native Entry.SameAs (05_Entry.c 0x42b360) with Field.SameInEntries
(06_Field.c 0x42de00) and CTPProject.ImportGLNames (0x427970); no governing
.spec file. Basis: plan.md "Entry equality" and "BURNDOWN".
Task: no governing task; burndown item 1 in .tmp/plan.md.

R1. WHEN a GL table is supplied, an Entry's GL name is the display text for its
    name and its article is the display text for name + the Structure's article
    suffix; absent keys, no table or no suffix give empty text.
R2. WHEN name, GL name or article differ, Entries are unequal.
R3. WHEN those match, every Structure field must compare equal.
R4. WHEN the Structure is missing, reject the comparison.
"""

import pytest

from entry import Entry
from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances
from gl_strings import GLStringTable
from structure import Structure

_HEADER = b"""0.3 // Version
#%047%047
%032%009
:
}{
1 // Format
f // entry count
f // tree
t // GL references
t // GL strings
ARTICLEFLAG // article
f // icon file
f // field formatting
Cost\tf\tf\tf\t1
\t0\t\tCost
Prereq\tf\tf\tt\t1
\t0\t\tPrereq
@ // end fields
@ // end cross references
Cost // GL icon field
DATABASE_UNITS // GL database
UNIT_ // GL prefix
"""
_WITH_ARTICLE = Structure.from_bytes(
    _HEADER.replace(b"ARTICLEFLAG", b"t") + b"_ARTICLE // article suffix\n", "same-as.ces"
)
_NO_ARTICLE = Structure.from_bytes(_HEADER.replace(b"ARTICLEFLAG", b"f"), "same-as-plain.ces")

_PLAIN = Structure.from_bytes(b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n", "plain.ces")

_TABLE = GLStringTable.from_bytes(
    b'UNIT_AXE\t"Battle Axe"\n'
    b'UNIT_AXE_ARTICLE\t"an "\n'
    b'UNIT_SWORD\t"Sword"\n'
    b'UNIT_SWORD_ARTICLE\t""\n'
    b'UNIT_BARE\t"Bare"\n',
    "gl_str.txt",
)


def _field(name: str) -> Field:
    row = f"{name}\tf\tf\t{'t' if name == 'Prereq' else 'f'}\t1"
    value, _ = Field.from_lines([row, "\t0\t\tx"], 0, False)
    return value


def _entry(
    name: str = "UNIT_AXE",
    cost: list[str] | None = None,
    prereq: list[str] | None = None,
    structure: Structure | None = _WITH_ARTICLE,
) -> Entry:
    instances = FieldInstances()
    for value in cost or []:
        instances.add(FieldInstance(_field("Cost"), value))
    for value in prereq or []:
        instances.add(FieldInstance(_field("Prereq"), value))
    return Entry(
        source="t",
        name=name,
        format=1,
        source_lines=(),
        field_instances=instances,
        structure=structure,
    )


def test_structure_fixtures_carry_the_article_suffix() -> None:
    assert _WITH_ARTICLE.gl_article_suffix == "_ARTICLE"
    assert _NO_ARTICLE.gl_article_suffix is None


@pytest.mark.parametrize(
    ("name", "structure", "table", "expected"),
    [
        ("UNIT_AXE", _WITH_ARTICLE, _TABLE, ("Battle Axe", "an ")),
        ("UNIT_SWORD", _WITH_ARTICLE, _TABLE, ("Sword", "")),
        ("UNIT_BARE", _WITH_ARTICLE, _TABLE, ("Bare", "")),
        ("UNIT_MISSING", _WITH_ARTICLE, _TABLE, ("UNIT_MISSING", "")),
        ("UNIT_AXE", _PLAIN, _TABLE, ("", "")),
        ("UNIT_AXE", _NO_ARTICLE, _TABLE, ("Battle Axe", "")),
        ("UNIT_AXE", _WITH_ARTICLE, None, ("", "")),
    ],
)
def test_gl_text_reads_name_and_article_from_the_table(name, structure, table, expected) -> None:
    assert _entry(name=name, structure=structure).gl_text(table) == expected


def test_identical_entries_are_equal() -> None:
    first = _entry(cost=["5"], prereq=["P", "Q"])
    second = _entry(cost=["5"], prereq=["Q", "P"])
    assert first.same_as(second, _TABLE) is True
    assert first.same_as(second) is True


@pytest.mark.parametrize(
    "other",
    [
        {"name": "UNIT_SWORD"},
        {"cost": ["6"]},
        {"prereq": ["Q"]},
    ],
)
def test_any_single_difference_makes_entries_unequal(other: dict) -> None:
    base = {"name": "UNIT_AXE", "cost": ["5"], "prereq": ["P"]}
    assert _entry(**base).same_as(_entry(**{**base, **other}), _TABLE) is False


def test_gl_text_alone_distinguishes_entries_that_share_a_name_shape() -> None:
    # Different names but the same table text would be equal only if names matched;
    # here GL name differs while article and fields match: UNIT_SWORD vs UNIT_BARE.
    first = _entry(name="UNIT_SWORD", cost=["5"])
    second = _entry(name="UNIT_BARE", cost=["5"])
    assert first.same_as(second, _TABLE) is False
    assert first.gl_text(_TABLE)[1] == second.gl_text(_TABLE)[1] == ""


def test_rejects_non_entry_and_missing_structure() -> None:
    with pytest.raises(TypeError):
        _entry().same_as(object())  # type: ignore[arg-type]
    bare = Entry(source="t", name="A", format=1, source_lines=())
    with pytest.raises(ValueError):
        bare.same_as(_entry())
