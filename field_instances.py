"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Accept FieldInstance values and optional keys | [mandatory] | R1
STORE | Preserve insertion order and explicit keys | [mandatory] | R1-R2
LOOKUP | Resolve one-based, case-insensitive keyed, and Field-identity lookups | [mandatory] | R3-R4
COUNT | Report collection size | [mandatory] | R6

R1. WHEN an instance is added, append it after existing instances.
R2. WHEN an explicit key duplicates a prior key ignoring case, reject without mutation.
R3. WHEN Item receives an integer or string key, use one-based or case-insensitive lookup.
R4. WHEN ItemNoError receives display text, return the first exact text match.
R5. WHEN ItemByField receives a Field, compare by object identity.
R6. WHEN Count is requested, return the number of stored instances.

CLOSED
- Missing or empty keys are not indexed; nonempty keys compare without case.
- SneakyAdd semantics remain open because the estimated C does not establish
  its duplicate behavior or its distinction from Add.

Preconditions: additions are FieldInstance values; optional keys are strings.
Failures: duplicate keys raise ValueError; missing keyed or ordinal lookups
raise KeyError or IndexError; invalid argument types raise TypeError.
"""

from typing import Optional

from field import Field
from field_instance import FieldInstance
from ordered_collection import CollectionKey, OrderedKeyedCollection

class FieldInstances(OrderedKeyedCollection[FieldInstance]):
    """An ordered collection of runtime field values.

    Require: values are added through ``add``.
    Guarantee: expose ordered, keyed, and field-identity lookups.
    Maintain: explicit keys are unique and ordinals are one-based.
    Assert: count equals the number of iterable instances.
    """

    def add(self, value: FieldInstance, key: Optional[str] = None) -> None:
        """Append an instance, optionally binding an explicit string key.

        Require: ``value`` is a FieldInstance and ``key`` is None or string.
        Guarantee: append the instance after existing values.
        Maintain: duplicate explicit keys leave collection contents unchanged.
        Assert: successful addition increases count by one.
        """
        if not isinstance(value, FieldInstance):
            raise TypeError("value must be a FieldInstance")
        if key is not None and not isinstance(key, str):
            raise TypeError("key must be a string or None")
        self._append(value, key, "duplicate field-instance key")

    def item(self, key: CollectionKey) -> FieldInstance:
        """Return an instance by one-based ordinal or case-insensitive explicit key.

        Require: ``key`` is an integer ordinal or string key.
        Guarantee: return the matching instance without mutation.
        Maintain: integer positions follow VB Collection's one-based convention.
        Assert: unsupported key types fail explicitly.
        """
        return super().item(key)

    def item_no_error(self, value: str) -> Optional[FieldInstance]:
        """Return the first instance with matching display text, or None.

        Require: ``value`` is the display text being searched.
        Guarantee: return the first exact text match, or None when absent.
        Maintain: preserve collection order and contents.
        Assert: collection order remains unchanged.
        """
        if not isinstance(value, str):
            raise TypeError("value must be a string")
        return next(
            (instance for instance in self._items if instance.value_as_string == value),
            None,
        )

    def item_by_field(self, value: Field) -> Optional[FieldInstance]:
        """Find an instance whose Field is the supplied object.

        Require: ``value`` is a Field definition.
        Guarantee: return the first instance associated with that object, or None.
        Maintain: compare by identity and preserve collection order.
        Assert: a returned instance references ``value`` by identity.
        """
        if not isinstance(value, Field):
            raise TypeError("value must be a Field")
        for instance in self._items:
            if instance.field is value:
                return instance
        return None

