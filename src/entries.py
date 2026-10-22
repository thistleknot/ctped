"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
ADD | Create an empty Entry from Structure and name | [mandatory] | R1-R2
SNEAKY_ADD | Insert an existing Entry keyed by its name | [mandatory] | R3-R4
IMPORT_DUPLICATES | Retain duplicate source names in ordered storage with private keys | [mandatory] | R11
LOOKUP | Resolve ordinal, keyed, name, and identity requests | [mandatory] | R5-R8
COUNT | Report the number of entries | [mandatory] | R8
REMOVE | Remove an Entry by its Collection key or one-based ordinal | [mandatory] | R9
MOVE | Reorder existing Entries while retaining identity and name keys | [mandatory] | R10

R1. WHEN Add receives a format-1/3 Structure and name, create an empty Entry
    linked to that Structure; default FieldInstances are populated by the
    owning File operation, not by this collection factory.
R2. WHEN Add succeeds, append and return the new Entry, keyed by its nonempty name.
R3. WHEN SneakyAdd receives an Entry, append and return that same object.
R4. WHEN SneakyAdd receives a nonempty Entry name, use it as the case-insensitive Collection key; empty names are unkeyed.
R5. WHEN Item receives an integer, use a one-based ordinal.
R6. WHEN ItemByName receives text, return the first exact Entry.name match.
R7. WHEN IndexOf receives an Entry object, compare by identity.
R8. WHEN Count is requested, return the number of stored entries.
R9. WHEN Remove receives an existing string key or one-based ordinal, remove that Entry from ordered storage and reindex later keys; WHEN the key is absent, propagate the collection lookup error.
R10. WHEN Entries.Move receives existing one-based ordinals, move the same Entry to the requested position; preserve object identity and keyed lookups.
R11. WHEN duplicate names occur in imported data, retain every Entry in source order under a private synthetic collection key; WHEN explicitly adding generated Entries, continue rejecting duplicate names.

CLOSED
- Empty names are treated as absent keys, following both recovered Add branches.
- Generated duplicate names fail before mutation; imported source duplicates are preserved because sample sounds.txt and uniticon.txt contain duplicate names.
- Remove forwards its supplied key to the backing Collection.Remove; Python inherits the shared ordered-collection implementation.
- Name lookup uses exact Entry.name because vtable method mappings are estimated.

Preconditions: Add receives a format-1/3 Structure and string name; SneakyAdd
receives an Entry.
Failures: duplicate keys raise ValueError; missing keyed or ordinal lookups
raise KeyError or IndexError; invalid argument types raise TypeError.
"""

from typing import Optional

from entry import Entry
from ordered_collection import CollectionKey, OrderedKeyedCollection
from structure import Structure

class Entries(OrderedKeyedCollection[Entry]):
    """An ordered collection of Entries with name-based Collection keys.

    Require: Add receives a format 1/3 Structure and string name; SneakyAdd
    receives an Entry.
    Guarantee: expose the recovered factory and existing-object insertion paths.
    Maintain: generated names are unique; imported duplicates retain order; ordinals are one-based.
    Assert: generated duplicate names leave order and count unchanged.
    """

    def add(self, structure: Structure, name: str) -> Entry:
        """Create and append a default Entry using its Structure and name.

        Require: ``structure`` is a format-1/3 Structure and ``name`` is text.
        Guarantee: return the new Entry linked to that Structure and name,
        with an empty FieldInstances collection.
        Maintain: append in order and key nonempty names case-insensitively.
        Assert: a duplicate name fails before changing collection state.
        """
        if not isinstance(structure, Structure):
            raise TypeError("structure must be a Structure")
        if structure.format not in {1, 3}:
            raise ValueError("Entry Structure format must be 1 or 3")
        if not isinstance(name, str):
            raise TypeError("name must be a string")
        value = Entry(
            source=structure.source,
            name=name,
            format=structure.format,
            source_lines=(),
            structure=structure,
        )
        self._append(value, name, "duplicate entry key")
        assert value.structure is structure and value.name == name
        return value

    def sneaky_add(self, value: Entry) -> Entry:
        """Append and return an existing Entry, keyed by its nonempty name.

        Require: ``value`` is a parsed or nested Entry.
        Guarantee: store and return that exact object, including duplicate names.
        Maintain: first occurrence keeps the natural key; later occurrences use private keys.
        Assert: order and count increase by one.
        """
        if not isinstance(value, Entry):
            raise TypeError("value must be an Entry")
        key = value.name
        if key and any(item.name.casefold() == key.casefold() for item in self._items):
            key = f"{key}\x00{len(self._items) + 1}"
        self._append(value, key, "duplicate entry key")
        assert self._items[-1] is value
        return value

    def item(self, key: CollectionKey) -> Entry:
        """Return an entry by one-based ordinal or explicit string key.

        Require: ``key`` is an integer ordinal or string key.
        Guarantee: return the matching Entry without mutation.
        Maintain: ordinal lookup follows VB Collection's one-based convention.
        Assert: unsupported key types fail explicitly.
        """
        return super().item(key)

    def item_by_name(self, name: str) -> Optional[Entry]:
        """Return the first entry whose parsed name exactly matches.

        Require: ``name`` is a string entry name.
        Guarantee: return the first exact name match, or None if absent.
        Maintain: preserve insertion order and compare names exactly.
        Assert: a returned Entry has the requested name.
        """
        if not isinstance(name, str):
            raise TypeError("name must be a string")
        return next((value for value in self._items if value.name == name), None)

    def item_no_error(self, name: str) -> Optional[Entry]:
        """Return the first exact name match or None.

        Require: ``name`` is a string entry name.
        Guarantee: return None instead of raising when no name matches.
        Maintain: preserve insertion order and collection contents.
        Assert: result is either Entry or None.
        """
        return self.item_by_name(name)

    def index_of(self, value: Entry) -> Optional[int]:
        """Return the one-based position of an Entry by object identity.

        Require: ``value`` is an Entry.
        Guarantee: return its one-based position, or None when absent.
        Maintain: do not use value equality to match entries.
        Assert: a returned ordinal resolves to ``value`` by identity.
        """
        if not isinstance(value, Entry):
            raise TypeError("value must be an Entry")
        for index, candidate in enumerate(self._items, start=1):
            if candidate is value:
                return index
        return None

