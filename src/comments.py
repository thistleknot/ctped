"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
STORE | Keep Comment associations in insertion order | [mandatory] | R1
KEY | Retain optional unique case-insensitive string keys | [mandatory] | R2
LOOKUP | Resolve ordinal, key, or target-object identity | [mandatory] | R3-R4
MUTATE | Remove a Comment by ordinal or key | [mandatory] | R5
COUNT | Expose association count and iteration | [mandatory] | R6

R1. WHEN a Comment is added, append it once in insertion order.
R2. WHEN a nonempty key duplicates an existing key ignoring case, reject without mutation.
R3. WHEN Item receives an integer or string, use one-based ordinal or case-insensitive key.
R4. WHEN ItemByObject receives an object, compare Entry and FieldInstance by identity.
R5. WHEN Remove receives a valid ordinal or key, remove exactly that association and preserve remaining order.
R6. WHEN Count or iteration is requested, reflect current associations.

CLOSED
- CommentByObject remains open because its exact return contract is unresolved.
- Clear is a Python utility and is not claimed as recovered public behavior.
- Source comment text is not stored here; File source bytes remain authoritative.

Preconditions: additions are Comment objects; optional keys are strings;
object searches are Entry or FieldInstance values. Failures: duplicate keys
raise ValueError; absent ordinals raise IndexError; absent keys raise KeyError.
"""

from typing import Optional

from comment import Comment
from entry import Entry
from field_instance import FieldInstance
from ordered_collection import CollectionKey, OrderedKeyedCollection


class Comments(OrderedKeyedCollection[Comment]):
    """Store Comment associations and find them by target identity.

        Require: additions are Comment instances with optional unique string keys.
        Guarantee: expose ordered, keyed, ordinal, and object-identity operations.
        Maintain: duplicate unkeyed associations may coexist in insertion order.
    Assert: count equals the number of iterable comments.
    """

    def __init__(self) -> None:
        """Initialize an empty association list.

        Require: no constructor arguments.
        Guarantee: expose zero comments.
        Maintain: start with no hidden key index.
        Assert: count begins at zero.
        """
        super().__init__()
        assert self.count == 0

    def add(self, value: Comment, key: Optional[str] = None) -> None:
        """Append one Comment association.

        Require: ``value`` is a Comment and ``key`` is None or a string.
        Guarantee: append it after existing comments and index a nonempty key.
        Maintain: duplicate unkeyed target associations remain distinct.
        Assert: successful addition increments count exactly once.
        """
        if not isinstance(value, Comment):
            raise TypeError("value must be a Comment")
        if key is not None and not isinstance(key, str):
            raise TypeError("key must be a string or None")
        before = self.count
        self._append(value, key, "duplicate comment key")
        assert self.count == before + 1

    def item(self, key: CollectionKey) -> Comment:
        """Return a Comment by one-based ordinal or explicit key.

        Require: ``key`` is an ordinal or key accepted by the base collection.
        Guarantee: return the matching Comment.
        Maintain: preserve common ordered key semantics.
        Assert: invalid and missing values fail explicitly.
        """
        try:
            return super().item(key)
        except IndexError as error:
            raise IndexError(f"comment ordinal out of range: {key}") from error

    def item_by_object(self, target: Entry | FieldInstance) -> Optional[Comment]:
        """Return the first Comment linked to a target object by identity.

        Require: ``target`` is an Entry or FieldInstance.
        Guarantee: return the first association matching either reference.
        Maintain: compare with ``is`` and preserve collection order.
        Assert: absent targets return None.
        """
        if not isinstance(target, (Entry, FieldInstance)):
            raise TypeError("target must be an Entry or FieldInstance")
        return next(
            (
                value
                for value in self._items
                if value.entry is target or value.field_instance is target
            ),
            None,
        )

    def remove(self, key: CollectionKey) -> Comment:
        """Remove a Comment by one-based ordinal or explicit key.

        Require: ``key`` identifies a stored Comment.
        Guarantee: remove and return exactly the selected object.
        Maintain: preserve remaining order and key positions.
        Assert: invalid keys fail before mutation.
        """
        try:
            return super().remove(key)
        except IndexError as error:
            raise IndexError(f"comment ordinal out of range: {key}") from error

    def clear(self) -> None:
        """Remove every Comment association.

        Require: collection is initialized.
        Guarantee: expose no associations.
        Maintain: retain the collection object for future additions.
        Assert: count is zero.
        """
        self._items.clear()
        self._keys.clear()
        assert self.count == 0
