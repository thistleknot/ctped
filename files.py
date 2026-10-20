"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
SNEAKY_ADD | Insert an existing File with its optional explicit key | [mandatory] | R1-R2
LOOKUP | Resolve one-based ordinals, optional keys, and exact data-source names | [mandatory] | R3-R5
COUNT | Expose collection size and iteration | [mandatory] | R6

R1. WHEN SneakyAdd receives an existing File, append that same object in source order.
R2. WHEN a nonempty explicit key repeats ignoring case, reject before mutation.
R3. WHEN Item receives an integer, interpret it as a one-based ordinal.
R4. WHEN ItemNoError receives a valid missing key or ordinal, return None.
R5. WHEN ItemByDataSource receives a filename, return the first exact match.
R6. WHEN Count or iteration is requested, reflect the stored Files.

CLOSED
- `Files.Add` constructs a FileReference, but its setter slots and 16-bit
  argument meanings remain unmapped; this wrapper only ports existing-object
  SneakyAdd.
- Data-source lookup compares the stored `data_source.file_name` string; the
  member mapping remains inferred from the estimated C call shape.
- Boolean ordinal keys are rejected rather than treated as integers.

Preconditions: additions are File objects; explicit keys and filenames are
strings. Failures: duplicate keys raise ValueError; strict missing lookups
raise KeyError or IndexError; invalid argument types raise TypeError.
"""

from typing import Optional

from file import File
from ordered_collection import CollectionKey, OrderedKeyedCollection


class Files(OrderedKeyedCollection[File]):
    """Store project Files with ordinal, key, and source-name lookups.

    Require: SneakyAdd receives an imported File model.
    Guarantee: expose the recovered existing-object insertion and lookup paths.
    Maintain: string keys are unique without regard to case.
    Assert: count equals the number of iterable Files.
    """

    def sneaky_add(self, value: File, key: Optional[str] = None) -> File:
        """Append and return an existing File, optionally keyed by explicit text.

        Require: ``value`` is File; ``key`` is None or a string.
        Guarantee: store and return that exact File object.
        Maintain: duplicate-key rejection leaves the collection unchanged.
        Assert: successful addition increases count by one and retains identity.
        """
        if not isinstance(value, File):
            raise TypeError("value must be a File")
        if key is not None and not isinstance(key, str):
            raise TypeError("key must be a string or None")
        self._append(value, key, "duplicate file key")
        assert self._items[-1] is value
        return value

    def item(self, key: CollectionKey) -> File:
        """Return a File by one-based ordinal or explicit key.

        Require: ``key`` is an integer ordinal or string key.
        Guarantee: return its stored File.
        Maintain: use shared one-based and case-insensitive key behavior.
        Assert: invalid keys fail explicitly.
        """
        return super().item(key)

    def item_no_error(self, key: CollectionKey) -> Optional[File]:
        """Return a File for a valid key or ordinal, else None.

        Require: ``key`` is a string key or integer ordinal.
        Guarantee: return None when a valid lookup is absent.
        Maintain: do not change collection state.
        Assert: invalid key types still fail explicitly.
        """
        try:
            return self.item(key)
        except (KeyError, IndexError):
            return None

    def item_by_data_source(self, file_name: str) -> Optional[File]:
        """Find the first File whose data source has an exact filename.

        Require: ``file_name`` is the requested data-source filename.
        Guarantee: return the first matching File, or None.
        Maintain: compare strings exactly and preserve insertion order.
        Assert: returned File exposes the requested source filename.
        """
        if not isinstance(file_name, str):
            raise TypeError("file_name must be a string")
        for value in self._items:
            data_source = value.data_source
            if data_source is None:
                continue
            candidate = getattr(data_source, "file_name", None)
            if candidate is not None and str(candidate) == file_name:
                return value
        return None
