"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Read descriptor lines from a parsed Structure | [mandatory] | R1
PARSE | Parse ordered field rows through the first `@` | [mandatory] | R1-R2
LOOKUP | Resolve fields by one-based position or case-insensitive name key | [mandatory] | R3
MUTATE | Append a uniquely named Field | [mandatory] | R4

R1. WHEN the structure format is 1 or 3, parse its field table in source order.
R2. WHEN the table ends at `@`, leave later structure metadata unconsumed.
R3. WHEN a field is looked up by key, compare its name without case; no-error name scans remain exact.
R4. WHEN a duplicate name is added ignoring case, fail without changing the collection.

CLOSED
- Formats 0 and 2 have no field table and produce an empty collection.
- Control-based lookups belong to the visual layer, not this data collection.

Preconditions: structures contain decoded descriptor lines and a supported
format. Failures: malformed fields raise ValueError; missing lookups raise
KeyError or IndexError according to lookup type.
"""

from typing import Optional

from field import Field
from ordered_collection import CollectionKey, OrderedKeyedCollection
from structure import Structure


class Fields(OrderedKeyedCollection[Field]):
    """An ordered, keyed collection of structure field definitions.

    Require: parsed values are added through ``add``.
    Guarantee: expose stable source order and name-based lookup.
    Maintain: field names remain unique and item positions are one-based.
    Assert: successful additions increase the collection count by one.
    """

    @classmethod
    def from_structure(cls, structure: Structure) -> "Fields":
        """Parse the format 1 or 3 field table from a structure.

        Require: ``structure`` retains the descriptor's decoded source lines.
        Guarantee: parse fields up to the first `@`, or return empty if absent.
        Maintain: preserve source order and do not consume later metadata.
        Assert: returned names are unique.
        """
        result = cls()
        if structure.format not in {1, 3}:
            return result

        lines = structure.source_lines
        index = structure.data_start_line
        while index < len(lines):
            content = lines[index].split("//", 1)[0].strip()
            if content.startswith("@"):
                break
            if not content:
                index += 1
                continue
            parsed, next_index = Field.from_lines(
                lines,
                index,
                bool(structure.has_field_formatting),
                structure.source,
            )
            result.add(parsed)
            index = next_index
        return result

    def add(self, value: Field) -> None:
        """Append a field if its name is not already present.

        Require: ``value`` is a parsed Field.
        Guarantee: append the field after all existing fields.
        Maintain: existing order and contents survive duplicate rejection.
        Assert: successful addition increases count by one.
        """
        if not isinstance(value, Field):
            raise TypeError("value must be a Field")
        self._append(value, value.name, "duplicate field name")

    def item_no_error(self, key: CollectionKey) -> Optional[Field]:
        """Return the matching field or None when a valid key is absent.

        Require: ``key`` is a field name or one-based ordinal.
        Guarantee: return None for absent valid keys.
        Maintain: string name comparisons remain exact.
        Assert: collection order remains unchanged.
        """
        if isinstance(key, str):
            return next((value for value in self._items if value.name == key), None)
        try:
            return self.item(key)
        except (KeyError, IndexError):
            return None
