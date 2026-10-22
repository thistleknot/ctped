"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Read the selected path as bytes without decoding | [mandatory] | R1
PATH | Validate explicit paths and bind file references | [mandatory] | R2-R4
SERVE | Write the supplied bytes without text or newline conversion | [mandatory] | R5

R1. WHEN a caller reads a path, return its stored bytes unchanged; propagate
    missing-path and access failures.
R2. WHEN opening a file, require an existing regular file.
R3. WHEN saving a file, require an existing parent directory.
R4. WHEN a reference is created, combine its directory and filename using
    normal path rules; report absence and assert existence against that path.
R5. WHEN a caller writes bytes to a path, preserve their order and values;
    propagate path and access failures.

CLOSED
- Text decoding and format parsing stay in format-aware stages; the available
  game data samples are absent, so this layer cannot establish those rules.
- File chooser dialogs are adapted to explicit CLI paths because the plan
  permits a headless finish and the dialog controls are not recovered.

Preconditions: callers supply paths; writes require bytes and an existing
parent directory. Failures: operating-system path and I/O errors pass through.
"""

from pathlib import Path
from typing import Union

PathValue = Union[str, Path]


def read_file_bytes(path: PathValue) -> bytes:
    """Read a file without changing its stored bytes.

    Require: ``path`` identifies a readable file.
    Guarantee: return exactly the file's bytes.
    Maintain: do not decode or normalize the content.
    Assert: the result is bytes.
    """
    data = Path(path).read_bytes()
    assert isinstance(data, bytes)
    return data


def write_file_bytes(path: PathValue, content: bytes) -> None:
    """Replace a file's contents with the supplied bytes.

    Require: ``path`` has an existing parent directory and ``content`` is
    bytes.
    Guarantee: write all supplied bytes in order.
    Maintain: do not decode, normalize, or append to the file.
    Assert: the write count equals the content length.
    """
    written = Path(path).write_bytes(content)
    assert written == len(content)


class FileInterface:
    """Validate explicit file paths for a headless caller.

    Require: ``current_path`` names the caller's current directory.
    Guarantee: open and save requests return validated paths.
    Maintain: this class never prompts or changes the working directory.
    Assert: the current path is stored as a ``Path``.
    """

    def __init__(self, current_path: PathValue) -> None:
        self._current_path = Path(current_path)
        assert isinstance(self._current_path, Path)

    @property
    def current_path(self) -> Path:
        """Return the configured path.

        Require: the interface was initialized.
        Guarantee: return the stored path.
        Maintain: leave the process working directory unchanged.
        Assert: the result is a ``Path``.
        """
        return self._current_path

    @staticmethod
    def file_absent(path: PathValue) -> bool:
        """Check whether a regular file is absent.

        Require: a path is supplied.
        Guarantee: return true unless the path names a regular file.
        Maintain: do not create or modify the path.
        Assert: the result is boolean.
        """
        return not Path(path).is_file()

    @staticmethod
    def path_invalid(path: PathValue) -> bool:
        """Check whether a target's parent is a directory.

        Require: a target path is supplied.
        Guarantee: return true when its parent is missing or not a directory.
        Maintain: do not create or modify the parent.
        Assert: the result is boolean.
        """
        return not Path(path).parent.is_dir()

    def obtain_open_file(self, path: PathValue) -> Path:
        """Validate a path selected for reading.

        Require: the caller supplies the selected path.
        Guarantee: return it if it names a regular file.
        Maintain: do not open or modify the file.
        Assert: the returned path is not absent.
        """
        candidate = Path(path)
        if self.file_absent(candidate):
            raise FileNotFoundError(candidate)
        return candidate

    def obtain_save_as_file(self, path: PathValue) -> Path:
        """Validate a path selected for writing.

        Require: the caller supplies the selected path.
        Guarantee: return it when its parent is a directory.
        Maintain: do not create or modify the target.
        Assert: the returned path has a directory parent.
        """
        candidate = Path(path)
        if self.path_invalid(candidate):
            raise NotADirectoryError(candidate.parent)
        return candidate


class FileReference:
    """Bind a filename to a directory managed by ``FileInterface``.

    Require: interface and filename supplied; optional directory overrides the
    interface's current path.
    Guarantee: ``path`` identifies the combined path.
    Maintain: existence checks use that same path.
    Assert: the interface is a ``FileInterface``.
    """

    def __init__(
        self,
        file_interface: FileInterface,
        file_name: PathValue,
        directory: PathValue | None = None,
    ) -> None:
        """Bind a filename and directory to the supplied interface.

        Require: interface and filename supplied; directory may be omitted.
        Guarantee: store paths for the reference.
        Maintain: omitted directory uses the interface's current path.
        Assert: the interface is a ``FileInterface``.
        """
        assert isinstance(file_interface, FileInterface)
        self.file_interface = file_interface
        self.file_name = Path(file_name)
        self.directory = Path(directory) if directory is not None else file_interface.current_path

    @property
    def path(self) -> Path:
        """Return the joined directory and filename.

        Require: the reference was initialized.
        Guarantee: return the path used by all reference checks.
        Maintain: do not alter either stored path.
        Assert: the result is a ``Path``.
        """
        return self.directory / self.file_name

    @property
    def file_absent(self) -> bool:
        """Check whether the referenced path is absent.

        Require: the reference was initialized.
        Guarantee: report absence for the reference's path.
        Maintain: do not create or modify the referenced path.
        Assert: the result is boolean.
        """
        return self.file_interface.file_absent(self.path)

    def assert_file_exists(self) -> Path:
        """Require an existing referenced file.

        Require: the reference's path names a regular file.
        Guarantee: return that path.
        Maintain: do not modify the referenced file.
        Assert: the returned path is not absent.
        """
        return self.file_interface.obtain_open_file(self.path)
