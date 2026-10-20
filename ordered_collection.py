"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
APPEND | Preserve insertion order and optional normalized keys | [mandatory] | R1-R2
LOOKUP | Resolve one-based ordinals or string keys | [mandatory] | R3
COUNT | Expose size and iteration | [mandatory] | R4
REMOVE | Remove one item by ordinal or key and keep indexes aligned | [contract] | R5
MOVE | Change one-based item order and preserve key indexes | [contract] | R6

R1. WHEN an item is appended, add it exactly once at the end.
R2. WHEN a nonempty key repeats ignoring case, reject before mutation.
R3. WHEN an integer item key is used, interpret it as one-based.
R4. WHEN count or iteration is requested, reflect stored order and size.
R5. WHEN an integer or string key is removed, remove its item and update all later ordinal positions.
R6. WHEN Move receives existing one-based source and destination ordinals, move the item and keep all keyed lookups aligned; reject invalid ordinals before mutation.

CLOSED
- Empty keys are stored as unkeyed entries.
- Name, display-text, and identity lookups remain in concrete collections.

Preconditions: concrete wrappers validate item types and key types.
Failures: duplicate keys raise ValueError; absent keys and ordinals raise
KeyError or IndexError; invalid lookup types raise TypeError.
"""

from typing import Generic, Iterator, Optional, TypeVar, Union

T = TypeVar("T")
CollectionKey = Union[int, str]


class OrderedKeyedCollection(Generic[T]):
    """Store ordered items with optional case-insensitive string keys.

    Require: callers validate domain item types before adding.
    Guarantee: provide shared append, ordinal/key lookup, count, and iteration.
    Maintain: indexed keys and item positions remain synchronized after removal.
    Assert: duplicate keys cannot partially mutate state.
    """

    def __init__(self) -> None:
        """Initialize empty ordered storage and key index.

        Require: subclass construction has no item arguments.
        Guarantee: create empty item and key containers.
        Maintain: both containers begin synchronized.
        Assert: count is zero.
        """
        self._items: list[T] = []
        self._keys: dict[str, int] = {}
        assert not self._items and not self._keys

    def _append(self, value: T, key: Optional[str], duplicate_message: str) -> None:
        """Append an item with an optional key and duplicate error label.

        Require: caller has validated ``value`` and ``key`` types.
        Guarantee: append value and index a nonempty key.
        Maintain: empty keys remain unkeyed; duplicates leave state unchanged.
        Assert: successful addition increases count by one.
        """
        normalized_key = key.casefold() if key else None
        if normalized_key is not None and normalized_key in self._keys:
            raise ValueError(f"{duplicate_message}: {key}")
        previous_count = len(self._items)
        self._items.append(value)
        if normalized_key is not None:
            self._keys[normalized_key] = previous_count
        assert len(self._items) == previous_count + 1

    def item(self, key: CollectionKey) -> T:
        """Return an item by one-based ordinal or explicit string key.

        Require: ``key`` is an integer ordinal or string key.
        Guarantee: return the matching item without mutation.
        Maintain: integer positions are one-based and string keys ignore case.
        Assert: invalid types and missing items fail explicitly.
        """
        if isinstance(key, bool):
            raise TypeError("boolean is not a collection ordinal")
        if isinstance(key, int):
            if key < 1 or key > len(self._items):
                raise IndexError(f"collection ordinal out of range: {key}")
            return self._items[key - 1]
        if isinstance(key, str):
            return self._items[self._keys[key.casefold()]]
        raise TypeError("collection key must be an integer ordinal or string key")

    def remove(self, key: CollectionKey) -> T:
        """Remove and return one stored item by ordinal or key.

        Require: ``key`` is an existing one-based ordinal or explicit key.
        Guarantee: remove one item and return its object.
        Maintain: preserve remaining order and update all keyed positions.
        Assert: absent or invalid keys fail before mutation.
        """
        if isinstance(key, bool):
            raise TypeError("boolean is not a collection ordinal")
        if isinstance(key, int):
            if key < 1 or key > len(self._items):
                raise IndexError(f"collection ordinal out of range: {key}")
            index = key - 1
        elif isinstance(key, str):
            index = self._keys[key.casefold()]
        else:
            raise TypeError("collection key must be an integer ordinal or string key")

        removed = self._items.pop(index)
        for indexed_key, position in tuple(self._keys.items()):
            if position == index:
                del self._keys[indexed_key]
            elif position > index:
                self._keys[indexed_key] = position - 1
        assert all(0 <= position < len(self._items) for position in self._keys.values())
        return removed

    def move(self, source_ordinal: int, destination_ordinal: int) -> T:
        """Move one item to a one-based destination ordinal.

        Require: both ordinals identify stored items.
        Guarantee: return the moved object at the destination position.
        Maintain: all unaffected relative order and keyed lookups remain valid.
        Assert: count and object identity are unchanged.
        """
        for ordinal in (source_ordinal, destination_ordinal):
            if isinstance(ordinal, bool) or not isinstance(ordinal, int):
                raise TypeError("collection ordinals must be integers")
            if ordinal < 1 or ordinal > len(self._items):
                raise IndexError(f"collection ordinal out of range: {ordinal}")
        source_index = source_ordinal - 1
        destination_index = destination_ordinal - 1
        previous_count = len(self._items)
        value = self._items.pop(source_index)
        self._items.insert(destination_index, value)
        for normalized_key, position in tuple(self._keys.items()):
            if position == source_index:
                self._keys[normalized_key] = destination_index
            elif source_index < destination_index and source_index < position <= destination_index:
                self._keys[normalized_key] = position - 1
            elif destination_index < source_index and destination_index <= position < source_index:
                self._keys[normalized_key] = position + 1
        assert len(self._items) == previous_count
        assert all(0 <= position < len(self._items) for position in self._keys.values())
        assert self._items[destination_index] is value
        return value

    @property
    def count(self) -> int:
        """Return the current number of stored items.

        Require: collection has been initialized.
        Guarantee: return the current collection size.
        Maintain: do not expose mutable storage.
        Assert: result equals the number of iterable items.
        """
        return len(self._items)

    def __iter__(self) -> Iterator[T]:
        """Iterate stored items in insertion order.

        Require: collection has been initialized.
        Guarantee: yield each item once in insertion order.
        Maintain: do not change collection state.
        Assert: iteration length equals count.
        """
        return iter(self._items)

    def __len__(self) -> int:
        """Return the collection size for Python sequence conventions.

        Require: collection has been initialized.
        Guarantee: return the same value as ``count``.
        Maintain: do not change collection state.
        Assert: result is nonnegative.
        """
        return len(self._items)
