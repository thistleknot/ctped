"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independent fields and runtime instances | [mandatory] | R1
STORE | Check order, count, and explicit-key behavior | [mandatory] | R1-R2
LOOKUP | Check ordinal, key, and field-identity lookup | [mandatory] | R3-R4
REJECT | Check duplicate keys and missing lookups | [mandatory] | R2-R4

R1. WHEN instances are added, retain their insertion order.
R2. WHEN explicit keys collide, reject without changing the collection.
R3. WHEN ordinal or keyed lookup succeeds, return the same instance object.
R4. WHEN field identity or key lookup misses, return None in no-error lookup.

CLOSED
- Instances and Fields are independently constructed without sample files.

Preconditions: fixtures create valid Field and FieldInstance objects.
Failures are reported as assertion or unexpected exception failures.
"""

import pytest

from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances


def _field(name: str) -> Field:
    """Build a minimal field definition with the requested name.

    Require: ``name`` is a valid unquoted descriptor token.
    Guarantee: return a parsed Field.
    Maintain: fixture does not depend on external samples.
    Assert: the parsed name matches the request.
    """
    value, next_index = Field.from_lines([f"{name}\tt\tf\tf\t0"], 0, False)
    assert next_index == 1
    assert value.name == name
    return value


def test_field_instances_preserves_order_and_supports_ordinal_key_lookup() -> None:
    """Require three fields; guarantee ordered lookups; maintain identity; assert count and misses."""
    fields = [_field(name) for name in ("Age", "Owner", "Terrain")]
    instances = [FieldInstance(value, initial) for value, initial in zip(fields, (10, "CityA", "Grass"))]
    collection = FieldInstances()
    for value, key in zip(instances, ("age", "owner", "terrain")):
        collection.add(value, key)

    assert collection.count == 3
    assert list(collection) == instances
    assert collection.item(1) is instances[0]
    assert collection.item("OWNER") is instances[1]
    assert collection.item_no_error("missing") is None
    assert collection.item_no_error("CityA") is instances[1]


def test_field_instances_matches_field_objects_by_identity() -> None:
    """Require equal-named distinct fields; guarantee identity matching; maintain order; assert no false match."""
    original = _field("Owner")
    distinct = _field("Owner")
    instance = FieldInstance(original, "CityA")
    collection = FieldInstances()
    collection.add(instance)

    assert collection.item_by_field(original) is instance
    assert collection.item_by_field(distinct) is None


def test_field_instances_duplicate_key_rejection_is_atomic() -> None:
    """Require two independently keyed values; guarantee duplicate rejection; maintain prior order; assert state."""
    first = FieldInstance(_field("Age"), 10)
    second = FieldInstance(_field("Owner"), "CityA")
    collection = FieldInstances()
    collection.add(first, "age")
    collection.add(second, "owner")
    duplicate = FieldInstance(_field("Terrain"), "Grass")

    with pytest.raises(ValueError, match="duplicate field-instance key: AGE"):
        collection.add(duplicate, "AGE")

    assert collection.count == 2
    assert list(collection) == [first, second]


def test_field_instances_empty_key_is_not_indexed() -> None:
    """Require an empty optional key; guarantee unkeyed append; maintain order; assert key lookup misses."""
    instance = FieldInstance(_field("Age"), 10)
    collection = FieldInstances()
    collection.add(instance, "")

    assert collection.count == 1
    assert collection.item(1) is instance
    with pytest.raises(KeyError):
        collection.item("")


def test_field_instances_rejects_invalid_lookup_key_type() -> None:
    """Require a populated collection; guarantee invalid key type error; maintain contents; assert TypeError."""
    collection = FieldInstances()
    collection.add(FieldInstance(_field("Age"), 10))

    with pytest.raises(TypeError):
        collection.item(True)

