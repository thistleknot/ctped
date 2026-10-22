"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
FIXTURE | Provide three independently authored descriptor formats | [mandatory] | R1
LOAD | Check descriptor, data, and project models through application services | [mandatory] | R1-R3
PREFERENCES | Load and save the original `.prf` sample through app services | [mandatory] | R10
PREFERENCE_FLAGS | Edit one unnamed ordinal flag through the visual controls and save a copy | [mandatory] | R50
SAVE | Save descriptor, project, and data bytes and compare exactly | [mandatory] | R4,R9
IMPORT | Confirm the visual entry point module compiles without a window | [mandatory] | R5
ROOTS | Resolve relative project and chooser paths against the process working directory through the window callback | [mandatory] | R6,R26
ROOTS | Import a selected declaration from relative project and root paths | [mandatory] | R7
NESTED | Use sibling descriptor folder for direct data-file imports | [mandatory] | R8
EDITABLE_FIELDS | Find source-spanned scalar values in a selected Entry | [mandatory] | R11,R16
FIELD_GRID | Compare Entries across field columns with nested JSON and selected-row details | [mandatory] | R82
ENTRY_GRID_CONTROLS | Keep both scrollbars visible and select every row with Ctrl+A | [mandatory] | R87-R88
CONTEXT_EDIT | Edit clicked editable values from right-click menus in both value grids | [mandatory] | R89
PROJECT_IMPORT_STATE | Enable import only for structured project declarations and label dummy rows | [mandatory] | R90
FORMAT0_VALUE_GRID | Display recognized format-0 numeric records in an editable source-preserving table | [mandatory] | R91,R98-R99
UNIVERSAL_MASS_MODIFY | Keep Mass modify beside Entry actions for structured data and in the global toolbar for other editable representations | [mandatory] | R47,R98-R101
GROUP_MASS_MODIFY | Preview and apply independent formula multipliers by related Entry field value | [mandatory] | R102
CONFIG_IMPORT | Import every supported Gamefile settings file without registering a dummy File | [mandatory] | R92-R94
CONFIG_EDIT | Edit typed settings and save only a source-preserving copy | [mandatory] | R94,R97
CONFIG_FORMULA | Apply a selected settings formula using a pre-edit project snapshot | [mandatory] | R95-R96
FORMULA_UI | Preview, reference, and apply a formula to one field dimension | [mandatory] | R83-R85
NESTED_EDIT | Select nested scalar values by their field paths and save through nested source spans | [mandatory] | R37,R82
RAW_NESTED_BLOCK | Edit a raw nested block in a multiline editor and validate before applying | [contract] | R86
PROJECT_UI | Import a selected row from copied and installed projects through the window callbacks | [mandatory] | R3,R17
GL_SCRIPT | Load and save the supplied `.gls` script through app services | [mandatory] | R18-R19
GL_SCRIPT_EDIT | Apply script source edits, retain active rows on invalid input, and save the edited copy | [mandatory] | R71-R73
GL_SCRIPT_RUN | Exercise `.gls` row mapping, template lookup, atomic staging, and conflicts | [mandatory] | R61-R66
GL_TEMPLATE | Load, resolve project loops, references, project GL names, consequences, and database names | [mandatory] | R20-R25,R30-R36,R39-R41
GL_TEMPLATE_EDIT | Apply edited template source, preserve the active model on validation errors, and save the edited copy | [mandatory] | R68-R70
GL_OUTPUT | Save a successfully rendered selected Entry as a text copy | [mandatory] | R51
ICON_PREVIEW | Preview the separate unit-icon name template using `%n` | [mandatory] | R52
RAW_TEXT | Display, edit, and save format-0 data through the actual window | [mandatory] | R27-R28
RAW_TEXT | Display format-2 text according to editability and save it | [mandatory] | R29
REMOVE_ENTRY | Delete a selected structured Entry through the actual Tk control and save the result | [mandatory] | R42
ADD_ENTRY | Add defaulted format-1/3 Entries through Tk and save the result | [mandatory] | R43
MASS_MODIFY | Apply a field operation from the visual controls and retain it until Save | [mandatory] | R47-R49
EDIT_GENERATED | Edit a generated format-1 default and save it | [mandatory] | R44
MOVE_ENTRY | Reorder selected records in the visual list and save in that order | [mandatory] | R53
GL_GENERATE | Resolve common linked fields, atomically stage selected Entries, and save a Great Library copy | [mandatory] | R54-R60
GL_GENERATE_UI | Run multi-Entry Great Library generation through actual Tk selection and buttons | [mandatory] | R54-R60
PREREQUISITE_SORT | Reuse one Tcl interpreter for real chooser controls and save/reparse Entry order | [mandatory] | R75-R77
GAMEFILE | Open real gamefile shapes through the button, import/edit/save a selected File | [mandatory] | R78-R80
IMPORT_COMPAT | Preserve undeclared Gamefile fields and import the bundled structured corpus | [mandatory] | R81
EDIT_HISTORY | Undo and redo data/settings edits without writing their source | [mandatory] | R103-R108
CHANGE_REVIEW | Show the active serialization against the loaded source | [mandatory] | R109-R111

R1. WHEN a valid descriptor is loaded, return its format and parsed fields.
R2. WHEN a matching data file is loaded, return its parsed Entries.
R3. WHEN a project declaration is selected, import it with explicit roots only.
R4. WHEN an unchanged descriptor or data file is saved, bytes equal source.
R5. WHEN tkinter is available, importing the app does not create a window.
R6. WHEN project paths are relative, resolve them against the process working directory before loading.
R7. WHEN relative project and root paths are supplied, import the selected declaration without repeating the project directory.
R8. WHEN a data file is loaded for a filesystem descriptor, pass the descriptor's parent as the nested structure root.
R9. WHEN an unchanged project is saved, write original `.ced` bytes exactly.
R10. WHEN an unchanged preferences file is loaded and saved, destination bytes equal source.
R50. WHEN a preference flag is toggled in the visual app, update only that ordinal, preserve the other flags and indent token, and save the edited model to a copy.
R51. WHEN a selected Entry renders successfully through a loaded `.glt`, save exactly that rendered text as CP1252; WHEN rendering is absent or failed, disable preview export.
R52. WHEN an icon template and Entry are supplied to the visual callback, replace every `%n` with the Entry name and preserve other text; with no selected Entry, show no rendered value.
R53. WHEN Move up/down is invoked through the Tk controls, update in-memory order, selection and boundary states; Save and reparse the file in the resulting order.
R61-R66. WHEN script rows use the shipped three/four-cell shapes, resolve their project Files and sibling templates, generate the requested linked fields in source order, and stage all changes atomically; invalid rows and conflicting duplicate outputs leave the prior model unchanged.
R54-R60. WHEN each selected Entry's configured icon field resolves through its declared `.ces` file, expose common fields with unique closed Great Library keys, stage all successful template renders atomically, and save only to an explicitly chosen copy; any failed step leaves staged bytes unchanged.
R11. WHEN a format-1 Entry contains multiple scalar values, return each editable value for direct row selection in the field table.
R16. WHEN a format-3 Entry contains one scalar value, return that value without requiring format-1 source-span metadata.
R17. WHEN the selected project declaration imports through the window callback, retain the project, selected descriptor, and File registry relationship.
R18. WHEN a valid `.gls` is loaded through the app service, expose its editable source and ordered active rows.
R19. WHEN the `.gls` copy is saved unchanged, destination bytes equal source; after edits apply, the copy contains the active script bytes.
R20. WHEN a `.glt` is opened, expose the source and unchanged-copy service.
R21. WHEN a selected Entry is rendered, substitute direct fields, evaluate supported conditionals, and preserve unsupported directives.
R22. WHEN an unchanged template copy is saved, destination bytes equal source; after edits apply, the copy contains the active template bytes.
R23. WHEN a template is displayed in Tk text widgets, normalize newlines visually without changing the saved bytes.
R68. WHEN edited template source is applied, require CP1252 encoding and balanced brackets; invalid input leaves the active template model and preview unchanged.
R69. WHEN edits apply, preserve the template's newline convention and refresh the selected Entry preview from the new model.
R70. WHEN a template copy is saved, write the active applied template to the chosen destination without changing the loaded source; unchanged templates remain byte-identical.
R71. WHEN script source is edited and applied, require CP1252 and at least three tab-separated cells on active rows; invalid source leaves the model and displayed row list unchanged.
R72. WHEN script edits apply, preserve source line endings, update ordered row cells and enable Run only if project context exists.
R73. WHEN a script copy is saved, write the active applied script to a separate destination and leave the source unchanged; unchanged scripts remain byte-identical.
R24. WHEN a supported conditional is rendered through the window, evaluate both branch bodies and display only the selected branch.
R25. WHEN a repeat is rendered through the window, display its ordered values and separators.
R30. WHEN the template includes numeric direct-field arithmetic, display its documented left-to-right result in the preview.
R31. WHEN the selected template uses counter directives, show their rendered output through the window callback.
R32. WHEN a project structure filename is resolved, match case-sensitively, import lazily, and reuse the registered File.
R33. WHEN the template renderer receives project context, render every Entry in the named File in source order; without a match, preserve the file-loop expression.
R34. WHEN project-file or reference resolution fails during preview, show the failure as preview text without breaking the editor callback.
R35. WHEN a raw reference names a target structure with different letter casing, resolve it by the existing case-insensitive reference contract.
R36. WHEN the renderer sees a dotted direct-field suffix, resolve it through the project reference resolver and preserve the raw source value.
R37. WHEN a selected Entry contains schema-bound nested child Entries, show their scalar paths in the field table and preserve edits to the selected row in the saved data-file copy.
R39. WHEN project-backed `.GLName` resolution is requested, load and cache the declared prefixed table; use CTPED quoted-value and last-row duplicate semantics, return None only when the table is absent, and fall back to the requested key when it is missing.
R40. WHEN project-backed consequences are resolved, include matching target Entries in cross-reference and Entry order, use only already registered Files, and do not mutate their raw reference FieldInstances.
R41. WHEN project-backed `.DB` is rendered for an Entry, provide the `gl_database` value from its registered File Structure, including looped consequences.
R42. WHEN Delete selected entry is activated for a selected editable format-1/3 Entry, remove it from the active File, refresh visible rows and preview, keep Save enabled, and defer persistence until Save; disable deletion when the File is uneditable or format is 0/2.
R43. WHEN Add entry is activated for an editable format-1/3 File, prompt for a name and call `File.add_entry`; build nested defaults from the selected structure root, disable Add when uneditable, show the new row, and save/reparse it; show nested-schema errors.
R45. WHEN a nested descriptor is unavailable during Add, show the filesystem error and leave the Entry list unchanged.
R46. WHEN project paths are checked, verify present structured, missing structured, and dummy-data paths without registering Files; show exact path results in the project UI.
R44. WHEN a generated format-1 Entry is selected, enable scalar editing without a source span and save the changed token in its generated block.
R47. WHEN any editable imported data representation is loaded, enable Mass modify; disable it when no editable data source is active.
R48. WHEN Mass modify is chosen, apply set/concatenate/add/multiply to a declared field across all Entries or the selected Entries; require selected Entries for selected-only mode and apply optional ties-to-even rounding only to numeric operations.
R49. WHEN the operation is applied, refresh the current Entry view, report its changed-value count, and save only through the existing Save action; invalid operands or serialization errors leave values unchanged.
R26. WHEN relative paths are returned by project and directory dialogs, load and import the selected declaration without duplicating the project directory.
R27. WHEN a format-0 File is displayed, show its text; WHEN uneditable, disable edits; WHEN edited and saved, preserve encoding and newline style.
R28. WHEN a File is loaded, show its editable flag; WHEN toggled, update the File model and applicable editor state.
R29. WHEN a format-2 File is displayed, show CP1252 source text; WHEN uneditable, disable changes; WHEN edited, save CP1252 with CRLF; WHEN unchanged, preserve original bytes exactly.
R75. WHEN prerequisite sorting runs through the dialog, use the parsed defining field and the chosen automatic/manual mode; preserve Entry count and refresh the visible order without writing source files.
R76. WHEN no defining field is declared, disable prerequisite controls; otherwise default to manual mode and offer the existing chooser's eligible candidates or full-list cycle fallback.
R77. WHEN the chooser is cancelled or closed, skip that placement using the existing model contract; WHEN sorting fails, show the error and retain the Sort dialog; saved successful output reparses in the displayed order.
R78. WHEN gamefile loading runs, infer conventional data/language roots and use the selected descriptor library.
R79. WHEN the real Open gamefile button is used, show selectable project rows and a scrollbar, import a selected File, and save/reparse its edited copy; cancellation or invalid input retains the prior project and source bytes.
R80. WHEN the default window is displayed, the Gamefile entry point remains visible beside project opening controls.
R81. WHEN project data contains fields absent from bundled descriptors, retain them read-only, preserve them during supported edits, and import all present structured files in the bundled GameData corpus.
R82. WHEN a structured File is displayed, show Entries as rows and observed field paths as columns; render bound nested Entries as compact JSON and raw nested blocks as compact markers, exposing child paths in selected-Entry details. WHEN a scalar cell is selected, Edit targets it without an ordinal prompt; inferred scalars stay read-only while a raw nested block uses the dedicated multiline editor and never becomes a mass-edit target.
R83. WHEN Mass modify is opened for an editable File, offer Formula alongside scalar operations and show its expression help.
R84. WHEN Formula is previewed or applied, allow `entryAt(name, fieldPath)` and project-backed `ref(structureFile, entryName, fieldPath)` lookups against source values.
R85. WHEN Formula is previewed, show sample outputs without changing model values; WHEN applied, update only the selected dimension and Entries, then refresh the matrix and selected-field table.
R87. WHEN the Entries Treeview has focus and Ctrl+A is generated, select every row so selected-only operations can target the full File.
R88. WHEN the Entries tab is visible, its vertical and horizontal scrollbars are mapped beside the matrix; scrollbar actions change the corresponding view.
R89. WHEN either value grid is right-clicked, enable Edit only for a target accepted by the existing scalar or raw-block editor and edit that exact target through its validation path; preserve selected matrix rows when the clicked row is already selected.
R90. WHEN a project row with a structure is selected, enable Import; WHEN a dummy row without a structure is selected, disable Import and identify it as non-importable without importing it.
R91. WHEN format-0 text matches the named numeric-record shape, show values in a table and retain a source tab; WHEN a value changes, patch only its token and preserve comments, spacing, and other rows; WHEN text is outside the shape, keep the existing direct-text editor.
R98. WHEN Mass modify is activated, dispatch to the structured Entry editor, numeric-text formula editor, settings formula editor, or exact text replacement according to the active imported data representation.
R99. WHEN numeric format-0 rows are mass-modified, target selected rows or all rows, compute all numeric outputs before mutation, and preserve token spans and source formatting.
R100. WHEN unstructured format-0/2 text is mass-modified, show an exact find/replace occurrence preview and mutate only after confirmation; preserve the source file and save through the separate-copy action.
R101. WHEN structured data is active, expose Mass modify beside Entry actions and hide the global copy; WHEN a writable selected-field detail row changes, default its field path in Mass modify; restore the global action for other editable representations.
R102. WHEN a structured File is grouped by a direct scalar field, show each existing group and its Entry count; resolve reference labels through the declared `.ces` when project context exists, retain unmatched groups, and preview/apply finite multipliers atomically to all or selected Entries while leaving unmapped groups unchanged.

R103-R108. WHEN accepted data or settings edits are undone and redone, restore one prior serialization, refresh the active view, and defer writes to an explicit Save action.
R106. WHEN another document is opened, clear both history stacks; refreshing or saving the active document preserves them.
R107. WHEN cancelled, failed, or no-op edits occur, preserve both history stacks.
R108. WHEN history exceeds 50 states, retain only its newest 50; disable actions for empty stacks and uneditable documents.
R109-R111. WHEN Changes is opened, show an accurate read-only unified diff from original model bytes, including no-change and newline-only states, without writing data or displaying stale contents.

CLOSED
- Descriptor/data parser fixtures are hand-authored; project integration and
  exact-copy tests use the private copied `default.ced` sample.
- Mass-edit transformations and batch rollback are owned by `File.mass_modify`; the UI does not invent native range-restriction or absent-field rules.
- Preference controls preserve ordinal labels because flag meanings are unknown; edits delegate to `Preferences.set_flag`.
- Rendered preview export preserves the renderer's text and line endings; it does not update the linked Great Library or uniticon files.
- Great Library generation stages only linked, unique, closed keys and saves a chosen copy; tests use temporary project data and never write installed samples.
- Template edits are validated as CP1252 and balanced brackets; the renderer may still leave unsupported legacy directives literal.
- Script edits are validated by the existing `.gls` parser; the UI does not assign semantics to opaque cells or guarantee script execution succeeds.
- Script execution fixtures contain one real linked Advance/uniticon Entry to bound execution while exercising the all-Entries runner.

Preconditions: tests use temporary paths; Tk tests use withdrawn windows and skip when Tcl/Tk is unavailable.
Failures are reported as assertion or unexpected exception failures.
"""

import py_compile
from dataclasses import replace
from pathlib import Path
import tkinter as tk
from types import SimpleNamespace
from unittest.mock import patch

import pytest

from const_values import ConfigDocument, SETTINGS_FILE_NAMES, parse_config_values
from app import (
    EditorWindow,
    _editable_field_instances,
    execute_gl_script,
    import_project_declaration,
    load_data_file,
    load_descriptor,
    load_project,
    load_gamefile,
    resolve_project_structure_file,
    resolve_project_gl_name,
    resolve_project_consequences,
    stage_great_library_updates,
    stage_selected_gl_entries,
    resolve_project_database_name,
    resolve_project_formula_reference,
    resolve_project_gl_targets,
    load_gl_script,
    save_data_copy,
    save_descriptor_copy,
    save_project_copy,
    save_gl_script_copy,
    load_gl_template,
    save_gl_template_copy,
    load_preferences,
    save_preferences_copy,
)
from entry import Entry
from field import Field
from field_instance import FieldInstance
from field_instances import FieldInstances
from fields import Fields
from gl_template import GLTemplate
from great_library import GreatLibraryFile
from structure import Structure


class TestUndo:
    """Exercise real data-edit history against synthetic files and one Tk root."""

    @pytest.fixture(scope="class")
    def undo_root(self):
        """Require Tk; guarantee one shared interpreter with explicit teardown."""
        try:
            root = tk.Tk()
        except tk.TclError as error:
            pytest.skip(f"Tcl/Tk runtime unavailable: {error}")
        root.withdraw()
        yield root
        root.destroy()

    @pytest.fixture
    def undo_window(self, tmp_path: Path, undo_root):
        """Require Tk; provide isolated source bytes and a complete editor window."""
        descriptor = tmp_path / "items.ces"
        source = tmp_path / "items.txt"
        descriptor.write_bytes(
            b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
            b"3 // Format\nf\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
        )
        source.write_bytes(b"A 10\r\nB 20\r\nC 30\r\n")
        window = EditorWindow(undo_root)
        errors = []
        undo_root.report_callback_exception = lambda *error: errors.append(error)
        document = load_descriptor(descriptor)
        window._display(document)
        window._display_data(load_data_file(document, source))
        yield window, source
        assert not errors
        for child in undo_root.winfo_children():
            child.destroy()

    @pytest.mark.parametrize("operation", ["scalar", "mass", "add", "delete", "move", "sort"])
    def test_undo_restores_structured_action(self, undo_window, operation: str) -> None:
        """Require each edit path; guarantee exact restoration and refreshed rows."""
        window, source = undo_window
        original = source.read_bytes()
        active = window.data_file
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        if operation == "scalar":
            window._select_detail_field_path("Value")
            with patch("app.simpledialog.askstring", return_value="17"):
                window.edit_selected_value()
        elif operation == "mass":
            window._apply_mass_modification("Value", "multiply", "2", selected_only=False, round_off=False)
        elif operation == "add":
            with patch("app.simpledialog.askstring", return_value="EXTRA"):
                window.add_entry()
        elif operation == "delete":
            window.delete_selected_entry()
        elif operation == "move":
            window.move_selected_entry(1)
        else:
            window.apply_sort("Value", "alpha", False)
        assert active.to_bytes() != original
        assert len(window._undo_stack) == 1
        window.undo_button.invoke()
        assert window.data_file is active
        assert active.to_bytes() == original
        assert len(window.data_list.get_children()) == 3
        assert [active.entries.item(i).name for i in (1, 2, 3)] == ["A", "B", "C"]
        assert str(window.undo_button.cget("state")) == tk.DISABLED
        assert str(window.redo_button.cget("state")) == tk.NORMAL
        assert source.read_bytes() == original
        window.redo_button.invoke()
        assert active.to_bytes() != original
        assert str(window.undo_button.cget("state")) == tk.NORMAL
        assert str(window.redo_button.cget("state")) == tk.DISABLED
        window.undo()
        window._apply_mass_modification(
            "Value", "add", "2", selected_only=False, round_off=False
        )
        assert not window._redo_stack
        assert str(window.redo_button.cget("state")) == tk.DISABLED

    @pytest.mark.parametrize("reply", [None, "10", "two words"])
    def test_cancelled_noop_and_invalid_edits_preserve_history(self, undo_window, reply) -> None:
        """Require varied non-changes; guarantee unchanged model and history."""
        window, source = undo_window
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        window._select_detail_field_path("Value")
        with patch("app.simpledialog.askstring", return_value=reply), patch("app.messagebox.showerror"):
            window.edit_selected_value()
        assert window.data_file.to_bytes() == source.read_bytes()
        assert not window._undo_stack
        assert str(window.undo_button.cget("state")) == tk.DISABLED

    def test_failed_or_noop_mass_edit_preserves_prior_step(self, undo_window) -> None:
        """Require accepted and rejected batches; guarantee failure cannot consume history."""
        window, _source = undo_window
        window._apply_mass_modification("Value", "add", "1", selected_only=False, round_off=False)
        before = window.data_file.to_bytes()
        with pytest.raises((ArithmeticError, ValueError)):
            window._apply_mass_modification("Value", "formula", "value / 0", selected_only=False, round_off=False)
        window._apply_mass_modification("Value", "multiply", "1", selected_only=False, round_off=False)
        assert window.data_file.to_bytes() == before
        assert len(window._undo_stack) == 1

    def test_history_limit_refresh_save_and_document_switch(self, undo_window, tmp_path: Path) -> None:
        """Require over-limit history; guarantee retention, save stability, and isolation."""
        window, source = undo_window
        for _ in range(55):
            window._apply_mass_modification("Value", "add", "1", selected_only=False, round_off=False)
        assert len(window._undo_stack) == 50
        window._display_data(window.data_file)
        destination = tmp_path / "copy.txt"
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()
        assert destination.read_bytes() == window.data_file.to_bytes()
        assert len(window._undo_stack) == 50
        for _ in range(50):
            window.undo()
        assert window.data_file.entries.item(1).field_instances.item(1).value == "15"
        assert not window._undo_stack
        window._apply_mass_modification("Value", "add", "1", selected_only=False, round_off=False)
        window._display_data(load_data_file(window.document, source))
        assert not window._undo_stack
        assert not window._redo_stack
        assert window.data_file.to_bytes() == source.read_bytes()

    @pytest.mark.parametrize("format_number", [0, 2])
    def test_source_typing_and_replacement_are_undoable(self, undo_window, tmp_path: Path, format_number: int) -> None:
        """Require both raw formats; guarantee source and replacement edits restore."""
        window, _source = undo_window
        descriptor = tmp_path / "raw.ces"
        suffix = b"0 // Format\n" if format_number == 0 else b"2 // Format\ngl_str.txt\npath\n#\n%009\n"
        descriptor.write_bytes(b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n" + suffix)
        source = tmp_path / "raw.txt"
        original = b"alpha beta\r\n"
        source.write_bytes(original)
        document = load_descriptor(descriptor)
        window._display(document)
        window._display_data(load_data_file(document, source))
        window.raw_data_text.insert("end-1c", "more")
        window._sync_raw_text()
        typed = window.data_file.to_bytes()
        assert typed != original
        with patch("app.simpledialog.askstring", side_effect=["alpha", "gamma"]), patch("app.messagebox.askyesno", return_value=True):
            window._mass_modify_raw_text()
        assert b"gamma" in window.data_file.to_bytes()
        window.undo()
        assert window.data_file.to_bytes() == typed
        window.undo()
        assert window.data_file.to_bytes() == original
        assert window.raw_data_text.get("1.0", "end-1c") == "alpha beta\n"
        assert source.read_bytes() == original

    def test_numeric_edit_formula_and_settings_undo(self, undo_window, tmp_path: Path) -> None:
        """Require numeric and settings views; guarantee their edit routes record history."""
        window, _source = undo_window
        descriptor = tmp_path / "numeric.ces"
        descriptor.write_bytes(b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n0 // Format\n")
        source = tmp_path / "numbers.txt"
        original = b"FIRST 10\nSECOND 20\nTHIRD 30\n"
        source.write_bytes(original)
        document = load_descriptor(descriptor)
        window._display(document)
        window._display_data(load_data_file(document, source))
        window.numeric_value_tree.selection_set("text-value-0")
        with patch("app.simpledialog.askstring", return_value="19"):
            window.edit_numeric_text_record()
        assert b"FIRST 19" in window.data_file.to_bytes()
        window.undo()
        assert window.data_file.to_bytes() == original
        with patch("app.simpledialog.askstring", return_value="value * 2"), patch("app.messagebox.askyesno", return_value=True):
            window.numeric_value_tree.selection_remove(
                window.numeric_value_tree.selection()
            )
            window._mass_modify_numeric_text()
        assert window.data_file.to_bytes() == b"FIRST 20\nSECOND 40\nTHIRD 60\n"
        window.undo()
        assert window.data_file.to_bytes() == original
        settings_bytes = b"FOOD_COEFFICIENT 10\n"
        settings_source = tmp_path / "Const.txt"
        settings_source.write_bytes(settings_bytes)
        values = parse_config_values(settings_bytes.decode("cp1252"), "Const.txt")
        assert values
        settings = ConfigDocument(str(settings_source), "Const.txt", settings_bytes, values)
        window._display_settings_document(settings)
        window.numeric_value_tree.selection_set("setting-0")
        with patch("app.simpledialog.askstring", return_value="25"):
            window.edit_numeric_text_record()
        edited = settings.current_bytes
        assert edited == b"FOOD_COEFFICIENT 25\n"
        with patch("app.simpledialog.askstring", return_value="value * 2"), patch("app.messagebox.askyesno", return_value=True):
            window.config_formula_dialog()
        assert settings.current_bytes == b"FOOD_COEFFICIENT 50\n"
        window.undo()
        assert settings.current_bytes == edited
        assert len(window._undo_stack) == 1
        window.undo()
        assert settings.current_bytes == settings_bytes
        assert window.settings_document is settings
        assert window.raw_data_text.get("1.0", "end-1c") == settings_bytes.decode()
        assert settings_source.read_bytes() == settings_bytes

    def test_ctrl_z_restores_one_step_and_consumes_event(self, undo_window, undo_root) -> None:
        """Require focused matrix; guarantee a single key event restores one step."""
        window, source = undo_window
        window._apply_mass_modification("Value", "add", "1", selected_only=False, round_off=False)
        once = window.data_file.to_bytes()
        window._apply_mass_modification("Value", "add", "1", selected_only=False, round_off=False)
        undo_root.deiconify()
        undo_root.update()
        window.data_list.focus_force()
        window.data_list.event_generate("<Control-z>")
        undo_root.update()
        undo_root.withdraw()
        assert window.data_file.to_bytes() == once
        assert len(window._undo_stack) == 1
        assert window.undo() == "break"
        assert window.data_file.to_bytes() == source.read_bytes()

    def test_uneditable_document_disables_history_actions(self, undo_window) -> None:
        """Require retained history; guarantee read-only documents cannot restore edits."""
        window, _source = undo_window
        window._apply_mass_modification(
            "Value", "add", "1", selected_only=False, round_off=False
        )
        edited = window.data_file.to_bytes()
        window.editable_file.set(False)
        window._toggle_file_editable()
        assert str(window.undo_button.cget("state")) == tk.DISABLED
        window.undo()
        assert window.data_file.to_bytes() == edited


DESCRIPTORS = [
    (
        "empty-format-0",
        b"0.3 // Version\n0 // Format\n",
        0,
        0,
    ),
    (
        "field-format-1",
        b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Name\tt\tf\tf\t0\n@ // end fields\n",
        1,
        1,
    ),
    (
        "field-format-3",
        b"0.3 // Version\n3 // Format\nt\nValue\tt\tt\tf\t1\n"
        b"\t0\t\t\"42\"\tNumber\n@ // end fields\n",
        3,
        1,
    ),
]


def test_app_lists_editable_format_one_instances_by_ordinal() -> None:
    fields = []
    for name in ("First", "Second", "Third"):
        field, _ = Field.from_lines([f"{name}\tt\tf\tf\t1", "\t0\t\tNULL"], 0, False)
        fields.append(field)
    instances = FieldInstances()
    instances.add(FieldInstance(fields[0], "one", (3, 6)))
    instances.add(FieldInstance(fields[1], 7, (9, 10)))
    instances.add(FieldInstance(fields[2], "three", (12, 17)))
    entry = Entry("fixture.txt", "ITEM", 1, (), instances)

    assert [
        (ordinal, instance.field.name)
        for ordinal, instance in _editable_field_instances(entry)
    ] == [(1, "First"), (3, "Third")]


def test_app_lists_single_format_three_value_without_span_metadata() -> None:
    field, _ = Field.from_lines(["Value\tt\tf\tf\t1", "\t0\t\tNULL"], 0, False)
    instances = FieldInstances()
    instances.add(FieldInstance(field, "raw-token"))
    entry = Entry("fixture.txt", "ITEM", 3, (), instances)

    assert [(ordinal, value.value) for ordinal, value in _editable_field_instances(entry)] == [
        (1, "raw-token")
    ]


@pytest.mark.parametrize("name,content,format_number,field_count", DESCRIPTORS)
def test_app_loads_and_saves_unchanged_descriptor(
    tmp_path: Path, name: str, content: bytes, format_number: int, field_count: int
) -> None:
    """Require three formats; guarantee visible model data and exact save; maintain bytes; assert counts."""
    source = tmp_path / f"{name}.ces"
    destination = tmp_path / f"{name}-copy.ces"
    source.write_bytes(content)

    document = load_descriptor(source)
    save_descriptor_copy(document, destination)

    assert document.structure.format == format_number
    assert document.fields.count == field_count
    assert destination.read_bytes() == content


@pytest.mark.parametrize("layout,language", [("flat", "default"), ("default/gamedata", "default"), ("localized", "english")])
def test_gamefile_infers_roots_and_resolves_localized_paths(tmp_path, layout, language):
    sample = Path(__file__).parents[1] / ".private_samples"
    directory = tmp_path if layout == "flat" else tmp_path / "default" / "gamedata"
    directory.mkdir(parents=True, exist_ok=True)
    if layout == "localized":
        (tmp_path / "english" / "gamedata").mkdir(parents=True)
    path = directory / "gamefile.txt"
    raw = (sample / "GameData" / "default" / "gamedata" / "gamefile.txt").read_bytes()
    path.write_bytes(raw)
    view = load_gamefile(path, sample / "default.ced", sample / "Structure")
    assert view.data_root == tmp_path
    assert view.language == language
    assert view.project.files.count == 0
    words = view.project.file_specs[0]
    expected = tmp_path / words.data_name if layout == "flat" else tmp_path / language / "gamedata" / words.data_name
    assert words.resolve_data_path(view.project_directory, view.structure_root, view.data_root, view.language) == expected
    assert path.read_bytes() == raw


class TestGamefileWindow:
    @pytest.fixture(scope="class")
    def gamefile_root(self):
        try:
            root = tk.Tk()
        except tk.TclError as error:
            pytest.skip(f"Tcl/Tk runtime unavailable: {error}")
        root.withdraw()
        yield root
        root.destroy()

    @pytest.mark.parametrize("name", ["gamefile.txt", "OR_gamefile.txt", "5_gamefile.txt"])
    def test_button_import_edit_save_and_failure_retention(self, gamefile_root, tmp_path, name):
        root = gamefile_root
        sample = Path(__file__).parents[1] / ".private_samples"
        original = (sample / "GameData" / "default" / "gamedata" / "gamefile.txt").read_bytes()
        gamefile = tmp_path / name
        gamefile.write_bytes(original)
        const = tmp_path / "Const.txt"
        const_original = (sample / "GameData" / "default" / "gamedata" / "Const.txt").read_bytes()
        const.write_bytes(const_original)
        window = EditorWindow(root)
        with patch("app.filedialog.askopenfilename", return_value=str(gamefile)), patch("app.filedialog.askdirectory") as directory, patch("app.messagebox.showerror") as errors:
            window.open_gamefile_button.invoke()
        assert not errors.called
        assert not directory.called
        view = window.project_view
        assert view is not None and view.project.files.count == 0
        assert len(window.project_list.get_children()) == 65
        assert str(window.import_project_file_button.cget("state")) == tk.DISABLED
        index = next(i for i, spec in enumerate(view.project.file_specs) if spec.structure_name.casefold() == "const.ces")
        window.project_list.selection_set(f"project-{index}")
        window.show_selected_project_paths()
        assert str(window.import_project_file_button.cget("state")) == tk.NORMAL
        with patch("app.messagebox.showerror") as errors:
            window.import_project_file_button.invoke()
        assert not errors.called
        assert window.data_file is None and window.settings_document is not None
        assert view.project.files.count == 0
        row = next(
            item for item in window.numeric_value_tree.get_children()
            if window.numeric_value_tree.set(item, "key") == "PERCENT_LAND[1]"
        )
        window.numeric_value_tree.selection_set(row)
        with patch("app.simpledialog.askstring", return_value="41"):
            window.edit_numeric_text_record()
        assert window.numeric_value_tree.set(row, "values") == "41"
        with patch("app.simpledialog.askstring", return_value="value * 2"), patch(
            "app.messagebox.askyesno", return_value=True
        ):
            window.config_formula_dialog()
        assert window.numeric_value_tree.set(row, "values") == "82"
        destination = tmp_path / "const-copy.txt"
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_button.invoke()
        assert b"PERCENT_LAND         82  # how much of the world is land" in destination.read_bytes()
        assert const.read_bytes() == const_original
        project_copy = tmp_path / "elsewhere" / "saved.ced"
        project_copy.parent.mkdir()
        with patch("app.filedialog.asksaveasfilename", return_value=str(project_copy)) as chooser:
            window.save_project_button.invoke()
        assert chooser.call_args.kwargs["initialfile"] == Path(name).with_suffix(".ced").name
        reloaded = load_project(project_copy, view.structure_root, view.data_root, view.language)
        assert reloaded.project.file_specs[index].resolve_data_path(reloaded.project_directory, reloaded.structure_root, reloaded.data_root, reloaded.language) == const
        bad = tmp_path / "bad_gamefile.txt"
        bad.write_bytes(b"incomplete.txt\n")
        for selection in ("", str(bad), str(tmp_path / "missing_gamefile.txt")):
            with patch("app.filedialog.askopenfilename", return_value=selection), patch("app.messagebox.showerror"):
                window.open_gamefile_button.invoke()
            assert window.project_view is view
            assert window.settings_document is not None
        assert gamefile.read_bytes() == original
        window.data_tabs.select(1)
        root.deiconify()
        root.update()
        button = window.open_gamefile_button
        assert button.winfo_ismapped()
        assert window.project_list.winfo_ismapped()
        assert window.project_list.winfo_height() > 0
        assert window.project_list_scrollbar.winfo_ismapped()
        assert window.project_list.bbox(window.project_list.get_children()[0])
        assert button.winfo_rootx() + button.winfo_width() <= root.winfo_rootx() + root.winfo_width()
        root.withdraw()
        for child in root.winfo_children():
            child.destroy()


def test_app_module_compiles_without_starting_a_window(tmp_path: Path) -> None:
    """Require app source; guarantee valid syntax; maintain import safety; assert compilation succeeds."""
    source = Path(__file__).parents[1] / "src" / "app.py"

    py_compile.compile(str(source), cfile=str(tmp_path / "app.pyc"), doraise=True)


@pytest.mark.parametrize(
    ("project_path", "structure_root", "data_root", "relative_paths"),
    (
        pytest.param(
            Path(__file__).parents[1] / ".private_samples" / "default.ced",
            Path(__file__).parents[1] / ".private_samples" / "Structure",
            Path(__file__).parents[1] / ".private_samples" / "GameData",
            True,
            id="copied-project-relative-roots",
        ),
        pytest.param(
            Path(r"H:\Games\ctp2\CTPEd053\default.ced"),
            Path(r"H:\Games\ctp2\CTPEd053\Structure"),
            Path(
                r"H:\Games\ctp2\Ages of Man-20260424T030047Z-3-001\Ages of Man\IV\AOMIV\AOM_IV\ctp2_data"
            ),
            False,
            id="installed-project-and-data",
        ),
    ),
)
def test_window_import_callback_retains_project_context(
    project_path: Path,
    structure_root: Path,
    data_root: Path,
    relative_paths: bool,
) -> None:
    """Require project roots; preserve path checks, import, and project context."""
    project_dialog_path = (
        project_path.relative_to(Path.cwd()) if relative_paths else project_path
    )
    structure_dialog_path = (
        structure_root.relative_to(Path.cwd()) if relative_paths else structure_root
    )
    data_dialog_path = (
        data_root.relative_to(Path.cwd()) if relative_paths else data_root
    )
    if not project_path.is_file() or not structure_root.is_dir() or not data_root.is_dir():
        pytest.skip("project integration paths are unavailable")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        with (
            patch(
                "app.filedialog.askopenfilename",
                return_value=str(project_dialog_path),
            ),
            patch(
                "app.filedialog.askdirectory",
                side_effect=[str(structure_dialog_path), str(data_dialog_path)],
            ),
            patch("app.simpledialog.askstring", return_value="default"),
        ):
            window.open_project()
        assert window.project_view is not None
        assert window.project_view.project_directory == project_path.parent.resolve()
        assert window.project_view.structure_root == structure_root.resolve()
        assert window.project_view.data_root == data_root.resolve()
        selected = next(
            index
            for index, spec in enumerate(window.project_view.project.file_specs)
            if spec.structure_name.casefold() == "advance.ces"
        )
        window.project_list.selection_set(f"project-{selected}")
        window.show_selected_project_paths()
        assert str(window.import_project_file_button.cget("state")) == tk.NORMAL
        window.check_project_paths_button.invoke()
        assert window.project_path_checks[selected].data_exists is True
        assert window.project_path_checks[selected].structure_exists is True
        assert window.project_list.set(f"project-{selected}", "path_status") == "OK"
        path_details = window.project_path_details.get("1.0", "end-1c")
        assert "advance.txt" in path_details
        assert "advance.ces" in path_details
        assert window.project_view.project.files.count == 0
        missing = next(
            index
            for index, result in enumerate(window.project_path_checks)
            if result.data_exists is False
        )
        assert window.project_list.set(f"project-{missing}", "path_status") == "Missing"
        window.project_list.selection_set(f"project-{missing}")
        window.show_selected_project_paths()
        missing_result = window.project_path_checks[missing]
        assert str(missing_result.data_path) in window.project_path_details.get(
            "1.0", "end-1c"
        )
        dummy = next(
            index
            for index, result in enumerate(window.project_path_checks)
            if not result.spec.has_structure
            and Path(result.spec.data_name).name.casefold() not in SETTINGS_FILE_NAMES
        )
        assert window.project_path_checks[dummy].structure_path is None
        assert window.project_path_checks[dummy].structure_exists is None
        window.project_list.selection_set(f"project-{dummy}")
        window.show_selected_project_paths()
        assert str(window.import_project_file_button.cget("state")) == tk.DISABLED
        dummy_details = window.project_path_details.get("1.0", "end-1c")
        assert "Data:" in dummy_details
        assert "Structure:" not in dummy_details
        assert "dummy file has no structure descriptor" in dummy_details
        assert str(window.project_path_checks[dummy].data_path) in dummy_details
        with patch("app.messagebox.showerror") as errors:
            window.import_selected_project_file()
        assert not errors.called
        window.project_list.selection_set(f"project-{selected}")
        window.show_selected_project_paths()
        window.import_selected_project_file()

        assert window.project_view is not None
        assert window.data_file is not None
        assert window.data_file.entries.count == 107
        assert window.data_file.to_bytes() == Path(window.data_file.source).read_bytes()
        assert any(value is window.data_file for value in window.project_view.project.files)
        standalone_descriptor = structure_root / "advance.ces"
        with patch(
            "app.filedialog.askopenfilename",
            return_value=str(standalone_descriptor),
        ):
            window.open_file()
        assert window.project_view is None
        assert str(window.save_project_button["state"]) == "disabled"
        assert not window.project_list.get_children()
    finally:
        root.destroy()


def test_window_edits_and_saves_format_zero_direct_text(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "constants.ces"
    source_path = tmp_path / "constants.txt"
    destination = tmp_path / "constants-copy.txt"
    descriptor_path.write_bytes(b"0.3 // Version\n0 // Format\n")
    source_path.write_bytes(b"NAME value\r\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert window.raw_data_text.get("1.0", "end-1c") == "NAME value\n"
        assert window.editable_file.get() is True
        window.editable_file.set(False)
        window._toggle_file_editable()
        assert str(window.raw_data_text.cget("state")) == tk.DISABLED
        window.editable_file.set(True)
        window._toggle_file_editable()
        window.raw_data_text.delete("1.0", tk.END)
        window.raw_data_text.insert("1.0", "NAME caf\u00e9\n")
        assert str(window.mass_modify_button.cget("state")) == tk.NORMAL
        with patch(
            "app.simpledialog.askstring", side_effect=("NAME", "TYPE")
        ), patch("app.messagebox.askyesno", return_value=True):
            window.mass_modify_button.invoke()
        assert window.raw_data_text.get("1.0", "end-1c") == "TYPE caf\u00e9\n"

        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()

        assert destination.read_bytes() == "TYPE caf\u00e9\r\n".encode("cp1252")
    finally:
        root.destroy()


def test_window_mass_modifies_format_two_text(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "strings.ces"
    source_path = tmp_path / "strings.txt"
    destination = tmp_path / "strings-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#\n%032%009\n:\n}{\n"
        b"2 // Format\ngl_str.txt\npath\n#\n%009\n"
    )
    source_path.write_bytes(b'"OLD\\tvalue"\r\nSECOND\tOLD\r\n')
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert str(window.mass_modify_button.cget("state")) == tk.NORMAL
        with patch(
            "app.simpledialog.askstring", side_effect=("OLD", "NEW")
        ), patch("app.messagebox.askyesno", return_value=True):
            window.mass_modify_button.invoke()

        assert data_file.raw_text == '"NEW\\tvalue"\nSECOND\tNEW\n'
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()
        assert destination.read_bytes() == b'"NEW\\tvalue"\r\nSECOND\tNEW\r\n'
        assert source_path.read_bytes() == b'"OLD\\tvalue"\r\nSECOND\tOLD\r\n'
    finally:
        root.destroy()


def test_window_displays_and_edits_const_numeric_values(tmp_path: Path) -> None:
    """Verify Const records load as rows and edits preserve source context.

    Require: bundled Const descriptor/data fixture and a usable Tk display.
    Guarantee: show named values, edit one numeric token, and save a separate copy.
    Maintain: preserve comments, spacing, and the installed sample bytes.
    Assert: the saved copy reloads with the changed numeric value.
    """
    sample = Path(__file__).parents[1] / ".private_samples"
    descriptor_path = sample / "Structure" / "Const.ces"
    installed_source = sample / "GameData" / "default" / "gamedata" / "Const.txt"
    source_path = tmp_path / "Const.txt"
    original = installed_source.read_bytes()
    original = original.replace(b"\r\n", b"\n").replace(b"\n", b"\r\n")
    source_path.write_bytes(original)
    destination = tmp_path / "Const-copy.txt"
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert len(window.numeric_value_tree.get_children()) == 247
        assert str(window.raw_text_tabs.select()) == str(window.numeric_values_tab)
        assert str(window.raw_data_text.cget("state")) == tk.NORMAL
        row = next(
            item
            for item in window.numeric_value_tree.get_children()
            if window.numeric_value_tree.set(item, "key") == "PERCENT_LAND"
        )
        assert window.numeric_value_tree.set(row, "values") == "40"
        window.numeric_value_tree.selection_set(row)
        window._update_numeric_edit_state()
        assert str(window.edit_numeric_value_button.cget("state")) == tk.NORMAL
        with patch("app.simpledialog.askstring", return_value="41"):
            window.edit_numeric_text_record()

        assert window.numeric_value_tree.set(row, "values") == "41"
        with patch("app.simpledialog.askstring", return_value="value * 2"), patch(
            "app.messagebox.askyesno", return_value=True
        ):
            window.mass_modify_button.invoke()
        assert window.numeric_value_tree.set(row, "values") == "82"
        assert b"PERCENT_LAND         82  # how much of the world is land" in data_file.to_bytes()
        vector_row = next(
            item
            for item in window.numeric_value_tree.get_children()
            if window.numeric_value_tree.set(item, "key") == "MAP_SIZE_SMALL"
        )
        window.numeric_value_tree.selection_set(vector_row)
        with patch("app.simpledialog.askstring", return_value="27 54 2"):
            window.edit_numeric_text_record()
        assert window.numeric_value_tree.set(vector_row, "values") == "27 54 2"
        assert b"MAP_SIZE_SMALL          27      54      2" in data_file.to_bytes()
        assert source_path.read_bytes() == original
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()
        assert destination.read_bytes() == data_file.to_bytes()
        assert source_path.read_bytes() == original
    finally:
        root.destroy()


def test_window_deletes_selected_format_three_entry_and_saves(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    destination = tmp_path / "items-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nf\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"A 1\nB 2\nC 3\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        window.data_list.selection_set("entry-1")
        window.show_selected_entry()

        assert str(window.delete_entry_button.cget("state")) == tk.NORMAL
        window.delete_entry_button.invoke()

        assert data_file.entries.count == 2
        assert [entry.name for entry in data_file.entries] == ["A", "C"]
        assert len(window.data_list.get_children()) == 2
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()

        assert destination.read_bytes() == b"A 1\nC 3\n"
    finally:
        root.destroy()


def test_window_moves_selected_format_three_entry_and_saves(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    destination = tmp_path / "items-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nf\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"A 1\n# belongs to B\nB 2\nC 3\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        window.data_list.selection_set("entry-1")
        window.show_selected_entry()

        assert str(window.move_entry_up_button.cget("state")) == tk.NORMAL
        assert str(window.move_entry_down_button.cget("state")) == tk.NORMAL
        window.move_entry_down_button.invoke()

        assert [entry.name for entry in data_file.entries] == ["A", "C", "B"]
        assert window.data_list.selection() == ("entry-2",)
        assert str(window.move_entry_down_button.cget("state")) == tk.DISABLED
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()

        assert destination.read_bytes() == b"A 1\nC 3\n# belongs to B\nB 2\n"
        reparsed = load_data_file(document, destination)
        assert [entry.name for entry in reparsed.entries] == ["A", "C", "B"]
    finally:
        root.destroy()


def test_window_adds_defaulted_format_three_entry_and_saves(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    destination = tmp_path / "items-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"1\r\nA 1\r\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert str(window.add_entry_button.cget("state")) == tk.NORMAL
        window.editable_file.set(False)
        window._toggle_file_editable()
        assert str(window.add_entry_button.cget("state")) == tk.DISABLED
        window.editable_file.set(True)
        window._toggle_file_editable()
        assert str(window.add_entry_button.cget("state")) == tk.NORMAL
        with (
            patch("app.simpledialog.askstring", return_value="B"),
            patch("app.filedialog.asksaveasfilename", return_value=str(destination)),
        ):
            window.add_entry_button.invoke()
            window.save_data_copy()

        assert [entry.name for entry in data_file.entries] == ["A", "B"]
        assert data_file.entries.item(2).field_instances.item(1).value == "NULL"
        assert destination.read_bytes() == b"2\r\nA 1\r\nB\tNULL\r\n"
        reparsed = load_data_file(document, destination)
        assert [entry.name for entry in reparsed.entries] == ["A", "B"]
    finally:
        root.destroy()


def test_mass_modify_application_targets_selected_entries_without_saving(
    tmp_path: Path,
) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"2\r\nA 1\r\nB 2\r\n")
    document = load_descriptor(descriptor_path)
    data_file = load_data_file(document, source_path)

    class SelectedRows:
        def selection(self) -> tuple[str, ...]:
            return ("entry-1",)

    class Status:
        value = ""

        def set(self, value: str) -> None:
            self.value = value

    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.data_file = data_file
    window.data_list = SelectedRows()
    window.status = Status()
    window._refresh_entry_matrix_values = lambda: None
    refreshes: list[bool] = []
    window.show_selected_entry = lambda: refreshes.append(True)

    changed = EditorWindow._apply_mass_modification(
        window,
        "Value",
        "add",
        "3",
        selected_only=True,
        round_off=False,
    )

    assert changed == 1
    assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
        "1",
        "5",
    ]
    assert refreshes == [True]
    assert "1 value(s)" in window.status.value
    assert source_path.read_bytes() == b"2\r\nA 1\r\nB 2\r\n"


def test_project_formula_reference_resolves_declared_advance_field(tmp_path: Path) -> None:
    """Require a registered project and Advance field; resolve its source scalar."""
    project, advance_file, _library_path = _project_with_great_library(
        tmp_path, b""
    )
    entry = advance_file.entries.item("ADVANCE_AGRICULTURE")
    expected = next(
        instance.value
        for instance in entry.field_instances
        if instance.field.name == "Cost"
    )

    assert resolve_project_formula_reference(
        project, "advance.ces", "ADVANCE_AGRICULTURE", "Cost"
    ) == expected


def test_window_formula_dialog_previews_then_applies_a_dimension_formula(
    tmp_path: Path,
) -> None:
    """Require a real Tk window; preview without mutation, then apply one formula."""
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"3\r\nA 2\r\nB 4\r\nC 6\r\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        window.mass_modify_button.invoke()
        root.update_idletasks()
        dialog = next(
            child
            for child in root.winfo_children()
            if isinstance(child, tk.Toplevel)
        )
        widgets = _descendants(dialog)
        combos = [widget for widget in widgets if widget.winfo_class() == "TCombobox"]
        operation_box = next(
            widget
            for widget in combos
            if "Formula (ECMAScript subset)" in widget.cget("values")
        )
        operation_box.set("Formula (ECMAScript subset)")
        operation_box.event_generate("<<ComboboxSelected>>")
        operand = next(
            widget for widget in widgets if widget.winfo_class() == "TEntry"
        )
        operand.insert(0, "value * 1.5")
        next(
            widget
            for widget in widgets
            if widget.winfo_class() == "TButton" and widget.cget("text") == "Preview"
        ).invoke()
        root.update_idletasks()
        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "2",
            "4",
            "6",
        ]
        assert any(
            "3 value(s) would change" in root.getvar(widget.cget("textvariable"))
            for widget in widgets
            if widget.winfo_class() == "TLabel"
            and widget.cget("textvariable")
        )
        next(
            widget
            for widget in widgets
            if widget.winfo_class() == "TButton" and widget.cget("text") == "Apply"
        ).invoke()
        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "3",
            "6",
            "9",
        ]
        assert source_path.read_bytes() == b"3\r\nA 2\r\nB 4\r\nC 6\r\n"
    finally:
        root.destroy()


def test_mass_modify_selected_only_requires_a_selected_entry(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"1\r\nA 1\r\n")
    data_file = load_data_file(load_descriptor(descriptor_path), source_path)

    class NoSelection:
        def selection(self) -> tuple[str, ...]:
            return ()

    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.data_file = data_file
    window.data_list = NoSelection()
    with pytest.raises(ValueError, match="select one or more Entries"):
        EditorWindow._apply_mass_modification(
            window,
            "Value",
            "set",
            "9",
            selected_only=True,
            round_off=False,
        )
    assert data_file.entries.item(1).field_instances.item(1).value == "1"


def _descendants(parent: tk.Misc) -> list[tk.Misc]:
    """Require a Tk parent; return its descendants without changing their state."""
    return [
        child
        for direct in parent.winfo_children()
        for child in (direct, *_descendants(direct))
    ]


def test_window_mass_modify_dialog_applies_selected_rounded_values_and_saves(
    tmp_path: Path,
) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    destination = tmp_path / "items-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"3\r\nA 1\r\nB 2\r\nC 3\r\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        assert not window.mass_modify_button.winfo_manager()
        assert window.entry_mass_modify_button.winfo_manager() == "pack"
        assert str(window.mass_modify_button.cget("state")) == tk.NORMAL
        window.editable_file.set(False)
        window._toggle_file_editable()
        assert str(window.mass_modify_button.cget("state")) == tk.DISABLED
        window.editable_file.set(True)
        window._toggle_file_editable()
        assert str(window.mass_modify_button.cget("state")) == tk.NORMAL
        assert str(window.entry_mass_modify_button.cget("state")) == tk.NORMAL
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        value_item = next(
            item for item, (path, _instance, _editable)
            in window._field_value_targets.items() if path == "Value"
        )
        window.field_value_table.selection_set(value_item)
        window._on_field_value_selected()
        window.data_list.selection_set(("entry-0", "entry-2"))
        window.entry_mass_modify_button.invoke()
        root.update_idletasks()
        dialog = next(
            child
            for child in root.winfo_children()
            if isinstance(child, tk.Toplevel)
        )

        widgets = _descendants(dialog)
        combos = [widget for widget in widgets if widget.winfo_class() == "TCombobox"]
        assert len(combos) == 2
        assert combos[0].get() == "Value"
        combos[0].set("Value")
        combos[1].set("Add number")
        combos[1].event_generate("<<ComboboxSelected>>")
        operands = [widget for widget in widgets if widget.winfo_class() == "TEntry"]
        assert len(operands) == 1
        operands[0].insert(0, "0.5")
        checks = [
            widget for widget in widgets if widget.winfo_class() == "TCheckbutton"
        ]
        next(widget for widget in checks if "Selected Entries only" in widget.cget("text")).invoke()
        next(widget for widget in checks if "Round numeric results" in widget.cget("text")).invoke()
        next(
            widget
            for widget in widgets
            if widget.winfo_class() == "TButton" and widget.cget("text") == "Apply"
        ).invoke()

        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "2",
            "2",
            "4",
        ]
        assert "2 value(s)" in window.status.get()
        assert dialog not in root.winfo_children()
        with patch(
            "app.filedialog.asksaveasfilename", return_value=str(destination)
        ):
            window.save_data_copy()
        assert destination.read_bytes() == b"3\r\nA 2\r\nB 2\r\nC 4\r\n"
    finally:
        root.destroy()


def test_window_grouped_mass_modify_joins_age_and_applies_per_group(tmp_path: Path) -> None:
    """Verify joined labels, preview isolation, and distinct group multipliers.

    Args:
        tmp_path: Isolated directory for the descriptor and source data fixture.

    Returns:
        None.

    Raises:
        AssertionError when the grouped editor violates its UI or data contract.
    """
    descriptor_path = tmp_path / "advance.ces"
    source_path = tmp_path / "Advance.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Cost\tt\tt\tf\t1\n\t0\t\t20\n"
        b"Age\tt\tt\tf\t1\n\tage.ces\t\tAGE_ONE\n@\n"
    )
    source_path.write_text(
        "ADVANCE_A {\n Cost 100\n Age AGE_ONE\n}\n"
        "ADVANCE_B {\n Cost 200\n Age AGE_TWO\n}\n"
        "ADVANCE_C {\n Cost 300\n Age AGE_THREE\n}\n",
        encoding="cp1252",
    )
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        window.project_view = object()
        def resolve_age(_project, structure, name, path):
            """Resolve fixture age references as the project lookup does.

            Args:
                _project: The current project context.
                structure: Referenced descriptor filename.
                name: Referenced Entry name.
                path: Referenced field path.

            Returns:
                The numeric age value.

            Raises:
                ValueError when the fixture has no matching age Entry.
            """
            values = {"AGE_ONE": "1", "AGE_TWO": "2"}
            if structure != "age.ces" or path != "Age" or name not in values:
                raise ValueError("related age Entry is missing")
            return values[name]

        with patch(
            "app.resolve_project_formula_reference",
            side_effect=resolve_age,
        ) as resolve_age:
            window.group_mass_modify_button.invoke()
            root.update_idletasks()
            dialog = next(
                child
                for child in root.winfo_children()
                if isinstance(child, tk.Toplevel)
            )
            labels = {
                child.cget("text")
                for child in _descendants(dialog)
                if child.winfo_class() == "TLabel"
            }
            assert "Age 1 (AGE_ONE)" in labels
            assert "Age 2 (AGE_TWO)" in labels
            assert "AGE_THREE (no matching age.ces Entry)" in labels
            operands = [
                child for child in _descendants(dialog)
                if child.winfo_class() == "TEntry"
            ]
            assert len(operands) == 3
            operands[0].insert(0, "1.5")
            operands[1].insert(0, "1.25")
            buttons = {
                child.cget("text"): child
                for child in _descendants(dialog)
                if child.winfo_class() == "TButton"
            }
            buttons["Preview"].invoke()
            assert [
                entry.field_instances.item_by_field(data_file.fields.item("Cost")).value
                for entry in data_file.entries
            ] == ["100", "200", "300"]
            with patch("app.messagebox.askyesno", return_value=True):
                buttons["Apply"].invoke()
            assert [
                entry.field_instances.item_by_field(data_file.fields.item("Cost")).value
                for entry in data_file.entries
            ] == ["150", "250", "300"]
            assert resolve_age.call_count >= 3
            window.data_list.selection_set("entry-0")
            window.group_mass_modify_button.invoke()
            root.update_idletasks()
            dialog = next(
                child
                for child in root.winfo_children()
                if isinstance(child, tk.Toplevel)
            )
            operands = [
                child for child in _descendants(dialog)
                if child.winfo_class() == "TEntry"
            ]
            operands[0].insert(0, "2")
            selected_only = next(
                child for child in _descendants(dialog)
                if child.winfo_class() == "TCheckbutton"
                and "Selected Entries only" in child.cget("text")
            )
            selected_only.invoke()
            buttons = {
                child.cget("text"): child
                for child in _descendants(dialog)
                if child.winfo_class() == "TButton"
            }
            with patch("app.messagebox.askyesno", return_value=True):
                buttons["Apply"].invoke()
            assert [
                entry.field_instances.item_by_field(data_file.fields.item("Cost")).value
                for entry in data_file.entries
            ] == ["300", "250", "300"]
    finally:
        root.destroy()


def test_apply_sort_orders_format3_entries_without_saving(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "names.ces"
    source_path = tmp_path / "names.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nFileName\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"5\r\nA 10\r\nB 9\r\nC 100\r\nD 2\r\nE 10\r\n")
    data_file = load_data_file(load_descriptor(descriptor_path), source_path)

    class Status:
        def set(self, value: str) -> None:
            pass

    displayed: list[object] = []
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.data_file = data_file
    window.status = Status()
    window._display_data = displayed.append
    window.show_selected_entry = lambda: None

    moved = EditorWindow.apply_sort(window, "FileName", "num", False)
    assert moved == 2
    assert [entry.name for entry in data_file.entries] == ["C", "A", "E", "B", "D"]
    EditorWindow.apply_sort(window, "FileName", "alpha", True)
    assert [entry.name for entry in data_file.entries] == ["E", "A", "C", "D", "B"]
    assert data_file.entries.count == 5
    assert displayed == [data_file, data_file]
    assert source_path.read_bytes() == b"5\r\nA 10\r\nB 9\r\nC 100\r\nD 2\r\nE 10\r\n"


def test_window_sort_button_follows_editable_format3_state(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "names.ces"
    source_path = tmp_path / "names.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nFileName\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"1\r\nA 10\r\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        assert str(window.sort_button.cget("state")) == tk.DISABLED
        document = load_descriptor(descriptor_path)
        window._display(document)
        window._display_data(load_data_file(document, source_path))
        assert str(window.sort_button.cget("state")) == tk.NORMAL
        window.sort_button.invoke()
        dialog = next(child for child in root.winfo_children() if isinstance(child, tk.Toplevel))
        widgets = _descendants(dialog)
        prerequisite_frame = next(widget for widget in widgets if widget.winfo_class() == "TLabelframe")
        assert all(str(widget.cget("state")) == tk.DISABLED for widget in prerequisite_frame.winfo_children())
        field_go = next(widget for widget in widgets if widget.winfo_class() == "TButton" and widget.cget("text") == "Go" and widget.master is not prerequisite_frame)
        field_go.invoke()
        assert not dialog.winfo_exists()
        assert source_path.read_bytes() == b"1\r\nA 10\r\n"
    finally:
        root.destroy()


class TestPrerequisiteSort:
    """Reuse one Tcl interpreter for the battery; isolate each window and source file."""

    @pytest.fixture(scope="class")
    def sort_root(self):
        """Require working Tk; retain its interpreter for this class and destroy it afterward."""
        try:
            root = tk.Tk()
        except tk.TclError as error:
            pytest.skip(f"Tcl/Tk runtime unavailable: {error}")
        root.withdraw()
        try:
            yield root
        finally:
            root.destroy()

    @pytest.fixture
    def prerequisite_sort_window(self, tmp_path: Path, sort_root):
        """Require Tk; provide a parsed tree File and window; destroy the window after use."""
        descriptor_path = tmp_path / "dependencies.ces"
        source_path = tmp_path / "dependencies.txt"
        descriptor_path.write_bytes(
            b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
            b"1 // Format\nf\nt\nf\nf\nf\nf\n"
            b"Depends\tf\tf\tt\t1\n\t0\t\tNULL\n@\nDepends\n@\n"
        )
        source_path.write_bytes(b"LEAF {\n Depends ROOT\n}\nROOT {\n}\n")
        root = sort_root
        window = EditorWindow(root)
        callback_errors = []
        root.report_callback_exception = lambda *error: callback_errors.append(error)
        try:
            document = load_descriptor(descriptor_path)
            assert document.structure.preq_field == "Depends"
            window._display(document)
            window._display_data(load_data_file(document, source_path))
            yield root, window, source_path
            assert not callback_errors
        finally:
            for child in root.winfo_children():
                child.destroy()


    @pytest.mark.parametrize(
        ("mode", "content", "expected", "offered"),
        [
            (
                "automatic",
                b"LEAF {\n Depends MIDDLE\n}\nMIDDLE {\n Depends ROOT\n}\nROOT {\n}\n",
                ["ROOT", "MIDDLE", "LEAF"],
                [],
            ),
            (
                "manual",
                b"FIRST {\n}\nSECOND {\n}\nLAST {\n Depends FIRST\n Depends SECOND\n}\n",
                ["SECOND", "FIRST", "LAST"],
                [("FIRST", "SECOND")],
            ),
            (
                "cancel",
                b"FIRST {\n}\nSECOND {\n}\nLAST {\n Depends FIRST\n Depends SECOND\n}\n",
                ["FIRST", "SECOND", "LAST"],
                [("FIRST", "SECOND")],
            ),
            (
                "close",
                b"FIRST {\n}\nSECOND {\n}\nLAST {\n Depends FIRST\n Depends SECOND\n}\n",
                ["FIRST", "SECOND", "LAST"],
                [("FIRST", "SECOND")],
            ),
            (
                "cancel_after_move",
                b"TAIL {\n Depends LEFT\n Depends RIGHT\n}\nLEFT {\n Depends ROOT\n}\nRIGHT {\n Depends ROOT\n}\nROOT {\n}\n",
                ["ROOT", "TAIL", "LEFT", "RIGHT"],
                [("LEFT", "RIGHT"), ("LEFT", "RIGHT")],
            ),
            (
                "cycle",
                b"RED {\n Depends BLUE\n}\nBLUE {\n Depends RED\n}\n",
                ["BLUE", "RED"],
                [("RED", "BLUE")],
            ),
        ],
    )
    def test_prerequisite_sort_dialog_runs_real_controls_and_saves(
        self, prerequisite_sort_window, mode, content, expected, offered
    ) -> None:
        """Require a parsed graph; guarantee real dialog sorting and copy-save; maintain source bytes."""
        root, window, source_path = prerequisite_sort_window
        source_path.write_bytes(content)
        window._display_data(load_data_file(window.document, source_path))
        window.sort_button.invoke()
        dialog = next(child for child in root.winfo_children() if isinstance(child, tk.Toplevel))
        prerequisite_frame = next(widget for widget in _descendants(dialog) if widget.winfo_class() == "TLabelframe")
        controls = {widget.cget("text"): widget for widget in prerequisite_frame.winfo_children()}
        manual = controls["Choose manually"]
        assert root.getboolean(root.getvar(manual.cget("variable"))) is True
        assert all(str(widget.cget("state")) == tk.NORMAL for widget in controls.values())
        observed = []
        timed_out = []

        def respond() -> None:
            chooser = next(child for child in root.winfo_children() if isinstance(child, tk.Toplevel) and child.title() == "Choose entry")
            widgets = _descendants(chooser)
            listbox = next(widget for widget in widgets if isinstance(widget, tk.Listbox))
            observed.append(listbox.get(0, tk.END))
            if mode == "close":
                root.tk.call(chooser.protocol("WM_DELETE_WINDOW"))
            else:
                if not mode.startswith("cancel"):
                    listbox.selection_clear(0, tk.END)
                    listbox.selection_set(1)
                caption = "Cancel" if mode.startswith("cancel") else "OK"
                next(widget for widget in widgets if widget.winfo_class() == "TButton" and widget.cget("text") == caption).invoke()

        choose_dialog = window.choose_entry_dialog

        def choose(candidates):
            """Schedule desktop input at each real chooser invocation."""
            root.after_idle(respond)
            return choose_dialog(candidates)

        def expire() -> None:
            timed_out.append(True)
            for child in root.winfo_children():
                if isinstance(child, tk.Toplevel):
                    child.destroy()

        if mode == "automatic":
            controls["Choose currently highest"].invoke()
        watchdog = root.after(3000, expire)
        with patch.object(window, "choose_entry_dialog", side_effect=choose):
            controls["Go"].invoke()
        root.after_cancel(watchdog)
        assert not timed_out
        assert observed == offered
        assert not dialog.winfo_exists()
        assert [entry.name for entry in window.data_file.entries] == expected
        assert [window.data_list.item(row, "text") for row in window.data_list.get_children()] == expected
        assert window.data_file.entries.count == len(expected)
        assert source_path.read_bytes() == content
        destination = source_path.with_name("dependencies-copy.txt")
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_button.invoke()
        reparsed = load_data_file(window.document, destination)
        assert [entry.name for entry in reparsed.entries] == expected
        assert source_path.read_bytes() == content


    def test_prerequisite_sort_error_retains_dialog_for_retry(
        self, prerequisite_sort_window,
    ) -> None:
        """Require a sort error; retain the dialog and model, then guarantee successful retry."""
        root, window, source_path = prerequisite_sort_window
        original = source_path.read_bytes()
        window.sort_button.invoke()
        dialog = next(child for child in root.winfo_children() if isinstance(child, tk.Toplevel))
        prerequisite_frame = next(widget for widget in _descendants(dialog) if widget.winfo_class() == "TLabelframe")
        controls = {widget.cget("text"): widget for widget in prerequisite_frame.winfo_children()}
        with patch.object(window, "apply_prerequisite_sort", side_effect=ValueError("invalid prerequisite input")), patch("app.messagebox.showerror") as error:
            controls["Go"].invoke()
        error.assert_called_once_with("Cannot sort entries", "invalid prerequisite input", parent=dialog)
        assert dialog.winfo_exists()
        assert [entry.name for entry in window.data_file.entries] == ["LEAF", "ROOT"]
        assert source_path.read_bytes() == original
        controls["Choose currently highest"].invoke()
        controls["Go"].invoke()
        assert not dialog.winfo_exists()
        assert [entry.name for entry in window.data_file.entries] == ["ROOT", "LEAF"]


def test_window_edits_ordinal_preference_flag_and_saves_copy(tmp_path: Path) -> None:
    source = tmp_path / "settings.prf"
    destination = tmp_path / "settings-copy.prf"
    original = b"  %032%009  \r\nfalse\r\nTrue \r\nfalse\r\ntrue\r\n"
    source.write_bytes(original)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        preferences = load_preferences(source)
        window._display_preferences(preferences)
        assert window.data_tabs.index("current") == 4
        assert [variable.get() for variable in window.preference_flag_vars] == [
            False,
            True,
            False,
            True,
        ]
        assert all(
            str(button.cget("state")) == tk.NORMAL
            for button in window.preference_flag_buttons
        )

        window.preference_flag_buttons[0].invoke()

        assert preferences.flags == (True, True, False, True)
        assert "Changed preference flag 1" in window.status.get()
        with patch(
            "app.filedialog.asksaveasfilename", return_value=str(destination)
        ):
            window.save_copy()

        assert source.read_bytes() == original
        assert destination.read_bytes() == (
            b"  %032%009  \r\nTrue\r\nTrue \r\nfalse\r\ntrue\r\n"
        )
        assert "Saved copy" in window.status.get()
    finally:
        root.destroy()


def test_window_adds_defaulted_format_one_entry_and_saves(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    destination = tmp_path / "items-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Value\tt\tt\tf\t1\n\t0\t\tNULL\n@\n"
    )
    source_path.write_bytes(b"A {\n Value 1\n}\n")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert str(window.add_entry_button.cget("state")) == tk.NORMAL
        with (
            patch("app.simpledialog.askstring", side_effect=["B", "CHANGED"]),
            patch("app.filedialog.asksaveasfilename", return_value=str(destination)),
        ):
            window.add_entry_button.invoke()
            window.data_list.selection_set("entry-1")
            window.show_selected_entry()
            assert str(window.edit_value_button.cget("state")) == tk.NORMAL
            window.edit_selected_value()
            window.save_data_copy()

        expected = b"A {\n Value 1\n}\nB {\n\tValue CHANGED\n}\n"
        assert destination.read_bytes() == expected
        reparsed = load_data_file(document, destination)
        assert [entry.name for entry in reparsed.entries] == ["A", "B"]
        assert reparsed.entries.item(2).field_instances.item(1).value == "CHANGED"
    finally:
        root.destroy()


def test_window_adds_nested_default_entry_and_saves(tmp_path: Path) -> None:
    structure_path = (
        Path(__file__).parents[1]
        / ".private_samples"
        / "Structure"
        / "agecitystyle.ces"
    )
    source_path = tmp_path / "agecitystyle.txt"
    destination = tmp_path / "agecitystyle-copy.txt"
    source_path.write_bytes(b"")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(structure_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        with (
            patch("app.simpledialog.askstring", return_value="CITY_STYLE_NEW"),
            patch("app.filedialog.asksaveasfilename", return_value=str(destination)),
        ):
            window.add_entry_button.invoke()
            window.save_data_copy()

        assert [entry.name for entry in data_file.entries] == ["CITY_STYLE_NEW"]
        reparsed = load_data_file(document, destination)
        assert [entry.name for entry in reparsed.entries] == ["CITY_STYLE_NEW"]
        nested = [
            instance.value
            for instance in reparsed.entries.item(1).field_instances
            if isinstance(instance.value, Entry)
        ]
        assert nested
    finally:
        root.destroy()


def test_window_reports_missing_nested_default_schema(tmp_path: Path) -> None:
    descriptor_path = tmp_path / "parent.ces"
    source_path = tmp_path / "parent.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Child\tf\tt\tf\t1\n\t*missing.ces\t0\tNested child\n@\n"
    )
    source_path.write_bytes(b"")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)
        with (
            patch("app.simpledialog.askstring", return_value="PARENT"),
            patch("app.messagebox.showerror") as showerror,
        ):
            window.add_entry_button.invoke()

        assert data_file.entries.count == 0
        showerror.assert_called_once()
        assert "missing.ces" in showerror.call_args.args[1]
    finally:
        root.destroy()


def test_window_displays_editable_format_two_and_saves_crlf_text(
    tmp_path: Path,
) -> None:
    descriptor_path = tmp_path / "strings.ces"
    source_path = tmp_path / "Strings.txt"
    destination = tmp_path / "Strings-copy.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#\n%032%009\n:\n}{\n"
        b"2 // Format\ngl_str.txt\npath\n#\n%009\n"
    )
    source = b'#import "Strings.txt"\r\n\r\nimport "gl_str.txt"\r\n'
    source_path.write_bytes(source)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(descriptor_path)
        data_file = load_data_file(document, source_path)
        window._display(document)
        window._display_data(data_file)

        assert window.raw_data_text.get("1.0", "end-1c") == source.decode("cp1252").replace(
            "\r\n", "\n"
        )
        assert str(window.raw_data_text.cget("state")) == tk.NORMAL
        assert str(window.editable_file_button.cget("state")) == tk.NORMAL
        window.raw_data_text.delete("1.0", tk.END)
        window.raw_data_text.insert("1.0", '"NEW\\tvalue"\n')
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_data_copy()

        assert destination.read_bytes() == b'"NEW\\tvalue"\r\n'
    finally:
        root.destroy()


def test_entries_grid_shows_scrollbars_and_ctrl_a_selects_all_rows_for_mass_edit(
    tmp_path: Path,
) -> None:
    """Verify matrix scrolling and Ctrl+A selected-only mass-edit targeting.

    Require: Tk is available and a three-Entry editable format-3 fixture.
    Guarantee: both matrix scrollbars are visible and Ctrl+A selects every row.
    Maintain: mass editing remains in memory until the existing Save action.
    Assert: selected-only multiply changes all three Entries and no source bytes.
    """
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\t0\n@\n"
    )
    original = b"3\r\nA 1\r\nB 2\r\nC 3\r\n"
    source_path.write_bytes(original)
    document = load_descriptor(descriptor_path)
    data_file = load_data_file(document, source_path)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    window = EditorWindow(root)
    try:
        root.geometry("1000x700")
        window._display(document)
        window._display_data(data_file)
        root.update()

        assert window.entry_scrollbar.winfo_ismapped()
        assert window.entry_x_scrollbar.winfo_ismapped()
        window.data_list.focus_force()
        window.data_list.event_generate("<Control-a>")
        root.update()
        rows = window.data_list.get_children("")
        assert tuple(window.data_list.selection()) == rows

        changed = window._apply_mass_modification(
            "Value",
            "multiply",
            "2",
            selected_only=True,
            round_off=False,
        )
        assert changed == 3
        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "2",
            "4",
            "6",
        ]
        assert source_path.read_bytes() == original
    finally:
        root.destroy()


def test_right_click_edit_targets_values_in_both_entry_grids(
    tmp_path: Path,
) -> None:
    """Verify right-click menus edit exact writable cells and retain row selection.

    Require: Tk is available and a three-Entry editable format-3 fixture.
    Guarantee: matrix and detail context actions edit their clicked values.
    Maintain: preserve matrix multi-selection and keep source bytes untouched.
    Assert: uneditable targets disable both context-menu actions.
    """
    descriptor_path = tmp_path / "items.ces"
    source_path = tmp_path / "items.txt"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"3 // Format\nt\nValue\tt\tt\tf\t1\n\t0\t\t0\n@\n"
    )
    original = b"3\r\nA 1\r\nB 2\r\nC 3\r\n"
    source_path.write_bytes(original)
    document = load_descriptor(descriptor_path)
    data_file = load_data_file(document, source_path)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    window = EditorWindow(root)
    try:
        root.geometry("1000x700")
        window._display(document)
        window._display_data(data_file)
        root.update()

        window.data_list.selection_set(("entry-0", "entry-1"))
        matrix_column = window._entry_matrix_columns["Value"]
        matrix_box = window.data_list.bbox("entry-1", matrix_column)
        assert matrix_box
        x, y, width, height = matrix_box
        matrix_event = SimpleNamespace(
            x=x + width // 2,
            y=y + height // 2,
            x_root=window.data_list.winfo_rootx() + x + width // 2,
            y_root=window.data_list.winfo_rooty() + y + height // 2,
        )
        with (
            patch.object(window.entry_context_menu, "tk_popup"),
            patch("app.simpledialog.askstring", return_value="22") as ask_matrix,
        ):
            assert window._show_entry_grid_context_menu(matrix_event) == "break"
            assert window.data_list.selection() == ("entry-0", "entry-1")
            assert window.entry_context_menu.entrycget(0, "state") == tk.NORMAL
            assert window._active_grid_cell == (1, "Value")
            assert window._entry_matrix_cells[(1, "Value")][1]
            command = window.entry_context_menu.entrycget(0, "command")
            assert command
            root.tk.call(command)
            window.entry_context_menu.unpost()
        ask_matrix.assert_called_once()
        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "1",
            "22",
            "3",
        ]

        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        detail_item = next(
            item
            for item in window.field_value_table.get_children()
            if window.field_value_table.item(item, "text") == "Value"
        )
        detail_box = window.field_value_table.bbox(detail_item, "value")
        assert detail_box
        x, y, width, height = detail_box
        detail_event = SimpleNamespace(
            x=x + width // 2,
            y=y + height // 2,
            x_root=window.field_value_table.winfo_rootx() + x + width // 2,
            y_root=window.field_value_table.winfo_rooty() + y + height // 2,
        )
        with (
            patch.object(window.field_value_context_menu, "tk_popup"),
            patch("app.simpledialog.askstring", return_value="11") as ask_detail,
        ):
            assert window._show_field_value_context_menu(detail_event) == "break"
            assert window.field_value_table.selection() == (detail_item,)
            assert window.field_value_context_menu.entrycget(0, "state") == tk.NORMAL
            assert window._active_grid_cell is None
            command = window.field_value_context_menu.entrycget(0, "command")
            assert command
            root.tk.call(command)
            window.field_value_context_menu.unpost()
        ask_detail.assert_called_once()
        assert [entry.field_instances.item(1).value for entry in data_file.entries] == [
            "11",
            "22",
            "3",
        ]

        data_file.editable = False
        with patch.object(window.entry_context_menu, "tk_popup"):
            window._show_entry_grid_context_menu(matrix_event)
        assert window.entry_context_menu.entrycget(0, "state") == tk.DISABLED
        window.entry_context_menu.unpost()
        with patch.object(window.field_value_context_menu, "tk_popup"):
            window._show_field_value_context_menu(detail_event)
        assert window.field_value_context_menu.entrycget(0, "state") == tk.DISABLED
        window.field_value_context_menu.unpost()
        assert source_path.read_bytes() == original
    finally:
        root.destroy()


def test_window_edits_nested_format_one_values_and_saves_by_field_path(
    tmp_path: Path,
) -> None:
    structure_root = tmp_path / "Structure"
    structure_root.mkdir()
    child_path = structure_root / "child.ces"
    child_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Kind\tf\tf\tf\t1\n\t0\t\tUNKNOWN\n"
        b"Count\tf\tf\tf\t1\n\t0\t\t0\n@\n"
    )
    descriptor_path = structure_root / "owner.ces"
    descriptor_path.write_bytes(
        b"0.3 // Version\n#%047%047\n%032%009\n:\n}{\n"
        b"1 // Format\nf\nf\nf\nf\nf\nf\n"
        b"Nested\tf\tf\tt\t1\n\t*child.ces\t0\tChild block\n@\n"
    )
    source_path = tmp_path / "owner.txt"
    source = (
        b"OWNER {\n"
        b" Nested {\n  Kind A\n  Count 3\n }\n"
        b" Nested {\n  Kind B\n  Count 8\n }\n"
        b" Nested {\n  Kind C\n  Count 0\n }\n"
        b"}\n"
    )
    source_path.write_bytes(source)
    destination = tmp_path / "owner-copy.txt"
    document = load_descriptor(descriptor_path)
    data_file = load_data_file(document, source_path)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        window._display(document)
        window._display_data(data_file)
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        assert str(window.edit_value_button.cget("state")) == tk.NORMAL
        displayed_paths = {
            window.field_value_table.item(item, "text")
            for item in window.field_value_table.get_children()
        }
        assert "Nested[1].Kind" in displayed_paths
        assert "Nested[3].Count" in displayed_paths
        nested_column = window._entry_matrix_columns["Nested[1]"]
        nested_json = window.data_list.set("entry-0", nested_column)
        assert '"Kind":"A"' in nested_json
        with (
            patch(
                "app.simpledialog.askstring",
                side_effect=["A_EDITED", "11", "C_EDITED"],
            ) as ask_value,
            patch("app.filedialog.asksaveasfilename", return_value=str(destination)),
        ):
            for path in (
                "Nested[1].Kind",
                "Nested[2].Count",
                "Nested[3].Kind",
            ):
                selected = next(
                    item
                    for item in window.field_value_table.get_children()
                    if window.field_value_table.item(item, "text") == path
                )
                window.field_value_table.selection_set(selected)
                window.edit_selected_value()
            window.save_data_copy()

        expected = source.replace(b"Kind A\n", b"Kind A_EDITED\n")
        expected = expected.replace(b"Count 8\n", b"Count 11\n")
        expected = expected.replace(b"Kind C\n", b"Kind C_EDITED\n")
        assert destination.read_bytes() == expected
        assert [call.args[1] for call in ask_value.call_args_list] == [
            "Nested[1].Kind",
            "Nested[2].Count",
            "Nested[3].Kind",
        ]
        reparsed = load_data_file(document, destination)
        nested = [
            instance.value for instance in reparsed.entries.item(1).field_instances
        ]
        assert [
            next(instance.value for instance in value.field_instances if instance.field.name == "Kind")
            for value in nested
        ] == [
            "A_EDITED",
            "B",
            "C_EDITED",
        ]
        assert [
            next(instance.value for instance in value.field_instances if instance.field.name == "Count")
            for value in nested
        ] == [
            "3",
            "11",
            "0",
        ]
    finally:
        root.destroy()


def test_app_loads_and_saves_original_preferences_copy(tmp_path: Path) -> None:
    source = Path(r"H:\Games\ctp2\CTPEd053\default.prf")
    if not source.is_file():
        pytest.skip("original CTPEd preferences sample is unavailable")
    destination = tmp_path / "default-test-copy.prf"
    preferences = load_preferences(source)
    save_preferences_copy(preferences, destination)
    assert destination.read_bytes() == source.read_bytes()


def test_app_loads_and_saves_original_gl_script_copy(tmp_path: Path) -> None:
    source = Path(r"H:\Games\ctp2\CTPEd053\GLTemplates\example.gls")
    if not source.is_file():
        pytest.skip("original CTPEd GL script sample is unavailable")
    destination = tmp_path / "example-copy.gls"
    script = load_gl_script(source)
    save_gl_script_copy(script, destination)

    assert len(script.rows) == 14
    assert destination.read_bytes() == source.read_bytes()


def test_window_opens_and_saves_gl_script_copy(tmp_path: Path) -> None:
    source = Path(r"H:\Games\ctp2\CTPEd053\GLTemplates\example.gls")
    if not source.is_file():
        pytest.skip("original CTPEd GL script sample is unavailable")
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    destination = tmp_path / "window-copy.gls"
    try:
        with patch("app.filedialog.askopenfilename", return_value=str(source)):
            window.open_gl_script()
        assert window.gl_script is not None
        assert len(window.gl_script_list.get_children()) == 14
        assert str(window.save_button["state"]) == "normal"
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_copy()
        assert destination.read_bytes() == source.read_bytes()
    finally:
        root.destroy()


def test_window_applies_gl_script_source_edits_and_rejects_invalid_text(
    tmp_path: Path,
) -> None:
    source = tmp_path / "editable.gls"
    original = b"// map\r\nadvance.ces\tPrereq\tadvance_prereq.glt\r\n"
    source.write_bytes(original)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    destination = tmp_path / "edited-copy.gls"
    try:
        with patch("app.filedialog.askopenfilename", return_value=str(source)):
            window.open_gl_script()
        assert window.gl_script is not None
        active_before = window.gl_script
        valid_text = "// map\nadvance.ces\tPrereq\tchanged.glt\n"
        window.gl_script_source_text.delete("1.0", tk.END)
        window.gl_script_source_text.insert("1.0", valid_text)
        root.update()
        assert str(window.apply_gl_script_button.cget("state")) == tk.NORMAL
        window.apply_gl_script_button.invoke()
        assert window.gl_script is not active_before
        assert window.gl_script is not None
        assert window.gl_script.rows[0].cells == (
            "advance.ces",
            "Prereq",
            "changed.glt",
        )
        assert window.gl_script.to_bytes() == (
            b"// map\r\nadvance.ces\tPrereq\tchanged.glt\r\n"
        )
        assert source.read_bytes() == original
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_copy()
        assert destination.read_bytes() == window.gl_script.to_bytes()

        active_after_valid = window.gl_script
        visible_rows = tuple(window.gl_script_list.get_children())
        with patch("app.messagebox.showerror") as showerror:
            for invalid_text in ("malformed row\n", "unencodable 😀\n"):
                window.gl_script_source_text.delete("1.0", tk.END)
                window.gl_script_source_text.insert("1.0", invalid_text)
                root.update()
                window.apply_gl_script_button.invoke()
                assert window.gl_script is active_after_valid
                assert tuple(window.gl_script_list.get_children()) == visible_rows
                assert window.gl_script_source_text.get("1.0", "end-1c") == invalid_text
            assert showerror.call_count == 2
        assert source.read_bytes() == original
    finally:
        root.destroy()


def test_app_loads_and_saves_original_gl_template_copy(tmp_path: Path) -> None:
    source = Path(__file__).parents[1] / ".private_samples" / "GLTemplates" / "advance_prereq.glt"
    destination = tmp_path / "advance_prereq-copy.glt"
    template = load_gl_template(source)
    save_gl_template_copy(template, destination)

    assert destination.read_bytes() == source.read_bytes()


def test_window_renders_selected_entry_in_gl_template_and_saves_copy(tmp_path: Path) -> None:
    sample_root = Path(__file__).parents[1] / ".private_samples"
    structure_path = sample_root / "Structure" / "advance.ces"
    data_path = sample_root / "GameData" / "default" / "gamedata" / "Advance.txt"
    template_path = tmp_path / "preview.glt"
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    destination = tmp_path / "preview-copy.glt"
    try:
        document = load_descriptor(structure_path)
        window._display(document)
        data_file = load_data_file(document, data_path)
        window._display_data(data_file)
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        first_entry = data_file.entries.item(1)
        repeated_field, _ = Field.from_lines(
            ["PreviewItems:\tf\tf\tt\t1", "\t0\t\tNULL"], 0, False
        )
        arithmetic_field, _ = Field.from_lines(
            ["PreviewPower\tf\tf\tf\t1", "\t0\t\tNULL"], 0, False
        )
        first_entry.field_instances.add(FieldInstance(arithmetic_field, "120"))
        first_entry.field_instances.add(FieldInstance(repeated_field, "ITEM_ALPHA"))
        first_entry.field_instances.add(FieldInstance(repeated_field, "ITEM_BETA"))
        template_source = (
            f"Entry=[.Name] math=[.PreviewPower / 10 + 1] counter=[#+][##] "
            f"condition=[?[.Name]={first_entry.name}|yes|no] "
            "repeat=[~PreviewItems: [.Name]|, ] unsupported=[?[.Name]>A|yes|no]\r\n"
        )
        template_path.write_bytes(template_source.encode("cp1252"))
        with patch("app.filedialog.askopenfilename", return_value=str(template_path)):
            window.open_gl_template()

        assert window.gl_template is not None
        assert window.template_source_text.get("1.0", "end-1c") == template_source.replace("\r\n", "\n")
        assert window.template_preview_text.get("1.0", "end-1c") == (
            f"Entry={first_entry.name} math=13 counter=1 condition=yes repeat=ITEM_ALPHA, ITEM_BETA "
            "unsupported=[?[.Name]>A|yes|no]\n"
        )
        assert str(window.save_preview_button.cget("state")) == tk.NORMAL
        assert window._rendered_gl_preview is not None
        preview_destination = tmp_path / "rendered.txt"
        with patch(
            "app.filedialog.asksaveasfilename", return_value=str(preview_destination)
        ):
            window.save_gl_preview_copy()
        assert preview_destination.read_bytes() == window._rendered_gl_preview.encode("cp1252")
        assert b"\r\n" in preview_destination.read_bytes()
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_gl_template_copy()
        assert destination.read_bytes() == template_path.read_bytes()
    finally:
        root.destroy()


def test_window_applies_valid_gl_template_edits_and_rejects_invalid_text(
    tmp_path: Path,
) -> None:
    source = tmp_path / "source.glt"
    source.write_bytes(b"Original [.Name]\r\n")
    sample_root = Path(__file__).parents[1] / ".private_samples"
    document = load_descriptor(sample_root / "Structure" / "advance.ces")
    data_file = load_data_file(
        document, sample_root / "GameData" / "default" / "gamedata" / "Advance.txt"
    )
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        window._display(document)
        window._display_data(data_file)
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        with patch("app.filedialog.askopenfilename", return_value=str(source)):
            window.open_gl_template()
        active_before = window.gl_template
        valid_text = "Edited [.Name]\n"
        window.template_source_text.delete("1.0", tk.END)
        window.template_source_text.insert("1.0", valid_text)
        root.update()
        assert str(window.apply_template_button.cget("state")) == tk.NORMAL
        window.apply_template_button.invoke()
        expected_bytes = b"Edited [.Name]\r\n"
        assert window.gl_template is not active_before
        assert window.gl_template is not None
        assert window.gl_template.to_bytes() == expected_bytes
        assert window.template_preview_text.get("1.0", "end-1c") == (
            f"Edited {data_file.entries.item(1).name}\n"
        )
        assert source.read_bytes() == b"Original [.Name]\r\n"
        destination = tmp_path / "edited-copy.glt"
        with patch("app.filedialog.asksaveasfilename", return_value=str(destination)):
            window.save_gl_template_copy()
        assert destination.read_bytes() == expected_bytes

        active_after_valid = window.gl_template
        preview_after_valid = window.template_preview_text.get("1.0", "end-1c")
        with patch("app.messagebox.showerror") as showerror:
            for invalid_text in ("Broken [template\n", "Unencodable 😀\n"):
                window.template_source_text.delete("1.0", tk.END)
                window.template_source_text.insert("1.0", invalid_text)
                root.update()
                window.apply_template_button.invoke()
                assert window.gl_template is active_after_valid
                assert window.template_preview_text.get("1.0", "end-1c") == preview_after_valid
                assert window.template_source_text.get("1.0", "end-1c") == invalid_text
            assert showerror.call_count == 2
        assert source.read_bytes() == b"Original [.Name]\r\n"
    finally:
        root.destroy()


def test_window_previews_documented_unit_icon_name_shortcut() -> None:
    sample_root = Path(__file__).parents[1] / ".private_samples"
    structure_path = sample_root / "Structure" / "advance.ces"
    data_path = sample_root / "GameData" / "default" / "gamedata" / "Advance.txt"
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        document = load_descriptor(structure_path)
        window._display(document)
        window._display_data(load_data_file(document, data_path))
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()
        entry = window.data_file.entries.item(1)
        cases = (
            ("ICON_%n", f"ICON_{entry.name}"),
            ("%n_%n", f"{entry.name}_{entry.name}"),
            ("literal name", "literal name"),
        )
        for source, expected in cases:
            window.icon_template_text.set(source)
            window._update_icon_name_preview(entry=entry)
            assert window.icon_name_preview_text.get() == expected

        window.data_list.selection_remove("entry-0")
        window._update_icon_name_preview()
        assert window.icon_name_preview_text.get() == ""
    finally:
        root.destroy()


def test_app_loads_project_declarations_and_imports_selected_file() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced",
        root / "Structure",
        root / "GameData",
        "default",
    )
    spec = next(
        value
        for value in project_view.project.file_specs
        if value.data_name.casefold() == "advance.txt"
    )

    descriptor, imported = import_project_declaration(project_view, spec)

    assert len(project_view.project.file_specs) == 66
    assert descriptor.structure is imported.structure
    assert imported.structure.format == 1
    assert imported.entries.count > 0
    assert imported.to_bytes() == imported.data_source.path.read_bytes()
    assert project_view.project.files.item(1) is imported


def test_project_import_retains_unknown_terrain_fields_when_known_values_change():
    from file import File

    root = Path(__file__).parents[1] / ".private_samples"
    project = load_project(root / "default.ced", root / "Structure", root / "GameData", "default")
    spec = next(value for value in project.project.file_specs if value.data_name.casefold() == "terrain.txt")
    _, terrain = import_project_declaration(project, spec)
    assert terrain.entries.count == 26
    terrain.editable = True
    entry = terrain.entries.item(1)
    inferred = next(instance for instance in entry.field_instances if instance.field.name == "HutTilesetIndexA")
    assert inferred.field.inferred and inferred.value == "150"
    assert inferred not in [instance for _, instance in _editable_field_instances(entry)]
    tileset = entry.field_instances.item_by_field(terrain.fields.item("TilesetIndex"))
    assert tileset is not None
    tileset.set_value("23")
    output = terrain.to_bytes()
    assert b"HutTilesetIndexA 150" in output
    reparsed = File.from_bytes(
        output, terrain.structure, allow_unknown_fields=True,
        substructure_root=root / "Structure",
    )
    assert reparsed.entries.item(1).field_instances.item_by_field(
        reparsed.fields.item("TilesetIndex")
    ).value == "23"


def test_terrain_entry_table_shows_values_and_edits_selected_declared_row():
    root_path = Path(__file__).parents[1] / ".private_samples"
    project = load_project(
        root_path / "default.ced",
        root_path / "Structure",
        root_path / "GameData",
        "default",
    )
    spec = next(
        value
        for value in project.project.file_specs
        if value.data_name.casefold() == "terrain.txt"
    )
    document, terrain = import_project_declaration(project, spec)
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        window._display(document)
        window._display_data(terrain)
        window.editable_file.set(True)
        window._toggle_file_editable()
        window.data_list.selection_set("entry-0")
        window.show_selected_entry()

        paths = {
            window.field_value_table.item(row, "text"): row
            for row in window.field_value_table.get_children()
        }
        assert "TilesetIndex" in paths
        assert "HutTilesetIndexA" in paths
        assert len(window.data_list.get_children()) == terrain.entries.count
        unknown = window.field_value_table.item(paths["HutTilesetIndexA"], "values")
        assert unknown[1:] == ("Unknown type", "Read-only")
        terrain_column = window._entry_matrix_columns["TilesetIndex"]
        unknown_column = window._entry_matrix_columns["HutTilesetIndexA"]
        assert window.data_list.set("entry-0", terrain_column) == "22"
        assert window.data_list.set("entry-0", unknown_column) == "150"

        selected = paths["TilesetIndex"]
        window.field_value_table.selection_set(selected)
        window.field_value_table.focus(selected)
        window._active_grid_cell = (0, "TilesetIndex")
        assert str(window.edit_value_button.cget("state")) == tk.NORMAL
        with (
            patch("app.simpledialog.askinteger", side_effect=AssertionError),
            patch("app.simpledialog.askstring", return_value="23"),
        ):
            window.edit_value_button.invoke()

        assert window.field_value_table.item(paths["TilesetIndex"], "values")[0] == "23"
        assert window.field_value_table.item(paths["HutTilesetIndexA"], "values")[0] == "150"
        assert window.data_list.set("entry-0", terrain_column) == "23"
        window._select_field_dimension("TilesetIndex")
        assert window._selected_field_dimension == "TilesetIndex"
    finally:
        root.destroy()


def test_gamefile_project_imports_every_present_structured_sample():
    root = Path(__file__).parents[1] / ".private_samples"
    project = load_project(root / "default.ced", root / "Structure", root / "GameData", "default")
    imported = []
    missing = []
    for spec in project.project.file_specs:
        if not spec.has_structure:
            continue
        path = spec.resolve_data_path(project.project_directory, project.structure_root, project.data_root, project.language)
        if not path.is_file():
            missing.append(spec.data_name)
            continue
        _, data_file = import_project_declaration(project, spec)
        imported.append((spec.data_name, data_file.entries.count))
    assert len(imported) == 22
    assert missing == ["strings.txt", "PRJ_uniticon.txt", "citysize.txt", "PRJ_Newsprite.txt"]
    assert project.project.files.count == len(imported)



def test_project_gl_name_loads_prefixed_table_lazily_and_caches(tmp_path: Path) -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    data_root = tmp_path / "GameData"
    table_path = data_root / "default" / "gamedata" / "PRJ_gl_str.txt"
    table_path.parent.mkdir(parents=True)
    table_path.write_bytes(
        b'ADVANCE_AGRICULTURE\t\t"Agriculture"\n'
        b'EMPTY_LABEL\t""\n'
        b'DUPLICATE\t"First"\nDUPLICATE\t"Second"\n'
    )
    project_view = load_project(
        root / "default.ced", root / "Structure", data_root, "default"
    )

    assert "gl_string_table" not in project_view.__dict__
    assert resolve_project_gl_name(project_view, "ADVANCE_AGRICULTURE") == "Agriculture"
    assert resolve_project_gl_name(project_view, "EMPTY_LABEL") == "EMPTY_LABEL"
    assert resolve_project_gl_name(project_view, "MISSING") == "MISSING"
    assert project_view.gl_string_table is project_view.gl_string_table
    assert project_view.project.files.count == 0
    assert resolve_project_gl_name(project_view, "DUPLICATE") == "Second"



def test_project_template_preview_uses_loaded_gl_name(tmp_path: Path) -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    data_root = tmp_path / "GameData"
    table_path = data_root / "default" / "gamedata" / "PRJ_gl_str.txt"
    table_path.parent.mkdir(parents=True)
    table_path.write_bytes(b'ADVANCE_AGRICULTURE\t\t"Agriculture"\n')
    project_view = load_project(
        root / "default.ced", root / "Structure", data_root, "default"
    )
    preview = SimpleNamespace()
    status = SimpleNamespace(value="", set=lambda value: setattr(status, "value", value))
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.gl_template = GLTemplate.from_bytes(b"[.GLName]", "preview.glt")
    window.project_view = project_view
    window.template_preview_text = preview
    window.status = status
    window._replace_text = lambda _widget, value: setattr(preview, "text", value)

    EditorWindow._render_template_for_entry(
        window, Entry("fixture.txt", "ADVANCE_AGRICULTURE", 1, (), FieldInstances())
    )

    assert preview.text == "Agriculture"


def test_project_template_preview_uses_last_duplicate_gl_name(tmp_path: Path) -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    data_root = tmp_path / "GameData"
    table_path = data_root / "default" / "gamedata" / "PRJ_gl_str.txt"
    table_path.parent.mkdir(parents=True)
    table_path.write_bytes(b'KEY\t"First"\nKEY\t"Second"\n')
    project_view = load_project(
        root / "default.ced", root / "Structure", data_root, "default"
    )
    preview = SimpleNamespace()
    status = SimpleNamespace(value="", set=lambda value: setattr(status, "value", value))
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.gl_template = GLTemplate.from_bytes(b"[.GLName]", "preview.glt")
    window.project_view = project_view
    window.template_preview_text = preview
    window.status = status
    window._replace_text = lambda _widget, value: setattr(preview, "text", value)

    EditorWindow._render_template_for_entry(
        window, Entry("fixture.txt", "KEY", 1, (), FieldInstances())
    )

    assert preview.text == "Second"
    assert status.value != "GL template preview could not resolve project data"


def test_raw_nested_edit_callback_stages_valid_text_and_rolls_back_invalid_text(
    monkeypatch: pytest.MonkeyPatch,
) -> None:
    structure = Structure.from_bytes(
        b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n",
        "parent.ces",
    )
    nested_field, _ = Field.from_lines(
        ["Nested\tt\tf\tf\t1", "\t*child.ces\tdefault"], 0, False
    )
    fields = Fields()
    fields.add(nested_field)
    entry, _ = Entry.from_lines(
        ["ENTRY {\n", "  Nested {\n", "    Unknown 1\n", "  }\n", "}\n"],
        0,
        structure,
        fields=fields,
    )
    nested = next(
        instance for instance in entry.field_instances
        if instance.field.name == "Nested"
    )
    errors: list[str] = []
    monkeypatch.setattr(
        "app.messagebox.showerror",
        lambda _title, message, **_options: errors.append(str(message)),
    )
    status = SimpleNamespace(set=lambda value: setattr(status, "value", value))
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.data_file = SimpleNamespace(
        editable=True,
        to_bytes=lambda: entry.to_text().encode("cp1252"),
    )
    window.root = None
    window.status = status
    window.show_selected_entry = lambda **_kwargs: None
    window._refresh_entry_matrix_values = lambda: None

    assert EditorWindow._apply_raw_nested_edit(
        window, "Nested", nested, "{\n    Unknown 2\n  }"
    ) is True
    assert "Unknown 2" in entry.to_text()
    prior = nested.value
    assert EditorWindow._apply_raw_nested_edit(window, "Nested", nested, "not a block") is False
    assert nested.value == prior
    assert errors


def test_project_gl_name_missing_table_returns_none(tmp_path: Path) -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced", root / "Structure", tmp_path, "default"
    )

    assert resolve_project_gl_name(project_view, "ADVANCE_AGRICULTURE") is None


def test_project_template_loop_lazily_resolves_exact_structure_names() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced",
        root / "Structure",
        root / "GameData",
        "default",
    )

    advances = resolve_project_structure_file(project_view, "advance.ces")
    assert advances is not None
    assert advances.entries.count == 107
    assert resolve_project_structure_file(project_view, "advance.ces") is advances
    assert resolve_project_structure_file(project_view, "Advance.ces") is None

    buildings = resolve_project_structure_file(project_view, "buildings.ces")
    assert buildings is not None
    assert buildings.entries.count == 52
    assert project_view.project.files.count == 2


def test_project_template_resolves_raw_cross_file_references_without_mutation() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced", root / "Structure", root / "GameData", "default"
    )
    buildings = resolve_project_structure_file(project_view, "buildings.ces")
    assert buildings is not None
    advances = resolve_project_structure_file(
        project_view, "Advance.CES", case_sensitive=False
    )
    assert advances is not None

    raw_instances = [
        instance
        for building in buildings.entries
        for instance in building.field_instances
        if instance.field.name == "EnableAdvance"
    ]
    expected_values: list[str] = []
    for instance in raw_instances:
        temporary = FieldInstance(instance.field, instance.value)
        target = temporary.value_to_object((advances,))
        cost = next(
            field_instance
            for field_instance in target.field_instances
            if field_instance.field.name == "Cost"
        )
        expected_values.append(cost.value_as_string)

    first_instance = next(
        instance
        for instance in buildings.entries.item(1).field_instances
        if instance.field.name == "EnableAdvance"
    )
    expected_first = FieldInstance(first_instance.field, first_instance.value)
    target_entry = expected_first.value_to_object((advances,))
    expected_cost = next(
        instance.value_as_string
        for instance in target_entry.field_instances
        if instance.field.name == "Cost"
    )
    suffix_template = GLTemplate.from_bytes(
        b"[.EnableAdvance.Cost]", "cross-file-suffix.glt"
    )
    assert suffix_template.render(
        buildings.entries.item(1),
        reference_resolver=lambda name: resolve_project_structure_file(
            project_view, name, case_sensitive=False
        ),
    ) == expected_cost
    assert suffix_template.render(buildings.entries.item(1)) == "[.EnableAdvance.Cost]"
    with pytest.raises(ValueError, match="target File is not loaded"):
        suffix_template.render(
            buildings.entries.item(1), reference_resolver=lambda _name: None
        )
    assert isinstance(first_instance.value, str)

    template = GLTemplate.from_bytes(
        b"[*buildings.ces [~EnableAdvance [.Cost]]|, ]",
        "cross-file-reference.glt",
    )
    rendered = template.render(
        buildings.entries.item(1),
        file_resolver=lambda name: resolve_project_structure_file(project_view, name),
        reference_resolver=lambda name: resolve_project_structure_file(
            project_view, name, case_sensitive=False
        ),
    )

    assert rendered == ", ".join(expected_values)
    assert all(isinstance(instance.value, str) for instance in raw_instances)
    assert resolve_project_structure_file(project_view, "Advance.ces") is None

    template = GLTemplate.from_bytes(
        b"[*advance.ces [.Name]|, ]", "project-loop.glt"
    )
    source_entry = advances.entries.item(1)
    rendered = template.render(
        source_entry,
        file_resolver=lambda name: resolve_project_structure_file(project_view, name),
    )

    assert rendered == ", ".join(entry.name for entry in advances.entries)


def test_project_template_loop_preserves_missing_declarations() -> None:
    template = GLTemplate.from_bytes(
        b"[*Advance.ces [.Name]|, ]", "missing-project-loop.glt"
    )

    assert template.render(Entry("sample.txt", "SAMPLE", 1, (), FieldInstances())) == (
        "[*Advance.ces [.Name]|, ]"
    )


def test_project_template_loop_renders_through_preview_callback_without_tk() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced",
        root / "Structure",
        root / "GameData",
        "default",
    )
    advances = resolve_project_structure_file(project_view, "advance.ces")
    assert advances is not None

    class PreviewText:
        def __init__(self) -> None:
            self.text = ""
            self.state = "normal"

        def configure(self, **kwargs: object) -> None:
            if "state" in kwargs:
                self.state = str(kwargs["state"])

        def delete(self, *_args: object) -> None:
            self.text = ""

        def insert(self, _index: str, value: str) -> None:
            self.text = value

        def cget(self, _name: str) -> str:
            return self.state

    status = SimpleNamespace(set=lambda value: setattr(status, "value", value))
    status.value = ""
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.gl_template = GLTemplate.from_bytes(
        b"[*buildings.ces [.Name]|, ]", "preview-project-loop.glt"
    )
    window.project_view = project_view
    window.template_preview_text = PreviewText()
    window.status = status

    EditorWindow._render_template_for_entry(window, advances.entries.item(1))

    buildings = resolve_project_structure_file(project_view, "buildings.ces")
    assert buildings is not None
    assert window.template_preview_text.text == ", ".join(
        entry.name for entry in buildings.entries
    )
    assert project_view.project.files.count == 2


def test_project_consequences_use_only_registered_files_and_preserve_references() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    project_view = load_project(
        root / "default.ced",
        root / "Structure",
        root / "GameData",
        "default",
    )
    advances = resolve_project_structure_file(project_view, "advance.ces")
    assert advances is not None
    agriculture = advances.entries.item_by_name("ADVANCE_AGRICULTURE")
    before = tuple(
        (instance, instance.value)
        for file_model in project_view.project.files
        for target_entry in file_model.entries
        for instance in target_entry.field_instances
        if instance.field.arguments
        and Path(instance.field.arguments[0].argument_type).suffix.casefold() == ".ces"
    )

    assert tuple(
        target.name for target in resolve_project_consequences(project_view, agriculture)
    ) == (
        "ADVANCE_BALLISTICS",
        "ADVANCE_SLAVE_LABOR",
        "ADVANCE_TRADE",
    )
    assert project_view.project.files.count == 1

    buildings = resolve_project_structure_file(project_view, "buildings.ces")
    assert buildings is not None
    consequences = resolve_project_consequences(project_view, agriculture)
    assert tuple(target.name for target in consequences) == (
        "ADVANCE_BALLISTICS",
        "ADVANCE_SLAVE_LABOR",
        "ADVANCE_TRADE",
        "IMPROVE_GRANARY",
    )
    template = GLTemplate.from_bytes(
        b"[?Consequences|[~Consequences [.Name]|, ]|none]",
        "project-consequences.glt",
    )
    rendered = template.render(
        agriculture,
        consequences_resolver=lambda active_entry: resolve_project_consequences(
            project_view, active_entry
        ),
    )
    assert rendered == (
        "ADVANCE_BALLISTICS, ADVANCE_SLAVE_LABOR, ADVANCE_TRADE, IMPROVE_GRANARY"
    )
    preview = SimpleNamespace(text="")
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.gl_template = template
    window.project_view = project_view
    window.template_preview_text = preview
    window.status = SimpleNamespace(set=lambda _value: None)
    window._replace_text = lambda _widget, value: setattr(preview, "text", value)
    EditorWindow._render_template_for_entry(window, agriculture)
    assert preview.text == rendered
    shipped_template = load_gl_template(root / "GLTemplates" / "advance_vari.glt")
    shipped_rendered = shipped_template.render(
        agriculture,
        consequences_resolver=lambda active_entry: resolve_project_consequences(
            project_view, active_entry
        ),
        db_resolver=lambda active_entry: resolve_project_database_name(
            project_view, active_entry
        ),
    )
    assert "ADVANCE_BALLISTICS" in shipped_rendered
    assert " (A)" in shipped_rendered
    assert "IMPROVE_GRANARY" in shipped_rendered
    assert " (I)" in shipped_rendered
    assert "[?[.DB]=" not in shipped_rendered
    window.gl_template = shipped_template
    EditorWindow._render_template_for_entry(window, agriculture)
    assert preview.text == shipped_rendered.replace("\r\n", "\n").replace("\r", "\n")
    assert all(isinstance(value, str) for _, value in before)
    assert all(instance.value == value for instance, value in before)


def test_window_renders_shipped_consequences_and_database_markers() -> None:
    root_path = Path(__file__).parents[1] / ".private_samples"
    try:
        root = tk.Tk()
    except tk.TclError as error:
        pytest.skip(f"Tk display is unavailable: {error}")
    root.withdraw()
    window = EditorWindow(root)
    try:
        project_view = load_project(
            root_path / "default.ced",
            root_path / "Structure",
            root_path / "GameData",
            "default",
        )
        advances = resolve_project_structure_file(project_view, "advance.ces")
        assert advances is not None
        assert resolve_project_structure_file(project_view, "buildings.ces") is not None
        agriculture = advances.entries.item_by_name("ADVANCE_AGRICULTURE")
        window.project_view = project_view
        window.gl_template = load_gl_template(
            root_path / "GLTemplates" / "advance_vari.glt"
        )

        window._render_template_for_entry(agriculture)
        rendered = window.template_preview_text.get("1.0", "end-1c")

        assert "ADVANCE_BALLISTICS" in rendered
        assert " (A)" in rendered
        assert "IMPROVE_GRANARY" in rendered
        assert " (I)" in rendered
        assert "Nothing" not in rendered
    finally:
        root.destroy()


def test_project_file_import_errors_are_visible_in_preview(monkeypatch) -> None:
    entry = Entry("sample.txt", "SAMPLE", 1, (), FieldInstances())
    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.gl_template = GLTemplate.from_bytes(
        b"[*advance.ces [.Name]]", "unreadable-project-loop.glt"
    )
    window.project_view = object()
    window.template_preview_text = SimpleNamespace()
    window.preview_text = ""
    window.status = SimpleNamespace(set=lambda value: setattr(window, "status_text", value))
    window._replace_text = lambda _widget, value: setattr(window, "preview_text", value)

    def fail_resolution(_document, _name):
        raise FileNotFoundError("missing project data")

    monkeypatch.setattr("app.resolve_project_structure_file", fail_resolution)

    EditorWindow._render_template_for_entry(window, entry)

    assert window.preview_text == "Cannot resolve project data for template preview: missing project data"
    assert window.status_text == "GL template preview could not resolve project data"


def test_app_saves_unchanged_project_copy_byte_for_byte(tmp_path: Path) -> None:
    """Require a supplied `.ced`; guarantee exact saved bytes; preserve project model."""
    root = Path(__file__).parents[1] / ".private_samples"
    source = root / "default.ced"
    destination = tmp_path / "project-copy.ced"
    project_view = load_project(
        source,
        root / "Structure",
        root / "GameData",
        "default",
    )

    save_project_copy(project_view, destination)

    assert destination.read_bytes() == source.read_bytes()
    assert project_view.project.to_bytes() == source.read_bytes()


def test_app_normalizes_relative_project_chooser_roots() -> None:
    project_root = Path(__file__).parents[1] / ".private_samples"
    relative_root = project_root.relative_to(Path.cwd())
    project_view = load_project(
        relative_root / "default.ced",
        relative_root / "Structure",
        relative_root / "GameData",
        "default",
    )

    assert Path(project_view.project.source) == (project_root / "default.ced").resolve()
    assert project_view.project_directory == project_root.resolve()
    assert project_view.structure_root == (project_root / "Structure").resolve()
    assert project_view.data_root == (project_root / "GameData").resolve()


def test_app_imports_selected_file_with_relative_project_and_roots() -> None:
    project_root = Path(__file__).parents[1] / ".private_samples"
    relative_root = project_root.relative_to(Path.cwd())
    project_view = load_project(
        relative_root / "default.ced",
        relative_root / "Structure",
        relative_root / "GameData",
        "default",
    )
    spec = next(
        value
        for value in project_view.project.file_specs
        if value.data_name.casefold() == "advance.txt"
    )

    descriptor, imported = import_project_declaration(project_view, spec)

    assert descriptor.structure.source == str(
        (project_root / "Structure" / "advance.ces").resolve()
    )
    assert imported.entries.count == 107
    assert imported.to_bytes() == imported.data_source.path.read_bytes()


def test_app_loads_direct_data_with_nested_schema_from_descriptor_sibling() -> None:
    root = Path(__file__).parents[1] / ".private_samples"
    descriptor_path = root / "Structure" / "feat.ces"
    data_path = root / "GameData" / "default" / "gamedata" / "feat.txt"
    descriptor = load_descriptor(descriptor_path)
    imported = load_data_file(descriptor, data_path)
    nested = [
        instance.value
        for entry in imported.entries
        for instance in entry.field_instances
        if instance.field.arguments
        and instance.field.arguments[0].argument_type.startswith("*")
    ]

    assert len(nested) == 5
    assert all(value.name == "" and value.structure is not None for value in nested)
    assert imported.to_bytes() == data_path.read_bytes()


@pytest.mark.parametrize(
    "name,descriptor,data,expected_entries",
    [
        (
            "format-1",
            b"0.3 // Version\n1 // Format\nf\nf\nf\nf\nf\nf\n"
            b"Name\tt\tf\tf\t0\n@ // end fields\n",
            b"ITEM {\r\n}\r\n",
            1,
        ),
        (
            "format-3",
            b"0.3 // Version\n3 // Format\nf\n"
            b"Value\tt\tt\tf\t1\n\t0\t\t42\n@ // end fields\n",
            b"ITEM 42\r\n",
            1,
        ),
    ],
)
def test_app_loads_and_saves_data_file_unchanged(
    tmp_path: Path,
    name: str,
    descriptor: bytes,
    data: bytes,
    expected_entries: int,
) -> None:
    """Require format 1 and 3 models; guarantee entry import and exact copy save."""
    descriptor_path = tmp_path / f"{name}.ces"
    data_path = tmp_path / f"{name}.txt"
    destination = tmp_path / f"{name}-copy.txt"
    descriptor_path.write_bytes(descriptor)
    data_path.write_bytes(data)

    document = load_descriptor(descriptor_path)
    imported = load_data_file(document, data_path)
    save_data_copy(imported, destination)

    assert imported.entries.count == expected_entries
    assert destination.read_bytes() == data


def _project_with_great_library(tmp_path: Path, library_bytes: bytes):
    """Build a temporary project data root using independent GL block bytes.

    Require: ``library_bytes`` is a Great Library text fixture.
    Guarantee: return the loaded project and its Advance File model.
    Maintain: copy only required private sample inputs; keep the sample tree untouched.
    Assert: project data paths resolve under ``tmp_path``.
    """
    sample_root = Path(__file__).parents[1] / ".private_samples"
    source_game_data = sample_root / "GameData" / "default" / "gamedata"
    game_data = tmp_path / "default" / "gamedata"
    game_data.mkdir(parents=True)
    project = load_project(
        sample_root / "default.ced",
        sample_root / "Structure",
        tmp_path,
        "default",
    )
    for file_name in ("advance.txt", "PRJ_uniticon.txt"):
        spec = next(
            spec
            for spec in project.project.file_specs
            if spec.data_name.casefold() == file_name.casefold()
        )
        source_name = "Advance.txt" if file_name.casefold() == "advance.txt" else "uniticon.txt"
        content = (source_game_data / source_name).read_bytes()
        if source_name.casefold() == "advance.txt":
            source_descriptor = load_descriptor(
                sample_root / "Structure" / "advance.ces"
            )
            source_file = load_data_file(
                source_descriptor, source_game_data / "Advance.txt"
            )
            content = source_file.entries.item_by_name(
                "ADVANCE_AGRICULTURE"
            ).to_text().encode("cp1252")
        elif source_name == "uniticon.txt":
            key_line = b"ICON_ADVANCE_AGRICULTURE {"
            content = next(
                line for line in content.splitlines(keepends=True)
                if line.startswith(key_line)
            )
        spec.resolve_data_path(
            project.project_directory,
            project.structure_root,
            project.data_root,
            project.language,
        ).write_bytes(content)
    library_path = game_data / "PRJ_Great_Library.txt"
    library_path.write_bytes(library_bytes)
    advance_spec = next(
        spec
        for spec in project.project.file_specs
        if spec.data_name.casefold() == "advance.txt"
    )
    _, advance_file = import_project_declaration(project, advance_spec)
    return project, advance_file, library_path


def _add_linked_advance_entries(
    project, advance_file, names: tuple[str, ...], icon_names: tuple[str, ...]
):
    """Add schema-backed Advances and icon Entries for GL staging tests.

    Require: names and icon_names have equal nonzero lengths.
    Guarantee: return the registered icon File and generated Advance Entries.
    Maintain: build references through real sample schemas and project registration.
    Assert: each new Advance Icon points to the requested icon Entry name.
    """
    assert names and len(names) == len(icon_names)
    icon_file = resolve_project_structure_file(project, "uniticon.ces")
    assert icon_file is not None
    icon_file.editable = True
    advance_file.editable = True
    by_name = {entry.name: entry for entry in icon_file.entries}
    for name, icon_name in zip(names, icon_names, strict=True):
        icon_entry = by_name.get(icon_name)
        if icon_entry is None:
            icon_entry = icon_file.add_entry(icon_name)
            by_name[icon_name] = icon_entry
        prereq_field = icon_file.fields.item("Prereq")
        prereq_instance = icon_entry.field_instances.item_by_field(prereq_field)
        assert prereq_instance is not None
        prereq_instance.set_value(f"{name}_PREREQ")
        advance = advance_file.add_entry(name)
        icon_instance = advance.field_instances.item_by_field(
            advance_file.fields.item("Icon")
        )
        assert icon_instance is not None
        icon_instance.set_value(icon_name)
    result = tuple(advance_file.entries.item(advance_file.entries.count - len(names) + i + 1)
                   for i in range(len(names)))
    assert all(
        entry.field_instances.item_by_field(advance_file.fields.item("Icon")).value
        == icon_name
        for entry, icon_name in zip(result, icon_names, strict=True)
    )
    return icon_file, result


@pytest.mark.parametrize(
    ("library_bytes", "expected_fields"),
    (
        (
            b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
            b"[ADVANCE_AGRICULTURE_STATISTICS]\nold\n[END]\n",
            ("Prereq", "Vari", "StatText"),
        ),
        (
            b"[ADVANCE_AGRICULTURE_PREREQ]\na\n[END]\n"
            b"[ADVANCE_AGRICULTURE_PREREQ]\nb\n[END]\n"
            b"[ADVANCE_AGRICULTURE_STATISTICS]\nopen\n",
            (),
        ),
        (b"[UNRELATED]\nbody\n[END]\n", ()),
    ),
)
def test_project_gl_targets_filter_duplicate_unclosed_and_missing_keys(
    tmp_path: Path, library_bytes: bytes, expected_fields: tuple[str, ...]
) -> None:
    project, advance_file, _ = _project_with_great_library(tmp_path, library_bytes)
    entry = advance_file.entries.item_by_name("ADVANCE_AGRICULTURE")
    icon_instance = entry.field_instances.item_by_field(
        advance_file.fields.item("Icon")
    )
    assert icon_instance is not None
    original_value = icon_instance.value

    targets = resolve_project_gl_targets(project, entry)

    assert tuple(name for name, _ in targets) == expected_fields
    assert icon_instance.value is original_value


def _write_gl_script(
    directory: Path, source: bytes, templates: dict[str, bytes]
) -> Path:
    """Write one script and sibling templates into a temporary fixture folder.

    Require: names in ``templates`` are `.glt` basenames.
    Guarantee: return the `.gls` source path with all referenced templates present.
    Maintain: fixture files stay within ``directory``.
    Assert: every supplied template has the expected suffix.
    """
    directory.mkdir(parents=True, exist_ok=True)
    for name, content in templates.items():
        assert Path(name).name == name and Path(name).suffix == ".glt"
        (directory / name).write_bytes(content)
    script_path = directory / "fixture.gls"
    script_path.write_bytes(source)
    return script_path


def test_gl_script_executes_mappings_and_stages_distinct_linked_keys(
    tmp_path: Path,
) -> None:
    project, _advance_file, source_path = _project_with_great_library(
        tmp_path,
        b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
        b"[ADVANCE_AGRICULTURE_STATISTICS]\nkeep\n[END]\n",
    )
    script_path = _write_gl_script(
        tmp_path / "scripts",
        b"advance.ces\tPrereq\t\tprereq.glt\n"
        b"advance.ces\tVari\tvari.glt\n"
        b"advance.ces\tStatText\tprereq.glt\n",
        {
            "prereq.glt": b"requirements for [.Name]",
            "vari.glt": b"statistics for [.Name]",
        },
    )
    script = load_gl_script(script_path)
    original_bytes = source_path.read_bytes()
    original_library = project.great_library_file
    assert original_library is not None
    original_model_bytes = original_library.to_bytes()

    staged, count = execute_gl_script(project, script)

    assert count == 2
    assert staged.body_bytes("ADVANCE_AGRICULTURE_PREREQ") == (
        b"requirements for ADVANCE_AGRICULTURE\n"
    )
    assert staged.body_bytes("ADVANCE_AGRICULTURE_STATISTICS") == (
        b"statistics for ADVANCE_AGRICULTURE\n"
    )
    assert original_library.to_bytes() == original_model_bytes
    assert source_path.read_bytes() == original_bytes


@pytest.mark.parametrize(
    ("script_bytes", "templates", "error"),
    (
        (
            b"advance.ces\tPrereq\t\tfirst.glt\n"
            b"advance.ces\tStatText\t\tsecond.glt\n",
            {"first.glt": b"one", "second.glt": b"two"},
            "conflicting generated text",
        ),
        (
            b"advance.ces\tPrereq\tunsupported\tfirst.glt\n",
            {"first.glt": b"one"},
            "nonempty optional third cell",
        ),
        (
            b"advance.ces\tPrereq\tmissing.glt\n",
            {},
            "No such file or directory",
        ),
    ),
)
def test_gl_script_failures_leave_the_staged_library_unchanged(
    tmp_path: Path,
    script_bytes: bytes,
    templates: dict[str, bytes],
    error: str,
) -> None:
    project, _advance_file, source_path = _project_with_great_library(
        tmp_path,
        b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
        b"[ADVANCE_AGRICULTURE_STATISTICS]\nkeep\n[END]\n",
    )
    script_path = _write_gl_script(tmp_path / "scripts", script_bytes, templates)
    script = load_gl_script(script_path)
    original = project.great_library_file
    assert original is not None
    original_bytes = original.to_bytes()
    source_bytes = source_path.read_bytes()

    with pytest.raises((OSError, ValueError), match=error):
        execute_gl_script(project, script)

    assert original.to_bytes() == original_bytes
    assert source_path.read_bytes() == source_bytes


def test_gl_script_runs_through_real_tk_button_and_saves_copy(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
) -> None:
    try:
        root = tk.Tk()
        root.withdraw()
    except tk.TclError as error:
        pytest.skip(f"Tk initialization unavailable: {error}")
    try:
        project, _advance_file, source_path = _project_with_great_library(
            tmp_path,
            b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
            b"[ADVANCE_AGRICULTURE_STATISTICS]\nkeep\n[END]\n",
        )
        script_path = _write_gl_script(
            tmp_path / "scripts",
            b"advance.ces\tPrereq\tprereq.glt\n",
            {
                "prereq.glt": b"old template [.Name]",
                "edited.glt": b"scripted [.Name]",
            },
        )
        script = load_gl_script(script_path)
        original_bytes = source_path.read_bytes()
        window = EditorWindow(root)
        window.project_view = project
        window._display_gl_script(script)
        assert str(window.run_gl_script_button.cget("state")) == tk.NORMAL
        window.gl_script_source_text.delete("1.0", tk.END)
        window.gl_script_source_text.insert(
            "1.0", "advance.ces\tPrereq\tedited.glt\n"
        )
        root.update()
        window.run_gl_script_button.invoke()
        assert window.gl_script is not None
        assert window.gl_script.rows[0].cells[-1] == "edited.glt"
        assert window._generated_gl_file is not None
        assert window._generated_gl_file.body_bytes(
            "ADVANCE_AGRICULTURE_PREREQ"
        ) == b"scripted ADVANCE_AGRICULTURE\n"

        destination = tmp_path / "Great_Library-script-copy.txt"
        monkeypatch.setattr(
            "app.filedialog.asksaveasfilename", lambda **_kwargs: str(destination)
        )
        window.save_generated_gl_button.invoke()
        assert destination.read_bytes() == window._generated_gl_file.to_bytes()
        assert source_path.read_bytes() == original_bytes
    finally:
        root.destroy()


def test_visual_gl_generation_stages_and_saves_only_a_chosen_copy(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
) -> None:
    project, advance_file, source_path = _project_with_great_library(
        tmp_path,
        b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
        b"[ADVANCE_AGRICULTURE_STATISTICS]\nkeep\n[END]\n",
    )
    entry = advance_file.entries.item_by_name("ADVANCE_AGRICULTURE")
    entry_ordinal = tuple(advance_file.entries).index(entry)

    class Button:
        def __init__(self) -> None:
            self.state = "disabled"

        def configure(self, **values: str) -> None:
            self.state = values.get("state", self.state)

    class Preview:
        def configure(self, **_values: str) -> None:
            return None

    window = EditorWindow.__new__(EditorWindow)
    window._capture_undo = lambda: None
    window._push_undo = lambda *_args: None
    window.data_file = advance_file
    window.data_list = SimpleNamespace(
        selection=lambda: (f"entry-{entry_ordinal}",)
    )
    window.project_view = project
    window._generated_gl_file = None
    window.gl_template = GLTemplate.from_bytes(b"generated [.Name]", "fixture.glt")
    window.template_preview_text = SimpleNamespace()
    window.status = SimpleNamespace(set=lambda value: setattr(window, "status_text", value))
    window._replace_text = lambda _widget, value: setattr(window, "preview_text", value)
    window.save_preview_button = Button()
    window.save_generated_gl_button = Button()
    window.gl_target_text = SimpleNamespace(
        get=lambda: "Prereq  →  ADVANCE_AGRICULTURE_PREREQ"
    )
    window._gl_target_options = (
        ("Prereq", "ADVANCE_AGRICULTURE_PREREQ"),
        ("Vari", "ADVANCE_AGRICULTURE_STATISTICS"),
    )
    window.root = None
    destination = tmp_path / "Great_Library-copy.txt"
    monkeypatch.setattr(
        "app.filedialog.asksaveasfilename", lambda **_kwargs: str(destination)
    )
    original_source = source_path.read_bytes()

    EditorWindow.generate_selected_gl_field(window)

    assert window.save_generated_gl_button.state == "normal"
    staged = window._generated_gl_file
    assert staged is not None
    assert staged.body_bytes("ADVANCE_AGRICULTURE_PREREQ") == b"generated ADVANCE_AGRICULTURE\n"
    assert source_path.read_bytes() == original_source

    EditorWindow.save_generated_gl_copy(window)

    assert destination.read_bytes() == staged.to_bytes()
    assert source_path.read_bytes() == original_source

    monkeypatch.setattr(
        "app.filedialog.asksaveasfilename", lambda **_kwargs: str(source_path)
    )
    monkeypatch.setattr("app.messagebox.showerror", lambda *_args, **_kwargs: None)
    EditorWindow.save_generated_gl_copy(window)
    assert source_path.read_bytes() == original_source


def test_selected_gl_generation_stages_multiple_entries_atomically(
    tmp_path: Path,
) -> None:
    names = ("SELECTED_A", "SELECTED_B")
    icon_names = ("ICON_SELECTED_A", "ICON_SELECTED_B")
    keys = tuple(f"{name}_PREREQ" for name in names)
    library_bytes = b"".join(
        f"[{key}]\nold {name}\n[END]\n".encode("cp1252")
        for key, name in zip(keys, names, strict=True)
    )
    project, advance_file, source_path = _project_with_great_library(
        tmp_path, library_bytes
    )
    _icon_file, entries = _add_linked_advance_entries(
        project, advance_file, names, icon_names
    )
    base = project.great_library_file
    assert base is not None
    original = source_path.read_bytes()

    staged, changed = stage_selected_gl_entries(
        project,
        entries,
        GLTemplate.from_bytes(b"generated [.Name]", "selected.glt"),
        "Prereq",
    )

    assert changed == 2
    assert staged.body_bytes(keys[0]) == b"generated SELECTED_A\n"
    assert staged.body_bytes(keys[1]) == b"generated SELECTED_B\n"
    assert base.to_bytes() == library_bytes
    assert source_path.read_bytes() == original


@pytest.mark.parametrize(
    ("names", "icon_names", "library_keys", "template_bytes", "error"),
    (
        (
            ("CONFLICT_A", "CONFLICT_B"),
            ("ICON_SHARED", "ICON_SHARED"),
            ("CONFLICT_B_PREREQ",),
            b"generated [.Name]",
            "conflicting generated text",
        ),
    ),
)
def test_selected_gl_generation_failure_preserves_previous_staging(
    tmp_path: Path,
    names: tuple[str, ...],
    icon_names: tuple[str, ...],
    library_keys: tuple[str, ...],
    template_bytes: bytes,
    error: str,
) -> None:
    library_bytes = b"".join(
        f"[{key}]\nold\n[END]\n".encode("cp1252") for key in library_keys
    )
    project, advance_file, _source_path = _project_with_great_library(
        tmp_path, library_bytes
    )
    _icon_file, entries = _add_linked_advance_entries(
        project, advance_file, names, icon_names
    )
    base = project.great_library_file
    assert base is not None
    previous = stage_great_library_updates(base, {library_keys[0]: "prior"})
    previous_bytes = previous.to_bytes()

    with pytest.raises((ValueError, UnicodeEncodeError), match=error):
        stage_selected_gl_entries(
            project,
            entries,
            GLTemplate.from_bytes(template_bytes, "selected.glt"),
            "Prereq",
            base_library=previous,
        )

    assert previous.to_bytes() == previous_bytes
    assert base.to_bytes() == library_bytes


def test_selected_gl_generation_encoding_failure_preserves_staging(
    tmp_path: Path,
) -> None:
    library_bytes = b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
    project, advance_file, _source_path = _project_with_great_library(
        tmp_path, library_bytes
    )
    original = advance_file.entries.item_by_name("ADVANCE_AGRICULTURE")
    assert original is not None
    unencodable = replace(original, name="\u2603", source_lines=())
    advance_file.entries.sneaky_add(unencodable)
    base = project.great_library_file
    assert base is not None
    previous = stage_great_library_updates(base, {"ADVANCE_AGRICULTURE_PREREQ": "prior"})
    previous_bytes = previous.to_bytes()

    with pytest.raises(UnicodeEncodeError):
        stage_selected_gl_entries(
            project,
            (unencodable,),
            GLTemplate.from_bytes(b"[.Name]", "selected.glt"),
            "Prereq",
            base_library=previous,
        )

    assert previous.to_bytes() == previous_bytes
    assert base.to_bytes() == library_bytes


def test_visual_gl_generation_runs_through_real_tk_controls(
    tmp_path: Path, monkeypatch: pytest.MonkeyPatch
) -> None:
    try:
        root = tk.Tk()
        root.withdraw()
    except tk.TclError as error:
        pytest.skip(f"Tk initialization unavailable: {error}")
    try:
        project, advance_file, source_path = _project_with_great_library(
            tmp_path,
            b"[ADVANCE_AGRICULTURE_PREREQ]\nold\n[END]\n"
            b"[ADVANCE_AGRICULTURE_STATISTICS]\nkeep\n[END]\n"
            b"[SELECTED_B_PREREQ]\nold B\n[END]\n",
        )
        _icon_file, selected_entries = _add_linked_advance_entries(
            project, advance_file, ("SELECTED_B",), ("ICON_SELECTED_B",)
        )
        entry = advance_file.entries.item_by_name("ADVANCE_AGRICULTURE")
        ordinal = tuple(advance_file.entries).index(entry)
        selected_ordinal = tuple(advance_file.entries).index(selected_entries[0])
        window = EditorWindow(root)
        window.project_view = project
        window.document = SimpleNamespace(
            structure=advance_file.structure, fields=advance_file.fields
        )
        window._display_data(advance_file)
        window.data_list.selection_set(
            f"entry-{ordinal}", f"entry-{selected_ordinal}"
        )
        window.show_selected_entry()
        window._display_gl_template(
            GLTemplate.from_bytes(b"generated [.Name]", "fixture.glt")
        )
        assert str(window.generate_gl_button.cget("state")) == tk.NORMAL
        window.generate_gl_button.invoke()
        assert window._generated_gl_file is not None
        assert window._generated_gl_file.body_bytes(
            "ADVANCE_AGRICULTURE_PREREQ"
        ) == b"generated ADVANCE_AGRICULTURE\n"
        assert window._generated_gl_file.body_bytes(
            "SELECTED_B_PREREQ"
        ) == b"generated SELECTED_B\n"

        destination = tmp_path / "Great_Library-real-ui-copy.txt"
        monkeypatch.setattr(
            "app.filedialog.asksaveasfilename",
            lambda **_kwargs: str(destination),
        )
        original_source = source_path.read_bytes()
        window.save_generated_gl_button.invoke()
        assert window._generated_gl_file is not None
        assert destination.read_bytes() == window._generated_gl_file.to_bytes()
        assert source_path.read_bytes() == original_source
    finally:
        root.destroy()
