"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
INGEST | Retain source bytes and decode source lines for parsing | [mandatory] | R1
COUNT | Separate and validate a declared entry-count header | [opt] | R2
COMPAT_COUNT | Preserve legacy files whose descriptor expects a count but source omits one | [opt] | R23
COMPAT_FIELDS | Retain undeclared lexical fields when explicitly requested | [opt] | R24
ROOTS | Validate and retain the optional nested descriptor root | [opt] | R8,R19
NESTED | Resolve child descriptors when an explicit structure root is supplied | [opt] | R8
PARSE | Build format 1/3 Entries through SneakyAdd; retain format-0/2 raw text | [mandatory] | R3-R4,R9,R13-R14
ASSOCIATE | Attach an empty Comments collection to each File | [mandatory] | R7
RAW_EDIT | Serialize format-0 text with source newlines and format-2 text as CRLF | [mandatory] | R13-R14
SAVE | Patch edits, omit deletions, append new format-1/3 records, and retain other bytes | [mandatory] | R10-R12,R15-R17
ADD_ENTRY | Build and validate a defaulted record before collection insertion | [mandatory] | R18-R19
MOVE_ENTRY | Move a structured Entry and serialize its captured source block in the new order | [mandatory] | R22
MASS_MODIFY | Transform a declared field or exact nested field path as one validated batch | [mandatory] | R21,R25-R28
FORMULA | Evaluate a safe ECMAScript scalar expression against pre-edit Entry snapshots | [mandatory] | R26-R28
SERVE | Return unchanged source bytes and expose File state | [mandatory] | R5-R6

R1. WHEN bytes are imported, retain them exactly and decode only for parsing.
R2. WHEN the Structure declares an entry count, require a decimal header equal
    to the number of parsed records unless explicit legacy tolerance is enabled.
R3. WHEN format 1 or 3 is imported, parse records with its Structure and Fields.
R4. WHEN format 0 or 2 is imported, decode and expose complete CP1252 text without record parsing.
R5. WHEN the File is unchanged, return its original bytes exactly.
R6. WHEN Editable changes, propagate it to each duplicate File.
R7. WHEN a File is imported, expose its Comments association collection.
R8. WHEN `substructure_root` is supplied, resolve nested descriptors under it and bind child Entries.
R9. WHEN a parsed Entry is collected, insert the existing object using its recovered name key.
R10. WHEN an editable format-1/3 File has changed Entry values with supported source spans, patch scalar tokens or schema-bound nested blocks and preserve all other bytes.
R11. WHEN a changed File is not editable, raise PermissionError; WHEN an unsupported changed value is serialized, raise explicitly.
R12. WHEN a changed token cannot be encoded as one CP1252 lexical token, fail without writing output.
R13. WHEN editable format-0 text changes, encode CP1252 and preserve the source newline convention; WHEN uneditable text changes, raise PermissionError; WHEN unchanged, return original bytes exactly.
R14. WHEN editable format-2 text changes, encode CP1252 with CRLF line endings; WHEN uneditable text changes, raise PermissionError; WHEN unchanged after display newline normalization, return original bytes exactly.
R15. WHEN original format-1/3 Entries are removed, omit only their captured source spans; WHEN an entry-count header is declared, update its decimal token to the remaining Entry count.
R16. WHEN valid new format-3 Entries are appended, add their serialized records after source text and update a declared count header to include them.
R17. WHEN valid generated format-1 Entries are appended, add their serialized blocks after source text and update a declared count header to include them.
R18. WHEN `File.add_entry` receives an editable format-1/3 File and a nonempty name, construct a detached Entry with serializable descriptor defaults, validate its generated text and CP1252 encoding, then append it; failures leave Entries unchanged.
R19. WHEN a present-by-default format-1 field has a `*child.ces` argument and a nested root is available, load that child descriptor and recursively build its present-by-default children; reject missing roots/schemas, root escapes, and cycles before appending.
R21. WHEN `File.mass_modify` is called for an editable format-1/3 File, apply set, concatenate, numeric-add, or numeric-multiply to each existing matching scalar FieldInstance in all Entries or the requested one-based Entry ordinals; skip missing fields and nonnumeric values for arithmetic. WHEN `round_off` is true for arithmetic, use nearest-integer ties-to-even rounding. Validate all resulting Entry serializations before retaining any change; on failure, restore every original value. Do not write to disk.
R22. WHEN `File.move_entry` receives valid one-based source and destination ordinals for an editable format-1/3 File, move the Entry, retain its captured leading trivia, serialize entries in collection order, and update any declared count; reject invalid formats, editability, or ordinals without changing order.
R23. WHEN legacy-count tolerance is enabled and the first active row is not decimal, parse it as a record and do not alter a count header absent from the source; strict imports still reject the row.
R24. WHEN unknown-field tolerance is enabled, preserve undeclared source fields without adding them to the descriptor or generated-entry defaults; keep tolerance disabled by default.
R25. WHEN `File.mass_modify` receives a direct field name or displayed nested field path, transform only matching existing scalar instances across all or selected Entries; skip inferred and unsupported fields, validate the whole batch, and restore all values if serialization fails.
R26. WHEN formula mass modification is requested, evaluate one allowlisted ECMAScript scalar expression per matching Entry with `value`, `entry`, `entryAt(name, fieldPath)`, `ref(structureFile, entryName, fieldPath)`, and a restricted `Math` object; compute every result before mutating any FieldInstance, require finite numeric results, and retain atomic rollback on serialization failure.
R27. WHEN formula expressions read direct or nested fields from the active File or `ref`-resolved project Files, read their values as they exist at Apply start; do not recursively evaluate formulas or dereference reference-valued results. Reject unsupported syntax and unresolved/ambiguous references; pending formulas cannot create dependency cycles.
R28. WHEN `File.mass_modify` receives an optional progress callback, report completed Entry traversal as `(completed, total)` from zero through the selected Entry count for simple and formula operations; WHEN no callback is supplied, perform no progress output or extra observable work.

CLOSED
- `Entries.add` returns an empty Entry, matching its recovered Collection factory contract. `File.add_entry` builds defaults before appending; nested defaults require the retained nested descriptor root. Removal of original Entries deletes their captured source spans; declared counts reflect additions and removals.
- Formats 0 and 2 use direct text without record parsing; format 0 preserves source line endings and format 2 serializes changed text with CRLF.
- FileReference is the inferred data-source type; callers may supply another
  object until that C relationship is fully mapped.
- Comment collection behavior and fake-duplicate import/export guards remain open. Moving Entries moves the leading trivia captured with each Entry; file-level header and trailing trivia stay in place.
- Nested parsing is not attempted unless the caller supplies its structure root.
- Mass modification operates only on existing scalar FieldInstances; exact CTPEd absent-field insertion, range restriction, and option-order behavior remain open. Formula references use a fixed pre-edit snapshot, so values cannot recursively depend on the same batch's computed results.
- Progress is an optional caller callback; API callers render it with `tqdm`, while existing GUI/model calls remain silent.

Preconditions: callers supply bytes and a parsed Structure; format 1/3 schemas
match their data files. Failures: decoding, malformed count headers, count
mismatches, Entry parse failures, and unsupported edits propagate explicitly.
"""

from pathlib import Path
from decimal import Decimal, InvalidOperation, ROUND_HALF_EVEN
from typing import Callable, Sequence

from entry import Entry, _comment_markers, _comment_only
from entries import Entries
from comments import Comments
from field_instance import FieldInstance
from formula import evaluate_formula
from fields import Fields
from file_access import PathValue
from structure import Structure


class File:
    """Represent one imported game-data file and its source-preserving model.

    Require: source bytes and a parsed Structure describe the same data file.
        Guarantee: expose parsed entries or direct text, Comments associations,
        and unchanged bytes.
    Maintain: editable changes propagate to registered duplicate Files.
    Assert: declared entry counts equal parsed record counts.
    """

    def __init__(
        self,
        source: str,
        original_bytes: bytes,
        structure: Structure,
        fields: Fields,
        entries: Entries,
        data_source: object | None,
        editable: bool,
        duplicate_files: tuple["File", ...],
        substructure_root: PathValue | None = None,
        count_header_present: bool | None = None,
    ) -> None:
        """Store an imported file model.

        Require: model components were built from ``original_bytes`` and
        ``structure``; duplicate references are Files; an optional nested root
        is an existing directory.
        Guarantee: retain components needed for text access and output.
        Maintain: all duplicates receive the initial editable state and the
        nested root remains available for generated defaults.
        Assert: every stored entry uses the structure's record format.
        """
        if not isinstance(original_bytes, bytes):
            raise TypeError("original_bytes must be bytes")
        if not isinstance(structure, Structure):
            raise TypeError("structure must be a Structure")
        if not isinstance(fields, Fields) or not isinstance(entries, Entries):
            raise TypeError("fields and entries must be their model collections")
        if not isinstance(editable, bool):
            raise TypeError("editable must be a bool")
        if any(not isinstance(value, File) for value in duplicate_files):
            raise TypeError("duplicate_files must contain File objects")
        if substructure_root is not None and not Path(substructure_root).is_dir():
            raise NotADirectoryError(
                f"substructure root is not a directory: {substructure_root}"
            )
        self.source = source
        self.original_bytes = original_bytes
        self._raw_text = original_bytes.decode("cp1252") if structure.format in {0, 2} else None
        self.structure = structure
        self.fields = fields
        self.entries = entries
        self._original_entries = tuple(entries)
        self._generated_entries: list[Entry] = []
        self.comments = Comments()
        self.data_source = data_source
        self.duplicate_files = duplicate_files
        self.substructure_root = (
            Path(substructure_root).resolve() if substructure_root is not None else None
        )
        self._count_header_present = (
            bool(structure.has_entry_count)
            if count_header_present is None
            else count_header_present
        )
        self._editable = not editable
        self.editable = editable
        assert all(entry.format == structure.format for entry in entries)

    @classmethod
    def from_bytes(
        cls,
        data: bytes,
        structure: Structure,
        data_source: object | None = None,
        editable: bool = True,
        source: str = "<memory>",
        duplicate_files: tuple["File", ...] = (),
        substructure_root: PathValue | None = None,
        allow_unknown_fields: bool = False,
        allow_missing_count_header: bool = False,
    ) -> "File":
        """Import data bytes against their descriptor.

        Require: ``data`` is bytes and ``structure`` describes its format.
        Guarantee: return a source-preserving File with parsed Entries when
        format 1/3 applies.
        Maintain: format-0/2 source is exposed as direct text, and original
        bytes remain authoritative until an edit; retain a supplied nested root.
        Assert: a declared count header matches the parsed entry count; an
        optional nested root names a directory.
        """
        if not isinstance(data, bytes):
            raise TypeError("data must be bytes")
        if substructure_root is not None and not Path(substructure_root).is_dir():
            raise NotADirectoryError(
                f"substructure root is not a directory: {substructure_root}"
            )
        fields = Fields.from_structure(structure)
        entries = Entries()
        count_header_present = False
        if structure.format in {1, 3}:
            lines = data.decode("cp1252").splitlines(keepends=True)
            cursor = 0
            markers = _comment_markers(structure, None)

            while cursor < len(lines) and _comment_only(lines[cursor], markers):
                cursor += 1
            expected_count: int | None = None
            if structure.has_entry_count:
                if cursor >= len(lines):
                    raise ValueError(f"{source}: missing entry-count header")
                header_line = lines[cursor]
                comment_offsets = [
                    offset
                    for marker in markers
                    if (offset := header_line.find(marker)) >= 0
                ]
                if comment_offsets:
                    header_line = header_line[: min(comment_offsets)]
                header = header_line.strip()
                if header.isdecimal():
                    expected_count = int(header)
                    count_header_present = True
                    cursor += 1
                elif not allow_missing_count_header:
                    raise ValueError(f"{source}:{cursor + 1}: invalid entry-count header")
            while cursor < len(lines):
                if all(_comment_only(line, markers) for line in lines[cursor:]):
                    break
                entry, next_cursor = Entry.from_lines(
                    lines,
                    cursor,
                    structure,
                    source=source,
                    fields=fields,
                    substructure_root=substructure_root,
                    allow_unknown_fields=allow_unknown_fields,
                )
                entries.sneaky_add(entry)
                if next_cursor <= cursor:
                    raise AssertionError("Entry parser did not advance")
                cursor = next_cursor
            if expected_count is not None and entries.count != expected_count:
                raise ValueError(
                    f"{source}: entry-count header declares {expected_count}, "
                    f"parsed {entries.count} entries"
                )
        result = cls(
            source,
            data,
            structure,
            fields,
            entries,
            data_source,
            editable,
            duplicate_files,
            substructure_root,
            count_header_present,
        )
        assert result.to_bytes() == data
        return result

    @property
    def editable(self) -> bool:
        """Return whether this file may be edited.

        Require: File was initialized.
        Guarantee: return the current editable state.
        Maintain: do not alter duplicate state during reads.
        Assert: result is boolean.
        """
        return self._editable

    @editable.setter
    def editable(self, value: bool) -> None:
        """Set editability on this File and its duplicate Files.

        Require: ``value`` is boolean.
        Guarantee: this File and each duplicate store the same state.
        Maintain: duplicate order and membership remain unchanged.
        Assert: all duplicate states equal the assigned value.
        """
        if not isinstance(value, bool):
            raise TypeError("editable must be a bool")
        self._editable = value
        for duplicate in self.duplicate_files:
            duplicate.editable = value
        assert all(duplicate.editable == value for duplicate in self.duplicate_files)

    def add_entry(self, name: str) -> Entry:
        """Build and append a generated Entry from serializable defaults.

        Require: this is an editable format-1/3 File and ``name`` is text.
        Guarantee: append and return a generated Entry whose ordinary and
        schema-bound nested default fields encode as CP1252.
        Maintain: missing schemas, unsupported defaults, and invalid tokens
        leave Entries intact.
        Assert: the appended object is retrievable at its final one-based ordinal.
        """
        if not self.editable:
            raise PermissionError("File is not editable")
        if self.structure.format not in {1, 3}:
            raise NotImplementedError("generated Entries require format 1 or 3")
        if not isinstance(name, str):
            raise TypeError("entry name must be a string")
        if not name:
            raise ValueError("top-level generated Entry requires a nonempty name")
        if self.structure.format == 3 and (
            self.fields.count != 1
            or len(self.fields.item(1).arguments) != 1
            or self.fields.item(1).arguments[0].argument_type != "0"
        ):
            raise ValueError(
                "format-3 Entry requires one field with one ordinary argument"
            )
        active_structures: set[Path] = set()

        def build_default_entry(
            structure: Structure,
            fields: Fields,
            entry_name: str,
            schema_path: Path | None = None,
        ) -> Entry:
            """Build one detached Entry and its present-by-default children.

            Require: ``fields`` belongs to ``structure`` and nested children
            resolve under this File's retained root.
            Guarantee: return an unappended Entry whose defaults can serialize.
            Maintain: do not mutate File collections while recursing.
            Assert: every active child schema is a format-1 descriptor.
            """
            if schema_path is not None:
                if schema_path in active_structures:
                    raise ValueError(f"cyclic nested defaults at {schema_path.name}")
                active_structures.add(schema_path)
            entry = Entry(
                source=self.source,
                name=entry_name,
                format=structure.format,
                source_lines=(),
                structure=structure,
            )
            selected_fields = (
                tuple(fields)
                if structure.format == 3
                else tuple(field for field in fields if field.present_by_default)
            )
            for field in selected_fields:
                if len(field.arguments) > 1:
                    raise ValueError(f"Entry field {field.name} has unsupported arguments")
                value: object = field.arguments[0].raw_default_value if field.arguments else None
                if field.arguments and field.arguments[0].argument_type.startswith("*"):
                    if self.substructure_root is None:
                        raise NotImplementedError(
                            f"Entry field {field.name} needs a nested structure root"
                        )
                    child_name = field.arguments[0].argument_type[1:].replace("\\", "/")
                    child_path = (self.substructure_root / child_name).resolve()
                    if not child_path.is_relative_to(self.substructure_root):
                        raise ValueError(
                            f"Entry field {field.name} substructure escapes root: {child_name}"
                        )
                    child_structure = Structure.from_file(child_path)
                    if child_structure.format != 1:
                        raise ValueError(
                            f"Entry field {field.name} child descriptor must use format 1"
                        )
                    value = build_default_entry(
                        child_structure,
                        Fields.from_structure(child_structure),
                        "",
                        child_path,
                    )
                entry.field_instances.add(FieldInstance(field, value))
            if schema_path is not None:
                active_structures.remove(schema_path)
            return entry

        entry = build_default_entry(
            self.structure,
            self.fields,
            name,
            Path(self.structure.source).resolve(),
        )
        entry.to_text().encode("cp1252")
        appended = self.entries.sneaky_add(entry)
        self._generated_entries.append(entry)
        assert appended is entry and self.entries.item(self.entries.count) is entry
        return entry

    def _mass_modify_instance(self, entry: Entry, field_name: str) -> FieldInstance | None:
        """Resolve one declared direct field or exact nested display path.

        Require: ``entry`` belongs to this File and ``field_name`` is text.
        Guarantee: return its unique declared scalar or nested instance, or None.
        Maintain: do not mutate source values.
        Assert: inferred field occurrences are never returned for nested paths.
        """
        field = self.fields.item_no_error(field_name)
        if field is not None:
            return entry.field_instances.item_by_field(field)
        matches = tuple(
            instance
            for path, instance, _ in entry.field_instances_with_paths()
            if path.casefold() == field_name.casefold()
            and not instance.field.inferred
        )
        if len(matches) > 1:
            raise ValueError(f"field path {field_name!r} is ambiguous")
        return matches[0] if matches else None

    def _mass_modify_ordinals(
        self, entry_ordinals: Sequence[int] | None
    ) -> tuple[int, ...]:
        """Validate and return one-based Entry ordinals for a batch.

        Require: optional ordinals are a sequence of unique one-based positions.
        Guarantee: return selected positions or every File position.
        Maintain: do not alter Entry order or values.
        Assert: every returned ordinal identifies an existing Entry.
        """
        if entry_ordinals is None:
            return tuple(range(1, self.entries.count + 1))
        if isinstance(entry_ordinals, (str, bytes)):
            raise TypeError("entry_ordinals must be a sequence of integers")
        ordinals = tuple(entry_ordinals)
        if any(
            isinstance(value, bool) or not isinstance(value, int)
            for value in ordinals
        ):
            raise TypeError("entry_ordinals must contain integers")
        if len(set(ordinals)) != len(ordinals):
            raise ValueError("entry_ordinals must not contain duplicates")
        if any(value < 1 or value > self.entries.count for value in ordinals):
            raise IndexError("entry ordinal is outside the File")
        return ordinals

    def _formula_change_plan(
        self,
        field_name: str,
        expression: str,
        ordinals: Sequence[int],
        reference_resolver: Callable[[str, str, str], object] | None,
        progress_callback: Callable[[int, int], None] | None = None,
    ) -> tuple[tuple[int, FieldInstance, str, str], ...]:
        """Calculate every formula output from unchanged source values.

        Require: Entry ordinals were validated, references are read-only, and
        an optional progress callback accepts completed and total counts.
        Guarantee: return only changed values without mutating FieldInstances;
        report every traversed Entry when a callback is supplied.
        Maintain: all lookups observe values before this batch is committed.
        Assert: each planned output is one finite decimal token.
        """
        changes: list[tuple[int, FieldInstance, str, str]] = []
        total = len(ordinals)
        if progress_callback is not None:
            progress_callback(0, total)
        for position, ordinal in enumerate(ordinals, start=1):
            entry = self.entries.item(ordinal)
            instance = self._mass_modify_instance(entry, field_name)
            if instance is None or not isinstance(instance.value, str):
                if progress_callback is not None:
                    progress_callback(position, total)
                continue
            if (
                instance.field.inferred
                or instance.field.arguments
                and instance.field.arguments[0].argument_type.startswith("*")
            ):
                if progress_callback is not None:
                    progress_callback(position, total)
                continue

            def entry_at(name: str, _path: str) -> Entry:
                matches = tuple(
                    candidate
                    for candidate in self.entries
                    if candidate.name.casefold() == name.casefold()
                )
                if len(matches) != 1:
                    condition = "missing" if not matches else "ambiguous"
                    raise ValueError(f"same-File Entry {name!r} is {condition}")
                return matches[0]

            updated = evaluate_formula(
                expression,
                current_value=instance.value,
                current_entry=entry,
                entry_at=entry_at,
                reference=reference_resolver,
            )
            updated_text = "0" if updated == 0 else format(updated.normalize(), "f")
            if updated_text != instance.value:
                changes.append((ordinal, instance, instance.value, updated_text))
            if progress_callback is not None:
                progress_callback(position, total)
        return tuple(changes)

    def preview_mass_formula(
        self,
        field_name: str,
        expression: str,
        *,
        entry_ordinals: Sequence[int] | None = None,
        reference_resolver: Callable[[str, str, str], object] | None = None,
    ) -> tuple[tuple[int, str, str, str], ...]:
        """Preview a formula batch without mutating the File.

        Require: this is an editable format-1/3 File and formula references
        return read-only source values.
        Guarantee: return changed ``(ordinal, name, old, new)`` tuples.
        Maintain: no FieldInstance or source bytes are changed.
        Assert: every returned ordinal identifies the named Entry.
        """
        if not self.editable:
            raise PermissionError("File is not editable")
        if self.structure.format not in {1, 3}:
            raise NotImplementedError("mass modification requires format 1 or 3")
        if not isinstance(field_name, str) or not field_name:
            raise ValueError("field_name must be nonempty text")
        ordinals = self._mass_modify_ordinals(entry_ordinals)
        plan = self._formula_change_plan(
            field_name, expression, ordinals, reference_resolver
        )
        return tuple(
            (ordinal, self.entries.item(ordinal).name, original, updated)
            for ordinal, _instance, original, updated in plan
        )

    def mass_modify(
        self,
        field_name: str,
        operation: str,
        operand: str,
        *,
        entry_ordinals: Sequence[int] | None = None,
        round_off: bool = False,
        reference_resolver: Callable[[str, str, str], object] | None = None,
        progress_callback: Callable[[int, int], None] | None = None,
    ) -> int:
        """Apply one supported scalar transformation as an atomic batch.

        Require: ``field_name`` names a Structure Field or exact displayed
        nested field path; ``operation`` is ``set``, ``concatenate``, ``add``,
        ``multiply``, or ``formula``; an optional ordinal sequence contains
        unique one-based Entry positions; an optional reference resolver reads
        project source values without mutation; an optional progress callback
        receives ``(completed, total)`` counts.
        Guarantee: update matching existing scalar FieldInstances and return
        the number changed; missing fields and nonnumeric simple arithmetic
        values are skipped, while invalid formula targets fail. A serialization
        failure restores all values from this call.
        Maintain: no bytes are written and preexisting edits remain intact.
        Assert: a successful batch serializes through ``to_bytes``; optional
        progress reports every traversed Entry from zero through the total.
        """
        if not isinstance(field_name, str) or not field_name:
            raise ValueError("field_name must be nonempty text")
        if operation not in {"set", "concatenate", "add", "multiply", "formula"}:
            raise ValueError("operation must be set, concatenate, add, multiply, or formula")
        if not isinstance(operand, str):
            raise TypeError("operand must be text")
        if not isinstance(round_off, bool):
            raise TypeError("round_off must be a bool")
        if progress_callback is not None and not callable(progress_callback):
            raise TypeError("progress_callback must be callable")
        if self.structure.format not in {1, 3}:
            raise NotImplementedError("mass modification requires format 1 or 3")
        if not self.editable:
            raise PermissionError("File is not editable")
        if round_off and operation not in {"add", "multiply"}:
            raise ValueError("round_off applies only to numeric operations")

        ordinals = self._mass_modify_ordinals(entry_ordinals)
        if operation == "formula":
            formula_plan = self._formula_change_plan(
                field_name, operand, ordinals, reference_resolver, progress_callback
            )
            changes = [
                (instance, original, updated)
                for _, instance, original, updated in formula_plan
            ]
            if not changes:
                return 0
            for instance, _, updated in changes:
                instance.set_value(updated)
            try:
                self.to_bytes()
            except Exception:
                for instance, original, _ in changes:
                    instance.set_value(original)
                raise
            assert all(instance.value == updated for instance, _, updated in changes)
            return len(changes)

        numeric_operand: Decimal | None = None
        if operation in {"add", "multiply"}:
            try:
                numeric_operand = Decimal(operand)
            except InvalidOperation as error:
                raise ValueError("numeric operations require a numeric operand") from error
            if not numeric_operand.is_finite():
                raise ValueError("numeric operand must be finite")

        changes: list[tuple[FieldInstance, str, str]] = []
        total = len(ordinals)
        if progress_callback is not None:
            progress_callback(0, total)
        for position, ordinal in enumerate(ordinals, start=1):
            entry = self.entries.item(ordinal)
            instance = self._mass_modify_instance(entry, field_name)
            if instance is None or not isinstance(instance.value, str):
                if progress_callback is not None:
                    progress_callback(position, total)
                continue
            if (
                instance.field.arguments
                and instance.field.arguments[0].argument_type.startswith("*")
            ):
                if progress_callback is not None:
                    progress_callback(position, total)
                continue
            current = instance.value
            if operation == "set":
                updated = operand
            elif operation == "concatenate":
                updated = current + operand
            else:
                try:
                    numeric_current = Decimal(current)
                except InvalidOperation:
                    if progress_callback is not None:
                        progress_callback(position, total)
                    continue
                if not numeric_current.is_finite():
                    if progress_callback is not None:
                        progress_callback(position, total)
                    continue
                assert numeric_operand is not None
                result = (
                    numeric_current + numeric_operand
                    if operation == "add"
                    else numeric_current * numeric_operand
                )
                if round_off:
                    result = result.quantize(Decimal("1"), rounding=ROUND_HALF_EVEN)
                updated = "0" if result == 0 else format(result.normalize(), "f")
            if updated != current:
                changes.append((instance, current, updated))
            if progress_callback is not None:
                progress_callback(position, total)

        if not changes:
            return 0
        for instance, _, updated in changes:
            instance.set_value(updated)
        try:
            self.to_bytes()
        except Exception:
            for instance, original, _ in changes:
                instance.set_value(original)
            raise
        assert all(instance.value == updated for instance, _, updated in changes)
        return len(changes)

    def move_entry(self, source_ordinal: int, destination_ordinal: int) -> Entry:
        """Move one structured Entry and validate the resulting serialization.

        Require: source and destination are valid one-based ordinals for an
        editable format-1/3 File.
        Guarantee: move and return the same Entry, with its captured leading
        trivia retained in the reordered file output.
        Maintain: failed serialization restores the original order; no disk
        write occurs.
        Assert: the moved Entry occupies the requested destination ordinal.
        """
        if self.structure.format not in {1, 3}:
            raise NotImplementedError("Entry movement requires format 1 or 3")
        if not self.editable:
            raise PermissionError("File is not editable")
        moved = self.entries.move(source_ordinal, destination_ordinal)
        try:
            self.to_bytes()
        except Exception:
            self.entries.move(destination_ordinal, source_ordinal)
            raise
        assert self.entries.item(destination_ordinal) is moved
        return moved

    def sort_entries(
        self,
        field_name: str,
        method: str,
        reverse: bool = False,
        reference_index: Callable[[Entry], int | None] | None = None,
    ) -> int:
        """Sort Entries by one field with the original's binary insertion sort.

        Spec: native sort loop ``frmSort`` 0x4752a0 and comparator 0x473f40
        (assembly read 2026-10-16). Basis only; no governing .spec file. The
        comparison direction below follows the argument order read from the
        assembly and has NOT been confirmed at runtime (plan.md, item 3).
        Require: editable format-1/3 File; ``method`` is ``alpha``, ``num`` or
        ``file``; ``file`` needs ``reference_index`` giving an Entry's position
        in the referenced file, or None when it is not found there.
        Guarantee: for each position i from 1, binary-search the sorted prefix
        (lo=0, hi=i, mid=round-half-even of (lo+hi)/2) and move the Entry
        before position hi when hi < i. ``before(current, mid)`` is, per the
        assembly: alpha, value(mid) < value(current) as binary text; num, the
        same with non-numeric values counted as 0; file, current's position
        strictly less than mid's (missing positions sort last); ``reverse``
        negates the result. An Entry lacking the field has the empty string.
        Maintain: every move goes through ``move_entry`` (restores on failure).
        Assert: return the number of Entries moved; the count is unchanged.
        """
        if method not in {"alpha", "num", "file"}:
            raise ValueError(f"unknown sorting method {method!r}")
        if method == "file" and reference_index is None:
            raise ValueError("method 'file' needs reference_index")

        def value_of(entry: Entry) -> str:
            instance = next(
                (item for item in entry.field_instances if item.field.name == field_name), None
            )
            return "" if instance is None else instance.value_as_string

        def number_of(entry: Entry) -> float:
            try:
                return float(value_of(entry).strip())
            except ValueError:
                return 0.0

        def position_of(entry: Entry) -> float:
            found = reference_index(entry)  # type: ignore[misc]
            return float("inf") if found is None else found

        def before(current: Entry, middle: Entry) -> bool:
            if method == "alpha":
                result = value_of(middle) < value_of(current)
            elif method == "num":
                result = number_of(middle) < number_of(current)
            else:
                result = position_of(current) < position_of(middle)
            return not result if reverse else result

        moved = 0
        for index in range(1, self.entries.count + 1):
            current = self.entries.item(index)
            low, high = 0, index
            while high - low > 1:
                middle = round((high + low) / 2)
                if before(current, self.entries.item(middle)):
                    high = middle
                else:
                    low = middle
            if high < index:
                self.move_entry(index, high)
                moved += 1
        return moved

    def sort_by_prerequisites(
        self,
        preq_field_name: str,
        resolve: Callable[[FieldInstance], Entry | None],
        choose: Callable[[list[Entry]], Entry | None] | None = None,
    ) -> int:
        """Order Entries so each follows its prerequisites, as the original does.

        Spec: native ``cmdGoSortPreq_Click`` (0x475790, assembly read 2026-10-16).
        Basis only; no governing .spec file. Method 0 of the original ("Choose
        currently highest") is ``choose=None``; method 1 ("Choose manually") is a
        ``choose`` callback.
        Require: editable format-1/3 File; ``resolve`` maps a prerequisite
        FieldInstance to the Entry it names, or None when it names none.
        Guarantee: for each position i from 1, an Entry at position j >= i
        qualifies when every FieldInstance of ``preq_field_name`` resolves to an
        Entry now at a position below i. Without ``choose``, the first qualifying
        Entry moves to position i. With ``choose``, all qualifying Entries are
        collected (every Entry when none qualify); a single candidate is taken
        without asking, otherwise ``choose`` picks one (None leaves position i
        unchanged). An empty ``preq_field_name`` sorts nothing.
        Maintain: every move goes through ``move_entry`` (restores on failure).
        Assert: return the number of Entries moved; the count is unchanged.
        """
        if not preq_field_name:
            return 0
        moved = 0
        count = self.entries.count

        def placed_before(entry: Entry, position: int) -> bool:
            for instance in entry.field_instances:
                if instance.field.name != preq_field_name:
                    continue
                referent = resolve(instance)
                if referent is None:
                    return False
                found = self.entries.index_of(referent)
                if found is None or found >= position:
                    return False
            return True

        for position in range(1, count + 1):
            chosen: Entry | None = None
            if choose is None:
                for index in range(position, count + 1):
                    candidate = self.entries.item(index)
                    if placed_before(candidate, position):
                        chosen = candidate
                        break
            else:
                candidates = [
                    self.entries.item(index)
                    for index in range(position, count + 1)
                    if placed_before(self.entries.item(index), position)
                ] or list(self.entries)
                chosen = candidates[0] if len(candidates) == 1 else choose(candidates)
            if chosen is None:
                continue
            source = self.entries.index_of(chosen)
            if source is not None and source != position:
                self.move_entry(source, position)
                moved += 1
        return moved

    def to_bytes(self) -> bytes:
        """Return original bytes or serialize supported direct-text/1/3 edits.

        Require: File was created from source bytes.
        Guarantee: return original bytes unchanged, encode changed format-0/2 text,
        or patch supported format-1/3 spans, omit removed Entries, append
        generated records, and serialize reordered captured Entry blocks.
        Maintain: reject missing nested schemas and unsupported edits.
        Assert: an unmodified File returns ``original_bytes`` exactly.
        """
        assert isinstance(self.original_bytes, bytes)
        if self.structure.format in {0, 2}:
            if self._raw_text is None:
                raise AssertionError("direct-text File has no source text")
            original_text = self.original_bytes.decode("cp1252")
            if self._raw_text == original_text:
                return self.original_bytes
            if not self.editable:
                raise PermissionError("File is not editable")
            newline = (
                "\r\n" if self.structure.format == 2 or b"\r\n" in self.original_bytes
                else "\r" if b"\r" in self.original_bytes
                else "\n"
            )
            normalized = self._raw_text.replace("\r\n", "\n").replace("\r", "\n")
            return normalized.replace("\n", newline).encode("cp1252")
        current_entries = tuple(self.entries)
        original_ids = {id(entry) for entry in self._original_entries}
        inserted_entries = tuple(
            entry for entry in current_entries if id(entry) not in original_ids
        )
        if inserted_entries and self.structure.format not in {1, 3}:
            raise NotImplementedError("generated Entries require format 1 or 3")
        current_ids = tuple(id(entry) for entry in current_entries)
        current_id_set = set(current_ids)
        original_order = tuple(
            id(entry) for entry in self._original_entries if id(entry) in current_id_set
        )
        generated_order = tuple(
            id(entry) for entry in self._generated_entries if id(entry) in current_id_set
        )
        known_generated_ids = {id(entry) for entry in self._generated_entries}
        untracked_generated_order = tuple(
            id(entry)
            for entry in current_entries
            if id(entry) not in original_ids and id(entry) not in known_generated_ids
        )
        expected_order = original_order + generated_order + untracked_generated_order
        reordered = current_ids != expected_order
        removed = len(current_entries) != len(self._original_entries)
        changed = any(entry.has_changes for entry in current_entries)
        if not changed and not removed and not inserted_entries and not reordered:
            return self.original_bytes
        if not self.editable:
            raise PermissionError("File is not editable")
        if self.structure.format not in {1, 3}:
            raise NotImplementedError(
                f"edited format-{self.structure.format} File serialization is not supported"
            )
        original_text = self.original_bytes.decode("cp1252")
        current_by_id = {id(entry): entry for entry in current_entries}
        newline = (
            "\r\n" if "\r\n" in original_text
            else "\r" if "\r" in original_text
            else "\n"
        )
        if reordered:
            spans: list[tuple[int, int]] = []
            cursor = 0
            for original_entry in self._original_entries:
                captured = "".join(original_entry.source_lines)
                start = original_text.find(captured, cursor)
                if start < 0:
                    raise AssertionError("Entry source text is absent from the File source")
                end = start + len(captured)
                spans.append((start, end))
                cursor = end
            prefix = original_text[:spans[0][0]] if spans else original_text
            suffix = original_text[spans[-1][1]:] if spans else ""
            pieces = [prefix]
            for entry in current_entries:
                text = entry.to_text()
                if not entry.source_lines and newline != "\n":
                    text = text.replace("\n", newline)
                if pieces and pieces[-1] and not pieces[-1].endswith(("\r", "\n")):
                    pieces.append(newline)
                pieces.append(text)
            serialized = "".join(pieces) + suffix
        else:
            pieces = []
            cursor = 0
            for original_entry in self._original_entries:
                entry = current_by_id.get(id(original_entry))
                captured = "".join(original_entry.source_lines)
                start = original_text.find(captured, cursor)
                if start < 0:
                    raise AssertionError("Entry source text is absent from the File source")
                pieces.append(original_text[cursor:start])
                if entry is not None:
                    pieces.append(entry.to_text())
                cursor = start + len(captured)
            pieces.append(original_text[cursor:])
            serialized = "".join(pieces)
            if inserted_entries:
                if serialized and not serialized.endswith(("\r", "\n")):
                    serialized += newline
                generated = "".join(entry.to_text() for entry in inserted_entries)
                if newline != "\n":
                    generated = generated.replace("\n", newline)
                serialized += generated
        if self._count_header_present:
            lines = serialized.splitlines(keepends=True)
            line_start = 0
            markers = _comment_markers(self.structure, None)
            for line in lines:
                if not _comment_only(line, markers):
                    comment_offsets = [
                        offset
                        for marker in markers
                        if (offset := line.find(marker)) >= 0
                    ]
                    content_end = min(comment_offsets, default=len(line))
                    content = line[:content_end]
                    token_start = len(content) - len(content.lstrip())
                    token_end = token_start
                    while token_end < len(content) and content[token_end].isdigit():
                        token_end += 1
                    if token_end == token_start or content[token_end:].strip():
                        raise AssertionError("entry-count header span is invalid")
                    serialized = (
                        serialized[: line_start + token_start]
                        + str(len(current_entries))
                        + serialized[line_start + token_end :]
                    )
                    break
                line_start += len(line)
            else:
                raise AssertionError("entry-count header is missing")
        return serialized.encode("cp1252")

    @property
    def raw_text(self) -> str:
        """Expose direct text for format-0 and format-2 files.

        Require: this File uses the direct-text format.
        Guarantee: return the current text without newline normalization.
        Maintain: leave source bytes unchanged until serialization.
        Assert: format 0 or 2 has decoded source text.
        """
        if self.structure.format not in {0, 2} or self._raw_text is None:
            raise ValueError("raw text is available only for format-0/2 files")
        return self._raw_text

    def set_raw_text(self, value: str) -> None:
        """Replace direct text for a format-0 or format-2 file.

        Require: this File uses format 0 or 2 and value is text.
        Guarantee: retain text for later CP1252 serialization, preserving
        original bytes when the visible text is unchanged.
        Maintain: do not change original bytes or structured Entries.
        Assert: stored and caller text match after newline normalization.
        """
        if self.structure.format not in {0, 2}:
            raise ValueError("raw text can be edited only for format-0/2 files")
        if not isinstance(value, str):
            raise TypeError("raw text must be a string")
        original_text = self.original_bytes.decode("cp1252")
        normalized_value = value.replace("\r\n", "\n").replace("\r", "\n")
        normalized_original = original_text.replace("\r\n", "\n").replace("\r", "\n")
        self._raw_text = original_text if normalized_value == normalized_original else value
        assert self._raw_text.replace("\r\n", "\n").replace("\r", "\n") == normalized_value
