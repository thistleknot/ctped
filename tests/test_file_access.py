"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build temporary byte and path cases | [mandatory] | R1-R3
CHECK | Assert byte preservation and path contracts | [mandatory] | R1-R3

R1. WHEN bytes are read or written, verify empty, CRLF text, and binary inputs.
R2. WHEN paths are opened or saved, verify valid, missing, and invalid cases.
R3. WHEN a file reference is checked, verify path joining and existence errors.

CLOSED
- Tests use temporary files; distribution samples remain unchanged.

Preconditions: pytest supplies a writable temporary directory. Failures are
reported as assertion or unexpected exception failures.
"""

from pathlib import Path

import pytest

from file_access import FileInterface, FileReference, read_file_bytes, write_file_bytes


BYTE_CASES = [
    b"",
    b"entry {\r\n\tfield\tvalue  \r\n}\r\n",
    bytes(range(256)),
]


@pytest.mark.parametrize("content", BYTE_CASES)
def test_read_file_bytes_preserves_content(tmp_path: Path, content: bytes) -> None:
    """Require temporary input; guarantee exact bytes; maintain source; assert equality."""
    source = tmp_path / "source.dat"
    source.write_bytes(content)

    assert read_file_bytes(source) == content


@pytest.mark.parametrize("content", BYTE_CASES)
def test_write_file_bytes_replaces_content(tmp_path: Path, content: bytes) -> None:
    """Require an existing target; guarantee replacement; maintain byte order; assert equality."""
    target = tmp_path / "target.dat"
    target.write_bytes(b"old bytes that must be replaced")

    write_file_bytes(target, content)

    assert target.read_bytes() == content


@pytest.mark.parametrize("kind,expected_absent", [("file", False), ("missing", True), ("directory", True)])
def test_file_interface_reports_absence(
    tmp_path: Path, kind: str, expected_absent: bool
) -> None:
    """Require three path kinds; guarantee absence result; maintain filesystem; assert expected flag."""
    candidate = tmp_path / "candidate"
    if kind == "file":
        candidate.write_bytes(b"")
    elif kind == "directory":
        candidate.mkdir()

    assert FileInterface(tmp_path).file_absent(candidate) is expected_absent


@pytest.mark.parametrize("parent_kind,expected_invalid", [("directory", False), ("missing", True), ("file", True)])
def test_file_interface_validates_save_parent(
    tmp_path: Path, parent_kind: str, expected_invalid: bool
) -> None:
    """Require three parent kinds; guarantee validation result; maintain filesystem; assert expected flag."""
    parent = tmp_path / "parent"
    if parent_kind == "directory":
        parent.mkdir()
    elif parent_kind == "file":
        parent.write_bytes(b"")

    assert FileInterface(tmp_path).path_invalid(parent / "output.dat") is expected_invalid


@pytest.mark.parametrize("kind,expected_error", [("file", None), ("missing", FileNotFoundError), ("directory", FileNotFoundError)])
def test_file_interface_obtains_open_path(
    tmp_path: Path, kind: str, expected_error: type[Exception] | None
) -> None:
    """Require three candidate kinds; guarantee valid path or error; maintain content; assert outcome."""
    candidate = tmp_path / "candidate"
    if kind == "file":
        candidate.write_bytes(b"")
    elif kind == "directory":
        candidate.mkdir()

    interface = FileInterface(tmp_path)
    if expected_error is None:
        assert interface.obtain_open_file(candidate) == candidate
    else:
        with pytest.raises(expected_error):
            interface.obtain_open_file(candidate)


@pytest.mark.parametrize("parent_kind,expected_error", [("directory", None), ("missing", NotADirectoryError), ("file", NotADirectoryError)])
def test_file_interface_obtains_save_path(
    tmp_path: Path, parent_kind: str, expected_error: type[Exception] | None
) -> None:
    """Require three parent kinds; guarantee save path or error; maintain target; assert outcome."""
    parent = tmp_path / "parent"
    if parent_kind == "directory":
        parent.mkdir()
    elif parent_kind == "file":
        parent.write_bytes(b"")
    target = parent / "output.dat"

    interface = FileInterface(tmp_path)
    if expected_error is None:
        assert interface.obtain_save_as_file(target) == target
    else:
        with pytest.raises(expected_error):
            interface.obtain_save_as_file(target)


@pytest.mark.parametrize("name", ["alpha.txt", "nested/beta.txt", "", "absolute"])
def test_file_reference_combines_paths(tmp_path: Path, name: str) -> None:
    """Require a filename; guarantee joined path; maintain stored inputs; assert path equality."""
    reference = FileReference(FileInterface(tmp_path), name)

    assert reference.path == tmp_path / name


@pytest.mark.parametrize("kind,expected_error", [("file", None), ("missing", FileNotFoundError), ("directory", FileNotFoundError)])
def test_file_reference_asserts_existing_file(
    tmp_path: Path, kind: str, expected_error: type[Exception] | None
) -> None:
    """Require three candidate kinds; guarantee validated path or error; maintain content; assert outcome."""
    target = tmp_path / "candidate"
    if kind == "file":
        target.write_bytes(b"")
    elif kind == "directory":
        target.mkdir()
    reference = FileReference(FileInterface(tmp_path), "candidate")

    if expected_error is None:
        assert reference.file_absent is False
        assert reference.assert_file_exists() == target
    else:
        assert reference.file_absent is True
        with pytest.raises(expected_error):
            reference.assert_file_exists()
