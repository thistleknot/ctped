"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Supply formatted, unformatted, empty, and malformed rows | [mandatory] | R1-R3
PARSE | Check flags, spacing, argument defaults, and consumption | [mandatory] | R1-R2
REJECT | Check malformed and truncated rows fail | [mandatory] | R3

R1. WHEN a field row is valid, expose its declared metadata and arguments.
R2. WHEN N arguments are declared, consume exactly N rows.
R3. WHEN columns or argument rows are missing, fail with ValueError.

CLOSED
- Fixtures are independently authored and do not copy distribution examples.

Preconditions: tests pass decoded lines and an explicit formatting flag.
Failures are reported as assertion or unexpected exception failures.
"""

import pytest

from field import Field


@pytest.mark.parametrize(
    "lines,formatted,expected_next",
    [
        (
            [
                "Feature\tt\tf\tt\t1\t2\t2",
                '\t0\t\t"10 20"\tNumbers',
                '\t*nested.ces\t""\tNested data',
                "Next\tf\tf\tf\t0",
            ],
            True,
            3,
        ),
        (["Disable\tf\tt\tf\t0 // flag", "Next\tt\tt\tf\t0"], False, 1),
        (["Age\tt\tt\tf\t1", "\tage.ces\t\tAGE_ONE\tAge reference"], False, 2),
        (["Value\tt\tf\tf\t0\t0\t1", "\t0\t\t42\tNumber"], True, 2),
    ],
)
def test_field_parses_rows_and_consumes_arguments(
    lines: list[str], formatted: bool, expected_next: int
) -> None:
    """Require varied row layouts; guarantee parsed values; maintain input; assert next index."""
    field, next_index = Field.from_lines(lines, 0, formatted, "fixture.ces")

    assert next_index == expected_next
    assert field.name in {"Feature", "Disable", "Age", "Value"}
    assert len(field.arguments) == expected_next - 1


def test_field_decodes_quoted_defaults_and_keeps_raw_tokens() -> None:
    """Require quoted and empty defaults; guarantee decoded values; maintain raw rows; assert both forms."""
    lines = ["Label\tf\tt\tf\t2", '\t0\t"A ""quoted"" value"\tText', '\t0\t""\tEmpty']

    field, next_index = Field.from_lines(lines, 0, False)

    assert next_index == 3
    assert [argument.default_value for argument in field.arguments] == ['A "quoted" value', ""]
    assert field.arguments[0].raw_default_value == '"A ""quoted"" value"'
    assert field.arguments[0].comment == "Text"


@pytest.mark.parametrize(
    "lines,formatted",
    [
        (["Broken\tf\tf"], False),
        (["Broken\tf\tf\tf\t-1"], False),
        (["Broken\tf\tf\tf\t2", "\t0\t1"], False),
        (["Broken\tf\tf\tf\t0"], True),
        (["Broken\tf\tf\tf\tnope"], False),
    ],
)
def test_field_rejects_malformed_rows(lines: list[str], formatted: bool) -> None:
    """Require malformed columns or missing arguments; guarantee parse failure; maintain input; assert ValueError."""
    with pytest.raises(ValueError, match="broken.ces:"):
        Field.from_lines(lines, 0, formatted, "broken.ces")
