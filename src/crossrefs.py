"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Locate the tree cross-reference section in Structure source rows | [mandatory] | R1-R2
PARSE | Capture rows through the terminating `@` | [mandatory] | R2-R3
STORE | Preserve order and index tag tokens case-insensitively | [mandatory] | R4-R5
MUTATE | Remove one reference or clear the collection | [mandatory] | R6-R7

R1. WHEN the Structure has no tree metadata, return an empty collection.
R2. WHEN tree metadata is present, locate the field table and reference table.
R3. WHEN a reference row is read, require its CrossRef grammar.
R4. WHEN a CrossRef is added, append it in source order.
R5. WHEN a tag repeats ignoring case, reject before mutation.
R6. WHEN Remove receives a one-based ordinal or tag key, remove one item.
R7. WHEN Clear is called, remove all rows and all tag keys.

CLOSED
- The first nonblank row in the section is descriptive metadata, not a ref.
- Tags retain their parenthesized spelling; key lookup ignores case.
- File/Field target resolution remains with CTPProject.

Preconditions: Structure source lines are decoded and have a supported format.
Failures: missing section terminators and malformed rows raise ValueError;
duplicate tags raise ValueError; absent strict lookups raise KeyError/IndexError.
"""

from typing import Optional

from crossref import CrossRef
from ordered_collection import CollectionKey, OrderedKeyedCollection
from structure import Structure


class CrossRefs(OrderedKeyedCollection[CrossRef]):
    """Store parsed tree references by tag key in source order.

    Require: additions are CrossRef objects.
    Guarantee: expose ordered lookup, remove, clear, and count operations.
    Maintain: case-insensitive tags remain unique and synchronized with order.
    Assert: key and item counts remain equal after mutations.
    """

    @classmethod
    def from_structure(cls, structure: Structure) -> "CrossRefs":
        """Parse the tree cross-reference table from a Structure.

        Require: ``structure`` retains all decoded descriptor lines.
        Guarantee: parse references through the second `@`, or return empty
        when tree structure is disabled.
        Maintain: preserve declaration order and skip comments/blank lines.
        Assert: each parsed tag is unique.
        """
        result = cls()
        if not structure.has_tree_structure:
            return result
        lines = structure.source_lines
        field_end = next(
            (
                index
                for index in range(structure.data_start_line, len(lines))
                if lines[index].split("//", 1)[0].strip().startswith("@")
            ),
            None,
        )
        if field_end is None:
            raise ValueError(f"{structure.source}: missing field-table terminator")
        section_end = next(
            (
                index
                for index in range(field_end + 1, len(lines))
                if lines[index].split("//", 1)[0].strip().startswith("@")
            ),
            None,
        )
        if section_end is None:
            raise ValueError(f"{structure.source}: missing cross-reference terminator")

        section = lines[field_end + 1 : section_end]
        header_seen = False
        row_started = False
        for index, line in enumerate(section, start=field_end + 2):
            content = line.split("//", 1)[0].strip()
            if not content:
                continue
            if content.startswith("("):
                result.add(CrossRef.from_line(line, structure.source, index + 1))
                row_started = True
            elif not header_seen and not row_started:
                header_seen = True
            else:
                raise ValueError(
                    f"{structure.source}:{index + 1}: unexpected text in cross-reference table"
                )
        return result

    def add(self, value: CrossRef) -> None:
        """Append a CrossRef under its tag token.

        Require: ``value`` is a CrossRef.
        Guarantee: append it and make its tag available as a key.
        Maintain: duplicate tags leave order and key index unchanged.
        Assert: successful addition increases count by one.
        """
        if not isinstance(value, CrossRef):
            raise TypeError("value must be a CrossRef")
        self._append(value, value.tag_string, "duplicate cross-reference tag")

    def item(self, key: CollectionKey) -> CrossRef:
        """Return a reference by one-based ordinal or tag key.

        Require: ``key`` is an integer ordinal or string tag.
        Guarantee: return its CrossRef.
        Maintain: tag keys ignore case while ordinals stay one-based.
        Assert: unsupported and missing keys fail explicitly.
        """
        if isinstance(key, bool):
            raise TypeError("boolean is not a cross-reference ordinal")
        if isinstance(key, int):
            if key < 1 or key > self.count:
                raise IndexError(f"cross-reference ordinal out of range: {key}")
            return self._items[key - 1]
        if isinstance(key, str):
            return super().item(key)
        raise TypeError("cross-reference key must be an integer or string")

    def remove(self, key: CollectionKey) -> None:
        """Remove one CrossRef by one-based ordinal or tag key.

        Require: ``key`` identifies a stored CrossRef.
        Guarantee: remove that item and its normalized tag index.
        Maintain: preserve the relative order of remaining references.
        Assert: item and key counts remain synchronized.
        """
        target = self.item(key)
        index = next(i for i, value in enumerate(self._items) if value is target)
        self._items.pop(index)
        del self._keys[target.tag_string.casefold()]
        assert len(self._items) == len(self._keys)

    def clear(self) -> None:
        """Remove every CrossRef and tag key.

        Require: collection is initialized.
        Guarantee: expose an empty collection.
        Maintain: no stale tag keys remain.
        Assert: item and key counts are zero.
        """
        self._items.clear()
        self._keys.clear()
        assert self.count == 0 and not self._keys

    def item_no_error(self, key: CollectionKey) -> Optional[CrossRef]:
        """Return a reference for an absent-safe ordinal or exact tag lookup.

        Require: ``key`` is a string tag or integer ordinal.
        Guarantee: return None when the requested item is absent.
        Maintain: invalid key types remain explicit errors.
        Assert: collection state is unchanged.
        """
        try:
            return self.item(key)
        except (KeyError, IndexError):
            return None
