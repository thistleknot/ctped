"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURES | Exercise independent line-ending, markup, and malformed-block shapes | [mandatory] | R1-R10
REPLACE | Verify in-memory replacement and exact source preservation | [mandatory] | R6-R10
FAILURES | Verify ambiguous, unclosed, absent, and unencodable edits are atomic | [mandatory] | R4-R7

R1. WHEN LF, CRLF, and mixed-ending files are parsed, preserve their source bytes.
R2. WHEN a payload contains inline `[END]`, retain it as payload until a standalone marker.
R3. WHEN an open block is followed by a new header, retain it but reject its edit.
R4. WHEN a stray standalone `[END]` appears, do not treat it as a key.
R5. WHEN duplicate keys are loaded, reject lookup or mutation of that key.
R6. WHEN a unique closed key is replaced, only its payload bytes may change.
R7. WHEN a key is absent, unclosed, duplicated, or its value cannot encode as CP1252, leave model output unchanged.
R8. WHEN a replacement omits a final line ending, preserve the body's captured ending.
R9. WHEN source bytes contain undecodable body bytes, preserve them outside edited spans.
R10. WHEN no mutation is staged, serialize exact original bytes.

CLOSED
- Fixtures are authored independently and do not use the installed corpus as seed data.
- This suite verifies the Python block editor contract, not CTPEd writer parity.

Preconditions: tests use independent byte fixtures. Failures: any mismatch fails the corresponding pytest assertion.
"""

import pytest

from great_library import GreatLibraryFile


def test_replaces_one_lf_block_and_preserves_neighboring_source() -> None:
    source = (
        b"# leading note\n"
        b"[FIRST]\nold text\n[END]\n"
        b"\n[SECOND]\nkeep this\n[END]\n"
    )
    document = GreatLibraryFile.from_bytes(source, "fixture.txt")

    document.replace_entry("FIRST", "new text")

    assert document.body_bytes("FIRST") == b"new text\n"
    assert document.to_bytes() == source.replace(b"old text\n", b"new text\n", 1)


def test_inline_end_text_is_payload_and_crlf_boundary_is_retained() -> None:
    source = (
        b"[LITERAL]\r\ntext contains [END] markup\r\n[END]\r\n"
        b"[TARGET]\r\nold\r\n[END]\r\n"
    )
    document = GreatLibraryFile.from_bytes(source)

    assert document.body_bytes("LITERAL") == b"text contains [END] markup\r\n"
    document.replace_entry("TARGET", "new")
    assert document.to_bytes() == source.replace(b"old\r\n", b"new\r\n", 1)


def test_malformed_open_block_stays_read_only_while_later_block_can_change() -> None:
    source = (
        b"[OPEN]\npartial body\n"
        b"[CLOSED]\nold\n[END]\n"
        b"[END]\ntrailing note\n"
    )
    document = GreatLibraryFile.from_bytes(source)

    with pytest.raises(ValueError, match="unclosed"):
        document.replace_entry("OPEN", "unsafe")
    document.replace_entry("CLOSED", "new")

    assert document.to_bytes() == source.replace(b"old\n", b"new\n", 1)


def test_duplicate_missing_and_unencodable_updates_do_not_mutate_source() -> None:
    source = b"[DUP]\na\n[END]\n[DUP]\nb\n[END]\n[OK]\nbody\n[END]\n"
    document = GreatLibraryFile.from_bytes(source)

    for key, text, error in (
        ("DUP", "changed", "found 2"),
        ("MISSING", "changed", "found 0"),
        ("OK", "emoji \U0001f600", "codec can't encode"),
    ):
        with pytest.raises((ValueError, UnicodeEncodeError), match=error):
            document.replace_entry(key, text)
        assert document.to_bytes() == source


def test_opaque_body_bytes_and_no_edit_roundtrip_are_preserved() -> None:
    source = b"[OPAQUE]\nraw:\x81 byte\n[END]\n"
    document = GreatLibraryFile.from_bytes(source)

    assert document.body_bytes("OPAQUE") == b"raw:\x81 byte\n"
    assert document.to_bytes() == source

