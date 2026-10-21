"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
CAPTURE | Build independent File snapshots | [mandatory] | file.py R29
MUTATE | Exercise scalar, record, and source-text changes | [mandatory] | file.py R29
RESTORE | Compare exact bytes and graph identities | [mandatory] | file.py R30-R31

R1. WHEN edits follow a snapshot, restore returns bytes to the snapshot moment.
R2. WHEN restoring, the Structure object is shared, not copied.
R3. WHEN edits follow a snapshot, the snapshot itself is unchanged by them.
R4. WHEN a sort or add happens after the snapshot, restore removes its effect.

CLOSED
- Fixtures use synthetic descriptors and data; restored bytes are the acceptance boundary.

Preconditions: File snapshots originate from the File being restored.
Failures: incorrect bytes or identities raise assertions.
"""

import pytest

from comment import Comment
from file import File
from structure import Structure

_STRUCTURE = Structure.from_bytes(
    b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n3 // Format\nf\nFileName\tt\tt\tf\t1\n\t0\t\tNULL\n@\n",
    "snapshot-format-3.ces",
)
_DATA = b"A 10\nB 9\nC 100\nD 2\nE 10\n"


def _file() -> File:
    """Require the synthetic descriptor; guarantee an independent editable File."""
    return File.from_bytes(_DATA, _STRUCTURE)


def test_restore_undoes_sort_add_and_remove() -> None:
    """Require captured source; guarantee structural edits restore exact bytes."""
    imported = _file()
    snap = imported.snapshot()
    imported.sort_entries("FileName", "alpha", True)
    imported.add_entry("Z")
    imported.entries.remove(1)
    assert imported.to_bytes() != _DATA
    imported.restore(snap)
    assert imported.to_bytes() == _DATA
    assert [entry.name for entry in imported.entries] == ["A", "B", "C", "D", "E"]


def test_restore_keeps_structure_identity_and_file_stays_editable() -> None:
    """Require a captured File; guarantee its schema and later edits remain usable."""
    imported = _file()
    snap = imported.snapshot()
    imported.move_entry(1, 3)
    imported.restore(snap)
    assert imported.structure is _STRUCTURE
    assert all(entry.format == _STRUCTURE.format for entry in imported.entries)
    imported.move_entry(1, 2)
    assert [entry.name for entry in imported.entries][:2] == ["B", "A"]


def test_two_snapshots_restore_independently_in_reverse_order() -> None:
    """Require two captured states; guarantee reverse restoration preserves both."""
    imported = _file()
    first = imported.snapshot()
    imported.move_entry(1, 3)
    after_move = imported.to_bytes()
    second = imported.snapshot()
    imported.entries.remove(1)
    imported.restore(second)
    assert imported.to_bytes() == after_move
    imported.restore(first)
    assert imported.to_bytes() == _DATA


@pytest.mark.parametrize("value", ["11", "0", "-7"])
def test_snapshot_restores_scalar_edits_and_comment_identity(value: str) -> None:
    """Require linked model objects; guarantee bytes and internal aliases restore."""
    imported = _file()
    entry = imported.entries.item(1)
    instance = entry.field_instances.item(1)
    imported.comments.add(Comment(entry, instance))
    snap = imported.snapshot()
    instance.set_value(value)
    assert imported.to_bytes() != _DATA
    imported.restore(snap)
    restored = imported.entries.item(1)
    assert imported.to_bytes() == _DATA
    assert restored is imported._original_entries[0]
    assert imported.comments.item(1).entry is restored
    assert imported.comments.item(1).field_instance is restored.field_instances.item(1)


@pytest.mark.parametrize("format_number", [0, 2])
@pytest.mark.parametrize("ending", [b"\n", b"\r\n", b"\r"])
def test_snapshot_restores_raw_text_bytes(format_number: int, ending: bytes) -> None:
    """Require raw data in varied formats; guarantee exact source restoration."""
    header = b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
    suffix = b"0 // Format\n" if format_number == 0 else b"2 // Format\ngl_str.txt\npath\n#\n%009\n"
    structure = Structure.from_bytes(header + suffix, "raw.ces")
    original = b"FIRST 10" + ending + b"SECOND 20" + ending
    imported = File.from_bytes(original, structure)
    snap = imported.snapshot()
    imported.set_raw_text("changed\n")
    assert imported.to_bytes() != original
    imported.restore(snap)
    assert imported.to_bytes() == original
    assert imported.structure is structure
