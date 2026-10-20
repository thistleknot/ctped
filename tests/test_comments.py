"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independent Entry and FieldInstance targets | [mandatory] | R1
ASSOCIATE | Check optional Comment references by identity | [mandatory] | R1
LOOKUP | Check source order, ordinal/key access, and object searches | [mandatory] | R2-R4
MUTATE | Check ordinal/key removal and clear behavior | [mandatory] | R5-R6

R1. WHEN a Comment is constructed, retain optional target identities.
R2. WHEN a Comment is added with a nonempty key, support case-insensitive key lookup.
R3. WHEN Item receives a key or ordinal, return the matching Comment.
R4. WHEN ItemByObject receives a target, return the first identity association.
R5. WHEN Remove receives a key or ordinal, remove exactly that item.
R6. WHEN Clear is called, leave no associations and no keys.

CLOSED
- Fixtures are independently constructed, not copied from the C output.
- CommentByObject behavior remains open pending stronger method mapping.

Preconditions: valid Entry and FieldInstance model objects are supplied.
Failures are reported as assertion or unexpected exception failures.
"""

import pytest

from comment import Comment
from comments import Comments
from entry import Entry
from field import Field
from field_instance import FieldInstance


def _entry(name: str) -> Entry:
    """Create an independent format 1 Entry target.

    Require: name is a record name.
    Guarantee: return an Entry that can be associated with a Comment.
    Maintain: each call returns a distinct identity.
    Assert: format and name match the inputs.
    """
    result = Entry("<fixture>", name, 1, (f"{name} {{}}\n",))
    assert result.name == name and result.format == 1
    return result


def _field_instance() -> FieldInstance:
    """Create a FieldInstance with an independently parsed Field definition.

    Require: no external descriptor or data files.
    Guarantee: return a typed target object.
    Maintain: preserve a real Field relationship.
    Assert: returned object references a Field.
    """
    field, _ = Field.from_lines(["Value\tf\tf\tf\t0"], 0, False)
    result = FieldInstance(field, None)
    assert isinstance(result.field, Field)
    return result


def test_comment_retains_optional_entry_and_field_instance_identities() -> None:
    """Require both targets and an empty Comment; guarantee exact references."""
    entry = _entry("ITEM")
    instance = _field_instance()
    linked = Comment(entry, instance)
    empty = Comment()

    assert linked.entry is entry
    assert linked.field_instance is instance
    assert empty.entry is None and empty.field_instance is None


def test_comments_finds_first_entry_or_field_instance_identity() -> None:
    """Require duplicate associations and both target kinds; guarantee first identity match."""
    entry = _entry("ITEM")
    instance = _field_instance()
    first = Comment(entry=entry)
    second = Comment(field_instance=instance)
    repeated = Comment(entry=entry, field_instance=instance)
    comments = Comments()
    comments.add(first)
    comments.add(second, "field")
    comments.add(repeated)

    assert comments.count == 3
    assert list(comments) == [first, second, repeated]
    assert comments.item(1) is first
    assert comments.item(3) is repeated
    assert comments.item("FIELD") is second
    assert comments.item_by_object(entry) is first
    assert comments.item_by_object(instance) is second
    assert comments.item_by_object(_entry("OTHER")) is None


def test_comments_removes_by_ordinal_or_key_and_clears_keys() -> None:
    """Require keyed associations; preserve order and permit key reuse after clear."""
    comments = Comments()
    stored = [Comment(entry=_entry(str(index))) for index in range(3)]
    for index, comment in enumerate(stored):
        comments.add(comment, f"key-{index}")

    assert comments.remove("KEY-1") is stored[1]
    assert comments.remove(2) is stored[2]

    assert list(comments) == [stored[0]]
    comments.clear()
    assert comments.count == 0
    comments.add(stored[0], "key-0")
    assert comments.item("KEY-0") is stored[0]


@pytest.mark.parametrize("invalid", [None, True, 1.2])
def test_comments_rejects_invalid_remove_inputs(invalid: object) -> None:
    """Require invalid removal types; guarantee explicit TypeError."""
    with pytest.raises(TypeError, match="collection key|boolean"):
        Comments().remove(invalid)  # type: ignore[arg-type]


def test_comments_reject_duplicate_keys_without_mutation() -> None:
    """Require duplicate keys differing only by case; preserve original state."""
    comments = Comments()
    first, second = Comment(), Comment()
    comments.add(first, "Note")

    with pytest.raises(ValueError, match="duplicate comment key"):
        comments.add(second, "NOTE")

    assert comments.count == 1
    assert comments.item("note") is first


def test_comments_remove_unknown_key_fails_without_mutation() -> None:
    """Require an absent key; guarantee KeyError and unchanged contents."""
    value = Comment()
    comments = Comments()
    comments.add(value, "present")

    with pytest.raises(KeyError):
        comments.remove("absent")

    assert list(comments) == [value]


@pytest.mark.parametrize("ordinal", [0, -1, 2])
def test_comments_rejects_absent_ordinals(ordinal: int) -> None:
    """Require three absent ordinal forms; guarantee rejection before mutation."""
    comments = Comments()
    comments.add(Comment(entry=_entry("ITEM")))

    with pytest.raises(IndexError, match="comment ordinal out of range"):
        comments.remove(ordinal)

    assert comments.count == 1
