"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain `.ced` bytes and locate its version and declaration section | [mandatory] | R1
HEADER | Parse project version, prefix, title, and special-file paths | [mandatory] | R2
FILES | Parse ordered seven-column ProjectFileSpec declarations | [mandatory] | R3-R4
GAMEFILE | Map ordered gamefile filenames through the default project descriptors | [mandatory] | R12-R15
PATHS | Expand caller-supplied `%s`, `%c`, and `%l` path tokens | [opt] | R5
REGISTER | Keep explicitly imported File models in an ordered Files collection | [mandatory] | R6
IMPORT | Load one declared structured data file from explicit roots | [opt] | R7
COMPAT_IMPORT | Retain inferred source fields read-only, duplicate names in order, and legacy count-less rows | [opt] | R16
TARGETS | Bind tree references to uniquely loaded Files and Fields | [opt] | R8
SERVE | Return unchanged project bytes | [mandatory] | R9
ROOTS | Resolve explicit relative roots from the process working directory | [mandatory] | R10
IMPORT | Pass selected structure root for nested descriptor resolution | [mandatory] | R11

R1. WHEN a project file is read, retain its source bytes and decoded lines.
R2. WHEN project header rows are parsed, retain version, prefix, title, and
    unique-file path templates.
R3. WHEN a declaration row is parsed, require seven tokens in source order.
R4. WHEN a declaration is stored, retain defaults, duplicate count, and source.
R5. WHEN a token is expanded, require a caller value for each token present.
R6. WHEN a File is registered, append it to the project's Files collection.
R7. WHEN a file spec is imported, use explicit roots and register only after parse succeeds.
R8. WHEN a tree descriptor is resolved, require one loaded target File and Field.
R9. WHEN a project is unchanged, return its original bytes exactly.
R10. WHEN an explicit root is relative, resolve it from the process working directory; keep relative declaration paths without root tokens project-relative.
R11. WHEN a structured declaration is imported, pass its selected structure root to File parsing.
R12. WHEN a gamefile is opened, ignore blank/comment-only rows, bind its required filename slots to the template's non-listed declarations in order, preserve filename extensions including .slc, and reject incomplete lists before constructing a project.
R13. WHEN gamefile trailer rows exist, read title, optional Newsprite and Great Library filenames in that order; retain further filenames as dummy declarations without inventing descriptors.
R14. WHEN creating a gamefile-backed project, resolve ordinary files beside the gamefile and retain localized template paths for a default/gamedata layout; keep descriptor names and duplicate counts, enable structured files for editing, and defer all file imports and writes.
R15. WHEN deriving project metadata, take the prefix before gamefile.txt and allow an explicitly comment-marked empty prefix; serialize a reloadable .ced configuration while retaining the gamefile path as input provenance; do not write to the gamefile or template.
R16. WHEN a Gamefile declaration is imported, enable source-preserving inferred-field and legacy-count tolerance; retain duplicate record names in source order; keep inferred fields read-only and out of generated defaults.

CLOSED
- `.ced` parsing does not import game data; the manual says project files store
  configuration and paths only.
- `Files` contains explicitly imported File models; declarations are kept in
  `file_specs` and do not masquerade as loaded Files.
- CrossRef target resolution uses loaded Files only and rejects absent or
  ambiguous descriptor-name matches.
- One-file import requires an explicit spec belonging to the project; it does
  not infer roots or load other declarations.
- General project-file editing and automatic file import remain open; gamefile import generates only its initial project configuration.

Preconditions: `.ced` input uses the observed version/header/file-table layout.
Path resolution requires explicit project, structure/data roots, and language.
One-file import requires an existing structured spec and readable paths.
Failures: malformed rows, unsupported booleans, invalid duplicate counts,
missing substitutions, dummy-file imports, parse failures, and unterminated
tables raise explicit errors.
"""

from dataclasses import dataclass
from pathlib import Path
from typing import Optional

from file import File
from file_access import FileInterface, FileReference, PathValue, read_file_bytes
from crossrefs import CrossRefs
from files import Files
from structure import Structure


def _project_bool(token: str, source: str, line_number: int) -> bool:
    """Parse a project boolean using the descriptor's first-character rule.

    Require: token is nonempty project boolean text.
    Guarantee: return false for leading 0/f and true otherwise.
    Maintain: keep original token in its owning declaration.
    Assert: the result is boolean.
    """
    if not token:
        raise ValueError(f"{source}:{line_number}: empty project boolean")
    return not (token[0].lower() in {"0", "f"})


def _path_template(
    template: str,
    project_directory: PathValue,
    structure_root: PathValue,
    data_root: PathValue,
    language: str,
    source: str,
    line_number: int,
) -> Path:
    """Expand project path tokens and return a filesystem path.

    Require: roots and language are supplied; template may contain `%s/%c/%l`.
    Guarantee: explicit roots resolve from the working directory; literal
    relative declaration paths resolve from the project directory.
    Maintain: replace only documented project tokens.
    Assert: no supported token remains unresolved.
    """
    project_path = Path(project_directory).resolve()
    root_values = {"%s": Path(structure_root), "%c": Path(data_root)}
    expanded = template.replace("\\", "/")
    for token, value in root_values.items():
        if token in expanded:
            normalized = value.resolve().as_posix().rstrip("/")
            expanded = expanded.replace(token, normalized + "/")
    expanded = expanded.replace("%l", language)
    if "%s" in expanded or "%c" in expanded or "%l" in expanded:
        raise ValueError(f"{source}:{line_number}: unresolved project path token")
    result = Path(expanded)
    if not result.is_absolute():
        result = project_path / result
    return result


@dataclass(frozen=True)
class ProjectSpecialFile:
    """Retain one unique project-file name and its directory template.

    Require: name and path template come from one project header row.
    Guarantee: preserve the raw values and source location.
    Maintain: do not resolve paths until caller roots are supplied.
    Assert: stored name and template are nonempty.
    """

    file_name: str
    path_template: str
    source_line: str
    line_number: int

    def resolve_path(
        self,
        project_directory: PathValue,
        structure_root: PathValue,
        data_root: PathValue,
        language: str,
        source: str,
    ) -> Path:
        """Resolve this special file's path with explicit project roots.

        Require: caller supplies all roots and language.
        Guarantee: return directory joined to the stored filename.
        Maintain: preserve the unexpanded source fields.
        Assert: the result name matches ``file_name``.
        """
        directory = _path_template(
            self.path_template,
            project_directory,
            structure_root,
            data_root,
            language,
            source,
            self.line_number,
        )
        result = directory / self.file_name
        assert result.name == Path(self.file_name).name
        return result


@dataclass(frozen=True)
class ProjectFileSpec:
    """Retain one seven-column data-file declaration from a `.ced` file.

    Require: fields were parsed from one valid source row.
    Guarantee: expose structure/data paths, names, defaults, and duplicates.
    Maintain: retain raw path tokens and original source text.
    Assert: duplicate count is nonnegative and line number is positive.
    """

    structure_path: Optional[str]
    structure_name: str
    data_path: str
    data_name: str
    editable_by_default: bool
    listed_by_default: bool
    duplicate_count: int
    source_line: str
    source: str
    line_number: int

    @classmethod
    def from_line(
        cls, line: str, source: str = "<memory>", line_number: int = 1
    ) -> "ProjectFileSpec":
        """Parse one seven-column project declaration.

        Require: source row has structure path/name, data path/name, two flags,
        and duplicate count.
        Guarantee: return a declaration with raw path templates and defaults.
        Maintain: preserve the original row and source context.
        Assert: duplicates are a nonnegative integer.
        """
        visible = line.split("//", 1)[0].strip()
        columns = visible.split()
        if len(columns) != 7:
            raise ValueError(
                f"{source}:{line_number}: expected seven project-file columns, got {len(columns)}"
            )
        structure_path, structure_name, data_path, data_name, editable, listed, copies = columns
        try:
            duplicate_count = int(copies)
        except ValueError as error:
            raise ValueError(
                f"{source}:{line_number}: invalid duplicate count {copies}"
            ) from error
        if duplicate_count < 0:
            raise ValueError(f"{source}:{line_number}: duplicate count must be nonnegative")
        absent_structure = structure_path.casefold().rstrip("\\/") == "null"
        return cls(
            structure_path=None if absent_structure else structure_path,
            structure_name=structure_name,
            data_path=data_path,
            data_name=data_name,
            editable_by_default=_project_bool(editable, source, line_number),
            listed_by_default=_project_bool(listed, source, line_number),
            duplicate_count=duplicate_count,
            source_line=line,
            source=source,
            line_number=line_number,
        )

    @property
    def has_structure(self) -> bool:
        """Report whether a structure descriptor is declared.

        Require: declaration has been parsed.
        Guarantee: return false for the documented null path marker.
        Maintain: do not inspect the filesystem.
        Assert: result is boolean.
        """
        return self.structure_path is not None

    def resolve_data_path(
        self,
        project_directory: PathValue,
        structure_root: PathValue,
        data_root: PathValue,
        language: str,
    ) -> Path:
        """Resolve the data directory and append its declared filename.

        Require: caller supplies project directory, structure/data roots, and language.
        Guarantee: return the resolved data-file path.
        Maintain: leave declaration path tokens untouched.
        Assert: returned filename equals ``data_name``.
        """
        directory = _path_template(
            self.data_path,
            project_directory,
            structure_root,
            data_root,
            language,
            self.source,
            self.line_number,
        )
        result = directory / self.data_name
        assert result.name == Path(self.data_name).name
        return result

    def resolve_structure_path(
        self,
        project_directory: PathValue,
        structure_root: PathValue,
        data_root: PathValue,
        language: str,
    ) -> Path | None:
        """Resolve the structure descriptor path, if one is declared.

        Require: caller supplies project directory, structure/data roots, and language.
        Guarantee: return None for dummy files or a path for structured files.
        Maintain: retain raw source tokens.
        Assert: returned filename equals ``structure_name`` when present.
        """
        if self.structure_path is None:
            return None
        directory = _path_template(
            self.structure_path,
            project_directory,
            structure_root,
            data_root,
            language,
            self.source,
            self.line_number,
        )
        result = directory / self.structure_name
        assert result.name == Path(self.structure_name).name
        return result


@dataclass(frozen=True)
class CTPProject:
    """Parse project settings and file declarations without importing data.

    Require: construct through ``from_file``, ``from_bytes``, or ``from_gamefile``.
    Guarantee: expose project metadata, raw file declarations, and imported Files.
    Maintain: retain original project bytes and declaration order.
    Assert: version, title, prefix row, and project terminator are present.
    """

    source: str
    original_bytes: bytes
    version: str
    prefix: str
    title: str
    special_files: tuple[ProjectSpecialFile, ...]
    file_specs: tuple[ProjectFileSpec, ...]
    files: Files

    @classmethod
    def from_file(cls, path: PathValue) -> "CTPProject":
        """Read and parse one `.ced` project file.

        Require: path names a readable project file.
        Guarantee: return parsed settings and ordered declarations.
        Maintain: keep original bytes authoritative for output.
        Assert: source bytes equal the bytes read from disk.
        """
        project_path = Path(path)
        data = read_file_bytes(project_path)
        project = cls.from_bytes(data, str(project_path))
        assert project.original_bytes == data
        return project

    @classmethod
    def from_bytes(cls, data: bytes, source: str = "<memory>") -> "CTPProject":
        """Parse project metadata and the seven-column file table.

        Require: ``data`` is Windows-1252 `.ced` source.
        Guarantee: expose version, prefix, title, special paths, and file specs.
        Maintain: do not import or mutate any game-data files.
        Assert: every declaration is source ordered and table ends with `@`.
        """
        if not isinstance(data, bytes):
            raise TypeError("project data must be bytes")
        lines = tuple(data.decode("cp1252").splitlines(keepends=True))
        marker = next(
            (
                index
                for index, line in enumerate(lines)
                if "names and locations of all the other data files" in line.casefold()
            ),
            None,
        )
        if marker is None:
            raise ValueError(f"{source}: missing project file-table heading")
        header_rows = [
            (index, line, line.split("//", 1)[0].strip())
            for index, line in enumerate(lines[:marker])
            if line.split("//", 1)[0].strip() or line.strip().casefold() == "//prefix"
        ]
        if len(header_rows) < 3:
            raise ValueError(f"{source}: incomplete project header")
        version = header_rows[0][2].split()[0]
        prefix = header_rows[1][2].split()[0] if header_rows[1][2] else ""
        title = header_rows[2][2]
        if not version or not title:
            raise ValueError(f"{source}: incomplete project metadata")
        special_files: list[ProjectSpecialFile] = []
        for index, line, content in header_rows[3:]:
            columns = content.split()
            if len(columns) != 2:
                raise ValueError(
                    f"{source}:{index + 1}: expected special filename and path template"
                )
            special_files.append(
                ProjectSpecialFile(columns[0], columns[1], line, index + 1)
            )

        file_specs: list[ProjectFileSpec] = []
        table_ended = False
        for index in range(marker + 1, len(lines)):
            line = lines[index]
            content = line.split("//", 1)[0].strip()
            if not content:
                continue
            if content.startswith("@"):
                table_ended = True
                break
            file_specs.append(ProjectFileSpec.from_line(line, source, index + 1))
        if not table_ended:
            raise ValueError(f"{source}: missing project file-table terminator")
        result = cls(
            source,
            data,
            version,
            prefix,
            title,
            tuple(special_files),
            tuple(file_specs),
            Files(),
        )
        assert result.to_bytes() == data
        return result

    @classmethod
    def from_gamefile(cls, path: PathValue, template: "CTPProject") -> "CTPProject":
        """Build an initial project from an ordered gamefile and descriptor template.

        Require: readable CP1252 gamefile and the matching default project template.
        Guarantee: return reloadable project declarations without importing data.
        Maintain: leave both source files untouched; retain positional schema bindings.
        Assert: required filenames precede optional title and auxiliary filenames.
        """
        gamefile = Path(path).resolve()
        rows = [
            (number, line.split("//", 1)[0].strip())
            for number, line in enumerate(read_file_bytes(gamefile).decode("cp1252").splitlines(), 1)
            if line.strip() and not line.lstrip().startswith(("#", "//"))
        ]
        required = [spec for spec in template.file_specs if not spec.listed_by_default]
        listed = [spec for spec in template.file_specs if spec.listed_by_default]
        if len(rows) < len(required):
            raise ValueError(f"{gamefile}: expected {len(required)} filename slots, got {len(rows)}")

        def filename(row: tuple[int, str]) -> str:
            """Require: numbered row; Guarantee: basename with extension;
            Maintain: preserve spelling; Assert: no path or whitespace tokens.
            """
            number, name = row
            if not name or len(name.split()) != 1 or any(char in name for char in '\\/:') or not Path(name).suffix:
                raise ValueError(f"{gamefile}:{number}: expected a filename with an extension, got {name!r}")
            return name

        conventional = gamefile.parent.name.casefold() == "gamedata" and gamefile.parent.parent.name.casefold() == "default"
        prefix = gamefile.name[:-len("gamefile.txt")] if gamefile.name.casefold().endswith("gamefile.txt") else ""
        trailer = rows[len(required):]
        title = trailer[0][1] if trailer else gamefile.stem
        if not title:
            raise ValueError(f"{gamefile}: empty project title")
        declarations = []
        ordinary_path = "%cdefault\\gamedata\\" if conventional else "%c"
        for spec, row in zip(required, rows):
            data_path = spec.data_path if conventional and "%l" in spec.data_path else ordinary_path
            declarations.append(
                f"{spec.structure_path or 'null'} {spec.structure_name} {data_path} {filename(row)} "
                f"{spec.has_structure} False {spec.duplicate_count}"
            )
        if len(trailer) > 1:
            if len(listed) != 1:
                raise ValueError(f"{gamefile}: template must declare one listed Newsprite file")
            spec = listed[0]
            declarations.append(
                f"{spec.structure_path or 'null'} {spec.structure_name} {ordinary_path} {filename(trailer[1])} "
                f"{spec.has_structure} True {spec.duplicate_count}"
            )
        gl_name = filename(trailer[2]) if len(trailer) > 2 else prefix + "Great_Library.txt"
        for row in trailer[3:]:
            name = filename(row)
            declarations.append(f"null {name} {ordinary_path} {name} False True 0")
        gl_path = "%c%l\\gamedata\\" if conventional else "%c"
        text = "\n".join([
            template.version, f"{prefix}\t//Prefix", title,
            f"{filename((1, gamefile.name))} {ordinary_path}", f"{gl_name} {gl_path}",
            "//Names and locations of all the other data files",
            *declarations, "@", "",
        ])
        return cls.from_bytes(text.encode("cp1252"), str(gamefile))

    def register_file(self, value: File, key: Optional[str] = None) -> None:
        """Add an explicitly imported File to this project's registry.

        Require: ``value`` has been imported independently.
        Guarantee: append it to ``files`` using optional collection key.
        Maintain: project file declarations and source bytes remain unchanged.
        Assert: Files count increases by one.
        """
        before = self.files.count
        self.files.sneaky_add(value, key)
        assert self.files.count == before + 1

    def import_file_spec(
        self,
        spec: ProjectFileSpec,
        project_directory: PathValue,
        structure_root: PathValue,
        data_root: PathValue,
        language: str,
    ) -> File:
        """Import one structured project declaration using explicit roots.

        Require: ``spec`` belongs to this project and both declared paths exist.
        Guarantee: parse and register its File after structure and data succeed,
        resolving nested descriptors under the selected structure root.
        Maintain: do not load other declarations or register a partial File.
        Assert: returned File is registered and has the declared data source.
        """
        if not isinstance(spec, ProjectFileSpec):
            raise TypeError("spec must be a ProjectFileSpec")
        if not any(candidate is spec for candidate in self.file_specs):
            raise ValueError("spec does not belong to this project")
        structure_path = spec.resolve_structure_path(
            project_directory, structure_root, data_root, language
        )
        if structure_path is None:
            raise ValueError(
                f"{spec.source}:{spec.line_number}: cannot import a dummy file"
            )
        data_path = spec.resolve_data_path(
            project_directory, structure_root, data_root, language
        )
        structure = Structure.from_file(structure_path)
        data = read_file_bytes(data_path)
        data_source = FileReference(
            FileInterface(data_path.parent), data_path.name, data_path.parent
        )
        value = File.from_bytes(
            data,
            structure,
            data_source=data_source,
            editable=spec.editable_by_default,
            source=str(data_path),
            substructure_root=structure_root,
            allow_unknown_fields=True,
            allow_missing_count_header=True,
        )
        self.register_file(value)
        assert self.files.item(self.files.count) is value
        assert str(value.data_source.file_name) == spec.data_name
        return value

    def resolve_crossrefs(self, structure: Structure) -> CrossRefs:
        """Resolve a tree descriptor's references against imported Files.

        Require: target Files have been explicitly imported into this project.
        Guarantee: return ordered CrossRefs bound to matching File and Field objects.
        Maintain: do not mutate project Files or descriptor source bytes.
        Assert: every result has one File and one Field target.
        """
        if not isinstance(structure, Structure):
            raise TypeError("structure must be a Structure")
        references = CrossRefs.from_structure(structure)
        resolved = CrossRefs()
        for reference in references:
            matches = [
                value
                for value in self.files
                if Path(value.structure.source).name.casefold()
                == reference.target_file_name.casefold()
            ]
            if len(matches) != 1:
                condition = "not loaded" if not matches else "ambiguous"
                raise ValueError(
                    f"{reference.source}:{reference.line_number}: target File "
                    f"{reference.target_file_name} is {condition}"
                )
            resolved.add(reference.bind_file(matches[0]))
        assert all(
            reference.file is not None and reference.field is not None
            for reference in resolved
        )
        return resolved

    def to_bytes(self) -> bytes:
        """Return the project file's original bytes.

        Require: project was loaded from source bytes.
        Guarantee: return the exact `.ced` input.
        Maintain: do not serialize model edits into project configuration.
        Assert: return value equals ``original_bytes``.
        """
        assert isinstance(self.original_bytes, bytes)
        return self.original_bytes
