"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Build independent project rows and use the supplied default.ced | [mandatory] | R1-R3
PARSE | Check metadata, declarations, errors, and byte retention | [mandatory] | R1-R4
RESOLVE | Check explicit path-token expansion | [mandatory] | R5
REGISTER | Check imported File models remain separate from declarations | [mandatory] | R6
IMPORT | Import declared format 0/1/3 files using explicit roots | [mandatory] | R7
RESOLVE | Bind project tree references to loaded File and Field objects | [mandatory] | R8
ROOTS | Resolve explicit relative roots from the working directory | [mandatory] | R9
GAMEFILE | Check ordinary/mod filename slots, trailer metadata and generated project reload | [mandatory] | R10-R12
COMPAT_IMPORT | Import Gamefile declarations with source-preserving schema and legacy-data tolerance | [mandatory] | R13

R1. WHEN `.ced` bytes are parsed, retain them unchanged.
R2. WHEN header and table are parsed, preserve metadata and row order.
R3. WHEN invalid declaration rows are parsed, reject malformed values.
R4. WHEN `@` is absent, reject the project table.
R5. WHEN paths contain `%s`, `%c`, or `%l`, expand caller values.
R6. WHEN a File is registered, append exactly one File model.
R7. WHEN a declaration is imported, parse both files before registering it.
R8. WHEN a tree reference is resolved, bind its unique loaded File and Field.
R9. WHEN an explicit root is relative, resolve it from the process working directory; keep literal project-relative declaration paths anchored to the project directory.
R10. WHEN gamefile filenames are mapped, preserve template descriptors, extensions including .slc, and duplicates and reject incomplete lists.
R11. WHEN a gamefile contains title/Newsprite/GL/extra trailer rows, retain their roles without guessing extra schemas.
R12. WHEN the generated .ced is reparsed, retain filenames, prefix and metadata; leave source gamefile/template bytes unchanged and import no data implicitly.
R13. WHEN an available structured declaration is imported, retain undeclared source fields read-only, duplicate source names in order, and legacy rows without a declared count; register only successful imports and keep standalone File parsing strict by default.

CLOSED
- This suite does not assert project rewriting or automatic game-data import.

Preconditions: sample paths exist in this checkout.
Failures: pytest reports parsing, resolution, or registration contract failures.
"""

from pathlib import Path

import pytest

from ctp_project import CTPProject, ProjectFileSpec
from crossref import CrossRef
from file import File
from structure import Structure


SAMPLE = Path(__file__).parents[1] / ".private_samples" / "default.ced"


@pytest.mark.parametrize(
    "name,tail,prefix,count,title",
    [
        ("gamefile.txt", "", "", 2, "gamefile"),
        ("OX_gamefile.txt", "Orchard Mod\nOX_sprites.txt\nOX_library.txt\n", "OX_", 3, "Orchard Mod"),
        ("7_gamefile.txt", "Seventh Mod\nshapes.txt\nbook.txt\ntips.txt\nlabels.txt\n", "7_", 5, "Seventh Mod"),
    ],
)
def test_gamefile_slots_trailers_and_reload(tmp_path, name, tail, prefix, count, title):
    template_bytes = (
        b"0.3\nPX_\nTemplate\n"
        b"//Names and locations of all the other data files\n"
        b"%s Words.ces %c%l\\gamedata\\ Words.txt False False 0\n"
        b"%s Cities.ces %cdefault\\gamedata\\ Cities.txt False False 6\n"
        b"%s Newsprite.ces %cdefault\\gamedata\\ Newsprite.txt False True 0\n@\n"
    )
    template = CTPProject.from_bytes(template_bytes)
    path = tmp_path / name
    raw = ("# a comment\n\nalpha.slc\n// another comment\nbeta.txt\n" + tail).encode("cp1252")
    path.write_bytes(raw)
    project = CTPProject.from_gamefile(path, template)
    assert (project.prefix, project.title, len(project.file_specs)) == (prefix, title, count)
    assert [spec.data_name for spec in project.file_specs[:2]] == ["alpha.slc", "beta.txt"]
    assert project.file_specs[1].duplicate_count == 6
    assert project.file_specs[1].editable_by_default
    assert project.file_specs[0].resolve_data_path(tmp_path / "elsewhere", tmp_path, tmp_path, "default") == tmp_path / "alpha.slc"
    assert project.files.count == 0
    reloaded = CTPProject.from_bytes(project.to_bytes())
    assert (reloaded.prefix, reloaded.title) == (prefix, title)
    assert reloaded.file_specs == tuple(
        ProjectFileSpec.from_line(spec.source_line, "<memory>", spec.line_number)
        for spec in project.file_specs
    )
    if tail:
        assert project.file_specs[2].structure_name == "Newsprite.ces"
        assert project.special_files[1].file_name == tail.splitlines()[2]
    if count > 3:
        assert all(not spec.has_structure for spec in project.file_specs[3:])
    assert path.read_bytes() == raw
    assert template.to_bytes() == template_bytes


@pytest.mark.parametrize("raw,reason", [(b"one.txt\n", "filename slots"), (b"wrong value\n" * 65, "expected a filename"), (b"../escape.txt\n" * 65, "expected a filename")])
def test_gamefile_rejects_incomplete_or_invalid_filenames(tmp_path, raw, reason):
    path = tmp_path / "gamefile.txt"
    path.write_bytes(raw)
    with pytest.raises(ValueError, match=reason):
        CTPProject.from_gamefile(path, CTPProject.from_file(SAMPLE))
    assert path.read_bytes() == raw


def test_distribution_project_is_retained_and_declarations_parse():
    raw = SAMPLE.read_bytes()
    project = CTPProject.from_bytes(raw, str(SAMPLE))

    assert project.to_bytes() == raw
    assert project.version == "0.3"
    assert project.prefix == "PRJ_"
    assert project.title == "Project Title"
    assert len(project.special_files) == 2
    assert len(project.file_specs) == 66
    assert sum(row.duplicate_count for row in project.file_specs) == 6
    assert project.files.count == 0


def test_independent_project_rows_and_path_templates():
    project = CTPProject.from_bytes(
        b"0.3\nPX_\nSmall Project\nGame.txt %cdefault\\gamedata\\\n"
        b"// Names and locations of all the other data files\n"
        b"%s Structure.ces %c%l\\gamedata\\ Data.txt True False 2\n"
        b"null Dummy.ces relative\\ File.txt False True 0\n@\n"
    )

    assert [row.data_name for row in project.file_specs] == ["Data.txt", "File.txt"]
    first, second = project.file_specs
    assert first.resolve_structure_path("C:/project", "C:/structures", "C:/data", "en") == Path("C:/structures/Structure.ces")
    assert first.resolve_data_path("C:/project", "C:/structures", "C:/data", "en") == Path("C:/data/en/gamedata/Data.txt")
    assert second.resolve_structure_path("C:/project", "C:/structures", "C:/data", "en") is None
    assert second.resolve_data_path("C:/project", "C:/structures", "C:/data", "en") == Path("C:/project/relative/File.txt")
    assert project.special_files[0].resolve_path("C:/project", "C:/structures", "C:/data", "en", project.source) == Path("C:/data/default/gamedata/Game.txt")


def test_relative_explicit_roots_anchor_to_working_directory(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
):
    monkeypatch.chdir(tmp_path)
    spec = ProjectFileSpec.from_line(
        "%s Thing.ces %c%l\\gamedata\\ Thing.txt True True 0",
        "fixture.ced",
        8,
    )

    assert spec.resolve_structure_path(tmp_path, "Structure", "GameData", "default") == (
        tmp_path.resolve() / "Structure" / "Thing.ces"
    )
    assert spec.resolve_data_path(tmp_path, "Structure", "GameData", "default") == (
        tmp_path.resolve() / "GameData" / "default" / "gamedata" / "Thing.txt"
    )


def test_relative_explicit_roots_do_not_repeat_project_directory(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
):
    monkeypatch.chdir(tmp_path)
    project_directory = tmp_path / "private_samples"
    structure_root = Path("private_samples") / "Structure"
    spec = ProjectFileSpec.from_line(
        "%s advance.ces %cdefault\\gamedata\\ advance.txt False False 0",
        "fixture.ced",
        8,
    )

    assert spec.resolve_structure_path(
        project_directory, structure_root, "private_samples/GameData", "default"
    ) == tmp_path / "private_samples" / "Structure" / "advance.ces"


def test_relative_literal_declaration_path_remains_project_relative(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
):
    monkeypatch.chdir(tmp_path)
    spec = ProjectFileSpec.from_line(
        "Structure Thing.ces GameData Thing.txt True True 0", "fixture.ced", 8
    )

    assert spec.resolve_structure_path(
        "private_samples", "unused", "unused", "default"
    ) == tmp_path / "private_samples" / "Structure" / "Thing.ces"


@pytest.mark.parametrize(
    "row",
    [
        "one two three four true false 0 extra",
        "one two three four true false -1",
    ],
)
def test_invalid_file_declaration_is_rejected(row):
    with pytest.raises(ValueError):
        ProjectFileSpec.from_line(row, "fixture.ced", 4)


def test_missing_table_terminator_is_rejected():
    with pytest.raises(ValueError, match="terminator"):
        CTPProject.from_bytes(
            b"0.3\nPX_\nProject\n// Names and locations of all the other data files\n"
            b"null Dummy.ces relative File.txt true true 0\n"
        )


def test_register_file_adds_only_explicitly_imported_model():
    project = CTPProject.from_bytes(
        b"0.3\nPX_\nProject\n// Names and locations of all the other data files\n@\n"
    )
    structure = Structure.from_bytes((Path(__file__).parents[1] / ".private_samples" / "Structure" / "advance.ces").read_bytes())
    value = File.from_bytes(b"", structure, source="Advance.txt")

    project.register_file(value)

    assert project.files.count == 1
    assert project.files.item(1) is value


def test_project_imports_three_declared_file_formats():
    root = Path(__file__).parents[1] / ".private_samples"
    project = CTPProject.from_file(root / "default.ced")
    selected = {"const.ces", "advance.ces", "messageicon.ces"}

    imported = [
        project.import_file_spec(
            spec,
            root,
            root / "Structure",
            root / "GameData",
            "english",
        )
        for spec in project.file_specs
        if spec.structure_name.casefold() in selected
    ]

    assert len(imported) == 3
    assert {value.structure.format for value in imported} == {0, 1, 3}
    assert project.files.count == 3
    assert all(value.to_bytes() for value in imported)
    assert all(value.data_source.file_absent is False for value in imported)


def test_project_import_registers_compatible_files_and_skips_dummy_files():
    root = Path(__file__).parents[1] / ".private_samples"
    project = CTPProject.from_file(root / "default.ced")
    units = next(spec for spec in project.file_specs if spec.data_name.casefold() == "units.txt")
    before = project.files.count

    imported = project.import_file_spec(
        units, root, root / "Structure", root / "GameData", "english"
    )
    assert imported.entries.count == 74
    assert project.files.count == before + 1

    dummy = next(spec for spec in project.file_specs if spec.structure_path is None)
    with pytest.raises(ValueError, match="dummy file"):
        project.import_file_spec(
            dummy, root, root / "Structure", root / "GameData", "english"
        )
    assert project.files.count == before + 1


def test_supplied_tree_references_resolve_to_project_file_and_field_objects():
    root = Path(__file__).parents[1] / ".private_samples"
    project = CTPProject.from_file(root / "default.ced")
    names = {
        "advance.ces", "buildings.ces", "units.ces", "wonder.ces",
        "govern.ces", "pop.ces", "terrain.ces",
    }
    for spec in project.file_specs:
        if spec.structure_name.casefold() not in names:
            continue
        structure = Structure.from_file(root / "Structure" / spec.structure_name)
        project.register_file(File.from_bytes(b"", structure, source=spec.data_name))

    advance = Structure.from_file(root / "Structure" / "advance.ces")
    buildings = Structure.from_file(root / "Structure" / "buildings.ces")
    advance_refs = project.resolve_crossrefs(advance)
    building_refs = project.resolve_crossrefs(buildings)

    assert advance_refs.count == 7
    assert building_refs.count == 1
    assert all(reference.file is not None and reference.field is not None for reference in advance_refs)
    assert all(reference.file.fields.item(reference.target_field_name) is reference.field for reference in advance_refs)
    assert building_refs.item(1).file.structure.source.endswith("buildings.ces")


def test_crossref_resolution_rejects_unloaded_and_ambiguous_files():
    root = Path(__file__).parents[1] / ".private_samples" / "Structure"
    structure = Structure.from_file(root / "advance.ces")
    project = CTPProject.from_bytes(
        b"0.3\nPX_\nProject\n// Names and locations of all the other data files\n@\n"
    )
    with pytest.raises(ValueError, match="not loaded"):
        project.resolve_crossrefs(structure)

    target = Structure.from_file(root / "buildings.ces")
    first = File.from_bytes(b"", target, source="buildings.txt")
    second = File.from_bytes(b"", target, source="buildings-copy.txt")
    project.register_file(first)
    project.register_file(second)
    with pytest.raises(ValueError, match="ambiguous"):
        project.resolve_crossrefs(target)


def test_crossref_resolution_rejects_missing_target_field():
    root = Path(__file__).parents[1] / ".private_samples" / "Structure"
    target = Structure.from_file(root / "advance.ces")
    value = File.from_bytes(b"", target)
    reference = CrossRef.from_line("(X) advance.ces MissingField", "tree.ces", 9)

    with pytest.raises(ValueError, match="MissingField"):
        reference.bind_file(value)
