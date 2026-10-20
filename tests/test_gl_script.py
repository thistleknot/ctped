"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply independent 3/4-cell rows with comments and line endings | [mandatory] | R1-R2
PARSE | Check line numbers and exact ordered cells | [mandatory] | R1-R4
ROUNDTRIP | Compare exact source bytes after parsing | [mandatory] | R5
SAMPLE | Parse the supplied CTPEd `.gls` example | [mandatory] | R6
REJECT | Reject active rows with fewer than three cells | [mandatory] | R3

R1. WHEN a synthetic source is parsed, keep original bytes and source line numbers.
R2. WHEN blank/comment lines are encountered, omit rows but preserve those lines in output bytes.
R3. WHEN an active row has fewer than three tab-separated cells, reject it with source line context.
R4. WHEN rows have three or four cells, retain every cell, including empty strings, in order.
R5. WHEN a script is unchanged, its output bytes equal input bytes.
R6. WHEN the supplied `example.gls` is available, parse all active rows and retain exact bytes.

CLOSED
- Fixtures are independently authored; real corpus assertions use the copied original sample.

Preconditions: parser input is bytes; sample test skips only if the distribution path is absent.
Failures surface as assertion or unexpected exception failures.
"""

from pathlib import Path

import pytest

from gl_script import GLScript


@pytest.mark.parametrize(
    "data,expected",
    [
        (
            b"// heading\n\nadvance.ces\tPrereq\tadvance_prereq.glt\n",
            ((3, ("advance.ces", "Prereq", "advance_prereq.glt")),),
        ),
        (
            b"advance.ces\tVari\t\tadvance_vari.glt\r\n",
            ((1, ("advance.ces", "Vari", "", "advance_vari.glt")),),
        ),
        (
            b" // comment\r\n\tStatText\tstattext.glt\r\n",
            ((2, ("", "StatText", "stattext.glt")),),
        ),
    ],
)
def test_gl_script_retains_active_cells_and_exact_source(
    data: bytes, expected: tuple[tuple[int, tuple[str, ...]], ...]
) -> None:
    script = GLScript.from_bytes(data, "fixture.gls")

    assert tuple((row.line_number, row.cells) for row in script.rows) == expected
    assert script.to_bytes() == data


@pytest.mark.parametrize("data", [b"field\ttemplate.glt\n", b"only-one-cell\n"])
def test_gl_script_rejects_short_active_rows(data: bytes) -> None:
    with pytest.raises(ValueError, match=r"fixture\.gls:1: expected at least three"):
        GLScript.from_bytes(data, "fixture.gls")


def test_gl_script_roundtrips_supplied_ctped_sample() -> None:
    path = Path(r"H:\Games\ctp2\CTPEd053\GLTemplates\example.gls")
    if not path.is_file():
        pytest.skip("original CTPEd template script sample is unavailable")
    data = path.read_bytes()
    script = GLScript.from_file(path)

    assert len(script.rows) == 14
    assert {len(row.cells) for row in script.rows} == {3, 4}
    assert script.to_bytes() == data
