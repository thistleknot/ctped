"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
PARSE | Capture a parenthesized cross-reference tag and two target tokens | [mandatory] | R1
RETAIN | Preserve target names, source text, and optional object bindings | [mandatory] | R2-R3

R1. WHEN a row is parsed, require a tag token, target filename, and target field.
R2. WHEN a row is retained, preserve source text and unresolved target names.
R3. WHEN a project resolves a row, bind the matching File and its Field.

CLOSED
- Standalone parsing leaves target objects unset until CTPProject resolution.
- TagString retains its source token including parentheses.
- Source rows remain authoritative; no descriptor serialization is performed.

Preconditions: the source row follows the tree descriptor row grammar.
Failures: malformed rows raise ValueError with source and line context.
"""

from dataclasses import dataclass, replace
from pathlib import Path
import re
from typing import Optional

from field import Field
from file import File


_CROSS_REFERENCE = re.compile(r"^(?P<tag>\([^()]+\))\s+(?P<file>\S+)\s+(?P<field>\S+)$")


@dataclass(frozen=True)
class CrossRef:
    """Retain one tree cross-reference row and its optional resolved objects.

    Require: declaration contains a tag token, target filename, and field name.
    Guarantee: expose the lexical declaration and optionally bound target objects.
    Maintain: preserve original target names when bindings are added.
    Assert: each binding belongs to the declared target names.
    """

    tag_string: str
    target_file_name: str
    target_field_name: str
    source_line: str
    source: str
    line_number: int
    file: Optional[File] = None
    field: Optional[Field] = None

    @classmethod
    def from_line(
        cls, line: str, source: str = "<memory>", line_number: int = 1
    ) -> "CrossRef":
        """Parse one descriptor cross-reference row.

        Require: ``line`` contains a complete declaration and line context.
        Guarantee: return the exact tag and target tokens with source text.
        Maintain: strip only descriptor comments for interpretation.
        Assert: target filename and field are nonempty tokens.
        """
        content = line.split("//", 1)[0].strip()
        match = _CROSS_REFERENCE.fullmatch(content)
        if match is None:
            raise ValueError(f"{source}:{line_number}: malformed cross-reference row")
        return cls(
            tag_string=match.group("tag"),
            target_file_name=match.group("file"),
            target_field_name=match.group("field"),
            source_line=line,
            source=source,
            line_number=line_number,
        )

    def bind_file(self, value: File) -> "CrossRef":
        """Return a copy bound to the target File and declared Field.

        Require: ``value`` is the File resolved by its owning project.
        Guarantee: return a CrossRef with its declared Field bound.
        Maintain: leave this instance and its source declaration unchanged.
        Assert: the target Field belongs to ``value.fields`` by identity.
        """
        if not isinstance(value, File):
            raise TypeError("target must be a File")
        structure_name = Path(value.structure.source).name
        if structure_name.casefold() != self.target_file_name.casefold():
            raise ValueError(
                f"{self.source}:{self.line_number}: target File "
                f"{self.target_file_name} does not match {structure_name}"
            )
        target_field = value.fields.item_no_error(self.target_field_name)
        if target_field is None:
            raise ValueError(
                f"{self.source}:{self.line_number}: target field "
                f"{self.target_file_name}.{self.target_field_name} is absent"
            )
        result = replace(self, file=value, field=target_field)
        assert result.file is value and result.field is target_field
        return result
