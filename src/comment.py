"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
ASSOCIATE | Retain optional Entry and FieldInstance references | [mandatory] | R1

R1. WHEN a Comment is created or reassigned, retain supplied object identities.

CLOSED
- This class stores no comment text; text remains in File source bytes.
- Entry and FieldInstance references are independent and may both be absent.

Preconditions: non-None Entry and FieldInstance values have their model types.
Failures: invalid reference types raise TypeError.
"""

from dataclasses import dataclass

from entry import Entry
from field_instance import FieldInstance


@dataclass
class Comment:
    """Associate source comment metadata with an Entry or FieldInstance.

    Require: optional references are Entry and FieldInstance model objects.
    Guarantee: expose the same references supplied by the caller.
    Maintain: do not copy, compare, or convert either reference.
    Assert: each non-None value has its declared model type.
    """

    entry: Entry | None = None
    field_instance: FieldInstance | None = None

    def __post_init__(self) -> None:
        """Validate optional object relationships.

        Require: dataclass initialization has completed.
        Guarantee: reject invalid relationship values.
        Maintain: retain valid objects by identity.
        Assert: accepted references satisfy their model types.
        """
        if self.entry is not None and not isinstance(self.entry, Entry):
            raise TypeError("entry must be an Entry or None")
        if self.field_instance is not None and not isinstance(
            self.field_instance, FieldInstance
        ):
            raise TypeError("field_instance must be a FieldInstance or None")
        assert self.entry is None or isinstance(self.entry, Entry)
        assert self.field_instance is None or isinstance(
            self.field_instance, FieldInstance
        )
