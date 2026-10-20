"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain source bytes and scan physical lines without decoding bodies | [mandatory] | R1
INDEX | Capture keys and body spans; keep malformed blocks read-only | [mandatory] | R2-R5
REPLACE | Patch one unique closed block body in memory | [mandatory] | R6-R8
SERVE | Return original bytes or apply source-span patches | [mandatory] | R9-R10

R1. WHEN bytes are loaded, retain exact source bytes; decode only header keys as CP1252 so unrelated body bytes remain opaque.
R2. WHEN a complete physical line is `[KEY]`, begin a block; WHEN a complete physical line is `[END]`, close the current block. Inline `[END]` text is body content.
R3. WHEN a new header appears before the current block has a standalone `[END]`, mark the prior block unclosed and continue indexing later blocks.
R4. WHEN `[END]` appears without an open block or input ends with an open block, retain the source but do not make an invalid block editable.
R5. WHEN keys repeat, retain each occurrence in source order; do not select a winner.
R6. WHEN reading a key, require exactly one matching closed block and return its current body bytes.
R7. WHEN replacing a key, require exactly one matching closed block and a CP1252-encodable string; reject missing, duplicate, unclosed, or unencodable values before changing model state.
R8. WHEN replacement text lacks a final line ending and the captured body had one, retain that exact line ending before `[END]`.
R9. WHEN no key has changed, return the original bytes exactly.
R10. WHEN keys are replaced, patch only their captured body spans in reverse order; retain all other bytes and block order.

CLOSED
- Do not insert missing blocks or choose a winner for duplicate keys; native add/duplicate semantics are not established.
- Do not infer `.gls` cell meanings or perform project-file writes in this module.
- Keep CTPEd output parity open; the indexed block layout was observed in a later game corpus.

Preconditions: input is a Great Library text file with top-level bracketed key lines and `[END]` terminator lines.
Failures: missing, ambiguous, unclosed, or unencodable replacements raise without mutating the model.
"""

from __future__ import annotations

from dataclasses import dataclass, field
from pathlib import Path
import re

from file_access import PathValue, read_file_bytes


_HEADER = re.compile(rb"^\[([^\]\r\n]+)\]$")


@dataclass(frozen=True)
class GreatLibraryBlock:
    """Capture one Great Library key and its original body span.

    Require: key and offsets came from one source document scan.
    Guarantee: identify a source-ordered block and whether it has a closing marker.
    Maintain: keep offsets relative to the original byte string.
    Assert: offsets are nonnegative and ordered.
    """

    key: str
    body_start: int
    body_end: int
    line_number: int
    closed: bool

    def __post_init__(self) -> None:
        """Validate captured block coordinates.

        Require: ``from_bytes`` supplied the source offsets.
        Guarantee: reject malformed coordinates before use.
        Maintain: leave the source identity unchanged.
        Assert: body end does not precede body start.
        """
        if not self.key or self.line_number < 1:
            raise ValueError("block key and line number must be valid")
        if self.body_start < 0 or self.body_end < self.body_start:
            raise ValueError("block body offsets must be ordered and nonnegative")
        assert self.body_end >= self.body_start


@dataclass
class GreatLibraryFile:
    """Index Great Library text and retain source-spanned body replacements.

    Require: construct from one byte string or readable project data path.
    Guarantee: expose closed block bodies and source-preserving in-memory edits.
    Maintain: never write to the source path; preserve all unedited source bytes.
    Assert: every stored block span lies within ``original_bytes``.
    """

    source: str
    original_bytes: bytes
    blocks: tuple[GreatLibraryBlock, ...]
    _replacements: dict[int, bytes] = field(default_factory=dict, repr=False)

    def __post_init__(self) -> None:
        """Validate source ownership and captured spans.

        Require: fields came from ``from_bytes`` or ``from_file``.
        Guarantee: reject invalid direct construction before edits are accepted.
        Maintain: bind every block and staged span to ``original_bytes``.
        Assert: each replacement start identifies exactly one captured block.
        """
        if not isinstance(self.source, str) or not self.source:
            raise ValueError("source must be a nonempty string")
        if not isinstance(self.original_bytes, bytes):
            raise TypeError("original_bytes must be bytes")
        if not isinstance(self.blocks, tuple) or not all(
            isinstance(block, GreatLibraryBlock) for block in self.blocks
        ):
            raise TypeError("blocks must be a tuple of GreatLibraryBlock values")
        if not isinstance(self._replacements, dict) or not all(
            isinstance(start, int) and isinstance(value, bytes)
            for start, value in self._replacements.items()
        ):
            raise TypeError("replacements must map integer offsets to bytes")
        for block in self.blocks:
            if block.body_end > len(self.original_bytes):
                raise ValueError("block body span exceeds original source")
        assert all(
            sum(block.body_start == start for block in self.blocks) == 1
            for start in self._replacements
        )

    @classmethod
    def from_bytes(
        cls, data: bytes, source: str = "<memory>"
    ) -> "GreatLibraryFile":
        """Index standalone key and terminator lines while retaining malformed spans.

        Require: ``data`` is a Great Library source byte string.
        Guarantee: return every observed block in source order, including unclosed blocks.
        Maintain: scan body bytes as opaque data; only structural lines are decoded.
        Assert: unchanged serialization equals ``data``.
        """
        if not isinstance(data, bytes):
            raise TypeError("data must be bytes")
        if not isinstance(source, str) or not source:
            raise ValueError("source must be a nonempty string")

        blocks: list[GreatLibraryBlock] = []
        active: tuple[str, int, int] | None = None
        for line_number, line_start, content_end, line_end in _physical_lines(data):
            content = data[line_start:content_end]
            header = _HEADER.fullmatch(content)
            if active is not None and content == b"[END]":
                key, body_start, start_line = active
                blocks.append(
                    GreatLibraryBlock(
                        key, body_start, line_start, start_line, closed=True
                    )
                )
                active = None
                continue
            if header is not None and header.group(1) != b"END":
                if active is not None:
                    key, body_start, start_line = active
                    blocks.append(
                        GreatLibraryBlock(
                            key, body_start, line_start, start_line, closed=False
                        )
                    )
                key = header.group(1).decode("cp1252")
                active = (key, line_end, line_number)
                continue
            # A stray standalone terminator is retained as source trivia.
        if active is not None:
            key, body_start, start_line = active
            blocks.append(
                GreatLibraryBlock(
                    key, body_start, len(data), start_line, closed=False
                )
            )

        result = cls(source, data, tuple(blocks))
        assert result.to_bytes() == data
        assert all(block.body_end <= len(data) for block in result.blocks)
        return result

    @classmethod
    def from_file(cls, path: PathValue) -> "GreatLibraryFile":
        """Load one Great Library data file without modifying it.

        Require: ``path`` names a readable file.
        Guarantee: return its indexed bytes and source path.
        Maintain: do not create or write files.
        Assert: result source equals the requested path string.
        """
        source = str(Path(path))
        result = cls.from_bytes(read_file_bytes(path), source)
        assert result.source == source
        return result

    def body_bytes(self, key: str) -> bytes:
        """Return the current raw body for one unique closed key.

        Require: ``key`` is an exact Great Library key.
        Guarantee: return original or staged replacement bytes for its body.
        Maintain: do not decode or mutate body content.
        Assert: the returned bytes belong to the matched source span or replacement.
        """
        block = self._unique_closed_block(key)
        return self._replacements.get(
            block.body_start,
            self.original_bytes[block.body_start : block.body_end],
        )

    def replace_entry(self, key: str, text: str) -> None:
        """Stage a replacement body for one unique closed key.

        Require: ``key`` identifies one closed block and ``text`` is a string.
        Guarantee: stage CP1252 bytes for serialization.
        Maintain: validate lookup and encoding before changing model state.
        Assert: the staged body preserves the original final line boundary when needed.
        """
        if not isinstance(text, str):
            raise TypeError("replacement text must be a string")
        block = self._unique_closed_block(key)
        replacement = text.encode("cp1252")
        original_body = self.original_bytes[block.body_start : block.body_end]
        ending = _final_line_ending(original_body)
        if ending and not replacement.endswith((b"\n", b"\r")):
            replacement += ending
        self._replacements[block.body_start] = replacement
        assert self._replacements[block.body_start] == replacement

    def to_bytes(self) -> bytes:
        """Return the source document with staged body spans replaced.

        Require: all replacements were staged through ``replace_entry``.
        Guarantee: return exact source bytes when unchanged, otherwise patched bytes.
        Maintain: preserve order and every unedited source span.
        Assert: the serialized result is bytes.
        """
        output = self.original_bytes
        for start, replacement in sorted(self._replacements.items(), reverse=True):
            block = next(block for block in self.blocks if block.body_start == start)
            output = output[:start] + replacement + output[block.body_end :]
        assert isinstance(output, bytes)
        return output

    def _unique_closed_block(self, key: str) -> GreatLibraryBlock:
        """Find one exact key and require its source block to be closed.

        Require: ``key`` is a nonempty string.
        Guarantee: return its unique closed block.
        Maintain: treat duplicate keys as ambiguous, including unclosed matches.
        Assert: returned block key equals the requested key.
        """
        if not isinstance(key, str) or not key:
            raise ValueError("key must be a nonempty string")
        matches = tuple(block for block in self.blocks if block.key == key)
        if len(matches) != 1:
            raise ValueError(
                f"{self.source}: expected one block named {key!r}, found {len(matches)}"
            )
        block = matches[0]
        if not block.closed:
            raise ValueError(
                f"{self.source}:{block.line_number}: block {key!r} is unclosed"
            )
        assert block.key == key
        return block


def _physical_lines(data: bytes) -> tuple[tuple[int, int, int, int], ...]:
    """Return each physical line's number, start, content end, and end offsets.

    Require: ``data`` is bytes.
    Guarantee: cover each nonempty source byte exactly once without newline normalization.
    Maintain: distinguish CRLF, CR, and LF boundaries.
    Assert: offsets are source ordered and never exceed data length.
    """
    lines: list[tuple[int, int, int, int]] = []
    start = 0
    while start < len(data):
        cr = data.find(b"\r", start)
        lf = data.find(b"\n", start)
        candidates = tuple(position for position in (cr, lf) if position >= 0)
        if not candidates:
            lines.append((len(lines) + 1, start, len(data), len(data)))
            break
        content_end = min(candidates)
        if data[content_end : content_end + 2] == b"\r\n":
            end = content_end + 2
        else:
            end = content_end + 1
        lines.append((len(lines) + 1, start, content_end, end))
        start = end
    assert all(0 <= start <= content_end <= end <= len(data) for _, start, content_end, end in lines)
    return tuple(lines)


def _final_line_ending(body: bytes) -> bytes:
    """Return a body's captured final line ending, if present.

    Require: ``body`` is one source-spanned block body.
    Guarantee: return its final CRLF, CR, LF, or empty boundary.
    Maintain: do not normalize preceding body bytes.
    Assert: a nonempty result is one physical line ending.
    """
    if body.endswith(b"\r\n"):
        return b"\r\n"
    if body.endswith(b"\n"):
        return b"\n"
    if body.endswith(b"\r"):
        return b"\r"
    return b""
