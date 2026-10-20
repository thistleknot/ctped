"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain `.prf` bytes and split its five source lines | [mandatory] | R1
PARSE | Keep the indent token and parse four Boolean rows | [mandatory] | R2-R3
EDIT | Change one Boolean row by one-based ordinal | [mandatory] | R4
SAVE | Return exact source or patch changed Boolean tokens | [mandatory] | R5-R6

R1. WHEN bytes are loaded, retain their exact original values and line endings.
R2. WHEN a `.prf` is parsed, require five lines and a nonempty first-line indent token.
R3. WHEN Boolean lines are parsed, accept only case-insensitive `True` or `False`.
R4. WHEN a Boolean flag is set, require a one-based index from 1 through 4 and a Boolean value.
R5. WHEN no flag changed, return the original bytes exactly.
R6. WHEN flags changed, patch only changed Boolean tokens and preserve all other source text.

CLOSED
- The four flags remain positional because their names and meanings are not established.
- The indent token remains opaque; no interpretation of `%032` is claimed.
- Save preserves the loaded line endings and uses `True`/`False` only for changed flags.

Preconditions: input is a five-line `.prf` encoded as Windows-1252 text.
Failures: invalid line counts, empty indent tokens, malformed Boolean rows,
and invalid flag assignments raise explicit errors.
"""

from dataclasses import dataclass
from pathlib import Path

from file_access import PathValue, read_file_bytes


@dataclass
class Preferences:
    """Store the observed indent token and four positional Boolean options.

    Require: ``original_bytes`` and ``source_lines`` describe one five-line file.
    Guarantee: expose the parsed values and preserve exact unchanged bytes.
    Maintain: keep flag order and original line endings.
    Assert: exactly four flags are stored.
    """

    source: str
    original_bytes: bytes
    indent_token: str
    flags: tuple[bool, bool, bool, bool]
    source_lines: tuple[str, ...]

    @classmethod
    def from_bytes(cls, data: bytes, source: str = "<memory>") -> "Preferences":
        """Parse the five-line preference file without naming its flags.

        Require: ``data`` is the source file's bytes.
        Guarantee: return one opaque indent token and four Boolean options.
        Maintain: retain every original line and byte for unchanged saving.
        Assert: returned `to_bytes` is the supplied input before edits.
        """
        if not isinstance(data, bytes):
            raise TypeError("data must be bytes")
        lines = tuple(data.decode("cp1252").splitlines(keepends=True))
        if len(lines) != 5:
            raise ValueError(f"{source}: expected five preference lines, got {len(lines)}")
        indent_token = lines[0].rstrip("\r\n").strip()
        if not indent_token:
            raise ValueError(f"{source}: indent token must be nonempty")
        values = tuple(line.strip().casefold() for line in lines[1:])
        if any(value not in {"true", "false"} for value in values):
            raise ValueError(f"{source}: preference flags must be True or False")
        flags = tuple(value == "true" for value in values)
        result = cls(source, data, indent_token, flags, lines)
        assert len(result.flags) == 4
        assert result.to_bytes() == data
        return result

    @classmethod
    def from_file(cls, path: PathValue) -> "Preferences":
        """Read one preference file and retain its source path.

        Require: ``path`` names a readable `.prf` file.
        Guarantee: return parsed preferences with original bytes retained.
        Maintain: do not rewrite the source file during loading.
        Assert: the model source matches the requested path.
        """
        source = str(Path(path))
        result = cls.from_bytes(read_file_bytes(path), source)
        assert result.source == source
        return result

    def set_flag(self, index: int, value: bool) -> None:
        """Set one positional Boolean flag.

        Require: index is a non-Boolean integer from 1 through 4; value is Boolean.
        Guarantee: replace exactly the selected flag.
        Maintain: preserve order and other flag values.
        Assert: the requested position stores the supplied value.
        """
        if isinstance(index, bool) or not isinstance(index, int):
            raise TypeError("flag index must be an integer")
        if not 1 <= index <= 4:
            raise IndexError("flag index must be between 1 and 4")
        if not isinstance(value, bool):
            raise TypeError("flag value must be a bool")
        updated = list(self.flags)
        updated[index - 1] = value
        self.flags = tuple(updated)  # type: ignore[assignment]
        assert self.flags[index - 1] is value

    def to_bytes(self) -> bytes:
        """Return exact source bytes or patch changed Boolean rows.

        Require: model came from a valid five-line `.prf` file.
        Guarantee: preserve original bytes when flags are unchanged; otherwise
        write changed values as `True`/`False` in their original line positions.
        Maintain: retain the indent token, whitespace, and all line endings.
        Assert: unchanged flags produce ``original_bytes`` exactly.
        """
        assert len(self.flags) == 4
        original_flags = tuple(
            line.strip().casefold() == "true" for line in self.source_lines[1:]
        )
        if self.flags == original_flags:
            return self.original_bytes
        lines = list(self.source_lines)
        for index, value in enumerate(self.flags, start=1):
            if value == original_flags[index - 1]:
                continue
            line = lines[index]
            start = len(line) - len(line.lstrip(" \t"))
            end = len(line.rstrip("\r\n"))
            while end > start and line[end - 1] in " \t":
                end -= 1
            token = "True" if value else "False"
            lines[index] = line[:start] + token + line[end:]
        return "".join(lines).encode("cp1252")
