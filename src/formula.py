"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
LEX | Tokenize a bounded ECMAScript scalar-expression subset | [mandatory] | R1-R2
PARSE | Build an allowlisted expression tree with a Pratt parser | [mandatory] | R2-R4
RESOLVE | Expose Entry or settings snapshots, project references, and Math | [mandatory] | R5-R7,R9
EVALUATE | Evaluate with scalar-only operators and no executable statements | [mandatory] | R3-R10
SERVE | Return one finite numeric result for the requested target | [mandatory] | R8,R10

R1. WHEN an expression is supplied, reject text longer than 4096 characters or more than 256 tokens.
R2. WHEN syntax is parsed, accept finite decimal/string/Boolean/null literals, identifiers, property/index access, calls, parentheses, unary operators, arithmetic/comparison/equality/logical operators, and ternary expressions; reject assignment, statements, constructors, and arbitrary property access.
R3. WHEN arithmetic or comparison operators are evaluated, apply scalar ECMAScript-like coercion; logical operators short-circuit and return an operand.
R4. WHEN calls are evaluated, permit only `Math` helpers, `entryAt(name, fieldPath)`, and `ref(structureFile, entryName, fieldPath)`; reject every other callee.
R5. WHEN `entry` or an Entry lookup is read, expose declared fields and nested Entries from current source values; absent, inferred, ambiguous, or non-scalar reference targets raise ValueError.
R6. WHEN a lookup returns a raw field value, convert finite numeric tokens to Decimal, quoted strings to text, Boolean tokens to bool, and null tokens to None; preserve other tokens as strings.
R7. WHEN a cross-File resolver is absent or a reference cannot be uniquely resolved, raise ValueError without changing any File.
R8. WHEN evaluation finishes, require a finite non-Boolean number; do not execute Python, JavaScript statements, user functions, or mutate input values.
R9. WHEN a settings expression is evaluated, expose `value`, `setting(fileName, settingPath)`, `ref(structureFile, entryName, fieldPath)`, and `Math`; reject every other callee and read values only through supplied snapshot callbacks.
R10. WHEN a settings formula is evaluated, require a finite numeric result and preserve the same parser, token, nesting, and operator limits as Entry formulas.

CLOSED
- Full ECMAScript execution is excluded; a safe documented expression subset avoids arbitrary code and a runtime dependency.
- Formula references read pre-edit values. Pending formulas are never recursively evaluated, so one batch has no formula dependency cycles.
- Array/object literals, assignment, loops, lambdas, and regexes are excluded; indexed access is limited to repeated declared field values. Settings formulas use only `value`, `setting`, `ref`, and `Math`.

Preconditions: references return Entry models or scalar field values. Failures:
invalid syntax, unsupported tokens, unresolved fields, invalid coercions, and
non-finite results raise ValueError with expression context.
"""

from __future__ import annotations

import ast
from dataclasses import dataclass
from decimal import Decimal, InvalidOperation, ROUND_CEILING, ROUND_FLOOR
import json
import re
from typing import Callable

from entry import Entry
from field_instance import FieldInstance


_TOKEN = re.compile(
    r"(?P<space>\s+)"
    r"|(?P<number>(?:\d+(?:\.\d*)?|\.\d+)(?:[eE][+-]?\d+)?)"
    r"|(?P<string>\"(?:\\.|[^\"\\])*\"|'(?:\\.|[^'\\])*')"
    r"|(?P<identifier>[A-Za-z_$][A-Za-z0-9_$]*)"
    r"|(?P<operator>===|!==|\*\*|&&|\|\||==|!=|<=|>=|[+\-*/%<>!?:.,()[\]])"
)
_PRECEDENCE = {
    "||": 1,
    "&&": 2,
    "==": 3,
    "!=": 3,
    "===": 3,
    "!==": 3,
    "<": 4,
    "<=": 4,
    ">": 4,
    ">=": 4,
    "+": 5,
    "-": 5,
    "*": 6,
    "/": 6,
    "%": 6,
    "**": 7,
}
_MAX_EXPRESSION_LENGTH = 4096
_MAX_TOKENS = 256
_MAX_PARSE_DEPTH = 64


def _tokens(expression: str) -> tuple[tuple[str, str], ...]:
    """Tokenize one bounded expression without evaluating any source text.

    Require: ``expression`` is text.
    Guarantee: return ordered token kinds and exact token strings.
    Maintain: reject unsupported characters instead of skipping them.
    Assert: token count stays within the parser budget.
    """
    if not isinstance(expression, str):
        raise TypeError("formula must be text")
    if len(expression) > _MAX_EXPRESSION_LENGTH:
        raise ValueError("formula exceeds 4096 characters")
    result: list[tuple[str, str]] = []
    position = 0
    while position < len(expression):
        match = _TOKEN.match(expression, position)
        if match is None:
            raise ValueError(
                f"unsupported formula character at position {position + 1}"
            )
        position = match.end()
        kind = match.lastgroup
        if kind != "space":
            assert kind is not None
            result.append((kind, match.group()))
            if len(result) > _MAX_TOKENS:
                raise ValueError("formula exceeds 256 tokens")
    result.append(("end", ""))
    return tuple(result)


class _Parser:
    """Parse the safe formula grammar into inert tuple nodes."""

    def __init__(self, expression: str) -> None:
        """Initialize a bounded parser over one formula string.

        Require: ``expression`` is formula text.
        Guarantee: tokenize it and position the cursor at the first token.
        Maintain: retain the original text for contextual failures.
        Assert: tokenizer limits are enforced before parsing.
        """
        self.expression = expression
        self.tokens = _tokens(expression)
        self.index = 0

    def current(self) -> tuple[str, str]:
        """Return the unconsumed token without moving the cursor.

        Require: the cursor indexes the token stream.
        Guarantee: return its kind and spelling.
        Maintain: parser position is unchanged.
        Assert: token stream ends with an explicit sentinel.
        """
        return self.tokens[self.index]

    def take(self, expected: str | None = None) -> tuple[str, str]:
        """Consume and return one token, checking optional exact spelling.

        Require: an unconsumed token exists.
        Guarantee: return the current token and advance once.
        Maintain: a failed expectation does not advance the cursor.
        Assert: returned token is from the original token stream.
        """
        token = self.current()
        if expected is not None and token[1] != expected:
            raise ValueError(f"expected {expected!r} in formula")
        self.index += 1
        return token

    def parse(self) -> tuple[object, ...]:
        """Parse exactly one expression and reject trailing tokens.

        Require: parser input contains at least one expression token.
        Guarantee: return one inert AST tuple.
        Maintain: do not evaluate or mutate any input value.
        Assert: the final token is the end sentinel.
        """
        if self.current()[0] == "end":
            raise ValueError("formula is empty")
        result = self.expression_node(0, 0)
        if self.current()[0] != "end":
            raise ValueError(f"unexpected token {self.current()[1]!r} in formula")
        return result

    def expression_node(self, minimum: int, depth: int) -> tuple[object, ...]:
        """Parse one expression node with bounded recursive nesting.

        Require: ``minimum`` is a precedence threshold and ``depth`` is tracked.
        Guarantee: return one inert AST node consuming its complete expression.
        Maintain: never evaluate identifiers or invoke calls during parsing.
        Assert: nesting never exceeds the configured depth limit.
        """
        if depth > _MAX_PARSE_DEPTH:
            raise ValueError("formula nesting exceeds 64 levels")
        kind, spelling = self.take()
        if kind == "number":
            left: tuple[object, ...] = ("literal", Decimal(spelling))
        elif kind == "string":
            try:
                value = json.loads(spelling) if spelling.startswith('"') else ast.literal_eval(spelling)
            except (SyntaxError, ValueError, json.JSONDecodeError) as error:
                raise ValueError(f"invalid string literal: {error}") from error
            if not isinstance(value, str):
                raise ValueError("formula string literal must decode to text")
            left = ("literal", value)
        elif kind == "identifier":
            if spelling in {"true", "false", "null"}:
                literal: object = {
                    "true": True,
                    "false": False,
                    "null": None,
                }[spelling]
                left = ("literal", literal)
            elif spelling in {"new", "function", "this", "class", "return", "throw", "await", "yield"}:
                raise ValueError(f"unsupported JavaScript keyword {spelling!r}")
            else:
                left = ("identifier", spelling)
        elif spelling in {"!", "+", "-"}:
            left = ("unary", spelling, self.expression_node(8, depth + 1))
        elif spelling == "(":
            left = self.expression_node(0, depth + 1)
            self.take(")")
        else:
            raise ValueError(f"expected a formula value, got {spelling!r}")

        while True:
            kind, spelling = self.current()
            if spelling == ".":
                self.take(".")
                property_kind, property_name = self.take()
                if property_kind != "identifier":
                    raise ValueError("property access requires a field name")
                left = ("member", left, ("literal", property_name))
                continue
            if spelling == "[":
                self.take("[")
                key = self.expression_node(0, depth + 1)
                self.take("]")
                left = ("member", left, key)
                continue
            if spelling == "(":
                self.take("(")
                arguments: list[tuple[object, ...]] = []
                if self.current()[1] != ")":
                    while True:
                        arguments.append(self.expression_node(0, depth + 1))
                        if self.current()[1] != ",":
                            break
                        self.take(",")
                self.take(")")
                left = ("call", left, tuple(arguments))
                continue
            if spelling == "?" and minimum <= 0:
                self.take("?")
                when_true = self.expression_node(0, depth + 1)
                self.take(":")
                when_false = self.expression_node(0, depth + 1)
                left = ("conditional", left, when_true, when_false)
                continue
            precedence = _PRECEDENCE.get(spelling) if kind == "operator" else None
            if precedence is None or precedence < minimum:
                break
            self.take()
            next_minimum = precedence if spelling == "**" else precedence + 1
            right = self.expression_node(next_minimum, depth + 1)
            left = ("binary", spelling, left, right)
        return left


@dataclass(frozen=True)
class _Math:
    """Marker object for the explicitly allowlisted Math namespace."""


@dataclass(frozen=True)
class _Builtin:
    """One callable admitted by the formula evaluator."""

    name: str
    function: Callable[..., object]


@dataclass(frozen=True)
class _EntryView:
    """Read-only formula view over one Entry's currently stored values."""

    entry: Entry

    def property(self, name: str) -> object:
        """Return one declared field value or Entry-name metadata.

        Require: ``name`` is a property token.
        Guarantee: return a converted declared value or raise when absent.
        Maintain: field order and source values remain unchanged.
        Assert: inferred fields are excluded from formula access.
        """
        if name.casefold() in {"name", "entryname"}:
            return self.entry.name
        instances = tuple(
            instance
            for instance in self.entry.field_instances
            if instance.field.name.casefold() == name.casefold()
            and not instance.field.inferred
        )
        if not instances:
            raise ValueError(f"Entry {self.entry.name!r} has no field {name!r}")
        values = tuple(_field_value(instance) for instance in instances)
        return values[0] if len(values) == 1 else values

    def path(self, path: str) -> object:
        """Return one exact direct or nested displayed field path.

        Require: ``path`` is a displayed path string.
        Guarantee: return its declared field value or an explicit lookup error.
        Maintain: do not mutate the Entry tree.
        Assert: exactly one matching instance exists.
        """
        instances = tuple(
            instance
            for candidate, instance, _ in self.entry.field_instances_with_paths()
            if candidate.casefold() == path.casefold()
            and not instance.field.inferred
        )
        if len(instances) != 1:
            condition = "missing" if not instances else "ambiguous"
            raise ValueError(
                f"Entry {self.entry.name!r} field path {path!r} is {condition}"
            )
        return _field_value(instances[0])


def _field_value(instance: FieldInstance) -> object:
    """Convert one declared scalar or nested Entry to a safe formula value.

    Require: ``instance`` is declared by its owning Entry.
    Guarantee: return a primitive value or read-only Entry view.
    Maintain: keep the raw FieldInstance value intact.
    Assert: unsupported objects raise ValueError.
    """
    value = instance.value
    if isinstance(value, Entry):
        return _EntryView(value)
    return _scalar_value(value, instance.field.name)


def _scalar_value(value: object, field_name: str) -> object:
    """Convert one lexical scalar or nested Entry to a safe formula value.

    Require: ``value`` is a source scalar or Entry.
    Guarantee: return Decimal, text, Boolean, None, or read-only Entry view.
    Maintain: do not rewrite or normalize the stored token.
    Assert: numeric tokens are finite.
    """
    if isinstance(value, Entry):
        return _EntryView(value)
    if value is None:
        return None
    if not isinstance(value, str):
        raise ValueError(f"field {field_name!r} is not a scalar")
    token = value.strip()
    if token.casefold() in {"true", "false"}:
        return token.casefold() == "true"
    if token.casefold() in {"null", "none"}:
        return None
    try:
        number = Decimal(token)
    except InvalidOperation:
        number = None
    if number is not None:
        if not number.is_finite():
            raise ValueError(f"field {field_name!r} is not finite")
        return number
    if len(token) >= 2 and token[0] == token[-1] == '"':
        try:
            decoded = json.loads(token)
        except json.JSONDecodeError:
            return token[1:-1].replace('""', '"')
        if isinstance(decoded, str):
            return decoded
    return token


def _truthy(value: object) -> bool:
    """Return ECMAScript-like truthiness for supported scalar values.

    Require: ``value`` is a supported formula primitive.
    Guarantee: return its scalar truth value.
    Maintain: do not coerce or mutate the original value.
    Assert: unsupported compound objects remain truthy without execution.
    """
    if value is None or value is False:
        return False
    if isinstance(value, Decimal):
        return value != 0 and value.is_finite()
    if isinstance(value, (int, float)) and not isinstance(value, bool):
        return value != 0
    if isinstance(value, str):
        return bool(value)
    return True


def _number(value: object) -> Decimal:
    """Coerce supported scalar values to finite Decimal numbers.

    Require: ``value`` is a scalar literal or field value.
    Guarantee: return one finite Decimal or raise ValueError.
    Maintain: use decimal arithmetic without modifying source tokens.
    Assert: NaN and infinity are rejected.
    """
    if value is None:
        return Decimal(0)
    if isinstance(value, bool):
        return Decimal(1 if value else 0)
    if isinstance(value, Decimal):
        result = value
    elif isinstance(value, (int, float)):
        result = Decimal(str(value))
    elif isinstance(value, str):
        try:
            result = Decimal(value.strip() or "0")
        except InvalidOperation as error:
            raise ValueError(f"cannot convert {value!r} to a number") from error
    else:
        raise ValueError(f"cannot convert {type(value).__name__} to a number")
    if not result.is_finite():
        raise ValueError("formula produced a non-finite number")
    return result


def _strict_equal(left: object, right: object) -> bool:
    """Compare supported values without Python's Boolean-number aliasing.

    Require: both arguments are supported formula primitives.
    Guarantee: return a type-aware equality result.
    Maintain: never treat Boolean values as numeric aliases.
    Assert: compound values are not compared by invoking user code.
    """
    if isinstance(left, bool) != isinstance(right, bool):
        return False
    if type(left) is not type(right):
        if isinstance(left, Decimal) and isinstance(right, (int, float)):
            return left == Decimal(str(right))
        if isinstance(right, Decimal) and isinstance(left, (int, float)):
            return Decimal(str(left)) == right
        return False
    return left == right


def _loose_equal(left: object, right: object) -> bool:
    """Apply scalar JavaScript-style equality without invoking user code.

    Require: both arguments are supported formula primitives.
    Guarantee: compare identical types or safe scalar numeric coercions.
    Maintain: do not invoke custom conversion behavior.
    Assert: failed string coercion returns false.
    """
    if _strict_equal(left, right):
        return True
    if isinstance(left, bool) or isinstance(right, bool):
        return _number(left) == _number(right)
    if isinstance(left, str) and not isinstance(right, str):
        try:
            return _number(left) == _number(right)
        except ValueError:
            return False
    if isinstance(right, str) and not isinstance(left, str):
        try:
            return _number(left) == _number(right)
        except ValueError:
            return False
    return False


def _string(value: object) -> str:
    """Return primitive JavaScript-style text for scalar concatenation.

    Require: ``value`` is a supported primitive.
    Guarantee: return its scalar text form.
    Maintain: do not invoke object-defined conversions.
    Assert: compound values raise ValueError.
    """
    if value is None:
        return "null"
    if value is True:
        return "true"
    if value is False:
        return "false"
    if isinstance(value, Decimal):
        return format(value, "f")
    if isinstance(value, (int, float)):
        return str(value)
    if isinstance(value, str):
        return value
    raise ValueError(f"cannot convert {type(value).__name__} to formula text")


def _math_property(name: str) -> object:
    """Return one explicitly supported Math constant or function.

    Require: ``name`` is a Math property name.
    Guarantee: return its allowlisted value or raise ValueError.
    Maintain: expose no host-language or arbitrary runtime function.
    Assert: returned callables are wrapped in ``_Builtin``.
    """
    constants = {"PI": Decimal("3.141592653589793"), "E": Decimal("2.718281828459045")}
    if name in constants:
        return constants[name]
    functions: dict[str, Callable[..., object]] = {
        "abs": lambda value: abs(_number(value)),
        "ceil": lambda value: _number(value).to_integral_value(rounding=ROUND_CEILING),
        "floor": lambda value: _number(value).to_integral_value(rounding=ROUND_FLOOR),
        "round": lambda value: (_number(value) + Decimal("0.5")).to_integral_value(rounding=ROUND_FLOOR),
        "trunc": lambda value: _number(value).to_integral_value(),
        "min": lambda *values: min(_number(value) for value in values),
        "max": lambda *values: max(_number(value) for value in values),
        "pow": lambda left, right: _power(_number(left), _number(right)),
        "sqrt": lambda value: _number(value).sqrt(),
        "sign": lambda value: Decimal(1 if _number(value) > 0 else -1 if _number(value) < 0 else 0),
    }
    if name not in functions:
        raise ValueError(f"Math.{name} is not supported")
    return _Builtin(f"Math.{name}", functions[name])


def _power(base: Decimal, exponent: Decimal) -> Decimal:
    """Compute bounded integer powers without introducing float rounding.

    Require: ``base`` and ``exponent`` are finite Decimals.
    Guarantee: return a finite Decimal result.
    Maintain: restrict exponents to bounded integers.
    Assert: non-finite results raise ValueError.
    """
    if exponent != exponent.to_integral_value() or abs(exponent) > 1000:
        raise ValueError("Math.pow requires an integer exponent between -1000 and 1000")
    result = base ** int(exponent)
    if not result.is_finite():
        raise ValueError("formula produced a non-finite number")
    return result


def _member(target: object, key: object) -> object:
    """Resolve properties only on formula views and the Math allowlist.

    Require: ``target`` is a supported view or repeated-field sequence.
    Guarantee: return one declared value or raise an explicit access error.
    Maintain: prohibit arbitrary Python attributes and methods.
    Assert: Math access resolves only allowlisted members.
    """
    if isinstance(target, _EntryView):
        if not isinstance(key, str):
            raise ValueError("Entry field keys must be text")
        if "." in key or "[" in key:
            return target.path(key)
        return target.property(key)
    if isinstance(target, _Math):
        if not isinstance(key, str):
            raise ValueError("Math property names must be text")
        return _math_property(key)
    if isinstance(target, (tuple, list)):
        index = _number(key)
        if index != index.to_integral_value():
            raise ValueError("array index must be an integer")
        try:
            return target[int(index)]
        except IndexError as error:
            raise ValueError(f"array index {index} is outside the value") from error
    raise ValueError(f"property access is not supported on {type(target).__name__}")


def _evaluate_node(
    node: tuple[object, ...],
    variables: dict[str, object],
    depth: int = 0,
) -> object:
    """Evaluate inert AST nodes against the supplied read-only scope.

    Require: ``node`` came from ``_Parser`` and ``variables`` is the fixed scope.
    Guarantee: return a supported primitive or read-only Entry view.
    Maintain: invoke only ``_Builtin`` functions and short-circuit logical ops.
    Assert: evaluation depth stays within the token budget.
    """
    if depth > _MAX_TOKENS:
        raise ValueError("formula evaluation exceeded its depth limit")
    kind = node[0]
    if kind == "literal":
        return node[1]
    if kind == "identifier":
        name = str(node[1])
        if name not in variables:
            raise ValueError(f"unknown formula name {name!r}")
        return variables[name]
    if kind == "member":
        return _member(
            _evaluate_node(node[1], variables, depth + 1),
            _evaluate_node(node[2], variables, depth + 1),
        )
    if kind == "call":
        callable_value = _evaluate_node(node[1], variables, depth + 1)
        if not isinstance(callable_value, _Builtin):
            raise ValueError("formula calls are limited to supplied functions")
        arguments = tuple(
            _evaluate_node(argument, variables, depth + 1)
            for argument in node[2]
        )
        try:
            return callable_value.function(*arguments)
        except TypeError as error:
            raise ValueError(f"invalid arguments to {callable_value.name}: {error}") from error
    if kind == "unary":
        operator = node[1]
        value = _evaluate_node(node[2], variables, depth + 1)
        if operator == "!":
            return not _truthy(value)
        if operator == "+":
            return _number(value)
        return -_number(value)
    if kind == "conditional":
        condition = _evaluate_node(node[1], variables, depth + 1)
        branch = node[2] if _truthy(condition) else node[3]
        return _evaluate_node(branch, variables, depth + 1)
    if kind == "binary":
        operator = str(node[1])
        left = _evaluate_node(node[2], variables, depth + 1)
        if operator == "&&":
            return _evaluate_node(node[3], variables, depth + 1) if _truthy(left) else left
        if operator == "||":
            return left if _truthy(left) else _evaluate_node(node[3], variables, depth + 1)
        right = _evaluate_node(node[3], variables, depth + 1)
        if operator == "+" and (isinstance(left, str) or isinstance(right, str)):
            return _string(left) + _string(right)
        if operator == "===":
            return _strict_equal(left, right)
        if operator == "==":
            return _loose_equal(left, right)
        if operator == "!==":
            return not _strict_equal(left, right)
        if operator == "!=":
            return not _loose_equal(left, right)
        if operator in {"<", "<=", ">", ">="}:
            if isinstance(left, str) and isinstance(right, str):
                first, second = left, right
            else:
                first, second = _number(left), _number(right)
            return {
                "<": first < second,
                "<=": first <= second,
                ">": first > second,
                ">=": first >= second,
            }[operator]
        first, second = _number(left), _number(right)
        if operator == "+":
            return first + second
        if operator == "-":
            return first - second
        if operator == "*":
            return first * second
        if operator == "/":
            return first / second
        if operator == "%":
            return first % second
        if operator == "**":
            return _power(first, second)
    raise ValueError("formula contains an unsupported expression node")


def evaluate_formula(
    expression: str,
    *,
    current_value: str,
    current_entry: Entry,
    entry_at: Callable[[str, str], Entry],
    reference: Callable[[str, str, str], object] | None = None,
) -> Decimal:
    """Evaluate one expression and require a finite numeric result.

    Require: ``current_entry`` is the owning Entry; lookup callbacks read source
    values and do not mutate any File.
    Guarantee: return one finite Decimal number or raise a contextual error.
    Maintain: only parsed nodes and allowlisted calls can execute.
    Assert: no File value changes during evaluation.
    """
    try:
        value = Decimal(current_value)
    except InvalidOperation as error:
        raise ValueError(f"target value {current_value!r} is not numeric") from error
    if not value.is_finite():
        raise ValueError("target value is not finite")
    try:
        tree = _Parser(expression).parse()
    except ValueError as error:
        raise ValueError(f"invalid formula {expression!r}: {error}") from error

    def lookup_entry(name: object, path: object) -> _EntryView:
        if not isinstance(name, str) or not isinstance(path, str):
            raise ValueError("entryAt expects an Entry name and field path")
        return _EntryView(entry_at(name, path)).path(path)

    def lookup_reference(structure: object, name: object, path: object) -> object:
        if not isinstance(structure, str) or not isinstance(name, str) or not isinstance(path, str):
            raise ValueError("ref expects structure filename, Entry name, and field path")
        if reference is None:
            raise ValueError("ref is available only when a project is loaded")
        return _scalar_value(reference(structure, name, path), path)

    variables = {
        "value": value,
        "entry": _EntryView(current_entry),
        "Math": _Math(),
        "entryAt": _Builtin("entryAt", lookup_entry),
        "ref": _Builtin("ref", lookup_reference),
    }
    try:
        result = _evaluate_node(tree, variables)
        if isinstance(result, bool) or not isinstance(result, (Decimal, int, float)):
            raise ValueError("formula result must be numeric")
        number = _number(result)
    except (ArithmeticError, InvalidOperation, ValueError) as error:
        raise ValueError(f"formula failed: {error}") from error
    if not number.is_finite():
        raise ValueError("formula result must be finite")
    return number


def evaluate_settings_formula(
    expression: str,
    *,
    current_value: str,
    setting_at: Callable[[str, str], object],
    reference: Callable[[str, str, str], object] | None = None,
) -> Decimal:
    """Evaluate one settings formula using only read-only project snapshots.

    Require: current value is numeric; lookup callbacks return snapshot scalars.
    Guarantee: return one finite Decimal using `value`, `setting`, `ref`, Math.
    Maintain: never mutate loaded settings or structured Files.
    Assert: all names and calls are explicitly allowlisted.
    """
    try:
        value = Decimal(current_value)
    except InvalidOperation as error:
        raise ValueError(f"target value {current_value!r} is not numeric") from error
    if not value.is_finite():
        raise ValueError("target value is not finite")
    try:
        tree = _Parser(expression).parse()
    except ValueError as error:
        raise ValueError(f"invalid formula {expression!r}: {error}") from error

    def lookup_setting(file_name: object, path: object) -> object:
        if not isinstance(file_name, str) or not isinstance(path, str):
            raise ValueError("setting expects a file name and setting path")
        return setting_at(file_name, path)

    def lookup_reference(structure: object, name: object, path: object) -> object:
        if not isinstance(structure, str) or not isinstance(name, str) or not isinstance(path, str):
            raise ValueError("ref expects structure filename, Entry name, and field path")
        if reference is None:
            raise ValueError("ref is available only when a project is loaded")
        return _scalar_value(reference(structure, name, path), path)

    variables = {
        "value": value,
        "Math": _Math(),
        "setting": _Builtin("setting", lookup_setting),
        "ref": _Builtin("ref", lookup_reference),
    }
    try:
        result = _evaluate_node(tree, variables)
        if isinstance(result, bool) or not isinstance(result, (Decimal, int, float)):
            raise ValueError("formula result must be numeric")
        number = _number(result)
    except (ArithmeticError, InvalidOperation, ValueError) as error:
        raise ValueError(f"formula failed: {error}") from error
    if not number.is_finite():
        raise ValueError("formula result must be finite")
    return number


assert _MAX_EXPRESSION_LENGTH > 0 and _MAX_TOKENS > 0
