"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Provide varied main and substructure descriptors | [mandatory] | R1-R3
PARSE | Check declared format and GL metadata plus rejection rules | [mandatory] | R1-R2
ROUNDTRIP | Compare unchanged descriptor bytes | [mandatory] | R3

R1. WHEN a supported descriptor is read, expose its declared header and GL values.
R2. WHEN format or required header data is invalid, fail clearly.
R3. WHEN a descriptor is unchanged, return its original bytes exactly.
R4. WHEN a tree-structure descriptor is read, expose its defining field name.

CLOSED
- Fixtures are independently authored and do not copy distribution examples.

Preconditions: tests use byte strings and pytest temporary directories.
Failures are reported as assertion or unexpected exception failures.
"""

from pathlib import Path

import pytest

from structure import Structure


DESCRIPTORS = [
    (
        "main-format-1",
        b"""0.3 // Version
#%047%047
%032%009
:
}{
1 // Format
f // entry count
t // tree
t // gl refs
t // gl strings
f // article
f // icon
t // field formatting
1 // start spacing
2 // between entries
Field\tt\tt\tf\t1\t1\t1
@ // end fields
@ // end cross references
Icon // GL icon field
DATABASE_TEST // GL database
TEST_ // GL prefix
""",
        1,
    ),
    (
        "sub-format-1",
        b"""0.3 // Version
1 // Format
f // entry count
f // tree
f // gl refs
f // gl strings
f // icon
f // field formatting
Field\tt\tt\tf\t1
@ // end fields
""",
        1,
    ),
    (
        "format-0",
        b"""0.3 // Version
#%047%047
%032%009
:
}{
0 // Format
""",
        0,
    ),
    (
        "format-2",
        b"""0.3 // Version
#
%032%009
:
}{
2 // Format
gl_str.txt // Filename
%c%l\\gamedata\\ // Path
# // Comment
%009 // Delimiter
""",
        2,
    ),
    (
        "format-3",
        b"""0.3 // Version
#%047%047
%032%009
:
}{
3 // Format
t // entry count
FileName\tt\tt\tf\t1
@ // end fields
""",
        3,
    ),
]


@pytest.mark.parametrize("name,content,expected_format", DESCRIPTORS)
def test_structure_reads_declared_format(
    name: str, content: bytes, expected_format: int
) -> None:
    """Require varied descriptor forms; guarantee header parse; maintain source; assert format."""
    structure = Structure.from_bytes(content, name)

    assert structure.format == expected_format
    assert structure.to_bytes() == content


def test_structure_reads_format_one_header_flags() -> None:
    """Require a main format-one descriptor; guarantee parsed flags; maintain source; assert values."""
    structure = Structure.from_bytes(DESCRIPTORS[0][1])

    assert structure.comment_char == "#//"
    assert structure.delimiter_char == " \t"
    assert structure.delimiter_char_right == ":"
    assert structure.delimiter_char_left == "}{"
    assert structure.has_entry_count is False
    assert structure.has_tree_structure is True
    assert structure.references_gl is True
    assert structure.has_gl_strings is True
    assert structure.has_article is False
    assert structure.is_gl_icon_file is False
    assert structure.has_field_formatting is True
    assert structure.lines_at_start_of_entry == 1
    assert structure.lines_between_entries == 2
    assert structure.gl_icon_field == "Icon"
    assert structure.gl_database == "DATABASE_TEST"
    assert structure.gl_prefix == "TEST_"
    assert structure.gl_article_suffix is None


def test_structure_reads_gl_metadata_and_article_suffix_from_samples() -> None:
    root = Path(__file__).parents[1] / ".private_samples" / "Structure"
    advance = Structure.from_file(root / "advance.ces")
    wonder = Structure.from_file(root / "wonder.ces")

    assert (advance.gl_icon_field, advance.gl_database, advance.gl_prefix) == (
        "Icon",
        "DATABASE_ADVANCES",
        "ADVANCE_",
    )
    assert (wonder.gl_icon_field, wonder.gl_database, wonder.gl_prefix) == (
        "DefaultIcon",
        "DATABASE_WONDERS",
        "WONDER_",
    )
    assert wonder.gl_article_suffix == "_ARTICLE"


def test_structure_leaves_omitted_substructure_header_unset() -> None:
    """Require a substructure descriptor; guarantee omitted values stay unset; maintain source; assert None."""
    structure = Structure.from_bytes(DESCRIPTORS[1][1])

    assert structure.comment_char is None
    assert structure.delimiter_char is None
    assert structure.has_gl_strings is False
    assert structure.has_article is None
    assert structure.gl_icon_field is None
    assert structure.gl_database is None
    assert structure.gl_prefix is None
    assert structure.gl_article_suffix is None


def test_structure_rejects_incomplete_gl_metadata() -> None:
    content = DESCRIPTORS[0][1].replace(b"TEST_ // GL prefix\n", b"")

    with pytest.raises(ValueError, match="expected 3 GL metadata values"):
        Structure.from_bytes(content, "fixture.ces")


def test_structure_reads_format_two_metadata() -> None:
    """Require a format-two descriptor; guarantee strings metadata; maintain source; assert decoded values."""
    structure = Structure.from_bytes(DESCRIPTORS[3][1])

    assert structure.strings_file_name == "gl_str.txt"
    assert structure.strings_file_path == "%c%l\\gamedata\\"
    assert structure.strings_comment_char == "#"
    assert structure.strings_delimiter_char == "\t"


@pytest.mark.parametrize(
    "content",
    [case[1] for case in DESCRIPTORS] + [b"0.3\r\n# \xfc\r\n"],
)
def test_structure_preserves_exact_source_bytes(content: bytes) -> None:
    """Require varied encodings and line endings; guarantee exact output; maintain bytes; assert equality."""
    if content.endswith(b"\xfc\r\n"):
        content = b"0.3 // Version\r\n#%047%047\r\n%032%009\r\n:\r\n}{\r\n0 // Format\r\n# \xfc\r\n"
    structure = Structure.from_bytes(content)

    assert structure.to_bytes() == content


@pytest.mark.parametrize(
    "content",
    [b"", b"0.3\n1 // Format\n", b"0.3\n4 // Format\n"],
)
def test_structure_rejects_invalid_headers(content: bytes) -> None:
    """Require empty, missing, and unsupported headers; guarantee clear failure; maintain input; assert ValueError."""
    with pytest.raises(ValueError):
        Structure.from_bytes(content)


def test_structure_loads_from_file(tmp_path: Path) -> None:
    """Require a readable descriptor file; guarantee parsed structure; maintain file; assert exact bytes."""
    source = tmp_path / "sample.ces"
    content = DESCRIPTORS[4][1]
    source.write_bytes(content)

    structure = Structure.from_file(source)

    assert structure.source == str(source)
    assert structure.to_bytes() == content


TREE_DESCRIPTOR = (
    b"0.3 // Version\n"
    b"#%047%047\n"
    b"%032%009\n"
    b":\n"
    b"}{\n"
    b"1 // Format\n"
    b"f // entry count\n"
    b"{TREE} // tree\n"
    b"f // gl refs\n"
    b"f // gl strings\n"
    b"f // icon\n"
    b"f // field formatting\n"
    b"Name\tt\tt\tf\t1\n"
    b"@ //End of fields\n"
    b"Prerequisites\t//The defining field of the tree structure\n"
)


def test_structure_reads_tree_defining_field_name() -> None:
    """Require a tree-structure descriptor; guarantee the defining field name; maintain source; assert value."""
    content = TREE_DESCRIPTOR.replace(b"{TREE}", b"t")
    structure = Structure.from_bytes(content, "tree.ces")

    assert structure.has_tree_structure is True
    assert structure.preq_field == "Prerequisites"
    assert structure.to_bytes() == content


def test_structure_leaves_preq_field_unset_without_tree() -> None:
    """Require a descriptor without a tree; guarantee no defining field; maintain source; assert None."""
    content = TREE_DESCRIPTOR.replace(b"{TREE}", b"f")
    structure = Structure.from_bytes(content, "flat.ces")

    assert structure.has_tree_structure is False
    assert structure.preq_field is None
    assert structure.to_bytes() == content


def test_structure_reads_advance_defining_field_from_sample() -> None:
    """Require the real advance descriptor; guarantee its tree prerequisite field; maintain source; assert value."""
    path = Path("H:/Games/ctp2/CTPEd053/Structure/advance.ces")
    if not path.exists():
        pytest.skip(f"sample descriptor missing: {path}")
    advance = Structure.from_file(path)

    assert advance.preq_field == "Prerequisites"
