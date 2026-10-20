"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply independent direct field and literal bracket expressions | [mandatory] | R1-R2
SCAN | Validate bracket structure and preserve nested unsupported syntax | [mandatory] | R1,R4
RENDER | Substitute direct names and evaluate conditions, field/file loops, references, consequences, database names, aborts, arithmetic, and counters | [mandatory] | R2-R4,R7-R9,R12-R28,R40-R42
GLNAME | Resolve `.GLName` through the supplied resolver for root, nested, and referenced Entries | [mandatory] | R10
ROUNDTRIP | Retain source bytes and exercise all supplied `.glt` samples | [mandatory] | R5-R6
SCHEMA_TEMPLATE | Exercise Units and Wonder templates with descriptor-matched synthetic Entries | [mandatory] | R43
REJECT | Reject unmatched opening or closing brackets | [mandatory] | R1

R1. WHEN a template has unmatched square brackets, raise a source-context error.
R2. WHEN `[.Name]` or a supplied special value is present, substitute that text.
R3. WHEN a direct field exists, use its first non-None FieldInstance value; when missing or None, use an empty string.
R4. WHEN syntax is a conditional, evaluate both branch bodies before choosing visible output; preserve unsupported conditions literally.
R5. WHEN an original template is parsed, `to_bytes` equals its exact source bytes.
R6. WHEN each supplied `.glt` sample is available, parse its brackets, round-trip every byte, and execute it without an exception.
R7. WHEN a repeat lists matching FieldInstances, render once per instance and add separators between results only.
R8. WHEN a repeat renders a scalar, resolve `.Name` to that value; when it renders a nested Entry, resolve direct fields from that Entry.
R9. WHEN a repeat is nested inside a repeated Entry value, resolve it against that Entry's FieldInstances.
R10. WHEN `.GLName` has a supplied resolver, pass the active Entry name and render its returned localized name; without a resolver or explicit `GLName` special field, retain the expression literally.
R12. WHEN arithmetic operands are numeric, apply spaced operators from left to right with no parentheses.
R13. WHEN `%` is used, perform integer division truncated toward zero; WHEN division by zero occurs, preserve the directive.
R14. WHEN a field is absent or missing, render empty; WHEN its value is nonnumeric, preserve that value without arithmetic.
R15. WHEN a render begins, initialize a fresh counter to zero and do not share state with other renders.
R16. WHEN nested contents inside `[#X]` render to a counter operation, apply it or display the current count.
R17. WHEN rendered `[#X]` contents are unknown, remove the directive without changing the counter.
R18. WHEN a conditional has side effects in both branches, evaluate both branches before selecting its output.
R19. WHEN an abort expression is evaluated, render its nested contents and request one enclosing repeat abort per resulting character.
R20. WHEN nested repeats receive abort requests, finish each active iteration and unwind one repeat level per request.
R21. WHEN `[*Structure.ces body|separator]` receives a resolver, render matching File Entries in order and join with the optional separator.
R22. WHEN no resolver or no matching declaration exists, preserve the file-loop expression literally.
R23. WHEN a field repeat contains a raw reference and its reference resolver resolves the target file, render direct fields from the referenced Entry without changing the source FieldInstance.
R24. WHEN a referenced File or Entry cannot be resolved uniquely, raise ValueError and retain the raw source value.
R25. WHEN a reference target file is looked up, match structure filenames case-insensitively as `FieldInstance.value_to_object` does.
R26. WHEN a direct field expression has dotted suffixes, resolve its fields in order through referenced or nested Entries.
R27. WHEN a suffix path cannot continue through an Entry, preserve the whole expression literally.
R28. WHEN a suffix reference target is missing or ambiguous, raise ValueError without changing source values.
R40. WHEN a consequences resolver returns ordered Entries, THEN `?Consequences` tests whether the collection is nonempty and `~Consequences` renders each Entry with separators between results only; WHEN absent, keep normal field lookup behavior.
R41. WHEN a database resolver is supplied, resolve `.DB` from the active root, nested, referenced, or repeated Entry; WHEN absent, preserve existing field lookup behavior.
R42. WHEN a file loop contains a field-presence condition and nested raw-reference repeat, render the matching names in order, add only the configured outer separator, and keep source values raw.
R43. WHEN a Units or Wonder template is executed, use its supplied `.ces` schema to build synthetic Entries and resolver targets; exercise populated field conditions, repeats, `.DB`, `.GLName`, and file loops without importing incompatible candidate game data.

CLOSED
- Fixtures are independently authored; real sample tests cover the copied distribution files.

Preconditions: tests can access the copied structure and actual CTPEd template folder.
Failures surface as assertion or unexpected exception failures.
"""

from pathlib import Path

import pytest

from entry import Entry
from entries import Entries
from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances
from fields import Fields
from file import File
from gl_template import GLTemplate
from gl_strings import GLStringTable
from structure import Structure


def _entry() -> Entry:
    instances = FieldInstances()
    fields = []
    for name, value in (
        ("Attack", "120"),
        ("Attack", "99"),
        ("Flag", None),
        ("Quoted", '"Raw text"'),
    ):
        multiple = "t" if name == "Attack" else "f"
        definition, _ = Field.from_lines(
            [f"{name}\tf\tf\t{multiple}\t1", "\t0\t\tNULL"], 0, False
        )
        fields.append(definition)
        instances.add(FieldInstance(definition, value))
    return Entry("fixture.txt", "ITEM_ONE", 1, (), instances)


def test_template_renders_project_consequences_in_callback_order() -> None:
    root = Entry("source.txt", "SOURCE", 1, (), FieldInstances())
    consequences = [
        Entry("target.txt", "FIRST", 1, (), FieldInstances()),
        Entry("target.txt", "SECOND", 2, (), FieldInstances()),
    ]
    calls: list[Entry] = []
    template = GLTemplate.from_bytes(
        b"[?Consequences|yes|none]: [~Consequences [.Name]|, ]",
        "consequences.glt",
    )

    def resolve(active_entry: Entry) -> tuple[Entry, ...]:
        calls.append(active_entry)
        return tuple(consequences)

    assert template.render(root, consequences_resolver=resolve) == "yes: FIRST, SECOND"
    assert calls == [root]
    assert template.render(root, consequences_resolver=lambda _entry: ()) == "none: "
    assert template.render(root) == "none: "


def test_template_resolves_database_name_for_each_repeated_entry() -> None:
    child_field, _ = Field.from_lines(
        ["Children\tf\tf\tt\t1", "\t*child.ces\t0\tChild records"], 0, False
    )
    children = (
        Entry("child.txt", "ONE", 1, (), FieldInstances()),
        Entry("child.txt", "TWO", 2, (), FieldInstances()),
    )
    values = FieldInstances()
    for child in children:
        values.add(FieldInstance(child_field, child))
    root = Entry("source.txt", "SOURCE", 1, (), values)
    template = GLTemplate.from_bytes(b"[~Children [.DB]|, ]", "database.glt")

    assert template.render(
        root,
        db_resolver=lambda entry: f"DATABASE_{entry.name}",
    ) == "DATABASE_ONE, DATABASE_TWO"


def test_template_composes_file_loop_condition_and_reference_repeat() -> None:
    unit_structure = Structure.from_bytes(
        b"0.3 // Version\n#\n%032%009\n:\n}{\n3 // Format\nf\nf\nf\nf\nf\nf\n@\n",
        "units.ces",
    )
    advance_structure = Structure.from_bytes(
        b"0.3 // Version\n#\n%032%009\n:\n}{\n1 // Format\nf\nf\nf\nf\nf\nf\n@\n",
        "advance.ces",
    )
    obsolete, _ = Field.from_lines(
        ["ObsoleteAdvance\tf\tf\tt\t1", "\tadvance.ces\t0\tAdvance"],
        0,
        False,
    )
    unit_entries = Entries()
    raw_instances: list[FieldInstance] = []
    for name, values in (
        ("UNIT_ALPHA", ("ADVANCE_OLD", "ADVANCE_NEW")),
        ("UNIT_BETA", ()),
    ):
        instances = FieldInstances()
        for value in values:
            instance = FieldInstance(obsolete, value)
            raw_instances.append(instance)
            instances.add(instance)
        unit_entries.sneaky_add(
            Entry("units.txt", name, 3, (), instances, unit_structure)
        )
    unit_file = File("units.txt", b"", unit_structure, Fields(), unit_entries, None, True, ())
    advance_entries = Entries()
    for name in ("ADVANCE_OLD", "ADVANCE_NEW"):
        advance_entries.sneaky_add(
            Entry("advance.txt", name, 1, (), FieldInstances(), advance_structure)
        )
    advance_file = File(
        "advance.txt", b"", advance_structure, Fields(), advance_entries, None, True, ()
    )
    template = GLTemplate.from_bytes(
        b"[*units.ces [?ObsoleteAdvance|[~ObsoleteAdvance [.GLName]|, ]|No obsolete]|;]",
        "nested-project-loop.glt",
    )

    rendered = template.render(
        unit_entries.item("UNIT_ALPHA"),
        file_resolver=lambda name: unit_file if name == "units.ces" else None,
        reference_resolver=lambda name: advance_file if name.casefold() == "advance.ces" else None,
        gl_name_resolver=lambda name: f"Localized {name}",
    )

    assert rendered == "Localized ADVANCE_OLD, Localized ADVANCE_NEW;No obsolete"
    assert tuple(instance.value for instance in raw_instances) == (
        "ADVANCE_OLD",
        "ADVANCE_NEW",
    )


def test_units_and_wonder_templates_render_schema_matched_entries() -> None:
    structure_root = Path(r"H:\Games\ctp2\CTPEd053\Structure")
    template_root = Path(r"H:\Games\ctp2\CTPEd053\GLTemplates")
    structures = {
        name: Structure.from_file(structure_root / name)
        for name in ("units.ces", "wonder.ces", "buildings.ces", "advance.ces")
    }
    fields_by_file = {
        name: Fields.from_structure(structure)
        for name, structure in structures.items()
    }

    def load_structure(file_name: str) -> Structure:
        if file_name not in structures:
            structures[file_name] = Structure.from_file(structure_root / file_name)
        return structures[file_name]

    def reference_entry(file_name: str) -> Entry:
        structure = load_structure(file_name)
        return Entry(
            file_name.removesuffix(".ces") + ".txt",
            file_name.removesuffix(".ces").upper() + "_SYNTH",
            structure.format,
            (),
            FieldInstances(),
            structure,
        )

    def make_entry(file_name: str, name: str, enabled_markers: tuple[str, ...] = ()) -> Entry:
        instances = FieldInstances()
        for definition in fields_by_file[file_name]:
            argument_type = definition.arguments[0].argument_type if definition.arguments else ""
            if definition.name in {"Television", "Cathedral", "Brokerage"}:
                value = "1" if definition.name in enabled_markers else None
            elif argument_type.startswith("*"):
                child_name = argument_type[1:]
                child_structure = load_structure(child_name)
                child_fields = Fields.from_structure(child_structure)
                child_instances = FieldInstances()
                max_cargo = child_fields.item_no_error("MaxCargo")
                if max_cargo is not None:
                    child_instances.add(FieldInstance(max_cargo, "2"))
                value = Entry(
                    child_name,
                    "",
                    child_structure.format,
                    (),
                    child_instances,
                    child_structure,
                )
            elif argument_type.lower().endswith(".ces"):
                value = reference_entry(argument_type)
            elif definition.arguments:
                value = "1"
            else:
                value = "1"
            instances.add(FieldInstance(definition, value))
            if definition.allows_multiple and argument_type.lower().endswith(".ces"):
                instances.add(FieldInstance(definition, reference_entry(argument_type)))
        return Entry(file_name.removesuffix(".ces") + ".txt", name, 1, (), instances, structures[file_name])

    unit = make_entry("units.ces", "UNIT_SYNTH")
    wonder = make_entry("wonder.ces", "WONDER_SYNTH")
    buildings = Entries()
    for name, markers in (
        ("BUILDING_TV", ("Television",)),
        ("BUILDING_CATHEDRAL", ("Cathedral",)),
        ("BUILDING_BROKERAGE", ("Brokerage",)),
    ):
        buildings.sneaky_add(make_entry("buildings.ces", name, markers))
    building_file = File("buildings.txt", b"", structures["buildings.ces"], fields_by_file["buildings.ces"], buildings, None, True, ())

    def file_resolver(name: str) -> File | None:
        return building_file if name.casefold() == "buildings.ces" else None

    def render(template_name: str, entry: Entry) -> str:
        template = GLTemplate.from_file(template_root / template_name)
        return template.render(
            entry,
            file_resolver=file_resolver,
            db_resolver=lambda active: active.structure.gl_database if active.structure else None,
            gl_name_resolver=lambda target: f"Localized {target}",
        )

    unit_prereq = render("units_prereq.glt", unit)
    unit_stats = render("units_stattext.glt", unit)
    unit_vari = render("units_vari.glt", unit)
    wonder_prereq = render("wonder_prereq.glt", wonder)
    wonder_vari = render("wonder_vari.glt", wonder)

    assert "Localized ADVANCE_SYNTH" in unit_prereq
    assert "DATABASE_ADVANCES" in unit_prereq
    assert "Localized GOVERN_SYNTH" in unit_stats
    assert "Localized GOVERN_SYNTH<e>, <L:DATABASE_GOVERNMENTS,GOVERN_SYNTH>Localized GOVERN_SYNTH" in unit_stats
    assert "Transports 2" in unit_stats
    assert "{UnitDB(UnitRecord[0]).Attack / 100}" in unit_vari
    assert "Localized ADVANCE_SYNTH" in wonder_prereq
    assert "DATABASE_ADVANCES" in wonder_prereq
    assert "BUILDING_TV" in wonder_vari
    assert "BUILDING_CATHEDRAL" in wonder_vari
    assert "BUILDING_BROKERAGE" in wonder_vari
    assert "DATABASE_BUILDINGS" in wonder_vari


def test_template_resolves_gl_name_for_current_entry_and_keeps_unbound_literal() -> None:
    template = GLTemplate.from_bytes(b"[.GLName]", "gl-name.glt")
    calls: list[str] = []

    def resolve(name: str) -> str | None:
        calls.append(name)
        return {"ITEM_ONE": "Localized item"}.get(name)

    assert template.render(_entry(), gl_name_resolver=resolve) == "Localized item"
    assert calls == ["ITEM_ONE"]
    assert template.render(_entry()) == "[.GLName]"
    assert template.render(_entry(), gl_name_resolver=lambda _name: None) == "[.GLName]"
    assert template.render(_entry(), gl_name_resolver=lambda _name: "") == ""


def test_template_renders_name_resolved_from_gl_string_table() -> None:
    template = GLTemplate.from_bytes(b"[.GLName]", "gl-name.glt")
    table = GLStringTable.from_bytes(
        b'ITEM_ONE\t\t"Localized item"\n', "gl_str.txt"
    )

    assert template.render(
        _entry(), gl_name_resolver=table.native_name_for
    ) == "Localized item"


def test_template_resolves_gl_name_through_nested_entry() -> None:
    prerequisite, _ = Field.from_lines(
        ["Prerequisite\tf\tf\tf\t1", "\t*child.ces\t0\tNested entry"], 0, False
    )
    nested = Entry("child.txt", "ADVANCE_CHILD", 1, (), FieldInstances())
    values = FieldInstances()
    values.add(FieldInstance(prerequisite, nested))
    owner = Entry("owner.txt", "UNIT_OWNER", 1, (), values)
    template = GLTemplate.from_bytes(b"[.Prerequisite.GLName]", "nested-name.glt")

    assert template.render(
        owner, gl_name_resolver=lambda name: f"Localized {name}"
    ) == "Localized ADVANCE_CHILD"


def test_template_resolves_gl_name_through_raw_reference_without_mutating_source() -> None:
    structure = Structure.from_bytes(
        b"0.3 // Version\n#\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n@\n",
        "advance.ces",
    )
    target = Entry("advance.txt", "ADVANCE_TARGET", 1, (), FieldInstances())
    target_entries = Entries()
    target_entries.sneaky_add(target)
    target_file = File(
        "advance.txt", b"", structure, Fields(), target_entries, None, True, ()
    )
    prerequisite, _ = Field.from_lines(
        ["Prerequisite\tf\tf\tf\t1", "\tadvance.ces\t0\tTarget entry"], 0, False
    )
    source_instance = FieldInstance(prerequisite, "ADVANCE_TARGET")
    values = FieldInstances()
    values.add(source_instance)
    owner = Entry("owner.txt", "UNIT_OWNER", 1, (), values)
    template = GLTemplate.from_bytes(
        b"[~Prerequisite [.GLName]|, ]", "referenced-name.glt"
    )

    rendered = template.render(
        owner,
        reference_resolver=lambda name: target_file if name == "advance.ces" else None,
        gl_name_resolver=lambda name: f"Localized {name}",
    )

    assert rendered == "Localized ADVANCE_TARGET"
    assert source_instance.value == "ADVANCE_TARGET"


@pytest.mark.parametrize(
    "source,expected",
    [
        (
            "Name=[.Name]; Attack=[.Attack]; next=[.Missing]",
            "Name=ITEM_ONE; Attack=120; next=",
        ),
        (
            "[.DB] [0] [.Other.GLName] [.Attack / 10] [~Attack [.Name]]",
            "DATABASE_UNITS [0] [.Other.GLName] 12 12099",
        ),
        ("[~Attack [.Cost]|, ]", ", "),
        ("[.Attack.Cost]", "[.Attack.Cost]"),
        (
            "[.Flag]|[.Quoted]",
            '|"Raw text"',
        ),
    ],
)
def test_template_substitutes_supported_direct_fields_and_preserves_other_syntax(
    source: str, expected: str
) -> None:
    template = GLTemplate.from_bytes(source.encode("cp1252"), "fixture.glt")

    assert template.render(_entry(), {"DB": "DATABASE_UNITS"}) == expected
    assert template.to_bytes() == source.encode("cp1252")


@pytest.mark.parametrize("source", [b"unclosed [.Field", b"extra close ]"])
def test_template_rejects_unbalanced_brackets(source: bytes) -> None:
    with pytest.raises(ValueError, match="fixture.glt: unmatched"):
        GLTemplate.from_bytes(source, "fixture.glt")


@pytest.mark.parametrize(
    "source,expected",
    [
        ("[?[.Attack]=120|match|miss]", "match"),
        ("[?[.Attack]=121|match|miss]", "miss"),
        ("[?Flag|present|absent]", "present"),
        ("[?Missing|present|absent]", "absent"),
        (
            "[?[.Name]=ITEM_ONE|[?Flag|yes|no]|outer-no]",
            "yes",
        ),
        (
            "[?[.Attack]>100|yes|no] [?Flag>0|yes|no] [?Flag|yes]",
            "[?[.Attack]>100|yes|no] [?Flag>0|yes|no] [?Flag|yes]",
        ),
        ("[?[.Flag]=|empty|not empty]", "empty"),
        ("[?[.Missing]=|empty|not empty]", "empty"),
    ],
)
def test_template_evaluates_documented_conditionals_and_preserves_unsupported_forms(
    source: str, expected: str
) -> None:
    template = GLTemplate.from_bytes(source.encode("cp1252"), "condition.glt")

    assert template.render(_entry()) == expected


@pytest.mark.parametrize(
    "source,expected",
    [
        ("[~Attack [.Name]|, ]", "120, 99"),
        ("[~Attack item=[.Name]|; ]", "item=120; item=99"),
        ("[~Flag [.Name]|, ]", ""),
        ("[~Missing [.Name]|, ]", ""),
        ("[~Attack]", "[~Attack]"),
    ],
)
def test_template_repeats_matching_instances_with_between_only_separator(
    source: str, expected: str
) -> None:
    template = GLTemplate.from_bytes(source.encode("cp1252"), "repeat.glt")

    assert template.render(_entry()) == expected


@pytest.mark.parametrize(
    "source,expected",
    [
        ("[~Attack [.Name][!!]|, ]", "120"),
        ("[~Attack [.Name][!!!]|, ]", "120"),
        ("[~Attack [.Name][![?Attack|!|]]|, ]", "120"),
        ("[~Attack [.Name][![?Missing|!|]]|, ]", "120, 99"),
        ("[~Attack [.Name][?Missing|[!!]|]|, ]", "120"),
    ],
)
def test_template_aborts_repeats_by_evaluated_character_count(
    source: str, expected: str
) -> None:
    template = GLTemplate.from_bytes(source.encode("cp1252"), "abort.glt")

    assert template.render(_entry()) == expected


def test_template_abort_unwinds_the_requested_nested_repeat_levels() -> None:
    child_fields = FieldInstances()
    tag, _ = Field.from_lines(
        ["Tag\tf\tf\tt\t1", "\t0\t\tNULL"], 0, False
    )
    child_fields.add(FieldInstance(tag, "EARLY"))
    child_fields.add(FieldInstance(tag, "LATE"))
    child = Entry("advance.txt", "ADVANCE_ALPHA", 1, (), child_fields)
    parent_fields = FieldInstances()
    prerequisite, _ = Field.from_lines(
        ["Prerequisite\tf\tf\tt\t1", "\t0\t\tNULL"], 0, False
    )
    parent_fields.add(FieldInstance(prerequisite, child))
    parent = Entry("unit.txt", "UNIT_ALPHA", 1, (), parent_fields)
    template = GLTemplate.from_bytes(
        b"[~Prerequisite [.Name][~Tag [.Name][!!!]]|, ]", "nested-abort.glt"
    )

    assert template.render(parent) == "ADVANCE_ALPHAEARLY"


@pytest.mark.parametrize(
    "source,expected,value",
    [
        ("[.Attack / 10 + 1]", "13", "120"),
        ("[.Attack + 10 * 2]", "260", "120"),
        ("[.Attack % 10]", "12", "120"),
        ("[.Attack / [.Attack / 10]]", "10", "120"),
        ("[.Attack % 2]", "-4", "-9"),
        ('[.Quoted / 2]', '"Raw text"', '120'),
        ("[.Missing + 2]", "", "120"),
        ("[.Attack / 0]", "[.Attack / 0]", "120"),
        ("[.Attack/10]", "[.Attack/10]", "120"),
    ],
)
def test_template_evaluates_documented_numeric_arithmetic(
    source: str, expected: str, value: str
) -> None:
    entry = _entry()
    entry.field_instances.item(1).set_value(value)
    template = GLTemplate.from_bytes(source.encode("cp1252"), "arithmetic.glt")

    assert template.render(entry) == expected


@pytest.mark.parametrize(
    "source,expected",
    [
        ("[##]", "0"),
        ("[#+][##][#+][##][#-][##][#0][##][#unknown]", "1210"),
        ("[?Flag|yes[#+]|no[#0]][##]", "yes0"),
        ("[~Attack [#+][##]|, ]", "1, 2"),
        ("[#[?Flag|+|]][##]", "1"),
        ("[#[?Missing|+|]][##]", "0"),
    ],
)
def test_template_evaluates_counter_directives_and_both_conditional_branches(
    source: str, expected: str
) -> None:
    template = GLTemplate.from_bytes(source.encode("cp1252"), "counter.glt")

    assert template.render(_entry()) == expected


def test_template_counter_starts_fresh_for_each_render() -> None:
    template = GLTemplate.from_bytes(b"[#+][##]", "counter-reset.glt")

    assert template.render(_entry()) == "1"
    assert template.render(_entry()) == "1"


def test_template_repeat_resolves_nested_entry_fields() -> None:
    nested_cost, _ = Field.from_lines(
        ["Cost\tf\tf\tf\t1", "\t0\t\tNULL"], 0, False
    )
    nested_values = FieldInstances()
    nested_values.add(FieldInstance(nested_cost, "30"))
    nested_tag, _ = Field.from_lines(
        ["Tag\tf\tf\tt\t1", "\t0\t\tNULL"], 0, False
    )
    nested_values.add(FieldInstance(nested_tag, "EARLY"))
    nested_values.add(FieldInstance(nested_tag, "LATE"))
    nested_entry = Entry("advance.txt", "ADVANCE_ALPHA", 1, (), nested_values)
    prerequisite, _ = Field.from_lines(
        ["Prerequisite\tf\tf\tt\t1", "\t0\t\tNULL"], 0, False
    )
    outer_values = FieldInstances()
    outer_values.add(FieldInstance(prerequisite, nested_entry))
    outer_entry = Entry("units.txt", "UNIT_ALPHA", 1, (), outer_values)
    template = GLTemplate.from_bytes(
        b"[~Prerequisite [.Name]=[.Cost] tags=[~Tag [.Name]|, ]|, ]",
        "nested-repeat.glt",
    )

    assert template.render(outer_entry) == "ADVANCE_ALPHA=30 tags=EARLY, LATE"
    suffix = GLTemplate.from_bytes(b"[.Prerequisite.Cost]", "nested-suffix.glt")
    assert suffix.render(outer_entry) == "30"


def test_template_roundtrips_all_supplied_ctped_samples() -> None:
    root = Path(__file__).parents[1] / ".private_samples" / "GLTemplates"
    paths = sorted(root.glob("*.glt"))
    if not paths:
        pytest.skip("original CTPEd GL template samples are unavailable")

    assert len(paths) == 11
    for path in paths:
        data = path.read_bytes()
        template = GLTemplate.from_file(path)
        assert template.to_bytes() == data
        assert isinstance(template.render(_entry(), {"DB": "DATABASE_UNITS"}), str)
