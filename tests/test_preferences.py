"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply varied five-line preference files | [mandatory] | R1
PARSE | Preserve the opaque token and four ordered Boolean flags | [mandatory] | R1-R2
SAVE | Preserve unchanged bytes and patch changed flag tokens | [mandatory] | R3-R4
REJECT | Reject malformed line counts, flags, and assignments | [mandatory] | R2,R5

R1. WHEN valid five-line files are parsed, retain the first token and four flags.
R2. WHEN a file is malformed, fail without inventing preference values.
R3. WHEN flags remain unchanged, return exact original bytes.
R4. WHEN a flag changes, patch only its value token and preserve all other bytes.
R5. WHEN an index or value has an invalid type or range, reject the assignment.

CLOSED
- Fixtures do not assign application meanings to positional flags.
- Existing samples establish `True`/`False` spelling and CRLF; independent inputs cover LF and varied whitespace.

Preconditions: fixtures represent text files encoded as Windows-1252.
Failures: assertions or explicit parsing/assignment exceptions indicate a failed contract.
"""

from pathlib import Path

import pytest

from preferences import Preferences


@pytest.mark.parametrize(
    "data,expected_indent,expected_flags",
    [
        (b"%032\r\nTrue\r\nFalse\r\nTrue\r\nTrue\r\n", "%032", (True, False, True, True)),
        (b"  indent\ntrue\n FALSE \nfalse\nTRUE\n", "indent", (True, False, False, True)),
        (b"%009\r\nFalse\r\nFalse\r\nFalse\r\nFalse\r\n", "%009", (False, False, False, False)),
    ],
)
def test_preferences_parse_varied_sources_without_losing_original_bytes(
    data: bytes, expected_indent: str, expected_flags: tuple[bool, bool, bool, bool]
) -> None:
    prefs = Preferences.from_bytes(data)

    assert prefs.indent_token == expected_indent
    assert prefs.flags == expected_flags
    assert prefs.to_bytes() == data


def test_preferences_patch_only_changed_rows() -> None:
    source = b"%032\r\nTrue\r\nFalse\r\nTrue\r\nTrue\r\n"
    prefs = Preferences.from_bytes(source)

    prefs.set_flag(2, True)

    assert prefs.flags == (True, True, True, True)
    assert prefs.to_bytes() == b"%032\r\nTrue\r\nTrue\r\nTrue\r\nTrue\r\n"


def test_preferences_preserve_surrounding_whitespace_when_patching() -> None:
    source = b"%032\n  true \n\tfalse\t\ntrue\nfalse\n"
    prefs = Preferences.from_bytes(source)

    prefs.set_flag(2, True)

    assert prefs.to_bytes() == b"%032\n  true \n\tTrue\t\ntrue\nfalse\n"


@pytest.mark.parametrize(
    "data,message",
    [
        (b"%032\nTrue\nFalse\nTrue\n", "expected five"),
        (b"%032\nTrue\nFalse\nTrue\nMaybe\n", "must be True or False"),
        (b"\nTrue\nFalse\nTrue\nFalse\n", "indent token"),
    ],
)
def test_preferences_reject_malformed_files(data: bytes, message: str) -> None:
    with pytest.raises(ValueError, match=message):
        Preferences.from_bytes(data, "bad.prf")


@pytest.mark.parametrize("index,value,error", [(0, True, IndexError), (5, False, IndexError), (True, False, TypeError), (1, 1, TypeError)])
def test_preferences_reject_invalid_flag_assignments(
    index: int, value: object, error: type[Exception]
) -> None:
    prefs = Preferences.from_bytes(b"%032\nTrue\nFalse\nTrue\nTrue\n")

    with pytest.raises(error):
        prefs.set_flag(index, value)  # type: ignore[arg-type]
