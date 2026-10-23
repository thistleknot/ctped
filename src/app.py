"""Stage | Mechanism | Tag | Requirements
-------|-----------|-----|-------------
LOAD | Read a `.ces` descriptor or `.ced` project with explicit roots | [mandatory] | R1-R3
GAMEFILE | Open a gamefile with bundled descriptors and reuse the project browser | [mandatory] | R78-R80
IMPORT_COMPAT | Report schema-inferred source fields as read-only and retain them during sibling edits | [mandatory] | R81
ROOTS | Normalize chooser paths against the process working directory | [mandatory] | R8,R26
PATH_CHECK | Check each project declaration's resolved data and optional structure paths | [opt] | R46
IMPORT | Load selected structured declarations and lazily resolve project-loop targets | [mandatory] | R4,R32-R34,R90
NESTED | Resolve child schemas beside a loaded descriptor or project root | [opt] | R9
DISPLAY | Show descriptor fields, a field-by-Entry matrix, and selected nested-value details | [mandatory] | R5,R82,R87-R88
CONTEXT_EDIT | Offer Edit value from right-click menus in both value grids using the validated editor | [mandatory] | R89
FORMULA_UI | Preview and apply restricted ECMAScript formulas to one field dimension | [mandatory] | R83-R85
RAW_TEXT | Display unparsed format-2 text and honor File editability | [mandatory] | R29
FORMAT0_VALUES | Show recognized numeric records as an editable table while retaining source text | [mandatory] | R91
CONFIG_VALUES | Open supported Gamefile settings files in a source-preserving scoped-value editor | [mandatory] | R92-R94
CONFIG_FORMULA | Preview/apply numeric formulas across selected settings using a project snapshot | [mandatory] | R95-R96
PREFERENCES | Load, display, and edit four unnamed `.prf` flags by ordinal | [mandatory] | R13-R15,R50
GL_SCRIPT | Load and display raw tab-separated mapping cells | [mandatory] | R18-R19
GL_SCRIPT_EDIT | Apply validated source edits and refresh the active mapping rows | [mandatory] | R71-R73
GL_SCRIPT_RUN | Execute `.gls` field/template mappings transactionally across project Entries | [mandatory] | R61-R67
GL_TEMPLATE | Open source and preview fields, conditions, loops, references, arithmetic, consequences, database names, and state | [mandatory] | R20-R25,R30-R36,R40-R41
GL_TEMPLATE_EDIT | Apply validated CP1252 template-source edits and refresh preview | [mandatory] | R68-R70
GL_OUTPUT | Save the successfully rendered selected Entry preview as CP1252 text | [mandatory] | R51
GL_TARGETS | Resolve linked icon fields common to all selected Entries | [mandatory] | R54-R56
GL_GENERATE | Render selected Entries and stage all linked blocks atomically | [mandatory] | R57-R59
GL_SAVE | Save the staged Great Library file to a chosen copy | [mandatory] | R60
ICON_PREVIEW | Render the separate unit-icon name template using its documented `%n` shortcut | [mandatory] | R52
GL_NAME | Lazily read the project-prefixed GL string table for `.GLName` preview | [contract] | R38
RAW_TEXT | Show format-0 data in an editable text view and save its bytes | [mandatory] | R27
EDITABLE | Expose the active File's editable state and apply it to its controls | [mandatory] | R28
EDIT | Select and edit eligible format-1/3 scalar values, including nested format-1 Entries | [mandatory] | R11-R12,R16,R37
RAW_NESTED_EDIT | Open a dedicated raw-block editor when a nested value has no child schema | [contract] | R86
EDIT_GENERATED | Edit default values on a newly generated format-1 Entry | [mandatory] | R44
REMOVE_ENTRY | Remove the selected format-1/3 Entry in memory and refresh the list | [mandatory] | R42
ADD_ENTRY | Add a defaulted serializable format-1/3 Entry in memory and refresh the list | [mandatory] | R43
MOVE_ENTRY | Move a selected format-1/3 Entry one row and refresh adjacent move controls | [mandatory] | R53
MASS_MODIFY | Apply a representation-appropriate batch edit from the active view's action area | [mandatory] | R47-R49,R98-R100,R101
GROUP_MODIFY | Apply per-group formulas to a selected structured field using Entry field values and referenced labels | [mandatory] | R102
SORT | Reorder displayed Entries by field comparison or declared prerequisites | [mandatory] | R74-R77
UNDO_REDO | Restore accepted edits in either direction with bounded document-local history | [mandatory] | R103-R108
CHANGE_REVIEW | Compare current serialization with loaded source in a read-only dialog | [mandatory] | R109-R111
SAVE | Write exact source copies, edited preference rows, or current data-file serialization | [mandatory] | R6,R10,R12,R15,R19,R22,R43-R44,R50
SERVE | Start the tkinter desktop window | [mandatory] | R7

R1. WHEN a descriptor is loaded, return its Structure and ordered Fields.
R2. WHEN a data path is loaded, parse it against the active Structure.
R3. WHEN a project is opened, require valid selected roots and a language token; clear the old document only after success.
R4. WHEN a project declaration is selected, import only that row.
R5. WHEN a load succeeds, show fields, entry names, raw field values, or project declarations.
R6. WHEN an unchanged descriptor or data file is saved, write original bytes.
R7. WHEN the module entry point runs, launch the visual application.
R8. WHEN project roots are supplied to the app service, resolve relative paths against the process working directory.
R9. WHEN a data file is loaded for a filesystem descriptor, use its directory as the nested structure root.
R10. WHEN a project copy is saved, write the exact original `.ced` bytes.
R11. WHEN a selected editable format-3 Entry has a scalar FieldInstance, a format-1 Entry has eligible scalar FieldInstances recursively within schema-bound nested Entries, or a nested raw string has a captured source span, enable the corresponding scalar or raw-block editor; otherwise disable it.
R12. WHEN a valid edit is accepted, show the new value and let Save write the source-preserving File serialization.
R13. WHEN a `.prf` file is opened, parse its first indent token and four Boolean rows without assigning names to the flags.
R14. WHEN preferences load succeeds, display four ordinal flags and the indent token.
R15. WHEN unchanged preferences are saved, write original bytes; WHEN a flag changes through the model, patch only that row.
R16. WHEN multiple scalar instances are eligible, show each value as a separate selectable field row; editing applies to the selected row.
R17. WHEN a project declaration import succeeds, preserve the loaded project context and registered File through display; opening a standalone descriptor clears that context.
R18. WHEN a `.gls` file is opened, display editable source and active rows with source-order raw cells, including empty cells.
R19. WHEN a `.gls` file is saved unchanged, write original bytes exactly; after edits apply, save the active script model bytes.
R20. WHEN a `.glt` file is opened, display its source text and retain exact bytes for copying.
R21. WHEN a data Entry is selected while a template is loaded, display direct-field substitutions, evaluate documented numeric arithmetic, and leave unsupported directives literal.
R22. WHEN an unmodified `.glt` is saved, write its original bytes to the chosen destination; applied edits are saved from the active template model.
R23. WHEN template source or preview is shown in a text widget, normalize line endings for display while retaining original bytes in the model.
R24. WHEN a conditional has direct-field string equality or Entry field-presence syntax, evaluate both branch bodies and display the selected branch; preserve unsupported conditions literally.
R25. WHEN a repeat names a field and body with an optional separator, render the body for each matching FieldInstance in order and join results between instances only; nested repeats use their current nested Entry.
R26. WHEN the project and directory choosers return relative paths, resolve them from the process working directory before importing the selected declaration.
R27. WHEN a format-0 File is displayed, show its full text in the data tab; WHEN uneditable, disable text changes; WHEN saved unchanged, return original bytes; WHEN edited, encode the text using the source encoding and line-ending convention.
R28. WHEN an editable File is displayed, show its editable state; WHEN the user changes that state, synchronize the File model and supported edit controls.
R29. WHEN a format-2 File is displayed, show decoded CP1252 source text without Entries; WHEN uneditable, disable text changes; WHEN edited and saved, encode CP1252 with CRLF; WHEN unchanged, save original bytes exactly.
R30. WHEN the selected Entry and loaded `.glt` contain a numeric direct-field arithmetic expression, display its left-to-right result in the preview.
R31. WHEN the selected Entry and loaded `.glt` contain counter directives, display the resulting text with counter state scoped to that render.
R32. WHEN a template requests `[*Structure.ces ...]` in a loaded project, resolve one exact case-sensitive project declaration, importing its File lazily and reusing it thereafter.
R33. WHEN a template preview has project context, supply the project-file resolver; WHEN no project declaration matches, retain the file-loop expression literally.
R34. WHEN project-file or reference resolution fails during preview, show the error in the preview and keep the editor responsive.
R35. WHEN resolving a raw `.ces` field reference, match project structure filenames case-insensitively as the existing FieldInstance resolver does.
R36. WHEN a `.glt` direct field uses dotted suffixes, preview fields through referenced or nested Entries; keep unresolved non-Entry paths literal.
R37. WHEN a selected format-1 Entry contains schema-bound nested Entries, show their source-spanned scalar values in the field table by nested path and save accepted edits through the source-preserving nested serializer.
R38. WHEN a template requests `.GLName` in project context, resolve the format-2 descriptor's strings path and project-prefixed table, then apply CTPEd's quoted-value extraction and last-row duplicate precedence; when the table is absent, preserve the directive, and when its key is absent, use the requested Entry name.
R40. WHEN a project-backed template renders `?Consequences` or `~Consequences`, derive ordered matching target Entries from its Structure cross-reference declarations and already registered project Files; skip declarations whose target File is not loaded and do not import Files for consequence lookup.
R41. WHEN a project-backed template renders `.DB`, resolve the current Entry's database name from its registered File Structure, including Entries reached through consequences; WHEN no project context exists, retain ordinary field lookup behavior.
R42. WHEN a selected Entry in an editable format-1/3 File is deleted, remove it by one-based ordinal, refresh rows and dependent preview, keep Save enabled, and defer persistence to Save; disable deletion for formats 0/2, uneditable Files, or no selection.
R43. WHEN an editable format-1/3 File is shown, allow the user to name a new Entry through `File.add_entry`; recursively build nested defaults from the selected structure root; show missing-schema or invalid-default errors; disable Add when uneditable; refresh rows and defer persistence until Save.
R46. WHEN Check project paths is activated, inspect every declaration against the selected roots without importing it; show per-row missing/unresolved status and exact paths; test only data paths for dummy declarations.
R44. WHEN a generated format-1 Entry is selected, allow editing its scalar default fields and serialize the updated generated block; parsed Entries still require captured source spans.
R47. WHEN any editable structured, numeric-text, settings, or direct-text data file is displayed, enable the shared Mass modify action; disable it when no editable data file is active.
R48. WHEN Mass modify is activated, let the user choose a declared field, set/concatenate/add/multiply operation, operand, optional numeric ties-to-even rounding, and all Entries or the currently selected Entries; require a nonempty selection when selected-only is chosen.
R49. WHEN a valid mass modification is applied, call `File.mass_modify`, refresh the selected Entry display, report the number of changed values, and leave persistence deferred to Save; on input or serialization error, show the error and retain the model's rollback behavior.
R50. WHEN preferences are loaded, display four ordinal Boolean controls initialized from the model; on a toggle, update only that ordinal through `Preferences.set_flag` and let Save write a copy while preserving the indent token and untouched source rows.
R51. WHEN a selected Entry renders successfully through the loaded `.glt`, enable Save rendered preview; write the exact rendered text encoded as CP1252 to the chosen `.txt` copy, preserving generated line endings; disable export when no successful selected-Entry render is current.
R52. WHEN a unit-icon name template or selected Entry changes, replace every literal `%n` in the icon template with the selected Entry's internal name; preserve all other text literally; show an empty preview when no Entry is selected.
R53. WHEN Move up or Move down is activated for a selected editable format-1/3 Entry, move that Entry one position in the in-memory File, refresh the list and selection, and defer persistence to Save; disable movement at list boundaries and for other formats or uneditable Files.
R54. WHEN selected Entries belong to loaded project Files with configured GL icon fields, resolve each field against its declared `.ces` File using a temporary FieldInstance; leave source values unchanged.
R55. WHEN the icon reference points to a declared project File, import or reuse exactly that File through the existing project resolver; do not guess a target filename.
R56. WHEN one or more Entries are selected, offer only linked field names present for every selected Entry whose keys identify unique closed Great Library blocks.
R57. WHEN selected Entries, a loaded `.glt`, and a common linked field are available, render each Entry with the existing project resolvers and stage each result in its linked Great Library key; reject conflicting results for a shared key.
R58. WHEN any selected Entry resolution, rendering, conflict check, or CP1252 encoding fails, leave all previously staged Great Library bodies unchanged and show the error.
R59. WHEN the user stages a generated field, enable saving a Great Library copy; reject the loaded source path as a destination.
R60. WHEN the user saves the generated Great Library copy, write the staged `GreatLibraryFile.to_bytes()` output to the explicitly chosen destination; do not save `uniticon.txt` as part of this operation.
R61. WHEN a script row has three cells, interpret them as structure filename, icon field name, and template filename; WHEN it has four cells, require the third cell to be empty and use the fourth as the template filename.
R62. WHEN a script row names a template, resolve the `.glt` file beside the `.gls` source; require both the structure and template cells to be basenames with the expected suffixes.
R63. WHEN script execution is requested, resolve each exact project structure declaration and process all Entries in each listed File, in script row and Entry order.
R64. WHEN a script field is processed, resolve only that linked icon field and render through the existing project resolvers; skip other icon fields.
R65. WHEN any row, file, template, render, target, or encoding fails, leave the caller's staged Great Library model unchanged.
R66. WHEN separate script rows target the same Great Library key, accept identical rendered text and reject conflicting text.
R67. WHEN the loaded `.gls` and project are available, enable Run script; successful execution enables the existing separate-copy save action.
R68. WHEN a loaded `.glt` source is edited and Apply is activated, encode CP1252 and require balanced brackets; on failure, retain the active template model and preview and show the error.
R69. WHEN template edits apply successfully, replace the active template model and refresh the selected Entry preview; preserve the source newline convention.
R70. WHEN a template copy is saved, write the currently applied template bytes to the chosen destination and leave the loaded source file unchanged; an unmodified template remains byte-identical.
R71. WHEN a loaded `.gls` source is edited and Apply is activated, encode CP1252 and require every active row to retain at least three tab-separated cells; on failure, retain the active script model and displayed rows and show the error.
R72. WHEN script edits apply successfully, replace the active script model, refresh the mapping-row list, preserve source line endings, and enable Run only when a project is loaded.
R73. WHEN a script copy is saved, write the currently applied script bytes to the chosen destination and leave the loaded source unchanged; an unmodified script remains byte-identical.
R74. WHEN Sort is activated, let the user choose a declared field, alphabetical or numeric comparison and In Reverse, then call `File.sort_entries` and refresh the Entries list; the direction follows the original's comparator as read from its assembly and is unconfirmed at runtime.
R75. WHEN the Sort dialog's prerequisite Go is activated, call `File.sort_by_prerequisites` with the Structure's declared defining field, resolving each prerequisite to the Entry it names; "Choose manually" asks the user to pick among qualifying Entries in a list dialog, "Choose currently highest" takes the first qualifying Entry; then refresh the Entries list.
R76. WHEN Sort opens, show a separate "Sort by prerequisite structure" frame with "Choose manually" selected, "Choose currently highest", and its own Go button; disable all three controls when the Structure declares no nonempty prerequisite field.
R77. WHEN either sort succeeds, close the Sort dialog and defer persistence to Save; IF sorting raises a supported model error, show "Cannot sort entries" and keep the dialog open; WHEN the manual chooser is cancelled or closed, preserve the model's skip-current-position behavior and any prior placements.
R78. WHEN Open gamefile is activated, choose a gamefile.txt, use the bundled default.ced/Structure when available (ask only when absent), derive the data root from its directory, and choose english when that localized directory exists, otherwise default.
R79. WHEN gamefile loading succeeds, reuse the project display/import/check/save workflow without importing all data files; cancellation or failure retains the current document, saving the generated project suggests a .ced destination, and the declaration list occupies the Project files tab with a visible scrollbar.
R80. WHEN building the window, expose Open gamefile beside Open project and separate opening controls from file actions so the new entry point is visible at the default window size.
R81. WHEN a Gamefile declaration contains fields absent from the bundled schema, retain them as read-only source occurrences and report that their field types are unknown; save edits only to supported declared fields while preserving those occurrences.
R82. WHEN a structured File is displayed, show Entries as rows and observed field paths as columns; render bound nested Entries as compact JSON in their parent cell and raw blocks as compact markers, exposing child paths in selected-Entry details. WHEN an editable direct or nested scalar column is selected, Mass modify defaults to that dimension and still allows all or selected Entries. WHEN an editable scalar cell is selected, Edit targets it without an ordinal prompt; inferred scalar values remain visible and read-only, while a raw nested block can be changed only through the dedicated raw-block editor.
R83. WHEN Mass modify is opened for an editable format-1/3 File, retain the existing set/append/add/multiply operations and offer Formula as an additional operation with visible help for its safe ECMAScript expression syntax; preserve all-Entries and selected-Entries scope.
R84. WHEN a formula is previewed or applied, expose `value` as the current scalar, `entry` as the current Entry, `entryAt(name, fieldPath)` for same-File values, and `ref(structureFile, entryName, fieldPath)` for project references; project references use the existing lazy declaration resolver and read-only values.
R85. WHEN Formula is selected, preview result counts and sample values without mutation; Apply computes the full selected batch before mutation, rejects non-finite or invalid results, delegates serialization and rollback to the File model, and saves only through the existing Save data file copy action.
R86. WHEN a selected nested value lacks a child schema and is stored as a raw string, show its complete brace block in a multiline editor; Apply validates one balanced block and source serialization before committing, while Cancel or invalid text leaves the model unchanged.
R87. WHEN the Entries matrix has keyboard focus and Ctrl+A is pressed, select every displayed Entry row; preserve that multi-selection for selected-only mass modification.
R88. WHEN the Entries matrix is displayed, keep visible vertical and horizontal scrollbars attached to the matrix so every Entry row and field column is reachable.
R89. WHEN a user right-clicks an Entry matrix field cell or selected-entry field row, show an Edit value context action enabled only for targets accepted by the existing editor, including source-spanned raw nested blocks; preserve an existing matrix multi-selection when the clicked Entry is already selected, and route edits through the shared validated editor.
R90. WHEN a project declaration is selected, enable Import only if it declares a structure; identify dummy declarations as non-importable and keep the existing data path visible without presenting a failed import action.
R91. WHEN a format-0 text file consists of unique named numeric records with optional `#` comments, show each record and value in a table, retain the source-text tab, and patch only the selected numeric token; WHEN the file does not match that record shape, retain the direct-text editor.
R92. WHEN one of `Const.txt`, `DiffDB.txt`, `map.txt`, `pollution.txt`, `gw.txt`, `ozone.txt`, `throne.txt`, `civilisation.txt`, or `endgame.txt` is selected from a Gamefile, load its data bytes even when the declaration has no `.ces` descriptor; do not register it as a structured `File`.
R93. WHEN a supported settings file is displayed, show repeated and nested setting occurrences with a stable file/block/key/value path, editable lexical scalar values, and the source text; keep structural count/header tokens read-only.
R94. WHEN a numeric, quoted string, bare identifier, or recognized presence flag is edited, validate the replacement and preserve unrelated source bytes; on unsupported syntax or invalid edits, retain the prior active source/model and report the error.
R95. WHEN Formula is selected for a supported settings file, preview then apply the restricted ECMAScript expression to selected numeric value occurrences; expose `value`, setting-path lookup, existing structured-entry lookups, and `Math`; reject text/flag targets.
R96. WHEN a settings formula batch runs, resolve every lookup from the pre-edit project snapshot; compute and validate the entire batch before mutation, and leave all active files unchanged if any lookup, expression, or serialization fails.
R97. WHEN edited settings are saved, use the existing separate-copy action; leave the loaded source unchanged and preserve comments, whitespace, line endings, and all untouched values.
R98. WHEN Mass modify is activated for format-1/3 data, retain field-dimension operations; WHEN activated for numeric format-0 or settings data, target all or selected numeric rows and preserve each source token; WHEN activated for arbitrary format-0/2 text, offer previewed literal find/replace.
R99. WHEN numeric text mass modification is applied, compute every selected scalar from the pre-edit values, validate the complete batch, patch source spans atomically, refresh the value table and text view, and defer persistence to Save data file.
R100. WHEN arbitrary text mass modification is applied, require a nonempty exact search string, preview occurrence count, replace all matching text in the active source only after confirmation, preserve encoding/newline model behavior, and defer persistence to Save data file.
R101. WHEN editable format-1/3 data is displayed, place Mass modify beside the Entry actions and hide the global toolbar copy; WHEN a writable scalar detail row is selected, make its exact field path the default mass-modify dimension; WHEN any other representation is active, expose Mass modify in the global toolbar and hide the Entry action copy.
R102. WHEN grouped modification is opened for structured data, list existing scalar values from a declared grouping field and matching Entry counts; WHEN its descriptor argument names a referenced `.ces`, show the referenced Entry's `Age` value through the project resolver while keeping unmatched keys visible; WHEN one or more finite numeric multipliers are entered, preview and atomically apply the generated conditional formula to all or selected Entries, leaving unmapped groups unchanged and saving only through Save data file.

R103. WHEN an accepted data or settings edit changes serialized bytes, the editor MUST retain its prior state as one Undo step.
R104. WHEN Undo is activated, restore one prior state without writing a file and make its former state available to Redo.
R105. WHEN Redo is activated, restore one undone state without writing a file.
R106. WHEN another document is opened, clear both history stacks; refreshing or saving the active document MUST retain them.
R107. IF an edit fails, is cancelled, or leaves serialized bytes unchanged, both history stacks MUST remain unchanged.
R108. WHILE either history stack exceeds UNDO_LIMIT (50), discard its oldest state; disable its action when the stack is empty or the active document is uneditable.
R109. WHEN Changes is activated for an active File or settings document, show a read-only unified diff between the original loaded bytes and current serialization.
R110. WHEN loaded and current bytes match, Changes MUST report no edits; WHEN only line endings differ, identify that distinction.
R111. WHEN Undo or Redo changes the active model, the modal review cannot display stale model data.

CLOSED
- History is session-local to the active data or settings document; Save remains a separate copy-save operation.
- Change review uses decoded lines for readability and reports byte differences limited to line endings or the final newline.
- Undo adapts the legacy CSV editor's bounded snapshot history to the incumbent File and ConfigDocument models; it does not import the Streamlit or pandas runtime. Preferences, GL templates/scripts, and generated GL output have separate document lifecycles and are outside this data-edit history.
- Change review compares source serialization with the active model using Python's standard library; it creates no temporary or exported files.
- Format-1/3 scalar values, including schema-bound nested format-1 values, can be edited by field path; raw unbound nested blocks remain read-only.
- UI controls use a simple layout because recovered form positions are absent.
- The Entries tab uses a field-by-Entry matrix with a nested-value detail table; bulk operations remain dimension-scoped and use the existing all/selected Entry controls.
- Project declarations are displayed without bulk-import; imports use explicit roots.
- The GL string table is loaded only when `.GLName` is rendered, from the declared `strings.ces` path and project prefix; it is not registered as a game-data File.
- Consequence lookup scans only project-registered Files referenced by the active Structure and resolves matching `.ces` FieldInstances against the active Entry's File.
- `.DB` comes from the active Entry's registered Structure `gl_database`; lookup does not import Files or infer database names from filenames.
- Preference flag meanings remain unknown; the UI labels them by ordinal.
- `.prf` flag controls remain ordinal because their meanings are not recovered; edits are applied only through `Preferences.set_flag` and saved to a copy.
- Rendered GL preview export is separate from linked-field generation; generation stages a linked Great Library block in memory and saves to a chosen copy, while native on-the-fly write and failure semantics remain open.
- `.gls` execution treats the first cell as `.ces`, the second as icon field, and the last as `.glt`; a four-cell row is executable only when its third cell is empty. This mapping is supported by every row in the shipped example and the manual's description; other fourth-cell semantics remain unknown.
- Applying template edits validates CP1252 encoding and bracket balance, but does not claim that every legacy directive is understood by the preview renderer.
- Applying `.gls` edits validates CP1252 encoding and the parser's minimum active-row shape; it does not assign meaning to unknown cells or validate whether mappings will execute successfully.
- Unit-icon name preview applies only the manual's `%n` substitution; it does not write `uniticon.txt` or update game data.
- `Entries.Remove` forwards its key to the backing Collection; the Python app exposes deletion only for the selected structured Entry and persists it through `File.to_bytes` when Save is used.
- The meaning of the optional third `.gls` cell in four-cell rows is unknown; display cells by ordinal rather than inventing a label.
- Nested edits require a child Structure root and a captured nested block span; raw unbound nested blocks remain read-only.
- Formula mass modification uses a restricted scalar-expression evaluator; it does not execute arbitrary JavaScript, assignments, loops, or user-defined functions. References read the current source values and never evaluate another pending formula, so formula dependency cycles cannot form within one operation.
- Settings files without `.ces` descriptors use an explicitly selected source-preserving settings parser; they are not fabricated as structured `File` models or automatically imported with unrelated dummy declarations.

Preconditions: Python has tkinter available; project import requires selected
structure/data roots and language. Format-0 and template editing require text
decodable and encodable as CP1252. Failures: file and parse errors are reported;
failed loads and invalid template edits leave the current view and active model
intact; unsupported field edits are rejected.
"""

from dataclasses import dataclass
from decimal import Decimal, InvalidOperation
from functools import cached_property
import json
import difflib
from pathlib import Path
import sys
import tkinter as tk
from tkinter import filedialog, messagebox, simpledialog, ttk
from typing import Callable, Optional, Sequence

from fields import Fields
from file import File
from entry import Entry
from field_instance import FieldInstance
from ctp_project import CTPProject, ProjectFileSpec, ProjectSpecialFile
from crossrefs import CrossRefs
from file_access import (
    FileInterface,
    FileReference,
    PathValue,
    read_file_bytes,
    write_file_bytes,
)
from structure import Structure
from gl_script import GLScript
from gl_template import GLTemplate
from gl_strings import GLStringTable
from preferences import Preferences
from great_library import GreatLibraryFile
from const_values import (
    SETTINGS_FILE_NAMES,
    ConfigDocument,
    ConfigValue,
    NumericTextRecord,
    apply_numeric_text_changes,
    config_value_label,
    parse_config_values,
    parse_numeric_text_records,
    replace_numeric_text_value,
)
from formula import evaluate_settings_formula


UNDO_LIMIT = 50


@dataclass(frozen=True)
class LoadedDescriptor:
    """Hold the parsed descriptor and its ordered fields for one view.

    Require: structure and fields were built from the same descriptor.
    Guarantee: expose a consistent read-only view model.
    Maintain: preserve source bytes through the Structure instance.
    Assert: field collection contains only parsed field definitions.
    """

    structure: Structure
    fields: Fields


@dataclass(frozen=True)
class LoadedProject:
    """Hold project declarations, explicit roots, and lazy auxiliary file caches.

    Require: project and roots were selected by the caller.
    Guarantee: expose stable project paths and cache resolved GL tables/files.
    Maintain: do not import declarations or read the GL table until requested.
    Assert: structure and data roots are directories.
    """

    project: CTPProject
    project_directory: Path
    structure_root: Path
    data_root: Path
    language: str

    @cached_property
    def great_library_file(self) -> GreatLibraryFile | None:
        """Load the project's unique Great Library data file on first use.

        Require: roots were validated by ``load_project``.
        Guarantee: return the parsed project Great Library file, or None if
        the project does not declare one.
        Maintain: never register the auxiliary text file as a game-data File.
        Assert: a returned model points to the resolved special-file path.
        """
        matches = tuple(
            special
            for special in self.project.special_files
            if Path(special.file_name).name.casefold().endswith("great_library.txt")
        )
        if not matches:
            return None
        if len(matches) != 1:
            raise ValueError("project has multiple Great_Library.txt declarations")
        path = matches[0].resolve_path(
            self.project_directory,
            self.structure_root,
            self.data_root,
            self.language,
            self.project.source,
        )
        if not path.is_file():
            return None
        result = GreatLibraryFile.from_file(path)
        assert Path(result.source) == path
        return result

    @cached_property
    def gl_string_table(self) -> GLStringTable | None:
        """Load and cache the project-prefixed GL table on first request.

        Require: structure and data roots were validated by ``load_project``.
        Guarantee: return the table named by format-2 structure metadata, or
        None when no matching table exists.
        Maintain: never register this auxiliary table as a game-data File.
        Assert: cached results are stable for this project view.
        """
        return _load_project_gl_string_table(self)


@dataclass(frozen=True)
class ProjectPathCheck:
    """Retain resolved paths and existence observations for one declaration.

    Require: paths were resolved from one loaded project and its selected roots.
    Guarantee: expose missing paths separately from resolution failures.
    Maintain: do not import data Files or alter project state.
    Assert: dummy declarations have no structure path or structure result.
    """

    spec: ProjectFileSpec
    data_path: Path | None
    data_exists: bool | None
    data_error: str | None
    structure_path: Path | None
    structure_exists: bool | None
    structure_error: str | None


def _load_project_gl_string_table(document: LoadedProject) -> GLStringTable | None:
    """Resolve one project-prefixed GL table using its format-2 descriptor.

    Require: ``document`` has validated roots and parsed project declarations.
    Guarantee: return the configured table, or None if the format-2 declaration
    or project-prefixed table is absent.
    Maintain: do not import/register game data or choose among table candidates.
    Assert: a returned table uses markers declared by ``strings.ces``.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    specs = tuple(
        spec
        for spec in document.project.file_specs
        if spec.structure_path is not None
        and spec.structure_name.casefold() == "strings.ces"
    )
    if not specs:
        return None
    if len(specs) != 1:
        raise ValueError("project has multiple strings.ces declarations")
    spec = specs[0]
    structure_path = spec.resolve_structure_path(
        document.project_directory,
        document.structure_root,
        document.data_root,
        document.language,
    )
    if structure_path is None:
        return None
    structure = Structure.from_file(structure_path)
    if (
        structure.format != 2
        or not structure.strings_file_name
        or not structure.strings_file_path
        or structure.strings_comment_char is None
        or structure.strings_delimiter_char is None
    ):
        return None
    file_name = f"{document.project.prefix}{structure.strings_file_name}"
    if Path(file_name).name != file_name:
        raise ValueError("project GL string filename must not contain a directory")
    configured_path = ProjectSpecialFile(
        file_name,
        structure.strings_file_path,
        structure.source,
        structure.data_start_line + 1,
    ).resolve_path(
        document.project_directory,
        document.structure_root,
        document.data_root,
        document.language,
        structure.source,
    )
    if not configured_path.is_file():
        return None
    result = GLStringTable.from_bytes(
        read_file_bytes(configured_path),
        str(configured_path),
        structure.strings_comment_char,
        structure.strings_delimiter_char,
    )
    assert result.source == str(configured_path)
    return result


def resolve_project_gl_name(document: LoadedProject, key: str) -> str | None:
    """Resolve one Entry name through the project's cached GL string table.

    Require: ``document`` is a LoadedProject and ``key`` is text.
    Guarantee: return the localized name or the key fallback when the table
    exists; return None when the table is absent.
    Maintain: use the recovered case-insensitive, last-row native lookup.
    Assert: returned names come from the declared project table or key fallback.
    """
    table = document.gl_string_table
    return None if table is None else (table.native_name_for(key) or key)


def load_project(
    path: PathValue,
    structure_root: PathValue,
    data_root: PathValue,
    language: str,
) -> LoadedProject:
    """Load project declarations with explicit file roots.

    Require: the project file and both selected roots exist.
    Guarantee: return declarations without importing game data and absolute roots.
    Maintain: preserve project source bytes in its CTPProject model.
    Assert: selected roots name directories.
    """
    project_path = Path(path).resolve()
    structure_directory = Path(structure_root).resolve()
    data_directory = Path(data_root).resolve()
    if not structure_directory.is_dir() or not data_directory.is_dir():
        raise NotADirectoryError("structure and data roots must be directories")
    if not isinstance(language, str) or not language.strip():
        raise ValueError("language token must be nonempty")
    result = LoadedProject(
        CTPProject.from_file(project_path),
        project_path.parent,
        structure_directory,
        data_directory,
        language,
    )
    assert result.project.original_bytes
    return result


def load_gamefile(
    path: PathValue,
    template_path: PathValue,
    structure_root: PathValue,
    language: str | None = None,
) -> LoadedProject:
    """Load gamefile declarations with the supplied default descriptors.

    Require: readable gamefile/template and an existing structure directory.
    Guarantee: infer conventional data root and language without importing data.
    Maintain: preserve input bytes and reuse project loading validation.
    Assert: project directory is the selected gamefile's directory.
    """
    gamefile = Path(path).resolve()
    conventional = gamefile.parent.name.casefold() == "gamedata" and gamefile.parent.parent.name.casefold() == "default"
    data_root = gamefile.parent.parent.parent if conventional else gamefile.parent
    if language is None:
        language = "english" if (data_root / "english" / "gamedata").is_dir() else "default"
    template = load_project(template_path, structure_root, data_root, language)
    return LoadedProject(
        CTPProject.from_gamefile(gamefile, template.project),
        gamefile.parent, template.structure_root, template.data_root, template.language,
    )


def check_project_paths(document: LoadedProject) -> tuple[ProjectPathCheck, ...]:
    """Check each declared data path and optional structure path without import.

    Require: ``document`` has explicit, validated project roots and language.
    Guarantee: return one ordered result per declaration with resolved paths,
        file-presence observations, and contextual resolution errors.
    Maintain: do not register Files, read file contents, or mutate the project.
    Assert: every dummy declaration has no structure check.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    results: list[ProjectPathCheck] = []
    for spec in document.project.file_specs:
        data_path: Path | None = None
        data_exists: bool | None = None
        data_error: str | None = None
        try:
            data_path = spec.resolve_data_path(
                document.project_directory,
                document.structure_root,
                document.data_root,
                document.language,
            )
            data_exists = data_path.is_file()
        except (OSError, ValueError) as error:
            data_error = str(error)
        structure_path: Path | None = None
        structure_exists: bool | None = None
        structure_error: str | None = None
        if spec.has_structure:
            try:
                structure_path = spec.resolve_structure_path(
                    document.project_directory,
                    document.structure_root,
                    document.data_root,
                    document.language,
                )
                assert structure_path is not None
                structure_exists = structure_path.is_file()
            except (OSError, ValueError) as error:
                structure_error = str(error)
        results.append(
            ProjectPathCheck(
                spec,
                data_path,
                data_exists,
                data_error,
                structure_path,
                structure_exists,
                structure_error,
            )
        )
    result = tuple(results)
    assert len(result) == len(document.project.file_specs)
    assert all(
        check.spec.has_structure or check.structure_exists is None
        for check in result
    )
    return result


def import_project_declaration(
    document: LoadedProject, spec: ProjectFileSpec
) -> tuple[LoadedDescriptor, File]:
    """Import one project declaration for display in the inspector.

    Require: document roots were explicitly selected and spec belongs to it.
    Guarantee: return a descriptor view and its parsed File model.
    Maintain: only the selected declaration is imported.
    Assert: both models share the same Structure object.
    """
    data_file = document.project.import_file_spec(
        spec,
        document.project_directory,
        document.structure_root,
        document.data_root,
        document.language,
    )
    descriptor = LoadedDescriptor(data_file.structure, data_file.fields)
    assert descriptor.structure is data_file.structure
    return descriptor, data_file


def resolve_project_structure_file(
    document: LoadedProject,
    structure_file_name: str,
    case_sensitive: bool = True,
) -> File | None:
    """Resolve and lazily import one project File by structure filename.

    Require: ``document`` has explicit project roots and ``structure_file_name``
    is a `.ces` filename; ``case_sensitive`` selects loop or reference matching.
    Guarantee: return the uniquely declared File, importing it only when absent
    from the project's registered Files; return None when no declaration matches.
    Maintain: use the selected project roots, preserve declaration order, and
    reuse an already imported File instead of registering a duplicate; exact
    matching is the default for project loops and case-folding serves references.
    Assert: a returned File's resolved Structure path matches its declaration.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(structure_file_name, str) or not structure_file_name:
        raise ValueError("structure_file_name must be nonempty text")
    if not isinstance(case_sensitive, bool):
        raise TypeError("case_sensitive must be a bool")
    suffix = Path(structure_file_name).suffix
    valid_suffix = suffix == ".ces" if case_sensitive else suffix.casefold() == ".ces"
    if Path(structure_file_name).name != structure_file_name or not valid_suffix:
        raise ValueError("structure_file_name must be a .ces filename")
    matches = tuple(
        spec
        for spec in document.project.file_specs
        if spec.structure_path is not None
        and (
            spec.structure_name == structure_file_name
            if case_sensitive
            else spec.structure_name.casefold() == structure_file_name.casefold()
        )
    )
    if not matches:
        return None
    if len(matches) != 1:
        raise ValueError(
            f"project has multiple declarations for structure {structure_file_name}"
        )
    spec = matches[0]
    structure_path = spec.resolve_structure_path(
        document.project_directory,
        document.structure_root,
        document.data_root,
        document.language,
    )
    assert structure_path is not None
    resolved_path = structure_path.resolve()
    loaded = tuple(
        value
        for value in document.project.files
        if Path(value.structure.source).resolve() == resolved_path
    )
    if len(loaded) > 1:
        raise ValueError(
            f"project has multiple loaded Files for structure {structure_file_name}"
        )
    if loaded:
        result = loaded[0]
    else:
        result = document.project.import_file_spec(
            spec,
            document.project_directory,
            document.structure_root,
            document.data_root,
            document.language,
        )
    assert Path(result.structure.source).resolve() == resolved_path
    return result


def resolve_project_gl_targets(
    document: LoadedProject,
    entry: Entry,
    great_library: GreatLibraryFile | None = None,
) -> tuple[tuple[str, str], ...]:
    """Find linked icon fields whose keys identify editable GL blocks.

    Require: ``entry`` belongs to one registered project File and the project
    declares its selected roots.
    Guarantee: return ordered ``(icon field name, Great Library key)`` pairs
    only for unique closed blocks in the project's Great Library file.
    Maintain: resolve icon references through project declarations and cloned
    FieldInstances, leaving source values and the registry unchanged on failure.
    Assert: every returned key identifies exactly one closed block.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(entry, Entry):
        raise TypeError("entry must be an Entry")
    great_library = great_library or document.great_library_file
    if great_library is None:
        return ()
    source_file = _registered_file_for_entry(document, entry)
    icon_field_name = source_file.structure.gl_icon_field
    if not icon_field_name:
        return ()
    icon_field = source_file.fields.item(icon_field_name)
    source_instance = entry.field_instances.item_by_field(icon_field)
    if source_instance is None or len(icon_field.arguments) != 1:
        return ()
    argument_type = icon_field.arguments[0].argument_type
    if Path(argument_type.replace("\\", "/")).suffix.casefold() != ".ces":
        return ()
    icon_file = resolve_project_structure_file(
        document, Path(argument_type.replace("\\", "/")).name,
        case_sensitive=False,
    )
    if icon_file is None:
        return ()
    icon_entry = FieldInstance(
        source_instance.field, source_instance.value
    ).value_to_object((icon_file,))
    if not isinstance(icon_entry, Entry):
        return ()
    targets: list[tuple[str, str]] = []
    for icon_instance in icon_entry.field_instances:
        key = icon_instance.value_as_string
        if len(key) >= 2 and key.startswith('"') and key.endswith('"'):
            key = key[1:-1].replace('""', '"')
        blocks = tuple(block for block in great_library.blocks if block.key == key)
        if len(blocks) == 1 and blocks[0].closed:
            targets.append((icon_instance.field.name, key))
    assert all(
        sum(block.key == key and block.closed for block in great_library.blocks) == 1
        for _, key in targets
    )
    return tuple(targets)


def resolve_project_consequences(
    document: LoadedProject, entry: Entry
) -> tuple[Entry, ...]:
    """Find registered project Entries that reference the active Entry.

    Require: ``entry`` belongs to exactly one File already registered in the
    project's Files collection.
    Guarantee: return matching target Entries in cross-reference declaration
    order and then target File Entry order.
    Maintain: inspect only registered Files, skip unloaded targets and dotted
    target fields, and resolve raw references without mutating source values.
    Assert: every returned Entry belongs to a registered target File.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(entry, Entry):
        raise TypeError("entry must be an Entry")
    active_file = _registered_file_for_entry(document, entry)
    active_structure_name = Path(active_file.structure.source).name.casefold()
    results: list[Entry] = []
    for reference in CrossRefs.from_structure(active_file.structure):
        if "." in reference.target_field_name:
            continue
        target_name = Path(reference.target_file_name.replace("\\", "/")).name.casefold()
        matching_files = tuple(
            file_model
            for file_model in document.project.files
            if Path(file_model.structure.source).name.casefold() == target_name
        )
        if not matching_files:
            continue
        if len(matching_files) > 1:
            raise ValueError(f"multiple registered Files match {reference.target_file_name}")
        target_file = matching_files[0]
        for target_entry in target_file.entries:
            matches_entry = False
            for instance in target_entry.field_instances:
                if instance.field.name != reference.target_field_name:
                    continue
                if len(instance.field.arguments) != 1:
                    continue
                argument_type = instance.field.arguments[0].argument_type.replace("\\", "/")
                if Path(argument_type).name.casefold() != active_structure_name:
                    continue
                resolved = FieldInstance(instance.field, instance.value).value_to_object(
                    (active_file,)
                )
                if resolved is entry:
                    matches_entry = True
                    break
            if matches_entry:
                results.append(target_entry)
    assert all(
        any(candidate is result for file_model in document.project.files for candidate in file_model.entries)
        for result in results
    )
    return tuple(results)


def _registered_file_for_entry(document: LoadedProject, entry: Entry) -> File:
    """Return the unique project File containing an Entry by identity.

    Require: project context and a parsed Entry are supplied.
    Guarantee: return the registered File that owns the Entry.
    Maintain: inspect only the existing registry and preserve its contents.
    Assert: exactly one registered File owns the Entry.
    """
    active_files = tuple(
        file_model
        for file_model in document.project.files
        if any(candidate is entry for candidate in file_model.entries)
    )
    if len(active_files) != 1:
        condition = "not registered" if not active_files else "registered more than once"
        raise ValueError(f"active Entry is {condition} in the project")
    return active_files[0]


def resolve_project_formula_reference(
    document: LoadedProject,
    structure_file: str,
    entry_name: str,
    field_path: str,
) -> object:
    """Resolve one formula field through the project's declared File mapping.

    Require: ``document`` has validated roots; target identifiers are text.
    Guarantee: return one declared scalar source value from the unique target.
    Maintain: lazily import through the existing project resolver and never
    modify the target File.
    Assert: the path identifies exactly one non-inferred scalar FieldInstance.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    target_file = resolve_project_structure_file(
        document, structure_file, case_sensitive=False
    )
    if target_file is None:
        raise ValueError(f"project has no structure {structure_file!r}")
    matching_entries = tuple(
        entry
        for entry in target_file.entries
        if entry.name.casefold() == entry_name.casefold()
    )
    if len(matching_entries) != 1:
        condition = "missing" if not matching_entries else "ambiguous"
        raise ValueError(
            f"Entry {entry_name!r} in {structure_file!r} is {condition}"
        )
    matches = tuple(
        instance
        for path, instance, _ in matching_entries[0].field_instances_with_paths()
        if path.casefold() == field_path.casefold()
        and not instance.field.inferred
        and isinstance(instance.value, str)
    )
    if len(matches) != 1:
        condition = "missing or unsupported" if not matches else "ambiguous"
        raise ValueError(
            f"field path {field_path!r} in {entry_name!r} is {condition}"
        )
    return matches[0].value


def resolve_project_database_name(
    document: LoadedProject, entry: Entry
) -> str | None:
    """Return an Entry's declared Great Library database name.

    Require: ``entry`` belongs to exactly one registered project File.
    Guarantee: return that File Structure's GL database value, including None.
    Maintain: do not import Files or infer names from filenames.
    Assert: the owning File comes from the current project registry.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(entry, Entry):
        raise TypeError("entry must be an Entry")
    result = _registered_file_for_entry(document, entry).structure.gl_database
    assert result is None or isinstance(result, str)
    return result


def render_project_template(
    document: LoadedProject | None, template: GLTemplate, entry: Entry
) -> str:
    """Render one template with the resolvers available in project context.

    Require: ``template`` is parsed and ``entry`` belongs to a parsed File.
    Guarantee: return rendered text using project loops, references, GL names,
    consequences, and database metadata when ``document`` is supplied.
    Maintain: leave the template, Entry, and raw reference FieldInstances unchanged.
    Assert: renderer output is text.
    """
    if not isinstance(template, GLTemplate):
        raise TypeError("template must be a GLTemplate")
    if not isinstance(entry, Entry):
        raise TypeError("entry must be an Entry")
    file_resolver = (
        None
        if document is None
        else lambda name: resolve_project_structure_file(document, name)
    )
    reference_resolver = (
        None
        if document is None
        else lambda name: resolve_project_structure_file(
            document, name, case_sensitive=False
        )
    )
    gl_name_resolver = (
        None if document is None else lambda name: resolve_project_gl_name(document, name)
    )
    consequences_resolver = (
        None
        if document is None
        else lambda active_entry: resolve_project_consequences(
            document, active_entry
        )
    )
    db_resolver = (
        None
        if document is None
        else lambda active_entry: resolve_project_database_name(
            document, active_entry
        )
    )
    result = template.render(
        entry,
        file_resolver=file_resolver,
        reference_resolver=reference_resolver,
        gl_name_resolver=gl_name_resolver,
        consequences_resolver=consequences_resolver,
        db_resolver=db_resolver,
    )
    assert isinstance(result, str)
    return result


def stage_great_library_updates(
    library: GreatLibraryFile, rendered_by_key: dict[str, str]
) -> GreatLibraryFile:
    """Stage a validated set of rendered bodies in a detached library model.

    Require: ``library`` is parsed and each mapping names a unique closed key.
    Guarantee: return a clone containing every CP1252-encodable replacement.
    Maintain: leave the caller's library and its staged bodies unchanged on failure.
    Assert: serialized output retains every source span outside replaced bodies.
    """
    if not isinstance(library, GreatLibraryFile):
        raise TypeError("library must be a GreatLibraryFile")
    if not isinstance(rendered_by_key, dict) or not rendered_by_key:
        raise ValueError("at least one Great Library update is required")
    staged = GreatLibraryFile.from_bytes(library.to_bytes(), library.source)
    for key, rendered in rendered_by_key.items():
        if not isinstance(key, str) or not isinstance(rendered, str):
            raise TypeError("Great Library updates must map string keys to text")
        staged.replace_entry(key, rendered)
    assert isinstance(staged, GreatLibraryFile)
    return staged


def stage_selected_gl_entries(
    document: LoadedProject,
    entries: Sequence[Entry],
    template: GLTemplate,
    field_name: str,
    base_library: GreatLibraryFile | None = None,
) -> tuple[GreatLibraryFile, int]:
    """Render one common linked field for selected Entries as one transaction.

    Require: ``entries`` is nonempty, project-registered, and ``field_name`` is
    available for every Entry; a parsed template and Great Library exist.
    Guarantee: return a cloned library and distinct staged-key count.
    Maintain: preserve all prior staged content when lookup, render, duplicate
    target, or CP1252 encoding validation fails.
    Assert: every repeated target key has identical generated text.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(entries, Sequence) or isinstance(entries, (str, bytes)):
        raise TypeError("entries must be a sequence of Entry values")
    selected = tuple(entries)
    if not selected or not all(isinstance(entry, Entry) for entry in selected):
        raise ValueError("at least one Entry must be selected")
    if len({id(entry) for entry in selected}) != len(selected):
        raise ValueError("selected Entries must be unique")
    if not isinstance(template, GLTemplate):
        raise TypeError("template must be a GLTemplate")
    if not isinstance(field_name, str) or not field_name:
        raise ValueError("field_name must be nonempty text")
    library = base_library or document.great_library_file
    if library is None:
        raise ValueError("project Great_Library.txt is unavailable")
    if not isinstance(library, GreatLibraryFile):
        raise TypeError("base_library must be a GreatLibraryFile or None")

    rendered_by_key: dict[str, str] = {}
    for entry in selected:
        matches = tuple(
            key
            for name, key in resolve_project_gl_targets(document, entry, library)
            if name.casefold() == field_name.casefold()
        )
        if len(matches) != 1:
            raise ValueError(
                f"Entry {entry.name} has no unique linked key for field {field_name}"
            )
        key = matches[0]
        rendered = render_project_template(document, template, entry)
        rendered.encode("cp1252")
        previous = rendered_by_key.get(key)
        if previous is not None and previous != rendered:
            raise ValueError(
                f"conflicting generated text for Great Library key {key}"
            )
        rendered_by_key[key] = rendered
    staged = stage_great_library_updates(library, rendered_by_key)
    assert len(rendered_by_key) > 0
    return staged, len(rendered_by_key)


def execute_gl_script(
    document: LoadedProject,
    script: GLScript,
    base_library: GreatLibraryFile | None = None,
) -> tuple[GreatLibraryFile, int]:
    """Render every requested script mapping and stage its GL bodies atomically.

    Require: project roots, a parsed script, and a project Great Library file.
    Guarantee: return a cloned GreatLibraryFile and the number of distinct
    staged keys after processing every Entry in each listed project File.
    Maintain: leave the supplied or project-cached GL model unchanged on every
    row, resolver, render, conflict, or encoding failure.
    Assert: every staged key is a unique closed block and all duplicate outputs
    for that key agree exactly.
    """
    if not isinstance(document, LoadedProject):
        raise TypeError("document must be a LoadedProject")
    if not isinstance(script, GLScript):
        raise TypeError("script must be a GLScript")
    library = base_library or document.great_library_file
    if library is not None and not isinstance(library, GreatLibraryFile):
        raise TypeError("base_library must be a GreatLibraryFile or None")
    if library is None:
        raise ValueError("project Great_Library.txt is unavailable")
    template_directory = Path(script.source).parent
    templates: dict[Path, GLTemplate] = {}
    files: dict[str, File] = {}
    rendered_by_key: dict[str, str] = {}
    for row in script.rows:
        cells = row.cells
        if len(cells) not in {3, 4}:
            raise ValueError(
                f"{script.source}:{row.line_number}: expected three cells or four with an empty third cell"
            )
        if len(cells) == 4 and cells[2] != "":
            raise ValueError(
                f"{script.source}:{row.line_number}: nonempty optional third cell is unsupported"
            )
        structure_name, field_name, template_name = cells[0], cells[1], cells[-1]
        if (
            Path(structure_name).name != structure_name
            or Path(structure_name).suffix != ".ces"
        ):
            raise ValueError(
                f"{script.source}:{row.line_number}: structure cell must be a .ces basename"
            )
        if not field_name:
            raise ValueError(f"{script.source}:{row.line_number}: field cell is empty")
        if Path(template_name).name != template_name or Path(template_name).suffix.casefold() != ".glt":
            raise ValueError(
                f"{script.source}:{row.line_number}: template cell must be a .glt basename"
            )
        structure_key = structure_name.casefold()
        file_model = files.get(structure_key)
        if file_model is None:
            file_model = resolve_project_structure_file(document, structure_name)
            if file_model is None:
                raise ValueError(
                    f"{script.source}:{row.line_number}: project structure is not declared: {structure_name}"
                )
            files[structure_key] = file_model
        entries = tuple(file_model.entries)
        template_path = (template_directory / template_name).resolve()
        template = templates.get(template_path)
        if template is None:
            template = load_gl_template(template_path)
            templates[template_path] = template
        for entry in entries:
            matches = tuple(
                key
                for name, key in resolve_project_gl_targets(document, entry, library)
                if name.casefold() == field_name.casefold()
            )
            if len(matches) != 1:
                raise ValueError(
                    f"{script.source}:{row.line_number}: Entry {entry.name} has no unique linked key for field {field_name}"
                )
            key = matches[0]
            rendered = render_project_template(document, template, entry)
            previous = rendered_by_key.get(key)
            if previous is not None and previous != rendered:
                raise ValueError(
                    f"{script.source}:{row.line_number}: conflicting generated text for Great Library key {key}"
                )
            rendered_by_key[key] = rendered
    if not rendered_by_key:
        raise ValueError("GL script generated no linked Great Library fields")

    staged = stage_great_library_updates(library, rendered_by_key)
    assert len(rendered_by_key) > 0
    return staged, len(rendered_by_key)


def load_descriptor(path: PathValue) -> LoadedDescriptor:
    """Load a descriptor and parse its field definitions.

    Require: ``path`` names a readable `.ces` file.
    Guarantee: return parsed structure metadata and fields in source order.
    Maintain: source bytes remain available unchanged for saving.
    Assert: the field collection derives from the returned structure.
    """
    structure = Structure.from_file(path)
    fields = Fields.from_structure(structure)
    result = LoadedDescriptor(structure, fields)
    assert result.fields is fields
    return result


def save_descriptor_copy(document: LoadedDescriptor, path: PathValue) -> None:
    """Save an unchanged descriptor copy at the selected destination.

    Require: ``document`` was produced by ``load_descriptor`` and the target's
    parent directory exists.
    Guarantee: write source bytes without decoding or normalization.
    Maintain: do not modify the in-memory descriptor.
    Assert: the saved byte count matches the original source length.
    """
    content = document.structure.to_bytes()
    write_file_bytes(path, content)


def save_project_copy(document: LoadedProject, path: PathValue) -> None:
    """Save an unchanged `.ced` project copy byte-for-byte.

    Require: ``document`` was produced by ``load_project`` and the target's
    parent directory exists.
    Guarantee: write the project's original bytes without path rewriting.
    Maintain: do not modify project declarations or selected roots.
    Assert: the saved byte count matches the source project length.
    """
    content = document.project.to_bytes()
    write_file_bytes(path, content)


def load_data_file(document: LoadedDescriptor, path: PathValue) -> File:
    """Parse a selected data file with the active descriptor.

    Require: ``document`` contains its parsed Structure and ``path`` is readable.
        Guarantee: return a File with schema-bound entries and child Entries
        when descriptor files are available beside the active Structure.
        Maintain: keep source bytes authoritative and bind a FileReference to path.
    Assert: returned File uses the active document's Structure.
    """
    data_path = Path(path)
    data_source = FileReference(
        FileInterface(data_path.parent), data_path.name, data_path.parent
    )
    result = File.from_bytes(
        read_file_bytes(data_path),
        document.structure,
        data_source=data_source,
        source=str(data_path),
        substructure_root=(
            Path(document.structure.source).parent
            if Path(document.structure.source).is_file()
            else None
        ),
    )
    assert result.structure is document.structure
    return result


def save_data_copy(data_file: File, path: PathValue) -> None:
    """Save original or supported edited bytes for an imported data file.

    Require: ``data_file`` was parsed by this module and target parent exists.
    Guarantee: write the File model's supported serialization.
    Maintain: reject edits the current writer cannot represent.
    Assert: the write count matches the serialized byte length.
    """
    content = data_file.to_bytes()
    write_file_bytes(path, content)


def load_preferences(path: PathValue) -> Preferences:
    """Load a supported `.prf` file while preserving its source bytes."""
    return Preferences.from_file(path)


def save_preferences_copy(preferences: Preferences, path: PathValue) -> None:
    """Save preference bytes to a copy at the chosen path.

    Require: ``preferences`` is a parsed Preferences model and ``path`` is writable.
    Guarantee: write ``preferences.to_bytes()`` without changing its source file.
    Maintain: preserve untouched source rows and line endings as the model defines.
    Assert: the serialized content is bytes before writing.
    """
    content = preferences.to_bytes()
    assert isinstance(content, bytes)
    write_file_bytes(path, content)


def load_gl_script(path: PathValue) -> GLScript:
    """Load active mapping rows from one `.gls` template script."""
    return GLScript.from_file(path)


def save_gl_script_copy(script: GLScript, path: PathValue) -> None:
    """Save the `.gls` script's original bytes exactly."""
    content = script.to_bytes()
    write_file_bytes(path, content)
    assert len(content) == len(script.original_bytes)


def load_gl_template(path: PathValue) -> GLTemplate:
    """Load one balanced `.glt` source while preserving exact bytes."""
    return GLTemplate.from_file(path)


def save_gl_template_copy(template: GLTemplate, path: PathValue) -> None:
    """Save a `.glt` source copy byte-for-byte."""
    content = template.to_bytes()
    write_file_bytes(path, content)
    assert len(content) == len(template.original_bytes)


def _editable_field_instances(entry: Entry) -> tuple[tuple[int, FieldInstance], ...]:
    """Return the scalar FieldInstances this editor can patch in an Entry.

    Require: ``entry`` is a parsed or generated format-1/3 Entry.
    Guarantee: return one-based ordinals and values with supported scalar source or generated shapes.
    Maintain: do not mutate Entry values or their order.
    Assert: each returned instance contains a string value.
    """
    if entry.format == 3:
        if entry.field_instances.count != 1:
            return ()
        instance = entry.field_instances.item(1)
        return ((1, instance),) if isinstance(instance.value, str) else ()
    if entry.format == 1:
        return tuple(
            (ordinal, instance)
            for ordinal, instance in enumerate(entry.field_instances, start=1)
            if (
                not instance.field.inferred
                and isinstance(instance.value, str)
                and (instance.source_span is not None or not entry.source_lines)
            )
        )
    return ()


def _entry_field_paths(
    entry: Entry,
) -> tuple[tuple[str, FieldInstance, int], ...]:
    """Return every field instance with its nested field path and depth.

    Require: ``entry`` is a parsed Entry with optional schema-bound children.
    Guarantee: return parent fields before child fields in source order, with
    repeated field names indexed within their owning Entry.
    Maintain: do not mutate values or collection order.
    Assert: every returned instance belongs to the traversed Entry tree.
    """
    paths = entry.field_instances_with_paths()
    assert all(isinstance(instance, FieldInstance) for _, instance, _ in paths)
    return paths


def _editable_entry_values(
    entry: Entry,
) -> tuple[tuple[int, str, FieldInstance], ...]:
    """Return editable scalar values from an Entry and bound nested Entries.

    Require: ``entry`` is a parsed or generated format-1/3 Entry.
    Guarantee: expose one-based chooser ordinals, field paths, source-backed
    scalar values, and generated format-1 scalar values.
    Maintain: retain source and field-instance order through nested traversal.
    Assert: every result is a string FieldInstance supported by the writer.
    """
    result: list[tuple[int, str, FieldInstance]] = []
    for path, instance, depth in _entry_field_paths(entry):
        if not isinstance(instance.value, str):
            continue
        if instance.field.arguments and instance.field.arguments[0].argument_type.startswith("*"):
            continue
        if instance.field.inferred:
            continue
        if instance.source_span is None and not (
            depth == 0
            and (
                entry.format == 3
                or (entry.format == 1 and not entry.source_lines)
            )
        ):
            continue
        result.append((len(result) + 1, path, instance))
    assert all(isinstance(instance.value, str) for _, _, instance in result)
    return tuple(result)


def _is_raw_nested_value(instance: FieldInstance) -> bool:
    """Identify a nested raw string whose source span can be safely replaced.

    Require: ``instance`` belongs to a parsed Entry.
    Guarantee: return true only for a nested field with a captured block span.
    Maintain: keep these values outside scalar mass-edit and formula targets.
    Assert: accepted values are strings with a nested argument type.
    """
    result = bool(
        isinstance(instance.value, str)
        and instance.source_span is not None
        and len(instance.field.arguments) == 1
        and instance.field.arguments[0].argument_type.startswith("*")
    )
    assert not result or isinstance(instance.value, str)
    return result


def _ui_editable_entry_ids(entry: Entry) -> set[int]:
    """Return scalar and raw-block instance identities accepted by the UI.

    Require: ``entry`` is the active structured Entry.
    Guarantee: include scalar-edit targets and raw nested blocks only.
    Maintain: never promote inferred scalar values to editable or mass-editable.
    Assert: all IDs belong to an instance reachable from ``entry``.
    """
    result = {id(instance) for _, _, instance in _editable_entry_values(entry)}
    result.update(
        id(instance)
        for _, instance, _ in _entry_field_paths(entry)
        if _is_raw_nested_value(instance)
    )
    assert all(isinstance(value, int) for value in result)
    return result


def _entry_value_display(instance: FieldInstance) -> str:
    """Return a compact matrix value for scalar, bound, or raw nested data.

    Require: ``instance`` belongs to a displayed Entry.
    Guarantee: show bound children as JSON and raw children as a compact marker.
    Maintain: do not expose a multiline block as a matrix row value.
    Assert: returned text is a string.
    """
    if isinstance(instance.value, Entry):
        result = _nested_entry_json(instance.value)
    elif _is_raw_nested_value(instance):
        result = "{…}"
    else:
        result = instance.value_as_string
    assert isinstance(result, str)
    return result


def _nested_entry_json(entry: Entry) -> str:
    """Return a compact JSON view of a nested Entry and its repeated fields.

    Require: ``entry`` is a parsed schema-bound nested Entry.
    Guarantee: represent nested Entry names and values as JSON; repeated names
    become arrays in source order.
    Maintain: do not mutate Entries or convert scalar lexical values.
    Assert: returned text is valid JSON.
    """
    fields: dict[str, object] = {}
    for instance in entry.field_instances:
        name = instance.field.name
        value = (
            json.loads(_nested_entry_json(instance.value))
            if isinstance(instance.value, Entry)
            else instance.value_as_string
        )
        if name not in fields:
            fields[name] = value
        elif isinstance(fields[name], list):
            fields[name].append(value)
        else:
            fields[name] = [fields[name], value]
    result = json.dumps(
        {"entry": entry.name, "fields": fields},
        ensure_ascii=False,
        separators=(",", ":"),
    )
    json.loads(result)
    return result


class EditorWindow:
    """Inspect descriptors, data, and templates; edit supported values and templates.

    Require: caller supplies a tkinter root window.
    Guarantee: inspect descriptors, data entries, and GL templates; edit supported
        format-0 text, template source, or format-1/3 values; modify fields across
        selected Entries; delete selected records; preview `%n` icon-name templates;
        and save copies.
    Maintain: failed loads leave the current view and data selection intact.
    Assert: template editing and copy saving enable only after a successful load.
    """

    def __init__(self, root: tk.Tk) -> None:
        """Build descriptor, project, data, and GL inspection tabs.

        Require: ``root`` is an initialized tkinter root window.
        Guarantee: configure controls and an empty document view, including
        GL and unit-icon template previews.
        Maintain: do not load or modify any file during construction.
        Assert: save actions start disabled until their source loads.
        """
        self.root = root
        self.document: Optional[LoadedDescriptor] = None
        self.data_file: Optional[File] = None
        self._undo_stack: list[tuple[object, str]] = []
        self._redo_stack: list[tuple[object, str]] = []
        self.settings_document: Optional[ConfigDocument] = None
        self.root.title("CTPEd Python")
        self.root.geometry("1180x760")
        self.root.minsize(900, 600)
        self.project_view: Optional[LoadedProject] = None
        self.project_path_checks: tuple[ProjectPathCheck, ...] = ()
        self.preferences: Optional[Preferences] = None
        self.gl_script: Optional[GLScript] = None
        self.gl_template: Optional[GLTemplate] = None
        self._rendered_gl_preview: Optional[str] = None
        self._gl_target_options: tuple[tuple[str, str], ...] = ()
        self._generated_gl_file: GreatLibraryFile | None = None
        self.gl_target_text = tk.StringVar(value="")
        self.icon_template_text = tk.StringVar(value="")
        self.icon_name_preview_text = tk.StringVar(value="")

        toolbar = ttk.Frame(root, padding=8)
        toolbar.pack(fill=tk.X)
        ttk.Button(toolbar, text="Open descriptor…", command=self.open_file).pack(side=tk.LEFT)
        self.open_project_button = ttk.Button(
            toolbar, text="Open project…", command=self.open_project
        )
        self.open_project_button.pack(side=tk.LEFT, padx=(8, 0))
        self.open_gamefile_button = ttk.Button(
            toolbar, text="Open gamefile…", command=self.open_gamefile
        )
        self.open_gamefile_button.pack(side=tk.LEFT, padx=(8, 0))
        ttk.Button(toolbar, text="Open preferences…", command=self.open_preferences).pack(side=tk.LEFT, padx=(8, 0))
        ttk.Button(toolbar, text="Open GL script…", command=self.open_gl_script).pack(side=tk.LEFT, padx=(8, 0))
        ttk.Button(toolbar, text="Open GL template…", command=self.open_gl_template).pack(side=tk.LEFT, padx=(8, 0))
        toolbar = ttk.Frame(root, padding=(8, 0, 8, 4))
        toolbar.pack(fill=tk.X)
        self.save_button = ttk.Button(
            toolbar, text="Save copy…", command=self.save_copy, state=tk.DISABLED
        )
        self.save_button.pack(side=tk.LEFT, padx=(8, 0))
        self.save_project_button = ttk.Button(
            toolbar,
            text="Save project copy…",
            command=self.save_project_copy,
            state=tk.DISABLED,
        )
        self.save_project_button.pack(side=tk.LEFT, padx=(8, 0))
        self.open_data_button = ttk.Button(
            toolbar,
            text="Open data file…",
            command=self.open_data_file,
            state=tk.DISABLED,
        )
        self.open_data_button.pack(side=tk.LEFT, padx=(8, 0))
        self.save_data_button = ttk.Button(
            toolbar,
            text="Save data file…",
            command=self.save_data_copy,
            state=tk.DISABLED,
        )
        self.save_data_button.pack(side=tk.LEFT, padx=(8, 0))
        self.mass_modify_button = ttk.Button(
            toolbar,
            text="Mass modify…",
            command=self.mass_modify_dialog,
            state=tk.DISABLED,
        )
        self.mass_modify_button.pack(side=tk.LEFT, padx=(8, 0))
        self.undo_button = ttk.Button(
            toolbar,
            text="Undo",
            command=self.undo,
            state=tk.DISABLED,
        )
        self.undo_button.pack(side=tk.LEFT, padx=(8, 0))
        self.redo_button = ttk.Button(
            toolbar, text="Redo", command=self.redo, state=tk.DISABLED
        )
        self.redo_button.pack(side=tk.LEFT, padx=(8, 0))
        self.changes_button = ttk.Button(
            toolbar, text="Changes…", command=self.show_changes, state=tk.DISABLED
        )
        self.changes_button.pack(side=tk.LEFT, padx=(8, 0))
        self.editable_file = tk.BooleanVar(value=False)
        self.editable_file_button = ttk.Checkbutton(
            toolbar,
            text="File editable",
            variable=self.editable_file,
            command=self._toggle_file_editable,
            state=tk.DISABLED,
        )
        self.editable_file_button.pack(side=tk.LEFT, padx=(8, 0))
        self.status = tk.StringVar(value="Open a gamefile.txt, .ced project, or .ces descriptor.")
        ttk.Label(root, textvariable=self.status, padding=(10, 4)).pack(fill=tk.X)

        self.metadata = tk.StringVar(value="No descriptor loaded")
        ttk.Label(root, textvariable=self.metadata, padding=(10, 4)).pack(fill=tk.X)

        outer = ttk.Panedwindow(root, orient=tk.VERTICAL)
        outer.pack(fill=tk.BOTH, expand=True, padx=8, pady=8)
        pane = ttk.Panedwindow(outer, orient=tk.HORIZONTAL)
        outer.add(pane, weight=3)
        field_frame = ttk.LabelFrame(pane, text="Fields", padding=6)
        detail_frame = ttk.LabelFrame(pane, text="Selected field", padding=6)
        pane.add(field_frame, weight=3)
        pane.add(detail_frame, weight=2)

        self.field_list = ttk.Treeview(
            field_frame,
            columns=("required", "default", "multiple"),
            show="tree headings",
            selectmode="browse",
        )
        self.field_list.heading("#0", text="Name")
        self.field_list.heading("required", text="Required")
        self.field_list.heading("default", text="By default")
        self.field_list.heading("multiple", text="Multiple")
        self.field_list.column("#0", width=220, stretch=True)
        for column in ("required", "default", "multiple"):
            self.field_list.column(column, width=90, anchor=tk.CENTER, stretch=False)
        self.field_list.pack(fill=tk.BOTH, expand=True)
        self.field_list.bind("<<TreeviewSelect>>", self.show_selected_field)

        self.details = tk.Text(detail_frame, wrap=tk.WORD, state=tk.DISABLED, height=12)
        self.details.pack(fill=tk.BOTH, expand=True)

        data_frame = ttk.LabelFrame(outer, text="Data and project", padding=6)
        outer.add(data_frame, weight=2)
        self.data_tabs = ttk.Notebook(data_frame)
        self.data_tabs.pack(fill=tk.BOTH, expand=True)
        entries_tab = ttk.Frame(self.data_tabs)
        project_tab = ttk.Frame(self.data_tabs)
        gl_script_tab = ttk.Frame(self.data_tabs)
        gl_template_tab = ttk.Frame(self.data_tabs)
        preferences_tab = ttk.Frame(self.data_tabs, padding=12)
        self.data_tabs.add(entries_tab, text="Entries")
        self.data_tabs.add(project_tab, text="Project files")
        self.data_tabs.add(gl_script_tab, text="GL script")
        self.data_tabs.add(gl_template_tab, text="GL template")
        self.data_tabs.add(preferences_tab, text="Preferences")
        self.preference_indent = tk.StringVar(value="No preference file loaded")
        ttk.Label(preferences_tab, textvariable=self.preference_indent).pack(
            anchor=tk.W, pady=(0, 8)
        )
        self.preference_flag_vars = [tk.BooleanVar(value=False) for _ in range(4)]
        self.preference_flag_buttons: list[ttk.Checkbutton] = []
        for index, flag_var in enumerate(self.preference_flag_vars, start=1):
            button = ttk.Checkbutton(
                preferences_tab,
                text=f"Flag {index}",
                variable=flag_var,
                command=lambda ordinal=index: self._toggle_preference_flag(ordinal),
                state=tk.DISABLED,
            )
            button.pack(anchor=tk.W, pady=3)
            self.preference_flag_buttons.append(button)
        self.raw_text_tabs = ttk.Notebook(entries_tab)
        self.numeric_values_tab = ttk.Frame(self.raw_text_tabs)
        self.raw_source_tab = ttk.Frame(self.raw_text_tabs)
        self.raw_text_tabs.add(self.raw_source_tab, text="Source text")
        numeric_toolbar = ttk.Frame(self.numeric_values_tab, padding=(4, 4))
        numeric_toolbar.pack(fill=tk.X)
        self.edit_numeric_value_button = ttk.Button(
            numeric_toolbar,
            text="Edit selected value…",
            command=self.edit_numeric_text_record,
            state=tk.DISABLED,
        )
        self.edit_numeric_value_button.pack(side=tk.LEFT)
        self.config_formula_button = ttk.Button(
            numeric_toolbar,
            text="Mass modify…",
            command=self.mass_modify_dialog,
            state=tk.DISABLED,
        )
        self.config_formula_button.pack(side=tk.LEFT, padx=(6, 0))
        self.numeric_value_tree = ttk.Treeview(
            self.numeric_values_tab,
            columns=("key", "values", "type", "comment"),
            show="headings",
            selectmode="extended",
        )
        self.numeric_value_tree.heading("key", text="Name")
        self.numeric_value_tree.heading("values", text="Value")
        self.numeric_value_tree.heading("type", text="Type")
        self.numeric_value_tree.heading("comment", text="Comment")
        self.numeric_value_tree.column("key", width=420, minwidth=180, stretch=False)
        self.numeric_value_tree.column("values", width=180, minwidth=100, stretch=False)
        self.numeric_value_tree.column("type", width=100, minwidth=80, stretch=False)
        self.numeric_value_tree.column("comment", width=420, minwidth=160, stretch=True)
        self.numeric_value_tree.pack(fill=tk.BOTH, expand=True)
        self.numeric_value_tree.bind("<<TreeviewSelect>>", self._update_numeric_edit_state)
        self.numeric_value_tree.bind("<Double-1>", self.edit_numeric_text_record)
        self.numeric_value_tree.bind("<Control-a>", self._select_all_numeric_values)
        self.numeric_value_tree.bind("<Control-A>", self._select_all_numeric_values)
        self.numeric_value_tree.bind("<Button-3>", self._show_numeric_value_context_menu)
        self.numeric_value_scrollbar = ttk.Scrollbar(
            self.numeric_values_tab,
            orient=tk.VERTICAL,
            command=self.numeric_value_tree.yview,
        )
        self.numeric_value_tree.configure(yscrollcommand=self.numeric_value_scrollbar.set)
        self.numeric_value_scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.numeric_value_x_scrollbar = ttk.Scrollbar(
            self.numeric_values_tab,
            orient=tk.HORIZONTAL,
            command=self.numeric_value_tree.xview,
        )
        self.numeric_value_tree.configure(xscrollcommand=self.numeric_value_x_scrollbar.set)
        self.numeric_value_x_scrollbar.pack(side=tk.BOTTOM, fill=tk.X)
        self.raw_data_text = tk.Text(self.raw_source_tab, wrap=tk.NONE)
        self.raw_data_text.bind("<KeyRelease>", self._sync_raw_text)
        self.entry_pane = ttk.Panedwindow(entries_tab, orient=tk.HORIZONTAL)
        self.entry_pane.pack(fill=tk.BOTH, expand=True)
        entry_list_frame = ttk.LabelFrame(self.entry_pane, text="Entries", padding=4)
        field_values_frame = ttk.LabelFrame(
            self.entry_pane, text="Selected entry fields", padding=4
        )
        self.entry_pane.add(entry_list_frame, weight=3)
        self.entry_pane.add(field_values_frame, weight=2)
        self.data_list = ttk.Treeview(
            entry_list_frame,
            columns=(),
            show="tree headings",
            selectmode="extended",
        )
        self._entry_matrix_paths: tuple[str, ...] = ()
        self._entry_matrix_columns: dict[str, str] = {}
        self._entry_matrix_cells: dict[tuple[int, str], tuple[FieldInstance, bool]] = {}
        self._active_grid_cell: tuple[int, str] | None = None
        self._selected_field_dimension: str | None = None
        self._numeric_text_records: tuple[NumericTextRecord, ...] = ()
        self.entry_scrollbar = ttk.Scrollbar(
            entry_list_frame, orient=tk.VERTICAL, command=self.data_list.yview
        )
        self.entry_x_scrollbar = ttk.Scrollbar(
            entry_list_frame, orient=tk.HORIZONTAL, command=self.data_list.xview
        )
        self.data_list.configure(
            yscrollcommand=self.entry_scrollbar.set,
            xscrollcommand=self.entry_x_scrollbar.set,
        )
        self.data_list.heading("#0", text="Entry")
        self.data_list.column("#0", width=190, minwidth=150, stretch=False)
        self.data_list.grid(row=0, column=0, sticky="nsew")
        self.entry_scrollbar.grid(row=0, column=1, sticky="ns")
        self.entry_x_scrollbar.grid(row=1, column=0, sticky="ew")
        entry_list_frame.rowconfigure(0, weight=1)
        entry_list_frame.columnconfigure(0, weight=1)
        self.data_list.bind("<<TreeviewSelect>>", self.show_selected_entry)
        self.data_list.bind("<Control-a>", self._select_all_entries)
        self.data_list.bind("<Control-A>", self._select_all_entries)
        self.data_list.bind("<Button-1>", self._select_entry_grid_cell, add="+")
        self.data_list.bind("<Double-1>", self._edit_entry_grid_cell, add="+")
        field_table_frame = ttk.Frame(field_values_frame)
        field_table_frame.grid(row=0, column=0, sticky="nsew")
        self.field_value_table = ttk.Treeview(
            field_table_frame,
            columns=("value", "kind", "access"),
            show="tree headings",
            selectmode="browse",
        )
        self.field_value_table.heading("#0", text="Field path")
        self.field_value_table.heading("value", text="Value")
        self.field_value_table.heading("kind", text="Type")
        self.field_value_table.heading("access", text="Access")
        self.field_value_table.column("#0", width=210, minwidth=150, stretch=True)
        self.field_value_table.column("value", width=230, minwidth=120, stretch=True)
        self.field_value_table.column("kind", width=105, minwidth=90, stretch=False)
        self.field_value_table.column("access", width=100, minwidth=90, stretch=False)
        field_x_scroll = ttk.Scrollbar(
            field_values_frame,
            orient=tk.HORIZONTAL,
            command=self.field_value_table.xview,
        )
        field_scroll = ttk.Scrollbar(
            field_table_frame,
            orient=tk.VERTICAL,
            command=self.field_value_table.yview,
        )
        self.field_value_table.configure(
            yscrollcommand=field_scroll.set, xscrollcommand=field_x_scroll.set
        )
        self.field_value_table.grid(row=0, column=0, sticky="nsew")
        field_scroll.grid(row=0, column=1, sticky="ns")
        field_x_scroll.grid(row=1, column=0, sticky="ew")
        field_values_frame.rowconfigure(0, weight=1)
        field_values_frame.columnconfigure(0, weight=1)
        field_table_frame.rowconfigure(0, weight=1)
        field_table_frame.columnconfigure(0, weight=1)
        self._field_value_targets: dict[
            str, tuple[str, FieldInstance, bool]
        ] = {}
        self.field_value_table.bind(
            "<<TreeviewSelect>>", self._on_field_value_selected
        )
        self.field_value_table.bind("<Double-1>", self._edit_field_value_row)
        self.entry_toolbar = ttk.Frame(entries_tab, padding=(0, 6, 0, 0))
        self.entry_toolbar.pack(fill=tk.X)
        self.edit_value_button = ttk.Button(
            self.entry_toolbar,
            text="Edit selected value…",
            command=self.edit_selected_value,
            state=tk.DISABLED,
        )
        self.edit_value_button.pack(side=tk.LEFT)
        self.entry_context_menu = tk.Menu(self.root, tearoff=False)
        self.entry_context_menu.add_command(
            label="Edit value…", command=self.edit_selected_value
        )
        self.field_value_context_menu = tk.Menu(self.root, tearoff=False)
        self.field_value_context_menu.add_command(
            label="Edit value…", command=self.edit_selected_value
        )
        self.data_list.bind(
            "<Button-3>", self._show_entry_grid_context_menu
        )
        self.field_value_table.bind(
            "<Button-3>", self._show_field_value_context_menu
        )
        self.data_list.bind("<Control-z>", self.undo)
        self.data_list.bind("<Control-y>", self.redo)
        self.field_value_table.bind("<Control-z>", self.undo)
        self.field_value_table.bind("<Control-y>", self.redo)
        self.numeric_value_tree.bind("<Control-z>", self.undo)
        self.numeric_value_tree.bind("<Control-y>", self.redo)
        self.raw_data_text.bind("<Control-z>", self.undo)
        self.raw_data_text.bind("<Control-y>", self.redo)
        self.root.bind("<Control-z>", self.undo)
        self.root.bind("<Control-y>", self.redo)
        self.delete_entry_button = ttk.Button(
            self.entry_toolbar,
            text="Delete selected entry",
            command=self.delete_selected_entry,
            state=tk.DISABLED,
        )
        self.delete_entry_button.pack(side=tk.LEFT, padx=(8, 0))
        self.move_entry_up_button = ttk.Button(
            self.entry_toolbar,
            text="Move up",
            command=lambda: self.move_selected_entry(-1),
            state=tk.DISABLED,
        )
        self.move_entry_up_button.pack(side=tk.LEFT, padx=(8, 0))
        self.move_entry_down_button = ttk.Button(
            self.entry_toolbar,
            text="Move down",
            command=lambda: self.move_selected_entry(1),
            state=tk.DISABLED,
        )
        self.move_entry_down_button.pack(side=tk.LEFT, padx=(4, 0))
        self.add_entry_button = ttk.Button(
            self.entry_toolbar,
            text="Add entry",
            command=self.add_entry,
            state=tk.DISABLED,
        )
        self.add_entry_button.pack(side=tk.LEFT, padx=(8, 0))
        self.sort_button = ttk.Button(
            self.entry_toolbar,
            text="Sort…",
            command=self.sort_dialog,
            state=tk.DISABLED,
        )
        self.sort_button.pack(side=tk.LEFT, padx=(8, 0))
        self.entry_mass_modify_button = ttk.Button(
            self.entry_toolbar,
            text="Mass modify…",
            command=self.mass_modify_dialog,
            state=tk.DISABLED,
        )
        self.entry_mass_modify_button.pack(side=tk.LEFT, padx=(8, 0))
        self.group_mass_modify_button = ttk.Button(
            self.entry_toolbar,
            text="By group…",
            command=self.grouped_mass_modify_dialog,
            state=tk.DISABLED,
        )
        self.group_mass_modify_button.pack(side=tk.LEFT, padx=(8, 0))
        project_toolbar = ttk.Frame(project_tab, padding=(0, 0, 0, 6))
        project_toolbar.pack(fill=tk.X)
        self.import_project_file_button = ttk.Button(
            project_toolbar,
            text="Import selected file",
            command=self.import_selected_project_file,
            state=tk.DISABLED,
        )
        self.import_project_file_button.pack(side=tk.LEFT)
        self.check_project_paths_button = ttk.Button(
            project_toolbar,
            text="Check paths",
            command=self.check_project_paths,
            state=tk.DISABLED,
        )
        self.check_project_paths_button.pack(side=tk.LEFT, padx=(8, 0))
        self.project_path_details_frame = ttk.LabelFrame(
            project_tab, text="Resolved paths", padding=4
        )
        self.project_path_details_frame.pack(side=tk.BOTTOM, fill=tk.X)
        self.project_path_details = tk.Text(
            self.project_path_details_frame, height=3, wrap=tk.WORD, state=tk.DISABLED
        )
        self.project_path_details.pack(fill=tk.X)
        self.project_list_frame = ttk.Frame(project_tab)
        self.project_list_frame.pack(fill=tk.BOTH, expand=True)
        self.project_list = ttk.Treeview(
            self.project_list_frame,
            columns=("structure", "duplicates", "path_status"),
            show="tree headings",
            selectmode="browse",
        )
        self.project_list.heading("#0", text="Data file")
        self.project_list.heading("structure", text="Structure")
        self.project_list.heading("duplicates", text="Copies")
        self.project_list.heading("path_status", text="Path check")
        self.project_list.column("#0", width=220, stretch=True)
        self.project_list.column("structure", width=180, stretch=True)
        self.project_list.column("duplicates", width=70, anchor=tk.CENTER, stretch=False)
        self.project_list.column("path_status", width=150, anchor=tk.W, stretch=False)
        self.project_list.pack(side=tk.LEFT, fill=tk.BOTH, expand=True)
        self.project_list_scrollbar = ttk.Scrollbar(
            self.project_list_frame, orient=tk.VERTICAL, command=self.project_list.yview
        )
        self.project_list.configure(yscrollcommand=self.project_list_scrollbar.set)
        self.project_list_scrollbar.pack(side=tk.RIGHT, fill=tk.Y)
        self.project_list.bind(
            "<<TreeviewSelect>>", self.show_selected_project_paths
        )
        script_panes = ttk.Panedwindow(gl_script_tab, orient=tk.VERTICAL)
        script_panes.pack(fill=tk.BOTH, expand=True)
        self.gl_script_list = ttk.Treeview(
            script_panes,
            columns=("cells",),
            show="tree headings",
            selectmode="browse",
        )
        self.gl_script_list.heading("#0", text="Row")
        self.gl_script_list.heading("cells", text="Tab-separated cells (raw)")
        self.gl_script_list.column("#0", width=70, stretch=False)
        self.gl_script_list.column("cells", width=600, stretch=True)
        script_panes.add(self.gl_script_list, weight=3)
        script_source_frame = ttk.LabelFrame(
            script_panes, text="Script source", padding=4
        )
        script_panes.add(script_source_frame, weight=2)
        self.gl_script_source_text = tk.Text(
            script_source_frame, wrap=tk.NONE, height=8
        )
        self.gl_script_source_text.pack(fill=tk.BOTH, expand=True)
        self.gl_script_source_text.bind(
            "<<Modified>>", self._gl_script_source_modified
        )
        script_toolbar = ttk.Frame(gl_script_tab, padding=(0, 6, 0, 0))
        script_toolbar.pack(fill=tk.X)
        self.apply_gl_script_button = ttk.Button(
            script_toolbar,
            text="Apply script edits",
            command=self.apply_gl_script_edits,
            state=tk.DISABLED,
        )
        self.apply_gl_script_button.pack(side=tk.LEFT)
        self.run_gl_script_button = ttk.Button(
            script_toolbar,
            text="Run script for all Entries",
            command=self.run_gl_script,
            state=tk.DISABLED,
        )
        self.run_gl_script_button.pack(side=tk.LEFT, padx=(6, 0))
        template_toolbar = ttk.Frame(gl_template_tab, padding=(0, 0, 0, 6))
        template_toolbar.pack(fill=tk.X)
        self.apply_template_button = ttk.Button(
            template_toolbar,
            text="Apply template edits",
            command=self.apply_gl_template_edits,
            state=tk.DISABLED,
        )
        self.apply_template_button.pack(side=tk.LEFT)
        self.save_template_button = ttk.Button(
            template_toolbar,
            text="Save template copy…",
            command=self.save_gl_template_copy,
            state=tk.DISABLED,
        )
        self.save_template_button.pack(side=tk.LEFT)
        self.save_preview_button = ttk.Button(
            template_toolbar,
            text="Save rendered preview…",
            command=self.save_gl_preview_copy,
            state=tk.DISABLED,
        )
        self.save_preview_button.pack(side=tk.LEFT, padx=(6, 0))
        ttk.Label(template_toolbar, text="Linked field:").pack(side=tk.LEFT, padx=(12, 4))
        self.gl_target_combo = ttk.Combobox(
            template_toolbar,
            textvariable=self.gl_target_text,
            state="disabled",
            width=34,
            values=(),
        )
        self.gl_target_combo.pack(side=tk.LEFT)
        self.generate_gl_button = ttk.Button(
            template_toolbar,
            text="Generate field",
            command=self.generate_selected_gl_field,
            state=tk.DISABLED,
        )
        self.generate_gl_button.pack(side=tk.LEFT, padx=(6, 0))
        self.save_generated_gl_button = ttk.Button(
            template_toolbar,
            text="Save Great Library copy…",
            command=self.save_generated_gl_copy,
            state=tk.DISABLED,
        )
        self.save_generated_gl_button.pack(side=tk.LEFT, padx=(6, 0))
        icon_template_frame = ttk.LabelFrame(
            gl_template_tab,
            text="Unit-icon name template (`%n` = Entry name)",
            padding=4,
        )
        icon_template_frame.pack(fill=tk.X, pady=(0, 6))
        self.icon_template_entry = ttk.Entry(
            icon_template_frame, textvariable=self.icon_template_text
        )
        self.icon_template_entry.pack(fill=tk.X)
        self.icon_template_entry.bind("<KeyRelease>", self._update_icon_name_preview)
        self.icon_name_preview = ttk.Label(
            icon_template_frame,
            textvariable=self.icon_name_preview_text,
            anchor=tk.W,
        )
        self.icon_name_preview.pack(fill=tk.X, pady=(4, 0))
        template_panes = ttk.Panedwindow(gl_template_tab, orient=tk.VERTICAL)
        template_panes.pack(fill=tk.BOTH, expand=True)
        template_source_frame = ttk.LabelFrame(template_panes, text="Source", padding=4)
        template_preview_frame = ttk.LabelFrame(template_panes, text="Direct-field preview", padding=4)
        template_panes.add(template_source_frame, weight=1)
        template_panes.add(template_preview_frame, weight=1)
        self.template_source_text = tk.Text(template_source_frame, wrap=tk.NONE, height=8)
        self.template_source_text.pack(fill=tk.BOTH, expand=True)
        self.template_source_text.bind(
            "<<Modified>>", self._template_source_modified
        )
        self.template_preview_text = tk.Text(template_preview_frame, wrap=tk.NONE, height=8)
        self.template_preview_text.pack(fill=tk.BOTH, expand=True)
        self.template_source_text.configure(state=tk.DISABLED)
        self.template_preview_text.configure(state=tk.DISABLED)

    def open_file(self) -> None:
        """Prompt for and display a descriptor.

        Require: window event loop is active.
        Guarantee: replace the view only after full parsing succeeds.
        Maintain: cancellation and failed loads leave the current document.
        Assert: a successful load enables the save action.
        """
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open CTPEd structure descriptor",
            filetypes=(("Structure descriptors", "*.ces"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            document = load_descriptor(path)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open descriptor", str(error), parent=self.root)
            self.status.set("Open failed; current view retained.")
            return
        self._display(document)

    def open_project(self) -> None:
        """Open a project and display its declarations without bulk import.

        Require: window event loop is active and directory dialogs are available.
        Guarantee: replace project list only after project and roots validate.
        Maintain: cancellation or failure leaves the current project view intact.
        Assert: displayed rows equal the project's declaration count.
        """
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open CTPEd project",
            filetypes=(("CTPEd projects", "*.ced"), ("All files", "*.*")),
        )
        if not path:
            return
        project_path = Path(path)
        structure_default = project_path.parent / "Structure"
        if not structure_default.is_dir():
            structure_default = project_path.parent
        structure_root = filedialog.askdirectory(
            parent=self.root,
            title="Choose the project structure root",
            initialdir=structure_default,
        )
        if not structure_root:
            return
        data_default = project_path.parent / "GameData"
        if not data_default.is_dir():
            data_default = project_path.parent
        data_root = filedialog.askdirectory(
            parent=self.root,
            title="Choose the project data root",
            initialdir=data_default,
        )
        if not data_root:
            return
        language = simpledialog.askstring(
            "Project language",
            "Language token used by project paths:",
            initialvalue="default",
            parent=self.root,
        )
        if language is None:
            return
        try:
            project = load_project(path, structure_root, data_root, language)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open project", str(error), parent=self.root)
            self.status.set("Project load failed; current view retained.")
            return
        self._display_project(project)

    def open_gamefile(self) -> None:
        """Choose a gamefile and display its ordered mod declarations.

        Require: window event loop and file chooser are available.
        Guarantee: use bundled descriptors, prompting only when absent.
        Maintain: retain current view on cancellation or load failure.
        Assert: no source or game data is written during opening.
        """
        path = filedialog.askopenfilename(
            parent=self.root, title="Open gamefile.txt",
            filetypes=(("Gamefiles", "*gamefile.txt"), ("Text files", "*.txt"), ("All files", "*.*")),
        )
        if not path:
            return
        base = Path(__file__).resolve().parent.parent
        resource_roots = [base / "resources"]
        if getattr(sys, "frozen", False):
            resource_roots.insert(0, Path(sys._MEIPASS) / "resources")
        template_path = next(
            (root / "default.ced" for root in resource_roots if (root / "default.ced").is_file()),
            None,
        )
        if template_path is None:
            chosen = filedialog.askopenfilename(
                parent=self.root, title="Choose the default.ced descriptor template",
                filetypes=(("CTPEd projects", "*.ced"), ("All files", "*.*")),
            )
            if not chosen:
                return
            template_path = Path(chosen)
        structure_root = template_path.parent / "Structure"
        if not structure_root.is_dir():
            chosen = filedialog.askdirectory(parent=self.root, title="Choose the Structure folder")
            if not chosen:
                return
            structure_root = Path(chosen)
        try:
            project = load_gamefile(path, template_path, structure_root)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open gamefile", str(error), parent=self.root)
            self.status.set("Gamefile load failed; current view retained.")
            return
        self._display_project(project)

    def _display_project(self, project: LoadedProject) -> None:
        """Display validated project declarations through the shared browser.

        Require: project was loaded successfully with validated roots.
        Guarantee: replace the current document with the project's declaration list;
            mark declarations without a structure as dummy and non-importable.
        Maintain: defer all game data imports until explicitly selected.
        Assert: displayed row count equals declaration count.
        """
        self.project_view = project
        self._generated_gl_file = None
        self.save_generated_gl_button.configure(state=tk.DISABLED)
        self.project_path_checks = ()
        self.preferences = None
        self._clear_preference_controls()
        self.save_project_button.configure(state=tk.NORMAL)
        self.document = None
        self._clear_data_editor()
        self.edit_value_button.configure(state=tk.DISABLED)
        for item in self.field_list.get_children():
            self.field_list.delete(item)
        for item in self.data_list.get_children():
            self.data_list.delete(item)
        self.save_button.configure(
            state=tk.NORMAL if self.gl_script is not None else tk.DISABLED
        )
        self.open_data_button.configure(state=tk.DISABLED)
        self.save_data_button.configure(state=tk.DISABLED)
        self._set_details("Select a project file to import its descriptor and data.")
        for item in self.project_list.get_children():
            self.project_list.delete(item)
        for index, spec in sorted(
            enumerate(project.project.file_specs),
            key=lambda pair: pair[1].data_name.casefold(),
        ):
            self.project_list.insert(
                "",
                tk.END,
                iid=f"project-{index}",
                text=spec.data_name,
                values=(
                    spec.structure_name,
                    spec.duplicate_count,
                    "Unchecked" if spec.has_structure else "Dummy",
                ),
            )
        self.import_project_file_button.configure(state=tk.DISABLED)
        self.check_project_paths_button.configure(state=tk.NORMAL)
        self._set_project_path_details(
            "Choose Check paths to inspect each declared data file and structure."
        )
        self.run_gl_script_button.configure(
            state=(
                tk.NORMAL
                if self.gl_script is not None
                else tk.DISABLED
            )
        )
        self.data_tabs.select(1)
        self.metadata.set(
            f"{project.project.title}    Version {project.project.version}    "
            f"{len(project.project.file_specs)} project files"
        )
        self.status.set(f"Loaded project {project.project.source}")
        assert len(self.project_list.get_children()) == len(project.project.file_specs)

    def check_project_paths(self) -> None:
        """Resolve every declared project path and show per-row results.

        Require: a project has been loaded with validated roots.
        Guarantee: show missing, unresolved, and dummy paths without importing Files.
        Maintain: keep project declarations and registered Files unchanged.
        Assert: one check result is displayed for every declaration.
        """
        if self.project_view is None:
            return
        registered_files = self.project_view.project.files.count
        self.project_path_checks = check_project_paths(self.project_view)
        counts = {"OK": 0, "Missing": 0, "Dummy": 0, "Resolve error": 0}
        for index, result in enumerate(self.project_path_checks):
            data_ok = result.data_exists is True
            structure_ok = (
                result.structure_exists is None or result.structure_exists is True
            )
            has_error = result.data_error is not None or result.structure_error is not None
            if has_error:
                label = "Resolve error"
                counts[label] += 1
            elif not result.spec.has_structure and data_ok:
                label = "Dummy"
                counts[label] += 1
            elif data_ok and structure_ok:
                label = "OK"
                counts[label] += 1
            else:
                label = "Missing"
                counts[label] += 1
            self.project_list.set(f"project-{index}", "path_status", label)
        self.status.set(
            "Path check: "
            + ", ".join(f"{label} {count}" for label, count in counts.items())
            + "; no files imported."
        )
        self.show_selected_project_paths()
        assert len(self.project_path_checks) == len(self.project_list.get_children())
        assert self.project_view.project.files.count == registered_files

    def show_selected_project_paths(self, _event: object | None = None) -> None:
        """Show exact resolved paths for the selected checked declaration.

        Require: project rows correspond to the active project's declarations.
        Guarantee: display the selected declaration's data path and, when
            structured, its structure path; disable import for dummy rows.
        Maintain: do not resolve paths or import data as a side effect.
        Assert: displayed checks belong to the active project.
        """
        selection = self.project_list.selection()
        if not selection:
            self.import_project_file_button.configure(state=tk.DISABLED)
            self._set_project_path_details(
                "Select a declaration after checking paths to see exact paths."
            )
            return
        index = int(selection[0].removeprefix("project-"))
        spec = self.project_view.project.file_specs[index]
        settings_supported = Path(spec.data_name).name.casefold() in SETTINGS_FILE_NAMES
        self.import_project_file_button.configure(
            state=tk.NORMAL if spec.has_structure or settings_supported else tk.DISABLED
        )
        if not self.project_path_checks:
            details = (
                "Data path: not checked"
                if spec.has_structure
                else (
                    "Data path: not checked\n"
                    "Import available: built-in settings editor."
                    if settings_supported
                    else "Data path: not checked\nImport unavailable: dummy file has no structure descriptor."
                )
            )
            self._set_project_path_details(details)
            return
        result = self.project_path_checks[index]
        lines = [self._format_path_check("Data", result.data_path, result.data_exists, result.data_error)]
        if result.spec.has_structure:
            lines.append(
                self._format_path_check(
                    "Structure",
                    result.structure_path,
                    result.structure_exists,
                    result.structure_error,
                )
            )
        else:
            lines.append(
                "Import available: built-in settings editor."
                if settings_supported
                else "Import unavailable: dummy file has no structure descriptor."
            )
        self._set_project_path_details("\n".join(lines))

    @staticmethod
    def _format_path_check(
        label: str,
        path: Path | None,
        exists: bool | None,
        error: str | None,
    ) -> str:
        """Format one resolved-path result for the project details panel.

        Require: one path check's label and observed resolution state.
        Guarantee: return a readable status and exact resolved path or error.
        Maintain: never turn an unresolved path into a guessed path.
        Assert: existence is unknown when resolution failed.
        """
        if error is not None:
            return f"{label}: unresolved ({error})"
        if path is None:
            return f"{label}: no path declared"
        state = "exists" if exists else "MISSING"
        return f"{label}: {state}\n{path}"

    def _set_project_path_details(self, value: str) -> None:
        """Replace the read-only project path details text.

        Require: the project details Text widget has been constructed.
        Guarantee: display the supplied current path-check information.
        Maintain: leave the details widget read-only after the update.
        Assert: widget contents equal ``value``.
        """
        self.project_path_details.configure(state=tk.NORMAL)
        self.project_path_details.delete("1.0", tk.END)
        self.project_path_details.insert("1.0", value)
        self.project_path_details.configure(state=tk.DISABLED)
        assert self.project_path_details.get("1.0", "end-1c") == value

    def import_selected_project_file(self) -> None:
        """Import and display the selected project file declaration.

        Require: a project and selected declaration are present.
        Guarantee: display the selected File after a successful structured import.
        Maintain: leave the previous data view intact on import failure; reject
            dummy declarations before invoking the importer.
        Assert: imported File is registered in the active project.
        """
        if self.project_view is None:
            return
        selection = self.project_list.selection()
        if not selection:
            return
        index = int(selection[0].removeprefix("project-"))
        spec = self.project_view.project.file_specs[index]
        if Path(spec.data_name).name.casefold() in SETTINGS_FILE_NAMES:
            try:
                data_path = spec.resolve_data_path(
                    self.project_view.project_directory,
                    self.project_view.structure_root,
                    self.project_view.data_root,
                    self.project_view.language,
                )
                source_bytes = read_file_bytes(data_path)
                source_text = source_bytes.decode("cp1252")
                values = parse_config_values(source_text, spec.data_name)
                if values is None:
                    raise ValueError(
                        f"{spec.data_name} does not match its supported settings syntax"
                    )
                settings = ConfigDocument(
                    str(data_path), spec.data_name, source_bytes, values,
                    editable=spec.editable_by_default,
                )
            except (OSError, UnicodeError, ValueError) as error:
                messagebox.showerror("Cannot import settings file", str(error), parent=self.root)
                self.status.set("Settings import failed; current data view retained.")
                return
            self._display_settings_document(settings)
            self.data_tabs.select(0)
            assert self.settings_document is settings
            return
        if not spec.has_structure:
            self.import_project_file_button.configure(state=tk.DISABLED)
            self.status.set(
                f"{spec.data_name} is a dummy file; no structure is declared to import."
            )
            return
        try:
            document, data_file = import_project_declaration(self.project_view, spec)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot import project file", str(error), parent=self.root)
            self.status.set("Project-file import failed; current data view retained.")
            return
        self._display(document, preserve_project=True)
        inferred_fields = sum(
            instance.field.inferred
            for entry in data_file.entries
            for _, instance, _ in _entry_field_paths(entry)
        )
        if inferred_fields:
            self.status.set(
                f"Loaded {data_file.source}; retained {inferred_fields} undeclared field occurrences as read-only."
            )
        self._display_data(data_file)
        self.data_tabs.select(0)
        assert any(value is data_file for value in self.project_view.project.files)

    def open_preferences(self) -> None:
        """Open and display one supported `.prf` file.

        Require: window event loop is active.
        Guarantee: replace the view after successful parsing.
        Maintain: cancellation and failures leave the current view intact.
        Assert: a successful load enables copy saving.
        """
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open CTPEd preferences",
            filetypes=(("Preferences", "*.prf"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            preferences = load_preferences(path)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open preferences", str(error), parent=self.root)
            self.status.set("Preferences load failed; current view retained.")
            return
        self._display_preferences(preferences)

    def open_gl_script(self) -> None:
        """Open a `.gls` script and display its raw mapping cells.

        Require: window event loop is active; discard pending source edits only
            after the user confirms opening another script.
        Guarantee: replace the view only after all active rows parse.
        Maintain: cancellation and failures leave the current view intact.
        Assert: successful loads enable exact-copy saving.
        """
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open Great Library template script",
            filetypes=(("GL scripts", "*.gls"), ("All files", "*.*")),
        )
        if not path:
            return
        if (
            self.gl_script is not None
            and self.gl_script_source_text.edit_modified()
            and not messagebox.askyesno(
                "Discard script edits?",
                "The current script has unapplied edits. Discard them and open another script?",
                parent=self.root,
            )
        ):
            return
        try:
            script = load_gl_script(path)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open GL script", str(error), parent=self.root)
            self.status.set("GL script load failed; current view retained.")
            return
        self._display_gl_script(script)

    def apply_gl_script_edits(self) -> bool:
        """Validate edited `.gls` source and refresh its ordered mapping rows.

        Require: a script is loaded and its source widget contains user text.
        Guarantee: on success replace the active script model; on failure retain
            its current model and row list and show the parser or encoding error.
        Maintain: preserve the source newline convention and script path.
        Assert: successful parsing retains every active cell in order.
        """
        if self.gl_script is None:
            return False
        displayed = self.gl_script_source_text.get("1.0", "end-1c")
        normalized = displayed.replace("\r\n", "\n").replace("\r", "\n")
        original_text = "".join(self.gl_script.source_lines)
        original = original_text.replace("\r\n", "\n").replace("\r", "\n")
        if normalized == original:
            self.gl_script_source_text.edit_modified(False)
            self.status.set("GL script has no unapplied edits.")
            return True
        newline = "\r\n" if "\r\n" in original_text else "\r" if "\r" in original_text else "\n"
        encoded_text = normalized.replace("\n", newline)
        try:
            edited = GLScript.from_bytes(
                encoded_text.encode("cp1252"), self.gl_script.source
            )
        except (UnicodeEncodeError, ValueError) as error:
            messagebox.showerror("Cannot apply GL script edits", str(error), parent=self.root)
            self.status.set("GL script edits rejected; active rows retained.")
            return False
        self._display_gl_script(edited)
        self.status.set("Applied GL script edits.")
        assert edited.to_bytes() == encoded_text.encode("cp1252")
        return True

    def _gl_script_source_modified(self, _event: object = None) -> None:
        """Enable Apply only when a loaded script source has changed.

        Require: the script source Text widget exists.
        Guarantee: synchronize Apply availability with its modified flag.
        Maintain: source edits do not mutate the active script model.
        Assert: Apply is disabled when no script is loaded.
        """
        self.apply_gl_script_button.configure(
            state=(
                tk.NORMAL
                if self.gl_script is not None
                and self.gl_script_source_text.edit_modified()
                else tk.DISABLED
            )
        )

    def open_gl_template(self) -> None:
        """Open a `.glt` source and preview supported directives for the selected Entry.

        Require: window event loop is active; discard pending source edits only
            after the user confirms opening another template.
        Guarantee: display source and supported field, arithmetic, condition,
        repeat, and counter rendering after parsing.
        Maintain: leave current data context available for template evaluation.
        Assert: successful loads enable exact-copy saving.
        """
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open Great Library template",
            filetypes=(("GL templates", "*.glt"), ("All files", "*.*")),
        )
        if not path:
            return
        if (
            self.gl_template is not None
            and self.template_source_text.edit_modified()
            and not messagebox.askyesno(
                "Discard template edits?",
                "The current template has unapplied edits. Discard them and open another template?",
                parent=self.root,
            )
        ):
            return
        try:
            template = load_gl_template(path)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open GL template", str(error), parent=self.root)
            self.status.set("GL template load failed; current view retained.")
            return
        self._display_gl_template(template)

    def apply_gl_template_edits(self) -> bool:
        """Validate edited template text and refresh its selected-Entry preview.

        Require: a template is loaded and its source widget contains user text.
        Guarantee: on success replace the active model with CP1252 bytes and
            refresh the preview; on failure retain the active model and preview.
        Maintain: preserve the loaded template's newline convention and source path.
        Assert: a successful template serializes to its applied bytes.
        """
        if self.gl_template is None:
            return False
        displayed = self.template_source_text.get("1.0", "end-1c")
        normalized = displayed.replace("\r\n", "\n").replace("\r", "\n")
        original = self.gl_template.text.replace("\r\n", "\n").replace("\r", "\n")
        if normalized == original:
            self.template_source_text.edit_modified(False)
            self.status.set("Template has no unapplied edits.")
            return True
        source_text = self.gl_template.text
        newline = "\r\n" if "\r\n" in source_text else "\r" if "\r" in source_text else "\n"
        encoded_text = normalized.replace("\n", newline)
        try:
            edited = GLTemplate.from_bytes(
                encoded_text.encode("cp1252"), self.gl_template.source
            )
        except (UnicodeEncodeError, ValueError) as error:
            messagebox.showerror("Cannot apply GL template edits", str(error), parent=self.root)
            self.status.set("Template edits rejected; active template and preview retained.")
            return False
        self._display_gl_template(edited)
        self.status.set("Applied GL template edits and refreshed the preview.")
        assert edited.to_bytes() == encoded_text.encode("cp1252")
        return True

    def _template_source_modified(self, _event: object = None) -> None:
        """Enable Apply only when a loaded template source has changed.

        Require: the template source Text widget exists.
        Guarantee: synchronize Apply availability with its modified flag.
        Maintain: editing widget contents does not mutate the active model.
        Assert: Apply is disabled when no template is loaded.
        """
        self.apply_template_button.configure(
            state=(
                tk.NORMAL
                if self.gl_template is not None
                and self.template_source_text.edit_modified()
                else tk.DISABLED
            )
        )

    def save_gl_template_copy(self) -> None:
        """Save the active template bytes to a chosen destination.

        Require: a `.glt` template has loaded successfully.
        Guarantee: apply pending valid edits, then write the active model bytes.
        Maintain: leave the current template and data Entry unchanged.
        Assert: cancellation performs no write.
        """
        if self.gl_template is None:
            return
        if (
            self.template_source_text.edit_modified()
            and not self.apply_gl_template_edits()
        ):
            return
        source = Path(self.gl_template.source)
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title="Save GL template copy",
            initialfile=source.name,
            defaultextension=".glt",
            filetypes=(("GL templates", "*.glt"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            save_gl_template_copy(self.gl_template, path)
        except OSError as error:
            messagebox.showerror("Cannot save GL template", str(error), parent=self.root)
            self.status.set("GL template save failed.")
            return
        self.status.set(f"Saved GL template copy: {path}")

    def save_gl_preview_copy(self) -> None:
        """Save the current rendered Entry preview as a CP1252 text copy.

        Require: a selected Entry has rendered successfully through a template.
        Guarantee: write the renderer's text and original generated line endings.
        Maintain: do not update game data or linked Great Library files.
        Assert: cancellation and absent render perform no write.
        """
        if self._rendered_gl_preview is None:
            return
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title="Save rendered GL preview",
            initialfile="gl-preview.txt",
            defaultextension=".txt",
            filetypes=(("Text files", "*.txt"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            write_file_bytes(path, self._rendered_gl_preview.encode("cp1252"))
        except (OSError, UnicodeEncodeError) as error:
            messagebox.showerror("Cannot save GL preview", str(error), parent=self.root)
            self.status.set("GL preview save failed.")
            return
        self.status.set(f"Saved rendered GL preview: {path}")

    def save_copy(self) -> None:
        """Save the loaded descriptor, preferences, or GL script copy.

        Require: a descriptor, preferences file, or GL script is loaded.
        Guarantee: save the source or supported model edits to a chosen copy.
        Maintain: do not alter the loaded source file.
        Assert: cancellation performs no write.
        """
        if self.document is None and self.preferences is None and self.gl_script is None:
            return
        if (
            self.gl_script is not None
            and self.gl_script_source_text.edit_modified()
            and not self.apply_gl_script_edits()
        ):
            return
        if self.preferences is not None:
            source = Path(self.preferences.source)
            extension, title = ".prf", "Save preferences copy"
            filetypes = (("Preferences", "*.prf"), ("All files", "*.*"))
        elif self.gl_script is not None:
            source = Path(self.gl_script.source)
            extension, title = ".gls", "Save GL script copy"
            filetypes = (("GL scripts", "*.gls"), ("All files", "*.*"))
        else:
            assert self.document is not None
            source = Path(self.document.structure.source)
            extension, title = ".ces", "Save unchanged descriptor copy"
            filetypes = (("Structure descriptors", "*.ces"), ("All files", "*.*"))
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title=title,
            initialfile=source.name,
            defaultextension=extension,
            filetypes=filetypes,
        )
        if not path:
            return
        try:
            if self.preferences is not None:
                save_preferences_copy(self.preferences, path)
            elif self.gl_script is not None:
                save_gl_script_copy(self.gl_script, path)
            else:
                assert self.document is not None
                save_descriptor_copy(self.document, path)
        except OSError as error:
            messagebox.showerror("Cannot save copy", str(error), parent=self.root)
            self.status.set("Save failed.")
            return
        self.status.set(f"Saved copy: {path}")

    def save_project_copy(self) -> None:
        """Save the active project's original bytes to a chosen path.

        Require: a project has loaded and the window event loop is active.
        Guarantee: write an unchanged `.ced` copy.
        Maintain: leave the active project and declarations unchanged.
        Assert: cancellation performs no write.
        """
        if self.project_view is None:
            return
        source = Path(self.project_view.project.source)
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title="Save unchanged project copy",
            initialfile=source.with_suffix(".ced").name,
            defaultextension=".ced",
            filetypes=(("CTPEd projects", "*.ced"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            save_project_copy(self.project_view, path)
        except OSError as error:
            messagebox.showerror("Cannot save project", str(error), parent=self.root)
            self.status.set("Project save failed.")
            return
        self.status.set(f"Saved unchanged project copy: {path}")

    def open_data_file(self) -> None:
        """Load a data file against the active descriptor.

        Require: a descriptor is loaded and the window event loop is active.
        Guarantee: display parsed entries or direct format-0 text after import.
        Maintain: cancellation and failed loads leave the current data view.
        Assert: successful import enables unchanged-copy saving.
        """
        if self.document is None:
            return
        path = filedialog.askopenfilename(
            parent=self.root,
            title="Open data file for current structure",
            filetypes=(("Text data", "*.txt"), ("All files", "*.*")),
        )
        if not path:
            return
        try:
            data_file = load_data_file(self.document, path)
        except (OSError, ValueError) as error:
            messagebox.showerror("Cannot open data file", str(error), parent=self.root)
            self.status.set("Data import failed; current data view retained.")
            return
        self._display_data(data_file)

    def save_data_copy(self) -> None:
        """Save the active data file's current serialization.

        Require: a data file is loaded.
        Guarantee: write original or supported edited bytes.
        Maintain: do not alter the loaded model.
        Assert: cancellation performs no write.
        """
        if self.settings_document is None and self.data_file is None:
            return
        source = (
            Path(self.settings_document.source)
            if self.settings_document is not None
            else Path(self.data_file.source)
        )
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title="Save data-file copy",
            initialfile=source.name,
            defaultextension=source.suffix or ".txt",
            filetypes=(("Text data", "*.txt"), ("All files", "*.*")),
        )
        if not path:
            return
        if Path(path).resolve() == source.resolve():
            messagebox.showerror(
                "Cannot overwrite source",
                "Choose a different destination to preserve the loaded source file.",
                parent=self.root,
            )
            return
        try:
            if self.settings_document is not None:
                write_file_bytes(path, self.settings_document.current_bytes)
            elif self.data_file.structure.format in {0, 2}:
                self.data_file.set_raw_text(self.raw_data_text.get("1.0", "end-1c"))
                save_data_copy(self.data_file, path)
            else:
                save_data_copy(self.data_file, path)
        except (OSError, UnicodeError, ValueError) as error:
            messagebox.showerror("Cannot save data file", str(error), parent=self.root)
            self.status.set("Data save failed.")
            return
        self.status.set(f"Saved data copy: {path}")

    def _display(
        self, document: LoadedDescriptor, preserve_project: bool = False
    ) -> None:
        """Replace the visible descriptor after a successful load.

        Require: document contains a parsed Structure and Fields collection.
        Guarantee: show metadata and every field in source order.
        Maintain: keep source bytes and preserve project context only for an
        explicitly selected project-file import.
        Assert: tree row count matches the field count.
        """
        self.document = document
        self.preferences = None
        if not preserve_project:
            self.gl_script = None
            self.run_gl_script_button.configure(state=tk.DISABLED)
            self.apply_gl_script_button.configure(state=tk.DISABLED)
            self.gl_script_source_text.edit_modified(False)
        self._clear_preference_controls()
        if preserve_project:
            assert self.project_view is not None
        else:
            self.project_view = None
            self._generated_gl_file = None
            self.save_generated_gl_button.configure(state=tk.DISABLED)
            self.project_path_checks = ()
            self.save_project_button.configure(state=tk.DISABLED)
            self.import_project_file_button.configure(state=tk.DISABLED)
            self.check_project_paths_button.configure(state=tk.DISABLED)
            for item in self.project_list.get_children():
                self.project_list.delete(item)
        self._clear_data_editor()
        self.edit_value_button.configure(state=tk.DISABLED)
        structure = document.structure
        self.metadata.set(
            f"{Path(structure.source).name}    Version {structure.version}    "
            f"Format {structure.format}    {document.fields.count} fields"
        )
        for item in self.field_list.get_children():
            self.field_list.delete(item)
        for index, value in enumerate(document.fields):
            self.field_list.insert(
                "",
                tk.END,
                iid=f"field-{index}",
                text=value.name,
                values=(
                    "Yes" if value.compulsory else "No",
                    "Yes" if value.present_by_default else "No",
                    "Yes" if value.allows_multiple else "No",
                ),
            )
        self._set_details("Select a field to inspect its arguments.")
        self.save_button.configure(state=tk.NORMAL)
        self.open_data_button.configure(state=tk.NORMAL)
        self.save_data_button.configure(state=tk.DISABLED)
        for item in self.data_list.get_children():
            self.data_list.delete(item)
        for item in self.gl_script_list.get_children():
            self.gl_script_list.delete(item)
        self.status.set(f"Loaded {structure.source}")
        self.data_tabs.select(0)
        assert len(self.field_list.get_children()) == document.fields.count

    def _display_preferences(self, preferences: Preferences) -> None:
        """Display the indent token and four ordinal preference flags.

        Require: preferences passed the supported parser.
        Guarantee: display all five values without assigning flag meanings.
        Maintain: keep preference source bytes available for saving.
        Assert: the model contains exactly four Boolean flags.
        """
        self.preferences = preferences
        self.gl_script = None
        self.run_gl_script_button.configure(state=tk.DISABLED)
        self.apply_gl_script_button.configure(state=tk.DISABLED)
        self.gl_script_source_text.edit_modified(False)
        self.document = None
        self._clear_data_editor()
        self.project_view = None
        self._generated_gl_file = None
        self.save_generated_gl_button.configure(state=tk.DISABLED)
        self.project_path_checks = ()
        self.edit_value_button.configure(state=tk.DISABLED)
        self.open_data_button.configure(state=tk.DISABLED)
        self.save_data_button.configure(state=tk.DISABLED)
        self.save_project_button.configure(state=tk.DISABLED)
        self.import_project_file_button.configure(state=tk.DISABLED)
        self.check_project_paths_button.configure(state=tk.DISABLED)
        self.save_button.configure(state=tk.NORMAL)
        for tree in (
            self.field_list,
            self.data_list,
            self.project_list,
            self.gl_script_list,
        ):
            for item in tree.get_children():
                tree.delete(item)
        self.metadata.set(f"{Path(preferences.source).name}    CTPEd preferences")
        self.preference_indent.set(f"Indent token: {preferences.indent_token}")
        for variable, value in zip(self.preference_flag_vars, preferences.flags):
            variable.set(value)
        for button in self.preference_flag_buttons:
            button.configure(state=tk.NORMAL)
        self._set_details(
            "Preference flag meanings are unknown; flags are shown by ordinal."
        )
        self.status.set(f"Loaded preferences {preferences.source}")
        self.data_tabs.select(4)
        assert len(preferences.flags) == 4

    def _clear_preference_controls(self) -> None:
        """Disable ordinal flag controls when no preferences model is active.

        Require: preference widgets were created by the window constructor.
        Guarantee: show a neutral prompt and clear stale checkbox values.
        Maintain: do not mutate a previously loaded Preferences model.
        Assert: all four controls are disabled.
        """
        self.preference_indent.set("No preference file loaded")
        for variable in self.preference_flag_vars:
            variable.set(False)
        for button in self.preference_flag_buttons:
            button.configure(state=tk.DISABLED)
        assert len(self.preference_flag_buttons) == 4

    def _toggle_preference_flag(self, ordinal: int) -> None:
        """Apply one ordinal checkbox value to the loaded preference model.

        Require: a valid one-based flag ordinal and a loaded Preferences model.
        Guarantee: update exactly that flag through ``Preferences.set_flag``.
        Maintain: leave the indent token and all other flags unchanged.
        Assert: the model and checkbox agree after the update.
        """
        if self.preferences is None:
            return
        value = self.preference_flag_vars[ordinal - 1].get()
        self.preferences.set_flag(ordinal, value)
        assert self.preferences.flags[ordinal - 1] is value
        self.status.set(
            f"Changed preference flag {ordinal}; save a copy to keep the change."
        )

    def _display_gl_script(self, script: GLScript) -> None:
        """Display editable script source and active raw mapping rows.

        Require: script passed the `.gls` parser.
        Guarantee: show source text and list each active row's ordered cells.
        Maintain: keep cell meanings opaque and original bytes until Apply.
        Assert: displayed row count equals the parsed row count.
        """
        self.gl_script = script
        self.document = None
        self._clear_data_editor()
        self.preferences = None
        self._clear_preference_controls()
        self.edit_value_button.configure(state=tk.DISABLED)
        self.open_data_button.configure(state=tk.DISABLED)
        self.save_data_button.configure(state=tk.DISABLED)
        self.save_button.configure(state=tk.NORMAL)
        for tree in (
            self.field_list,
            self.data_list,
            self.gl_script_list,
        ):
            for item in tree.get_children():
                tree.delete(item)
        source_text = "".join(script.source_lines)
        source_text = source_text.replace("\r\n", "\n").replace("\r", "\n")
        self._replace_text(self.gl_script_source_text, source_text)
        self.gl_script_source_text.configure(state=tk.NORMAL)
        self.gl_script_source_text.edit_modified(False)
        self.apply_gl_script_button.configure(state=tk.DISABLED)
        for ordinal, row in enumerate(script.rows, start=1):
            self.gl_script_list.insert(
                "",
                tk.END,
                iid=f"gl-script-{ordinal}",
                text=f"{ordinal} (line {row.line_number})",
                values=(repr(row.cells),),
            )
        self.metadata.set(f"{Path(script.source).name}    {len(script.rows)} GL script rows")
        self._set_details(
            "Cells are shown in source order. Empty cells are preserved; their meanings are not assigned."
        )
        self.status.set(f"Loaded GL script {script.source}")
        self.data_tabs.select(2)
        self.run_gl_script_button.configure(
            state=tk.NORMAL if self.project_view is not None else tk.DISABLED
        )
        assert len(self.gl_script_list.get_children()) == len(script.rows)

    def _display_gl_template(self, template: GLTemplate) -> None:
        """Display raw source and a supported-expression preview for the selected Entry.

        Require: template passed the balanced-bracket parser.
        Guarantee: show editable decoded source and either rendered text or a prompt.
        Maintain: retain current data selection and template source bytes.
        Assert: copy saving and Apply are enabled only after load succeeds.
        """
        self.gl_template = template
        self._rendered_gl_preview = None
        self.save_preview_button.configure(state=tk.DISABLED)
        source_text = template.text.replace("\r\n", "\n").replace("\r", "\n")
        self._replace_text(self.template_source_text, source_text)
        self.template_source_text.configure(state=tk.NORMAL)
        self.template_source_text.edit_modified(False)
        self.apply_template_button.configure(state=tk.DISABLED)
        self.save_template_button.configure(state=tk.NORMAL)
        selection = self.data_list.selection()
        if self.data_file is not None and selection:
            index = int(selection[0].removeprefix("entry-"))
            entry = self.data_file.entries.item(index + 1)
            self._render_template_for_entry(entry)
            self._refresh_gl_targets(entry)
        else:
            self._rendered_gl_preview = None
            self.save_preview_button.configure(state=tk.DISABLED)
            self._replace_text(
                self.template_preview_text,
                "Select a data entry to preview direct field substitutions.",
            )
            self._refresh_gl_targets(None)
        self.metadata.set(f"{Path(template.source).name}    GL template")
        self.status.set(f"Loaded GL template {template.source}")
        self.data_tabs.select(3)

    def _update_icon_name_preview(
        self, _event: object = None, entry: Entry | None = None
    ) -> None:
        """Preview the unit-icon name template's documented `%n` shortcut.

        Require: preview variables exist; optional ``entry`` is selected from
        the active File.
        Guarantee: replace every `%n` with the internal Entry name and retain
        every other character literally.
        Maintain: do not modify or save any game File.
        Assert: no selection clears the rendered preview.
        """
        if entry is None:
            selection = self.data_list.selection()
            if self.data_file is None or not selection:
                self.icon_name_preview_text.set("")
                assert self.icon_name_preview_text.get() == ""
                return
            index = int(selection[0].removeprefix("entry-"))
            entry = self.data_file.entries.item(index + 1)
        template_text = self.icon_template_text.get()
        rendered = template_text.replace("%n", entry.name)
        self.icon_name_preview_text.set(rendered)
        assert self.icon_name_preview_text.get() == rendered

    def _selected_entry(self) -> Entry | None:
        """Return the currently selected Entry, if the active view has one.

        Require: the data tree and active File exist.
        Guarantee: return the Entry represented by the first selected row.
        Maintain: do not change selection or model state.
        Assert: returned Entry belongs to the active File.
        """
        entries = self._selected_entries()
        return entries[0] if entries else None

    def _selected_entries(self) -> tuple[Entry, ...]:
        """Return selected records in active File order.

        Require: the Entries tree and its optional File model exist.
        Guarantee: return each selected Entry once, ordered by source ordinal.
        Maintain: leave the tree selection and File collection unchanged.
        Assert: each returned Entry is a member of the active File.
        """
        if self.data_file is None:
            return ()
        selection = tuple(self.data_list.selection())
        ordinals: list[int] = []
        for item in selection:
            if not item.startswith("entry-"):
                raise ValueError(f"invalid selected Entry row: {item}")
            try:
                ordinal = int(item.removeprefix("entry-")) + 1
            except ValueError as error:
                raise ValueError(f"invalid selected Entry row: {item}") from error
            if ordinal < 1 or ordinal > self.data_file.entries.count:
                raise IndexError(f"selected Entry row is out of range: {item}")
            ordinals.append(ordinal)
        if len(set(ordinals)) != len(ordinals):
            raise ValueError("selected Entry rows must be unique")
        result = tuple(self.data_file.entries.item(index) for index in sorted(ordinals))
        assert all(any(candidate is entry for candidate in self.data_file.entries) for entry in result)
        return result

    def _refresh_gl_targets(self, entry: Entry | None) -> None:
        """Refresh linked-field choices and generation controls for one Entry.

        Require: GL target widgets exist and ``entry`` is selected or None.
        Guarantee: show only fields mapped to unique closed project blocks.
        Maintain: do not stage content or mutate source FieldInstances.
        Assert: generation is enabled only with project, template, selection,
        and at least one eligible field.
        """
        self._gl_target_options = ()
        self.gl_target_text.set("")
        self.gl_target_combo.configure(values=(), state=tk.DISABLED)
        self.generate_gl_button.configure(state=tk.DISABLED)
        if entry is None or self.project_view is None or self.gl_template is None:
            return
        try:
            selected = self._selected_entries() or (entry,)
            resolved = tuple(
                resolve_project_gl_targets(self.project_view, selected_entry)
                for selected_entry in selected
            )
            first_options = resolved[0]
            self._gl_target_options = tuple(
                (name, key)
                for name, key in first_options
                if all(
                    any(candidate.casefold() == name.casefold() for candidate, _ in options)
                    for options in resolved[1:]
                )
            )
        except (OSError, ValueError) as error:
            self.status.set(f"Cannot resolve Great Library targets: {error}")
            return
        labels = tuple(
            self._gl_target_label(name, key, len(selected))
            for name, key in self._gl_target_options
        )
        self.gl_target_combo.configure(
            values=labels,
            state="readonly" if labels else tk.DISABLED,
        )
        if labels:
            self.gl_target_text.set(labels[0])
            self.generate_gl_button.configure(state=tk.NORMAL)

    @staticmethod
    def _gl_target_label(name: str, key: str, selected_count: int) -> str:
        """Describe the field target without implying one shared key.

        Require: name and key identify an available linked target.
        Guarantee: return a single-key or per-selected-Entry label.
        Maintain: never imply the first Entry's key is shared across a selection.
        Assert: the label is text suitable for the target combobox.
        """
        label = (
            f"{name}  →  {key}"
            if selected_count == 1
            else f"{name}  →  per selected Entry"
        )
        assert isinstance(label, str)
        return label

    def generate_selected_gl_field(self) -> None:
        """Render every selected Entry and stage linked GL blocks together.

        Require: selected Entries share an available linked-field choice and
        the project and template are loaded.
        Guarantee: stage every selected Entry's linked body atomically.
        Maintain: failed resolution, rendering, conflict, or encoding leaves
        prior staged bodies unchanged.
        Assert: successful staging enables copy saving.
        """
        entries = self._selected_entries()
        if (
            not entries
            or self.project_view is None
            or self.gl_template is None
            or not self._gl_target_options
        ):
            return
        try:
            label = self.gl_target_text.get()
            target = next(
                (name for name, key in self._gl_target_options
                if label == self._gl_target_label(name, key, len(entries))),
                None,
            )
            if target is None:
                raise ValueError("selected linked field is no longer available")
            current_library = self._generated_gl_file or self.project_view.great_library_file
            if current_library is None:
                raise ValueError("project Great_Library.txt is unavailable")
            great_library, changed_keys = stage_selected_gl_entries(
                self.project_view,
                entries,
                self.gl_template,
                target,
                base_library=current_library,
            )
        except (OSError, ValueError, UnicodeEncodeError, StopIteration) as error:
            messagebox.showerror(
                "Cannot generate Great Library field", str(error), parent=self.root
            )
            self.status.set("Great Library generation failed; staged content unchanged.")
            return
        self._generated_gl_file = great_library
        self.save_generated_gl_button.configure(state=tk.NORMAL)
        self.status.set(
            f"Generated {changed_keys} Great Library fields in memory."
        )

    def run_gl_script(self) -> None:
        """Run the loaded script over every Entry in its declared project Files.

        Require: project and parsed `.gls` are loaded; pending source edits parse
            successfully before execution.
        Guarantee: stage every mapped field together or report an error without
        changing the previously staged Great Library model.
        Maintain: source Great Library and uniticon files remain untouched.
        Assert: successful execution enables the separate-copy save action.
        """
        if self.gl_script is None:
            return
        if (
            self.gl_script_source_text.edit_modified()
            and not self.apply_gl_script_edits()
        ):
            return
        if self.project_view is None:
            return
        try:
            staged, changed_keys = execute_gl_script(
                self.project_view,
                self.gl_script,
                base_library=self._generated_gl_file,
            )
        except (OSError, ValueError, TypeError) as error:
            messagebox.showerror("Cannot run GL script", str(error), parent=self.root)
            self.status.set("GL script failed; staged Great Library content unchanged.")
            return
        self._generated_gl_file = staged
        self.save_generated_gl_button.configure(state=tk.NORMAL)
        self.status.set(
            f"Ran GL script; staged {changed_keys} Great Library fields in memory."
        )

    def save_generated_gl_copy(self) -> None:
        """Save the staged Great Library file to an explicitly chosen copy.

        Require: a generation operation staged at least one field.
        Guarantee: write staged GreatLibraryFile bytes to the chosen path.
        Maintain: never write the loaded source path implicitly.
        Assert: cancellation and missing staged content perform no write.
        """
        if self._generated_gl_file is None:
            return
        source = Path(self._generated_gl_file.source)
        path = filedialog.asksaveasfilename(
            parent=self.root,
            title="Save Great Library copy",
            initialfile=source.name,
            initialdir=source.parent,
            defaultextension=source.suffix or ".txt",
            filetypes=(("Text files", "*.txt"), ("All files", "*.*")),
        )
        if not path:
            return
        if Path(path).resolve() == source.resolve():
            messagebox.showerror(
                "Cannot overwrite Great Library source",
                "Choose a different destination to preserve the loaded source file.",
                parent=self.root,
            )
            self.status.set("Choose a separate destination for the Great Library copy.")
            return
        try:
            write_file_bytes(path, self._generated_gl_file.to_bytes())
        except OSError as error:
            messagebox.showerror("Cannot save Great Library", str(error), parent=self.root)
            self.status.set("Great Library copy save failed.")
            return
        self.status.set(f"Saved Great Library copy: {path}")

    def _render_template_for_entry(self, entry: Entry) -> str | None:
        """Render supported fields and directives for one selected Entry.

        Require: ``self.gl_template`` is loaded and ``entry`` is parsed.
        Guarantee: display and return the current field, arithmetic, condition, repeat,
        project-file loop, cross-file reference, GL-name, consequence, database,
        and counter preview.
        Maintain: never mutate the source template or Entry.
        Assert: unsupported expressions remain visible in the preview.
        """
        if self.gl_template is None:
            return None
        try:
            rendered = render_project_template(
                self.project_view, self.gl_template, entry
            )
        except (OSError, ValueError) as error:
            self._rendered_gl_preview = None
            if hasattr(self, "save_preview_button"):
                self.save_preview_button.configure(state=tk.DISABLED)
            self._replace_text(
                self.template_preview_text,
                f"Cannot resolve project data for template preview: {error}",
            )
            self.status.set("GL template preview could not resolve project data")
            return None
        self._rendered_gl_preview = rendered
        if hasattr(self, "save_preview_button"):
            self.save_preview_button.configure(state=tk.NORMAL)
        self._replace_text(
            self.template_preview_text,
            rendered.replace("\r\n", "\n").replace("\r", "\n"),
        )
        return rendered

    def _clear_data_editor(self, *, clear_undo: bool = True) -> None:
        """Clear active File state and restore the structured-entry view.

        Require: the data editor widgets have been constructed.
        Guarantee: disable editability controls and show an empty entry list.
        Maintain: no previous File remains attached to the raw text widget.
        Assert: the editable control is disabled.
        """
        self.data_file = None
        if clear_undo:
            self._clear_edit_history()
        self.settings_document = None
        self._refresh_gl_targets(None)
        self.editable_file.set(False)
        self.editable_file_button.configure(state=tk.DISABLED)
        self.mass_modify_button.configure(state=tk.DISABLED)
        self.entry_mass_modify_button.configure(state=tk.DISABLED)
        self.group_mass_modify_button.configure(state=tk.DISABLED)
        self.mass_modify_button.pack(side=tk.LEFT, padx=(8, 0), before=self.editable_file_button)
        self.entry_mass_modify_button.pack_forget()
        self.group_mass_modify_button.pack_forget()
        self.entry_pane.pack(fill=tk.BOTH, expand=True)
        self.raw_text_tabs.pack_forget()
        self.raw_data_text.pack_forget()
        self.raw_data_text.configure(state=tk.NORMAL)
        self.entry_toolbar.pack(fill=tk.X)
        for item in self.field_value_table.get_children():
            self.field_value_table.delete(item)
        self._field_value_targets.clear()
        for item in self.data_list.get_children():
            self.data_list.delete(item)
        self.data_list.configure(columns=())
        self._entry_matrix_paths = ()
        self._entry_matrix_columns.clear()
        self._entry_matrix_cells.clear()
        self._active_grid_cell = None
        self._selected_field_dimension = None
        self.edit_value_button.configure(state=tk.DISABLED)
        self.delete_entry_button.configure(state=tk.DISABLED)
        self.move_entry_up_button.configure(state=tk.DISABLED)
        self.move_entry_down_button.configure(state=tk.DISABLED)
        self.add_entry_button.configure(state=tk.DISABLED)
        self.sort_button.configure(state=tk.DISABLED)
        self.edit_numeric_value_button.configure(state=tk.DISABLED)
        self.config_formula_button.configure(state=tk.DISABLED)
        self.changes_button.configure(state=tk.DISABLED)
        for item in self.numeric_value_tree.get_children():
            self.numeric_value_tree.delete(item)
        assert str(self.editable_file_button.cget("state")) == tk.DISABLED

    def _display_settings_document(self, settings: ConfigDocument) -> None:
        """Show an explicitly recognized Gamefile settings source.

        Require: the source name is supported and all setting spans parse.
        Guarantee: display every scalar occurrence beside the preserved source.
        Maintain: do not register a descriptor-less file as a structured File.
        Assert: value-row count equals the parsed occurrence count.
        """
        self._clear_data_editor(clear_undo=settings is not self.settings_document)
        self.document = None
        self.settings_document = settings
        self.changes_button.configure(state=tk.NORMAL)
        self._update_history_controls()
        for item in self.field_list.get_children():
            self.field_list.delete(item)
        self._set_details("Settings values are shown by scoped path; structural headers remain read-only.")
        self.metadata.set(f"{settings.file_name}    {len(settings.values)} setting values")
        self.editable_file.set(settings.editable)
        self.editable_file_button.configure(state=tk.NORMAL)
        self.mass_modify_button.configure(
            state=tk.NORMAL if settings.editable else tk.DISABLED
        )
        self.mass_modify_button.pack(side=tk.LEFT, padx=(8, 0), before=self.editable_file_button)
        self.entry_mass_modify_button.pack_forget()
        self.group_mass_modify_button.pack_forget()
        self.entry_pane.pack_forget()
        self.entry_toolbar.pack_forget()
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert(
            "1.0", settings.current_text.replace("\r\n", "\n").replace("\r", "\n")
        )
        self.raw_data_text.configure(state=tk.DISABLED)
        if str(self.numeric_values_tab) not in self.raw_text_tabs.tabs():
            self.raw_text_tabs.insert(0, self.numeric_values_tab, text="Values")
        self.raw_text_tabs.pack(fill=tk.BOTH, expand=True)
        self._populate_config_table()
        self.raw_text_tabs.select(self.numeric_values_tab)
        self.save_data_button.configure(state=tk.NORMAL)
        self.status.set(
            f"Loaded {settings.source}: {len(settings.values)} editable settings; save changes to a copy."
        )

    def _clear_edit_history(self) -> None:
        """Forget every Undo and Redo step for the active document.

        Require: the window was constructed.
        Guarantee: both history stacks are empty and their controls are disabled.
        Maintain: the active File is unchanged.
        Assert: Undo and Redo are disabled.
        """
        self._undo_stack.clear()
        self._redo_stack.clear()
        self.undo_button.configure(state=tk.DISABLED)
        self.redo_button.configure(state=tk.DISABLED)
        assert str(self.undo_button.cget("state")) == tk.DISABLED
        assert str(self.redo_button.cget("state")) == tk.DISABLED

    def _capture_undo(self) -> tuple[object, bytes]:
        """Capture an isolated data state and its serialized comparison boundary.

        Require: a File or settings document is active and serializable.
        Guarantee: return the state and exact bytes before an edit.
        Maintain: leave the active model and history unchanged.
        Assert: a missing active document raises ValueError.
        """
        if self.settings_document is not None:
            settings = self.settings_document
            return dict(settings.replacements), settings.current_bytes
        if self.data_file is None:
            raise ValueError("no data file is loaded")
        return self.data_file.snapshot(), self.data_file.to_bytes()

    def _push_undo(self, snapshot: tuple[object, bytes], label: str) -> None:
        """Record one successful edit only when its serialized bytes changed.

        Require: snapshot came from _capture_undo before an accepted edit.
        Guarantee: retain at most UNDO_LIMIT prior states; skip no-op edits.
        Maintain: leave the active model unchanged and persistence deferred.
        Assert: a recorded change enables Undo.
        """
        current = (
            self.settings_document.current_bytes
            if self.settings_document is not None
            else self.data_file.to_bytes()
        )
        state, before = snapshot
        if current == before:
            return
        self._undo_stack.append((state, label))
        self._redo_stack.clear()
        del self._undo_stack[:-UNDO_LIMIT]
        self.undo_button.configure(state=tk.NORMAL)
        self.redo_button.configure(state=tk.DISABLED)
        assert 0 < len(self._undo_stack) <= UNDO_LIMIT

    def _active_document_editable(self) -> bool:
        """Return whether the active data or settings document accepts edits.

        Require: the editor window was constructed.
        Guarantee: report editability for the active File or settings document.
        Maintain: do not change the model or view.
        Assert: an absent data document is not editable.
        """
        if self.settings_document is not None:
            return self.settings_document.editable
        return self.data_file is not None and self.data_file.editable

    def _restore_edit_state(self, snapshot: object, label: str) -> None:
        """Restore one File snapshot or settings overlay and refresh its view.

        Require: snapshot belongs to the active editable document.
        Guarantee: restore its state and refresh dependent controls.
        Maintain: preserve document identity and disk bytes.
        Assert: visible rows represent the restored model.
        """
        if self.settings_document is not None:
            self.settings_document.replacements = snapshot
            self._display_settings_document(self.settings_document)
            self.numeric_value_tree.selection_remove(
                self.numeric_value_tree.selection()
            )
        elif self.data_file is not None and self.data_file.editable:
            self.data_file.restore(snapshot)
            self._display_data(self.data_file)
        else:
            raise ValueError("no editable data document is active")
        self.status.set(f"{label}; save a data-file copy to keep the change.")

    def _update_history_controls(self) -> None:
        """Enable history actions only when their stack contains restorable states.

        Require: the editor and its history buttons have been constructed.
        Guarantee: button states reflect stack contents and document editability.
        Maintain: preserve both stacks and the active document.
        Assert: read-only documents cannot enter either history operation.
        """
        editable = self._active_document_editable()
        self.undo_button.configure(
            state=tk.NORMAL if editable and self._undo_stack else tk.DISABLED
        )
        self.redo_button.configure(
            state=tk.NORMAL if editable and self._redo_stack else tk.DISABLED
        )

    def undo(self, _event: object = None) -> str:
        """Restore one accepted edit toward the loaded source.

        Require: history belongs to the active editable document.
        Guarantee: restore the newest prior state and expose one Redo step.
        Maintain: preserve older history, document identity, and disk bytes.
        Assert: history controls reflect both stacks after restoration.
        """
        if self._undo_stack and self._active_document_editable():
            snapshot, label = self._undo_stack[-1]
            current, _current_bytes = self._capture_undo()
            self._restore_edit_state(snapshot, f"Undid {label}")
            self._redo_stack.append((current, label))
            self._undo_stack.pop()
            del self._redo_stack[:-UNDO_LIMIT]
            self._update_history_controls()
        return "break"

    def redo(self, _event: object = None) -> str:
        """Restore one edit reversed by Undo and consume the keyboard event.

        Require: history belongs to the active editable document.
        Guarantee: restore the newest undone state and expose one Undo step.
        Maintain: preserve the active document and disk bytes.
        Assert: history controls reflect both stacks after restoration.
        """
        if self._redo_stack and self._active_document_editable():
            snapshot, label = self._redo_stack[-1]
            current, _current_bytes = self._capture_undo()
            self._restore_edit_state(snapshot, f"Redid {label}")
            self._undo_stack.append((current, label))
            self._redo_stack.pop()
            del self._undo_stack[:-UNDO_LIMIT]
            self._update_history_controls()
        return "break"

    def show_changes(self) -> None:
        """Display a read-only difference from the loaded source.

        Require: an active File or settings document can serialize as CP1252.
        Guarantee: show a unified difference without changing document state.
        Maintain: keep history and the loaded source bytes unchanged.
        Assert: the displayed text reflects current model bytes.
        """
        if self.settings_document is not None:
            original = self.settings_document.original_bytes
            current = self.settings_document.current_bytes
        elif self.data_file is not None:
            original = self.data_file.original_bytes
            current = self.data_file.to_bytes()
        else:
            return
        lines = list(difflib.unified_diff(
            original.decode("cp1252").splitlines(),
            current.decode("cp1252").splitlines(),
            fromfile="Loaded source",
            tofile="Current edits",
            lineterm="",
        ))
        if not lines:
            lines = [
                "No changes since load."
                if original == current
                else "Text lines match; line endings or the final newline differ."
            ]
        dialog = tk.Toplevel(self.root)
        dialog.title("Changes since load")
        dialog.transient(self.root)
        dialog.geometry("820x540")
        frame = ttk.Frame(dialog, padding=8)
        frame.pack(fill=tk.BOTH, expand=True)
        viewer = tk.Text(frame, wrap=tk.NONE, state=tk.NORMAL)
        vertical = ttk.Scrollbar(frame, orient=tk.VERTICAL, command=viewer.yview)
        horizontal = ttk.Scrollbar(frame, orient=tk.HORIZONTAL, command=viewer.xview)
        viewer.configure(yscrollcommand=vertical.set, xscrollcommand=horizontal.set)
        viewer.grid(row=0, column=0, sticky="nsew")
        vertical.grid(row=0, column=1, sticky="ns")
        horizontal.grid(row=1, column=0, sticky="ew")
        frame.rowconfigure(0, weight=1)
        frame.columnconfigure(0, weight=1)
        viewer.tag_configure("added", foreground="#208040")
        viewer.tag_configure("removed", foreground="#b03030")
        for line in lines:
            tag = (
                "added" if line.startswith("+") and not line.startswith("+++")
                else "removed" if line.startswith("-") and not line.startswith("---")
                else None
            )
            viewer.insert(tk.END, line + "\n", tag)
        viewer.configure(state=tk.DISABLED)
        ttk.Button(frame, text="Close", command=dialog.destroy).grid(
            row=2, column=0, sticky="e", pady=(8, 0)
        )
        dialog.grab_set()
        dialog.focus_set()
        return "break"

    def _display_data(self, data_file: File) -> None:
        """Replace the visible data rows after a successful import.

        Require: ``data_file`` was parsed against the active Structure.
        Guarantee: show recognized format-0 values with source text, other
        format-0/2 files as direct text, or structured entries.
        Maintain: retain original bytes until the user edits the active File.
        Assert: entry-list row count equals the File entry count.
        """
        if self.document is None or data_file.structure is not self.document.structure:
            raise ValueError("data file does not match the active descriptor")
        if data_file is not self.data_file:
            self._clear_edit_history()
        self.data_file = data_file
        self.settings_document = None
        self.changes_button.configure(state=tk.NORMAL)
        # Clear stale ordinals before previews inspect the restored Entry collection.
        self.data_list.selection_remove(self.data_list.selection())
        self._update_icon_name_preview()
        self.editable_file.set(data_file.editable)
        self.editable_file_button.configure(state=tk.NORMAL)
        self.mass_modify_button.configure(
            state=tk.NORMAL if data_file.editable else tk.DISABLED
        )
        if self.gl_template is not None:
            self._rendered_gl_preview = None
            self.save_preview_button.configure(state=tk.DISABLED)
            self._replace_text(
                self.template_preview_text,
                "Select a data entry to preview direct field substitutions.",
            )
        self.edit_value_button.configure(state=tk.DISABLED)
        self.delete_entry_button.configure(state=tk.DISABLED)
        self.move_entry_up_button.configure(state=tk.DISABLED)
        self.move_entry_down_button.configure(state=tk.DISABLED)
        can_add_entry = data_file.editable and data_file.structure.format in {1, 3}
        self.add_entry_button.configure(
            state=tk.NORMAL if can_add_entry else tk.DISABLED
        )
        self.sort_button.configure(
            state=tk.NORMAL if can_add_entry else tk.DISABLED
        )
        for item in self.data_list.get_children():
            self.data_list.delete(item)
        for item in self.field_value_table.get_children():
            self.field_value_table.delete(item)
        self._field_value_targets.clear()
        self._entry_matrix_cells.clear()
        self._entry_matrix_paths = ()
        self._entry_matrix_columns.clear()
        self._active_grid_cell = None
        self._selected_field_dimension = None
        if data_file.structure.format in {0, 2}:
            self.mass_modify_button.pack(side=tk.LEFT, padx=(8, 0), before=self.editable_file_button)
            self.entry_mass_modify_button.pack_forget()
            self.group_mass_modify_button.pack_forget()
            self.entry_pane.pack_forget()
            self.entry_toolbar.pack_forget()
            self.raw_data_text.configure(state=tk.NORMAL)
            self.raw_data_text.delete("1.0", tk.END)
            source_text = data_file.raw_text
            self.raw_data_text.insert(
                "1.0", source_text.replace("\r\n", "\n").replace("\r", "\n")
            )
            self.raw_data_text.pack(fill=tk.BOTH, expand=True)
            can_edit_text = data_file.editable
            self.raw_data_text.configure(
                state=tk.NORMAL if can_edit_text else tk.DISABLED
            )
            self._populate_numeric_text_table(
                self.raw_data_text.get("1.0", "end-1c")
                if data_file.structure.format == 0
                else ""
            )
            self.raw_text_tabs.pack(fill=tk.BOTH, expand=True)
            if data_file.structure.format == 0 and self._numeric_text_records:
                self.raw_text_tabs.select(self.numeric_values_tab)
            else:
                self.raw_text_tabs.select(self.raw_source_tab)
            self.editable_file_button.configure(state=tk.NORMAL)
        else:
            self.mass_modify_button.pack_forget()
            self.entry_mass_modify_button.pack(
                side=tk.LEFT, padx=(8, 0), after=self.sort_button
            )
            self.entry_mass_modify_button.configure(
                state=tk.NORMAL if data_file.editable else tk.DISABLED
            )
            self.group_mass_modify_button.pack(
                side=tk.LEFT, padx=(8, 0), after=self.entry_mass_modify_button
            )
            self.group_mass_modify_button.configure(
                state=tk.NORMAL if data_file.editable else tk.DISABLED
            )
            self.raw_text_tabs.pack_forget()
            self.raw_data_text.pack_forget()
            self.entry_pane.pack(fill=tk.BOTH, expand=True)
            self.entry_toolbar.pack(fill=tk.X)
            self.editable_file_button.configure(state=tk.NORMAL)
            self._populate_entry_matrix(data_file)
        self.save_data_button.configure(state=tk.NORMAL)
        if data_file.structure.format in {0, 2}:
            disposition = "direct text" if data_file.structure.format == 0 else "format-2 text"
            self.status.set(f"Loaded {data_file.source}: {disposition}")
        else:
            self.status.set(f"Loaded {data_file.source}: {data_file.entries.count} entries")
        assert len(self.data_list.get_children()) == data_file.entries.count

    def _populate_numeric_text_table(self, text: str) -> None:
        """Refresh the optional table for named numeric text records.

        Require: ``text`` is active format-0 source text or an empty string.
        Guarantee: show every recognized record, or retain only the Source tab.
        Maintain: never interpret values or alter source text during display.
        Assert: each visible row maps to its source record ordinal.
        """
        selected = self.numeric_value_tree.selection()
        selected_ordinal = (
            int(selected[0].removeprefix("text-value-")) if selected else None
        )
        for item in self.numeric_value_tree.get_children():
            self.numeric_value_tree.delete(item)
        records = parse_numeric_text_records(text)
        self._numeric_text_records = records or ()
        has_values_tab = str(self.numeric_values_tab) in self.raw_text_tabs.tabs()
        if records and not has_values_tab:
            self.raw_text_tabs.insert(0, self.numeric_values_tab, text="Values")
        elif not records and has_values_tab:
            self.raw_text_tabs.forget(self.numeric_values_tab)
        if records:
            for index, record in enumerate(records):
                self.numeric_value_tree.insert(
                    "",
                    tk.END,
                    iid=f"text-value-{index}",
                    values=(record.key, " ".join(record.values), "number", record.comment),
                )
            if selected_ordinal is not None and selected_ordinal < len(records):
                self.numeric_value_tree.selection_set(f"text-value-{selected_ordinal}")
        self._update_numeric_edit_state()
        assert len(self.numeric_value_tree.get_children()) == len(self._numeric_text_records)

    def _populate_config_table(self) -> None:
        """Refresh rows from the active settings document and staged overlay.

        Require: ``settings_document`` is active.
        Guarantee: show each scoped setting path, current value, lexical type,
            and source comment in original order.
        Maintain: keep parser spans and original source bytes unchanged.
        Assert: each Treeview row maps to one ConfigValue ordinal.
        """
        settings = self.settings_document
        if settings is None:
            return
        selected = self.numeric_value_tree.selection()
        selected_indices = tuple(
            int(item.removeprefix("setting-"))
            for item in selected
            if item.startswith("setting-")
        )
        for item in self.numeric_value_tree.get_children():
            self.numeric_value_tree.delete(item)
        for index, value in enumerate(settings.values):
            current = settings.current_value(value)
            label = config_value_label(value, current)
            self.numeric_value_tree.insert(
                "", tk.END, iid=f"setting-{index}",
                values=(value.path, label, value.kind, value.comment),
            )
        for index in selected_indices:
            if index < len(settings.values):
                self.numeric_value_tree.selection_add(f"setting-{index}")
        self._update_numeric_edit_state()
        assert len(self.numeric_value_tree.get_children()) == len(settings.values)

    def _select_all_numeric_values(self, _event: object = None) -> str:
        """Select every displayed scalar value for keyboard bulk operations."""
        rows = self.numeric_value_tree.get_children()
        if rows:
            self.numeric_value_tree.selection_set(rows)
        self.numeric_value_tree.focus_set()
        return "break"

    def _show_numeric_value_context_menu(self, event: tk.Event) -> None:
        """Show Windows-style edit and formula actions for the clicked row."""
        row = self.numeric_value_tree.identify_row(event.y)
        if row and row not in self.numeric_value_tree.selection():
            self.numeric_value_tree.selection_set(row)
        self.numeric_value_tree.focus_set()
        self._update_numeric_edit_state()
        menu = tk.Menu(self.root, tearoff=False)
        menu.add_command(
            label="Edit value…",
            command=self.edit_numeric_text_record,
            state=(
                tk.NORMAL
                if str(self.edit_numeric_value_button.cget("state")) == tk.NORMAL
                else tk.DISABLED
            ),
        )
        menu.add_command(
            label="Mass modify…",
            command=self.mass_modify_dialog,
            state=(
                tk.NORMAL
                if str(self.config_formula_button.cget("state")) == tk.NORMAL
                else tk.DISABLED
            ),
        )
        menu.tk_popup(event.x_root, event.y_root)

    def _update_numeric_edit_state(self, _event: object = None) -> None:
        """Enable text-record editing only for an editable selected row.

        Require: current selection belongs to ``numeric_value_tree``.
        Guarantee: reflect the File editability and row selection in the button.
        Maintain: leave text records and the active File unchanged.
        Assert: the action is disabled when no eligible row is selected.
        """
        if self.settings_document is not None:
            selected = self.numeric_value_tree.selection()
            can_edit = self.settings_document.editable and bool(selected)
            self.edit_numeric_value_button.configure(
                state=tk.NORMAL if can_edit else tk.DISABLED
            )
            can_formula = self.settings_document.editable and any(
                value.kind == "number" for value in self.settings_document.values
            )
            self.config_formula_button.configure(
                state=tk.NORMAL if can_formula else tk.DISABLED
            )
            return
        can_edit = (
            self.data_file is not None
            and self.data_file.structure.format == 0
            and self.data_file.editable
            and bool(self.numeric_value_tree.selection())
        )
        self.edit_numeric_value_button.configure(
            state=tk.NORMAL if can_edit else tk.DISABLED
        )
        can_numeric_formula = (
            self.data_file is not None
            and self.data_file.structure.format == 0
            and self.data_file.editable
            and bool(self._numeric_text_records)
        )
        self.config_formula_button.configure(
            state=tk.NORMAL if can_numeric_formula else tk.DISABLED
        )

    def edit_numeric_text_record(self, _event: object = None) -> None:
        """Edit all numeric values in one recognized format-0 record.

        Require: one recognized record is selected in an editable format-0 File.
        Guarantee: patch only its numeric tokens and refresh both source and table.
        Maintain: preserve comments, spacing, line endings, and other records.
        Assert: replacement arity matches the selected record's value count.
        """
        if self.settings_document is not None:
            self._edit_config_value()
            return
        if self.data_file is None or not self.data_file.editable:
            return
        selection = self.numeric_value_tree.selection()
        if not selection:
            return
        index = int(selection[0].removeprefix("text-value-"))
        record = self._numeric_text_records[index]
        initial = " ".join(record.values)
        replacement = simpledialog.askstring(
            "Edit text values",
            f"{record.key} values (enter {len(record.values)} number(s))",
            initialvalue=initial,
            parent=self.root,
        )
        if replacement is None:
            return
        values = replacement.split()
        if len(values) != len(record.values):
            messagebox.showerror(
                "Invalid text values",
                f"{record.key} requires exactly {len(record.values)} numeric value(s).",
                parent=self.root,
            )
            return
        text = self.raw_data_text.get("1.0", "end-1c")
        updated = text
        try:
            for ordinal in reversed(range(len(values))):
                updated = replace_numeric_text_value(text, record, ordinal, values[ordinal])
                text = updated
                if ordinal:
                    reparsed = parse_numeric_text_records(text)
                    if reparsed is None:
                        raise AssertionError("numeric text stopped matching after a token patch")
                    record = reparsed[index]
        except ValueError as error:
            messagebox.showerror("Invalid text values", str(error), parent=self.root)
            return
        undo_state = self._capture_undo()
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert("1.0", updated.replace("\r\n", "\n").replace("\r", "\n"))
        self.raw_data_text.configure(state=tk.NORMAL if self.data_file.editable else tk.DISABLED)
        self.data_file.set_raw_text(self.raw_data_text.get("1.0", "end-1c"))
        self._push_undo(undo_state, "edit numeric values")
        self._populate_numeric_text_table(self.raw_data_text.get("1.0", "end-1c"))
        self.numeric_value_tree.selection_set(f"text-value-{index}")
        self.status.set(f"Edited {record.key}; save the data file copy to keep the change.")

    def _edit_config_value(self) -> None:
        """Edit selected settings scalars through their lexical type contract.

        Require: one or more rows belong to the active editable settings document.
        Guarantee: validate and apply one value, or each selected flag, atomically.
        Maintain: preserve original source spans and all unselected text.
        Assert: an invalid replacement leaves the prior overlay untouched.
        """
        settings = self.settings_document
        if settings is None or not settings.editable:
            return
        selected = self.numeric_value_tree.selection()
        if not selected:
            return
        targets = tuple(
            settings.values[int(item.removeprefix("setting-"))] for item in selected
        )
        if all(value.kind == "flag" for value in targets):
            enabled = messagebox.askyesnocancel(
                "Edit presence flags",
                f"Turn {len(targets)} selected presence flag(s) on? Choose No to remove them.",
                parent=self.root,
            )
            if enabled is None:
                return
            replacements = {value.path: enabled for value in targets}
        elif len(targets) != 1:
            messagebox.showinfo(
                "Edit one value",
                "Select one value to edit; use Mass modify for multi-row numeric changes.",
                parent=self.root,
            )
            return
        else:
            value = targets[0]
            current = settings.current_value(value)
            if value.kind == "boolean":
                result = messagebox.askyesnocancel(
                    f"Edit {value.path}", f"Current: {current}\n\nSet to true?", parent=self.root
                )
                if result is None:
                    return
                replacement = result
            else:
                replacement = simpledialog.askstring(
                    "Edit setting value",
                    f"{value.path} ({value.kind})",
                    initialvalue=str(current),
                    parent=self.root,
                )
                if replacement is None:
                    return
            replacements = {value.path: replacement}
        undo_state = self._capture_undo()
        previous = dict(settings.replacements or {})
        try:
            settings.update(replacements)
        except (UnicodeError, ValueError) as error:
            settings.replacements = previous
            messagebox.showerror("Invalid setting value", str(error), parent=self.root)
            return
        self._push_undo(undo_state, "edit setting")
        self._populate_config_table()
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert("1.0", settings.current_text.replace("\r\n", "\n").replace("\r", "\n"))
        self.raw_data_text.configure(state=tk.DISABLED)
        self.status.set("Settings edited in memory; save a data-file copy to keep the change.")

    def config_formula_dialog(self) -> None:
        """Preview then atomically apply a numeric formula to selected settings.

        Require: active editable settings document has at least one numeric value.
        Guarantee: evaluate against one pre-edit project snapshot before mutation.
        Maintain: no recursive reads of values written by the current batch.
        Assert: a failed evaluation leaves all staged replacements unchanged.
        """
        settings = self.settings_document
        if settings is None or not settings.editable:
            return
        selected = self.numeric_value_tree.selection()
        numeric = tuple(value for value in settings.values if value.kind == "number")
        targets = tuple(
            settings.values[int(item.removeprefix("setting-"))]
            for item in selected
            if item.startswith("setting-")
        ) if selected else numeric
        targets = tuple(value for value in targets if value.kind == "number")
        if not targets:
            messagebox.showinfo("Mass modify settings", "Select numeric settings or leave the selection empty to target all numeric settings.", parent=self.root)
            return
        expression = simpledialog.askstring(
            "Mass modify settings",
            f"Formula for {len(targets)} numeric value(s). Use value, Math, setting(file, path), and ref(ces, entry, field).\nExample: value * 1.1",
            parent=self.root,
        )
        if expression is None:
            return
        if self.project_view is None:
            snapshot_specs = ()
        else:
            snapshot_specs = tuple(self.project_view.project.file_specs)
        snapshot: dict[str, ConfigDocument] = {settings.file_name.casefold(): settings}
        def config_snapshot(file_name: str) -> ConfigDocument:
            key = Path(file_name).name.casefold()
            if key not in SETTINGS_FILE_NAMES:
                raise ValueError(f"unsupported settings file {file_name!r}")
            if key in snapshot:
                return snapshot[key]
            matches = tuple(spec for spec in snapshot_specs if Path(spec.data_name).name.casefold() == key)
            if len(matches) != 1:
                raise ValueError(f"project setting {file_name!r} is {'missing' if not matches else 'ambiguous'}")
            spec = matches[0]
            path = spec.resolve_data_path(self.project_view.project_directory, self.project_view.structure_root, self.project_view.data_root, self.project_view.language)
            raw = path.read_bytes()
            text = raw.decode("cp1252")
            values = parse_config_values(text, spec.data_name)
            if values is None:
                raise ValueError(f"{path} does not match its supported settings syntax")
            document = ConfigDocument(str(path), spec.data_name, raw, values, editable=False)
            snapshot[key] = document
            return document
        def setting_at(file_name: str, path: str) -> object:
            document = config_snapshot(file_name)
            matches = tuple(value for value in document.values if value.path.casefold() == path.casefold())
            if len(matches) != 1:
                raise ValueError(f"setting {path!r} in {file_name!r} is {'missing' if not matches else 'ambiguous'}")
            return document.current_value(matches[0])
        reference = None
        if self.project_view is not None:
            reference = lambda structure, entry, path: resolve_project_formula_reference(self.project_view, structure, entry, path)
        try:
            results = {
                target.path: evaluate_settings_formula(
                    expression,
                    current_value=str(settings.current_value(target)),
                    setting_at=setting_at,
                    reference=reference,
                )
                for target in targets
            }
        except (ArithmeticError, OSError, TypeError, UnicodeError, ValueError) as error:
            messagebox.showerror("Cannot preview formula", str(error), parent=self.root)
            return
        preview = "\n".join(f"{path}: {settings.current_value(next(v for v in targets if v.path == path))} → {result}" for path, result in list(results.items())[:8])
        if len(results) > 8:
            preview += f"\n… and {len(results) - 8} more"
        if not messagebox.askyesno("Apply formula?", f"Preview ({len(results)} values):\n{preview}\n\nApply all results?", parent=self.root):
            return
        undo_state = self._capture_undo()
        try:
            settings.update(results)
        except (UnicodeError, ValueError) as error:
            messagebox.showerror("Cannot apply formula", str(error), parent=self.root)
            return
        self._push_undo(undo_state, "settings formula")
        self._populate_config_table()
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert("1.0", settings.current_text.replace("\r\n", "\n").replace("\r", "\n"))
        self.raw_data_text.configure(state=tk.DISABLED)
        self.status.set(f"Updated {len(results)} settings from a pre-edit snapshot; save a data-file copy to keep the change.")

    def _populate_entry_matrix(self, data_file: File) -> None:
        """Build the Entry-by-field grid from ordered instance paths.

        Require: ``data_file`` is the active structured File.
        Guarantee: each Entry is a row and every observed field path is a
        column; nested values appear as compact JSON and remain inspectable in
        the selected-Entry detail table.
        Maintain: infer no new editable types and retain source field order.
        Assert: row and cell maps point to the exact parsed FieldInstances.
        """
        entries = tuple(data_file.entries)
        per_entry: list[dict[str, FieldInstance]] = []
        path_order: list[str] = []
        path_inferred: dict[str, bool] = {}
        for entry in entries:
            entry_paths = _entry_field_paths(entry)
            values = {path: instance for path, instance, _ in entry_paths}
            per_entry.append(values)
            for path, instance, _ in entry_paths:
                if path not in path_inferred:
                    path_order.append(path)
                    path_inferred[path] = instance.field.inferred
        self._entry_matrix_paths = tuple(path_order)
        column_ids = tuple(f"field-column-{index}" for index in range(len(path_order)))
        self._entry_matrix_columns = dict(zip(path_order, column_ids, strict=True))
        self.data_list.configure(columns=column_ids)
        self.data_list.heading("#0", text="Entry")
        for path, column in self._entry_matrix_columns.items():
            title = f"{path}  • unknown type" if path_inferred[path] else path
            self.data_list.heading(
                column,
                text=title,
                command=lambda selected=path: self._select_field_dimension(selected),
            )
            self.data_list.column(
                column,
                width=min(260, max(110, len(title) * 8)),
                minwidth=90,
                anchor=tk.W,
                stretch=False,
            )
        editable_by_entry = [
            _ui_editable_entry_ids(entry)
            for entry in entries
        ]
        for index, (entry, values_by_path) in enumerate(zip(entries, per_entry, strict=True)):
            row_values: list[str] = []
            for path in path_order:
                instance = values_by_path.get(path)
                if instance is None:
                    row_values.append("")
                    continue
                value = _entry_value_display(instance)
                row_values.append(value)
                self._entry_matrix_cells[(index, path)] = (
                    instance,
                    data_file.editable and id(instance) in editable_by_entry[index],
                )
            self.data_list.insert(
                "",
                tk.END,
                iid=f"entry-{index}",
                text=entry.name,
                values=tuple(row_values),
            )
        assert len(self.data_list.get_children()) == len(entries)
        assert len(self._entry_matrix_cells) == sum(map(len, per_entry))

    def _select_all_entries(self, _event: object = None) -> str:
        """Select every displayed Entry row for standard Ctrl+A behavior.

        Require: the Entries Treeview is initialized and receives the key event.
        Guarantee: return every displayed row as a selected item.
        Maintain: do not modify File values, row order, or save state.
        Assert: each selected item belongs to the current matrix.
        """
        rows = self.data_list.get_children("")
        if rows:
            self.data_list.selection_set(rows)
            self.data_list.focus(rows[0])
            self.data_list.see(rows[0])
        assert set(self.data_list.selection()).issubset(rows)
        return "break"

    def _select_field_dimension(self, path: str) -> None:
        """Select a field column as the target dimension for bulk operations.

        Require: ``path`` is one of the active matrix columns.
        Guarantee: record the selected dimension and announce mass-modify scope.
        Maintain: selecting a column does not change any field values.
        Assert: selected dimension maps to a displayed column.
        """
        if path not in self._entry_matrix_columns:
            raise KeyError(path)
        editable_dimension = any(
            cell_path == path and editable
            for (_, cell_path), (_, editable) in self._entry_matrix_cells.items()
        )
        self._selected_field_dimension = path if editable_dimension else None
        if not editable_dimension:
            self.status.set(
                f"Selected {path}; this column has no editable declared scalar values for bulk editing."
            )
            return
        self.status.set(
            f"Field dimension selected: {path}; Mass modify can apply across all or selected Entries."
        )

    def _refresh_entry_matrix_values(self) -> None:
        """Refresh visible matrix cells from current Entry values.

        Require: active structured File and matrix rows have been populated.
        Guarantee: every displayed cell reflects its current FieldInstance.
        Maintain: preserve Entry selection, column order, and horizontal scroll.
        Assert: every existing matrix row maps to one File Entry.
        """
        if self.data_file is None:
            return
        for index, entry in enumerate(self.data_file.entries):
            iid = f"entry-{index}"
            if not self.data_list.exists(iid):
                continue
            instances = {
                path: instance for path, instance, _ in _entry_field_paths(entry)
            }
            editable_ids = _ui_editable_entry_ids(entry)
            for path, column in self._entry_matrix_columns.items():
                instance = instances.get(path)
                value = ""
                if instance is not None:
                    value = _entry_value_display(instance)
                    editable = self.data_file.editable and id(instance) in editable_ids
                    self._entry_matrix_cells[(index, path)] = (instance, editable)
                self.data_list.set(iid, column, value)
        assert len(self.data_list.get_children()) == self.data_file.entries.count

    def _select_entry_grid_cell(self, event: tk.Event) -> None:
        """Track the clicked matrix cell and synchronize its detail row.

        Require: a mouse click in the Entry matrix.
        Guarantee: remember its Entry and field path; show that path in details.
        Maintain: do not alter selection semantics or model values.
        Assert: only real data cells become active edit targets.
        """
        item = self.data_list.identify_row(event.y)
        path = self._entry_grid_path_for_column(
            self.data_list.identify_column(event.x)
        )
        if not item.startswith("entry-") or path is None:
            return
        index = int(item.removeprefix("entry-"))
        if (index, path) not in self._entry_matrix_cells:
            self._active_grid_cell = None
            return
        self._active_grid_cell = (index, path)
        self._select_field_dimension(path)
        self._select_detail_field_path(path)

    def _entry_grid_path_for_column(self, column: str) -> str | None:
        """Map Tk's ordinal Treeview column identifier to a field path.

        Require: the Entries matrix columns match ``_entry_matrix_paths`` order.
        Guarantee: return the path for a data column or None for the Entry column.
        Maintain: do not infer paths from display labels or custom column IDs.
        Assert: every returned path has a configured matrix column.
        """
        if not column.startswith("#"):
            return None
        try:
            index = int(column[1:]) - 1
        except ValueError:
            return None
        if not 0 <= index < len(self._entry_matrix_paths):
            return None
        path = self._entry_matrix_paths[index]
        assert path in self._entry_matrix_columns
        return path

    def _select_detail_field_path(self, path: str) -> None:
        """Select the matching detail row when a matrix field is activated.

        Require: the detail table describes the currently selected Entry.
        Guarantee: synchronize its row selection with the matrix path.
        Maintain: do not change Entry selection or values.
        Assert: only an existing path is selected.
        """
        item = next(
            (
                row
                for row in self.field_value_table.get_children()
                if self.field_value_table.item(row, "text") == path
            ),
            None,
        )
        if item is not None:
            self.field_value_table.selection_set(item)
            self.field_value_table.focus(item)
        self._on_field_value_selected()

    def _edit_entry_grid_cell(self, event: tk.Event) -> None:
        """Edit the selected scalar matrix cell on double-click.

        Require: a double-click on a data cell.
        Guarantee: use the validated scalar editor for editable cells.
        Maintain: read-only and nested JSON cells remain unchanged.
        Assert: the active edit target is a supported source-spanned scalar.
        """
        self._select_entry_grid_cell(event)
        target = self._entry_matrix_cells.get(self._active_grid_cell)
        if target is not None and target[1]:
            self.edit_selected_value()

    def _show_entry_grid_context_menu(self, event: tk.Event) -> str:
        """Select the clicked matrix target and post its Edit value action.

        Require: an Entry matrix right-click event and initialized context menu.
        Guarantee: edit is enabled only for the clicked editable field cell.
        Maintain: preserve a multi-selection when it already contains the Entry.
        Assert: the shared editor can resolve the clicked matrix cell exactly.
        """
        item = self.data_list.identify_row(event.y)
        path = self._entry_grid_path_for_column(
            self.data_list.identify_column(event.x)
        )
        if not item.startswith("entry-") or path is None:
            return "break"
        index = int(item.removeprefix("entry-"))
        if item not in self.data_list.selection():
            self.data_list.selection_set(item)
        self.data_list.focus(item)
        self._select_entry_grid_cell(event)
        self._active_grid_cell = (index, path)
        self.show_selected_entry(preferred_path=path)
        target = self._entry_matrix_cells.get((index, path))
        self._post_edit_context_menu(
            self.entry_context_menu,
            event,
            bool(self.data_file and self.data_file.editable and target and target[1]),
        )
        return "break"

    def _show_field_value_context_menu(self, event: tk.Event) -> str:
        """Select the clicked detail row and post its Edit value action.

        Require: a field-value table right-click event and initialized menu.
        Guarantee: edit is enabled only for the clicked editable field instance.
        Maintain: clear matrix targeting so the detail row owns this edit.
        Assert: read-only detail rows cannot enter the edit path.
        """
        item = self.field_value_table.identify_row(event.y)
        if not item:
            return "break"
        self.field_value_table.selection_set(item)
        self.field_value_table.focus(item)
        self._active_grid_cell = None
        self._on_field_value_selected()
        target = self._field_value_targets.get(item)
        self._post_edit_context_menu(
            self.field_value_context_menu,
            event,
            bool(self.data_file and self.data_file.editable and target and target[2]),
        )
        return "break"

    @staticmethod
    def _post_edit_context_menu(
        menu: tk.Menu, event: tk.Event, enabled: bool
    ) -> None:
        """Post the shared one-action Edit value menu at the pointer.

        Require: menu contains one Edit value command and event has root coords.
        Guarantee: show the command with its current target's enabled state.
        Maintain: release the temporary menu grab after posting.
        Assert: command state matches the target's writability.
        """
        menu.entryconfigure(0, state=tk.NORMAL if enabled else tk.DISABLED)
        try:
            menu.tk_popup(event.x_root, event.y_root)
        finally:
            menu.grab_release()

    def _sync_raw_text(self, _event: object = None) -> None:
        """Keep format-0/2 text edits in the active File model.

        Require: an editable format-0/2 File is shown in the raw text widget.
        Guarantee: retain CP1252 widget text and record one changed state.
        Maintain: leave structured and uneditable Files unchanged.
        Assert: the active File exposes the resulting text.
        """
        if (
            self.data_file is not None
            and self.data_file.structure.format in {0, 2}
            and self.data_file.editable
        ):
            text = self.raw_data_text.get("1.0", "end-1c")
            try:
                text.encode("cp1252")
            except UnicodeEncodeError:
                self.status.set("Text contains characters outside CP1252; the last accepted data is retained.")
                return
            undo_state = self._capture_undo()
            self.data_file.set_raw_text(text)
            self._push_undo(undo_state, "edit source text")
            self._populate_numeric_text_table(
                text if self.data_file.structure.format == 0 else ""
            )

    def _toggle_file_editable(self) -> None:
        """Apply the visible editability control to the active File.

        Require: a File is loaded and the control reflects the requested state.
        Guarantee: update File editability and enable its supported text editor.
        Maintain: duplicate Files inherit the model's editability state.
        Assert: the active File and checkbox agree.
        """
        if self.settings_document is not None:
            self.settings_document.editable = self.editable_file.get()
            self._update_history_controls()
            self.mass_modify_button.configure(
                state=tk.NORMAL if self.settings_document.editable else tk.DISABLED
            )
            self._update_numeric_edit_state()
            assert self.settings_document.editable is self.editable_file.get()
            return
        if self.data_file is None:
            return
        self.data_file.editable = self.editable_file.get()
        self._update_history_controls()
        self.mass_modify_button.configure(
            state=tk.NORMAL if self.data_file.editable else tk.DISABLED
        )
        self.entry_mass_modify_button.configure(
            state=(
                tk.NORMAL
                if self.data_file.editable and self.data_file.structure.format in {1, 3}
                else tk.DISABLED
            )
        )
        self.group_mass_modify_button.configure(
            state=(
                tk.NORMAL
                if self.data_file.editable and self.data_file.structure.format in {1, 3}
                else tk.DISABLED
            )
        )
        self._refresh_entry_matrix_values()
        self._update_numeric_edit_state()
        can_add_entry = (
            self.data_file.editable and self.data_file.structure.format in {1, 3}
        )
        self.add_entry_button.configure(
            state=tk.NORMAL if can_add_entry else tk.DISABLED
        )
        self.sort_button.configure(
            state=tk.NORMAL if can_add_entry else tk.DISABLED
        )
        if self.data_file.structure.format in {0, 2}:
            self.raw_data_text.configure(
                state=tk.NORMAL if self.data_file.editable else tk.DISABLED
            )
        selection = self.data_list.selection()
        if selection:
            self.show_selected_entry()
        else:
            self.move_entry_up_button.configure(state=tk.DISABLED)
            self.move_entry_down_button.configure(state=tk.DISABLED)
        assert self.data_file.editable is self.editable_file.get()

    def show_selected_entry(
        self, _event: object = None, preferred_path: str | None = None
    ) -> None:
        """Show the selected Entry's field-value table and related previews.

        Require: a data File is loaded and the selection is an entry row.
        Guarantee: show field paths, values and editability, including bound nested Entries.
        Maintain: do not convert or mutate values.
        Assert: selected ordinal resolves to the displayed Entry.
        """
        if self.data_file is None:
            self._clear_field_value_table()
            self.edit_value_button.configure(state=tk.DISABLED)
            self.delete_entry_button.configure(state=tk.DISABLED)
            self.move_entry_up_button.configure(state=tk.DISABLED)
            self.move_entry_down_button.configure(state=tk.DISABLED)
            self._update_icon_name_preview()
            self._refresh_gl_targets(None)
            return
        selection = self.data_list.selection()
        if not selection:
            self._clear_field_value_table()
            self.edit_value_button.configure(state=tk.DISABLED)
            self.delete_entry_button.configure(state=tk.DISABLED)
            self.move_entry_up_button.configure(state=tk.DISABLED)
            self.move_entry_down_button.configure(state=tk.DISABLED)
            self._update_icon_name_preview()
            self._refresh_gl_targets(None)
            return
        index = int(selection[0].removeprefix("entry-"))
        entry = self.data_file.entries.item(index + 1)
        if (
            preferred_path is None
            and self._active_grid_cell is not None
            and self._active_grid_cell[0] == index
        ):
            preferred_path = self._active_grid_cell[1]
        self._show_entry_field_values(entry, preferred_path)
        self._refresh_gl_targets(entry)
        self._update_icon_name_preview(entry=entry)
        self._on_field_value_selected()
        can_delete = (
            self.data_file.editable and self.data_file.structure.format in {1, 3}
        )
        self.delete_entry_button.configure(
            state=tk.NORMAL if can_delete else tk.DISABLED
        )
        self.move_entry_up_button.configure(
            state=tk.NORMAL if can_delete and index > 0 else tk.DISABLED
        )
        self.move_entry_down_button.configure(
            state=(
                tk.NORMAL
                if can_delete and index + 1 < self.data_file.entries.count
                else tk.DISABLED
            )
        )
        if self.gl_template is not None:
            self._render_template_for_entry(entry)

    def _clear_field_value_table(self) -> None:
        """Clear the selected-Entry field table and its edit targets.

        Require: field-value table widgets have been initialized.
        Guarantee: no prior Entry values or edit targets remain visible.
        Maintain: do not change the active File model.
        Assert: the table and target mapping are both empty.
        """
        for item in self.field_value_table.get_children():
            self.field_value_table.delete(item)
        self._field_value_targets.clear()
        self.edit_value_button.configure(state=tk.DISABLED)

    def _show_entry_field_values(
        self, entry: Entry, preferred_path: str | None = None
    ) -> None:
        """Render every direct and bound nested value as a table row.

        Require: ``entry`` belongs to the displayed structured File.
        Guarantee: show each source-order field path, raw value, schema status,
        and whether this editor can safely edit it.
        Maintain: unknown and unsupported fields remain visible and read-only.
        Assert: every editable row points to a value accepted by the writer.
        """
        self._clear_field_value_table()
        editable = {
            id(instance): path
            for _, path, instance in _editable_entry_values(entry)
        }
        first_editable: str | None = None
        for ordinal, (path, instance, _depth) in enumerate(
            _entry_field_paths(entry), start=1
        ):
            is_nested = isinstance(instance.value, Entry)
            is_raw_nested = _is_raw_nested_value(instance)
            editable_path = editable.get(id(instance))
            can_edit = bool(
                self.data_file is not None
                and self.data_file.editable
                and (editable_path is not None or is_raw_nested)
            )
            if is_nested:
                value = f"Entry: {instance.value.name}"
                kind = "Nested entry"
            elif is_raw_nested:
                value = "{…}"
                kind = "Raw nested block"
            else:
                value = instance.value_as_string
                kind = "Unknown type" if instance.field.inferred else "Declared"
            access = "Editable" if can_edit else "Read-only"
            item = f"field-value-{ordinal}"
            self.field_value_table.insert(
                "",
                tk.END,
                iid=item,
                text=path,
                values=(value, kind, access),
                tags=("editable" if can_edit else "read-only",),
            )
            self._field_value_targets[item] = (path, instance, can_edit)
            if can_edit and first_editable is None:
                first_editable = item
        self.field_value_table.tag_configure("read-only", foreground="#666666")
        target = next(
            (
                item
                for item, (path, _instance, can_edit)
                in self._field_value_targets.items()
                if can_edit and path == preferred_path
            ),
            first_editable,
        )
        if target is not None:
            self.field_value_table.selection_set(target)
            self.field_value_table.focus(target)
            self.field_value_table.see(target)
        self._on_field_value_selected()

    def _on_field_value_selected(self, _event: object = None) -> None:
        """Enable editing only when the selected table row is writable.

        Require: field-value table and edit button exist.
        Guarantee: edit state reflects the row and writable scalar selection sets
        the default batch dimension to its exact field path.
        Maintain: selection does not mutate source values.
        Assert: read-only rows never enable the edit action.
        """
        selection = self.field_value_table.selection()
        target = self._field_value_targets.get(selection[0]) if selection else None
        if (
            self.data_file is not None
            and self.data_file.structure.format in {1, 3}
            and target is not None
            and target[2]
        ):
            self._selected_field_dimension = target[0]
        enabled = bool(
            self.data_file is not None
            and self.data_file.editable
            and target is not None
            and target[2]
        )
        self.edit_value_button.configure(state=tk.NORMAL if enabled else tk.DISABLED)

    def _edit_field_value_row(self, event: tk.Event) -> None:
        """Edit a selected editable field row on a value-cell double-click.

        Require: a Treeview double-click event.
        Guarantee: invoke the same validated edit path used by the toolbar.
        Maintain: clicks on field names or read-only values do not mutate data.
        Assert: only rows selected in the field table can be edited.
        """
        if self.field_value_table.identify_column(event.x) != "#1":
            return
        item = self.field_value_table.identify_row(event.y)
        if item:
            self.field_value_table.selection_set(item)
            self.edit_selected_value()

    def move_selected_entry(self, direction: int) -> None:
        """Move the selected structured Entry one row and refresh its view.

        Require: direction is -1 or 1, and a selected editable format-1/3
        Entry can move one position in that direction.
        Guarantee: move the Entry in memory and keep it selected.
        Maintain: persistence remains deferred to Save; boundaries do nothing.
        Assert: selected Entry identity and visible row order match the File.
        """
        if direction not in {-1, 1}:
            raise ValueError("direction must be -1 or 1")
        if (
            self.data_file is None
            or not self.data_file.editable
            or self.data_file.structure.format not in {1, 3}
        ):
            return
        selection = self.data_list.selection()
        if not selection:
            return
        index = int(selection[0].removeprefix("entry-"))
        destination = index + direction
        if destination < 0 or destination >= self.data_file.entries.count:
            return
        undo_state = self._capture_undo()
        entry = self.data_file.move_entry(index + 1, destination + 1)
        self._push_undo(undo_state, "move entry")
        data_file = self.data_file
        self._display_data(data_file)
        iid = f"entry-{destination}"
        self.data_list.selection_set(iid)
        self.data_list.see(iid)
        self.show_selected_entry()
        self.status.set(
            f"Moved {entry.name}; save the data file copy to keep the change."
        )
        assert data_file.entries.item(destination + 1) is entry
        assert len(self.data_list.get_children()) == data_file.entries.count

    def delete_selected_entry(self) -> None:
        """Remove the selected structured Entry from the in-memory File.

        Require: an editable format-1/3 File and a selected Entry row.
        Guarantee: remove that one-based ordinal, refresh the Entry list, and
        defer persistence until the user saves the data-file copy.
        Maintain: leave all remaining Entry objects in source order.
        Assert: displayed row count equals the remaining File Entry count.
        """
        if (
            self.data_file is None
            or not self.data_file.editable
            or self.data_file.structure.format not in {1, 3}
        ):
            return
        selection = self.data_list.selection()
        if not selection:
            return
        index = int(selection[0].removeprefix("entry-"))
        undo_state = self._capture_undo()
        removed = self.data_file.entries.remove(index + 1)
        self._push_undo(undo_state, "delete entry")
        data_file = self.data_file
        self._display_data(data_file)
        self.status.set(
            f"Removed {removed.name}; save the data file copy to keep the change."
        )
        assert len(self.data_list.get_children()) == data_file.entries.count

    def add_entry(self) -> None:
        """Create a default-valued Entry from a name prompt.

        Require: an editable format-1/3 File is displayed.
        Guarantee: append and display a new Entry using serializable defaults.
        Maintain: keep persistence deferred until the user saves the data copy.
        Assert: displayed row count equals the File Entry count.
        """
        if (
            self.data_file is None
            or not self.data_file.editable
            or self.data_file.structure.format not in {1, 3}
        ):
            return
        name = simpledialog.askstring(
            "Add entry",
            "Entry name:",
            parent=self.root,
        )
        if name is None:
            return
        undo_state = self._capture_undo()
        entry = None
        try:
            entry = self.data_file.add_entry(name)
            entry.to_text()
            self.data_file.to_bytes()
        except (OSError, TypeError, ValueError, NotImplementedError, UnicodeEncodeError) as error:
            if entry is not None:
                ordinal = self.data_file.entries.index_of(entry)
                if ordinal is not None:
                    self.data_file.entries.remove(ordinal)
            messagebox.showerror("Cannot add entry", str(error), parent=self.root)
            return
        self._push_undo(undo_state, "add entry")
        data_file = self.data_file
        self._display_data(data_file)
        iid = f"entry-{data_file.entries.count - 1}"
        self.data_list.selection_set(iid)
        self.data_list.see(iid)
        self.status.set(
            f"Added {entry.name} with descriptor defaults; "
            "save the data file copy to keep the change."
        )
        assert len(self.data_list.get_children()) == data_file.entries.count

    def _apply_mass_modification(
        self,
        field_name: str,
        operation: str,
        operand: str,
        *,
        selected_only: bool,
        round_off: bool,
        reference_resolver: Callable[[str, str, str], object] | None = None,
    ) -> int:
        """Apply the dialog's validated operation to the active File.

        Require: an editable format-1/3 File and a declared direct or nested
        scalar field path;
        selected-only mode has at least one selected Entry row.
        Guarantee: delegate the atomic transform and optional project resolver
        to File.mass_modify, refresh the visible selected Entry, and report the
        number of changed values.
        Maintain: do not write to disk or change Entry selection.
        Assert: a successful batch serializes through the File model.
        """
        if self.data_file is None:
            raise ValueError("no data file is loaded")
        selected_ordinals = tuple(
            int(item.removeprefix("entry-")) + 1
            for item in self.data_list.selection()
        )
        if selected_only and not selected_ordinals:
            raise ValueError("select one or more Entries first")
        options: dict[str, object] = {
            "entry_ordinals": selected_ordinals if selected_only else None,
            "round_off": round_off,
        }
        if reference_resolver is not None:
            options["reference_resolver"] = reference_resolver
        undo_state = self._capture_undo()
        count = self.data_file.mass_modify(field_name, operation, operand, **options)
        self._push_undo(undo_state, "mass modification")
        self._refresh_entry_matrix_values()
        if selected_ordinals:
            self.show_selected_entry()
        self.status.set(
            f"Mass modified {count} value(s); save the data file copy to keep the change."
        )
        return count

    def _mass_modify_numeric_text(self) -> None:
        """Apply one formula to all or selected values in named numeric text.

        Require: an editable format-0 File matches the numeric-record parser.
        Guarantee: evaluate the complete selected scalar batch before patching.
        Maintain: preserve every token span, comment, separator, and line ending.
        Assert: a failed expression or stale span leaves the active File unchanged.
        """
        data_file = self.data_file
        records = self._numeric_text_records
        if data_file is None or not data_file.editable or not records:
            return
        selected = tuple(
            int(item.removeprefix("text-value-"))
            for item in self.numeric_value_tree.selection()
            if item.startswith("text-value-")
        )
        ordinals = selected if selected else tuple(range(len(records)))
        expression = simpledialog.askstring(
            "Mass modify numeric values",
            f"Formula for values in {len(ordinals)} selected row(s), or all rows when none are selected. Use value and Math.\nExample: value * 1.1",
            parent=self.root,
        )
        if expression is None:
            return
        plan: dict[tuple[str, int], str] = {}
        def unsupported_setting_lookup(_file_name: str, _path: str) -> object:
            """Reject cross-settings lookup without changing numeric text input."""
            raise ValueError("setting references require a Gamefile settings file")

        try:
            for record_index in ordinals:
                record = records[record_index]
                for value_index, old_value in enumerate(record.values):
                    result = evaluate_settings_formula(
                        expression,
                        current_value=old_value,
                        setting_at=unsupported_setting_lookup,
                    )
                    plan[(record.key, value_index)] = str(result)
        except (ArithmeticError, TypeError, ValueError) as error:
            messagebox.showerror("Cannot preview formula", str(error), parent=self.root)
            return
        preview = []
        for (key, ordinal), result in list(plan.items())[:8]:
            record = next(item for item in records if item.key == key)
            preview.append(f"{key}[{ordinal + 1}]: {record.values[ordinal]} → {result}")
        if len(plan) > 8:
            preview.append(f"… and {len(plan) - 8} more value(s)")
        if not messagebox.askyesno(
            "Apply formula?",
            f"Preview ({len(plan)} numeric values):\n" + "\n".join(preview) + "\n\nApply all results?",
            parent=self.root,
        ):
            return
        text = self.raw_data_text.get("1.0", "end-1c")
        try:
            updated = apply_numeric_text_changes(text, records, plan)
        except ValueError as error:
            messagebox.showerror("Cannot apply formula", str(error), parent=self.root)
            return
        undo_state = self._capture_undo()
        data_file.set_raw_text(updated)
        self._push_undo(undo_state, "numeric mass modification")
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert("1.0", updated)
        self.raw_data_text.configure(state=tk.NORMAL if data_file.editable else tk.DISABLED)
        self._populate_numeric_text_table(updated)
        self.status.set(
            f"Mass modified {len(plan)} numeric value(s); save the data file copy to keep the change."
        )

    def _mass_modify_raw_text(self) -> None:
        """Preview and replace exact text in an editable unstructured file.

        Require: an editable format-0/2 File is displayed as source text.
        Guarantee: replace every exact occurrence only after explicit preview approval.
        Maintain: preserve all nonmatching source text and defer persistence to Save.
        Assert: empty search text and zero-match requests never mutate the File.
        """
        data_file = self.data_file
        if data_file is None or not data_file.editable:
            return
        search = simpledialog.askstring(
            "Mass modify text", "Exact text to find:", parent=self.root
        )
        if not search:
            return
        replacement = simpledialog.askstring(
            "Mass modify text", "Replace with (empty removes matches):", parent=self.root
        )
        if replacement is None:
            return
        text = self.raw_data_text.get("1.0", "end-1c")
        count = text.count(search)
        if not count:
            messagebox.showinfo("No matches", "The exact text was not found.", parent=self.root)
            return
        if not messagebox.askyesno(
            "Apply text replacement?",
            f"Replace {count} exact occurrence(s)?\n\n{search!r} → {replacement!r}",
            parent=self.root,
        ):
            return
        updated = text.replace(search, replacement)
        try:
            updated.encode("cp1252")
        except UnicodeEncodeError as error:
            messagebox.showerror(
                "Cannot apply text replacement",
                f"Replacement is not representable in CP1252: {error}",
                parent=self.root,
            )
            return
        undo_state = self._capture_undo()
        data_file.set_raw_text(updated)
        self._push_undo(undo_state, "text replacement")
        self.raw_data_text.configure(state=tk.NORMAL)
        self.raw_data_text.delete("1.0", tk.END)
        self.raw_data_text.insert("1.0", updated)
        self.raw_data_text.configure(state=tk.NORMAL if data_file.editable else tk.DISABLED)
        self._populate_numeric_text_table(
            updated if data_file.structure.format == 0 else ""
        )
        self.status.set(
            f"Replaced {count} text occurrence(s); save the data file copy to keep the change."
        )

    def mass_modify_dialog(self) -> None:
        """Dispatch mass editing to the active imported data representation.

        Require: an editable data file or supported settings document is active.
        Guarantee: open the matching Entry, numeric-value, settings, or raw-text editor.
        Maintain: all accepted changes remain in memory until Save data file.
        Assert: uneditable sources and absent data do not open a mutation dialog.
        """
        if self.settings_document is not None:
            self.config_formula_dialog()
            return
        if self.data_file is not None and self.data_file.editable:
            if self.data_file.structure.format == 0 and self._numeric_text_records:
                self._mass_modify_numeric_text()
                return
            if self.data_file.structure.format in {0, 2}:
                self._mass_modify_raw_text()
                return
        if (
            self.data_file is None
            or not self.data_file.editable
            or self.data_file.structure.format not in {1, 3}
        ):
            return

        dialog = tk.Toplevel(self.root)
        dialog.title("Mass modify")
        dialog.transient(self.root)
        dialog.resizable(True, False)
        frame = ttk.Frame(dialog, padding=12)
        frame.grid(sticky="nsew")

        field_names = tuple(
            field.name
            for field in self.data_file.fields
            if not (
                field.arguments
                and field.arguments[0].argument_type.startswith("*")
            )
        )
        declared_field_names = {name.casefold() for name in field_names}
        additional_paths = tuple(
            path
            for path in self._entry_matrix_paths
            if path.casefold() not in declared_field_names
            and any(
                cell_path == path
                and editable
                and not instance.field.inferred
                and not _is_raw_nested_value(instance)
                and isinstance(instance.value, str)
                for (_, cell_path), (instance, editable) in self._entry_matrix_cells.items()
            )
        )
        field_names = (*field_names, *additional_paths)
        selected_dimension = self._selected_field_dimension
        default_field = next(
            (
                name
                for name in field_names
                if selected_dimension is not None
                and name.casefold() == selected_dimension.casefold()
            ),
            field_names[0] if field_names else "",
        )
        field_var = tk.StringVar(value=default_field)
        operation_labels = {
            "Set value": "set",
            "Append text": "concatenate",
            "Add number": "add",
            "Multiply number": "multiply",
            "Formula (ECMAScript subset)": "formula",
        }
        operation_var = tk.StringVar(value="Set value")
        operand_var = tk.StringVar()
        selected_only_var = tk.BooleanVar(value=False)
        round_off_var = tk.BooleanVar(value=False)

        ttk.Label(frame, text="Field").grid(row=0, column=0, sticky="w", pady=4)
        field_box = ttk.Combobox(
            frame,
            textvariable=field_var,
            values=field_names,
            state="readonly",
            width=28,
        )
        field_box.grid(row=0, column=1, sticky="ew", pady=4)
        ttk.Label(frame, text="Operation").grid(row=1, column=0, sticky="w", pady=4)
        operation_box = ttk.Combobox(
            frame,
            textvariable=operation_var,
            values=tuple(operation_labels),
            state="readonly",
            width=28,
        )
        operation_box.grid(row=1, column=1, sticky="ew", pady=4)
        operand_label = ttk.Label(frame, text="Operand")
        operand_label.grid(row=2, column=0, sticky="w", pady=4)
        operand_entry = ttk.Entry(frame, textvariable=operand_var, width=52)
        operand_entry.grid(
            row=2, column=1, sticky="ew", pady=4
        )
        formula_help_var = tk.StringVar(value="")
        ttk.Label(
            frame,
            textvariable=formula_help_var,
            justify=tk.LEFT,
            wraplength=620,
        ).grid(row=3, column=0, columnspan=2, sticky="w", pady=(0, 4))
        selected_count = len(self.data_list.selection())
        ttk.Checkbutton(
            frame,
            text=f"Selected Entries only ({selected_count} selected)",
            variable=selected_only_var,
        ).grid(row=4, column=0, columnspan=2, sticky="w", pady=4
        )
        round_control = ttk.Checkbutton(
            frame,
            text="Round numeric results to nearest integer (ties to even)",
            variable=round_off_var,
            state=tk.DISABLED,
        )
        round_control.grid(row=5, column=0, columnspan=2, sticky="w", pady=4)
        preview_text = tk.StringVar(value="")
        ttk.Label(
            frame, textvariable=preview_text, justify=tk.LEFT, wraplength=620
        ).grid(row=6, column=0, columnspan=2, sticky="w", pady=4)

        def formula_reference(
            structure_file: str, entry_name: str, field_path: str
        ) -> object:
            """Resolve one read-only value through the active project.

            Require: a project is loaded and all three reference arguments are text.
            Guarantee: return the declared target's current scalar source value.
            Maintain: lazily import through the existing resolver without edits.
            Assert: target ambiguity and missing fields propagate as ValueError.
            """
            if self.project_view is None:
                raise ValueError("ref is available only when a project is loaded")
            return resolve_project_formula_reference(
                self.project_view, structure_file, entry_name, field_path
            )

        def selected_ordinals() -> tuple[int, ...]:
            """Return selected matrix rows as one-based File ordinals.

            Require: matrix row ids use the `entry-N` convention.
            Guarantee: return selected positions in the widget's order.
            Maintain: do not change selection or File state.
            Assert: every returned ordinal is positive.
            """
            return tuple(
                int(item.removeprefix("entry-")) + 1
                for item in self.data_list.selection()
            )

        def preview_formula() -> None:
            """Show formula results without applying them to the active File.

            Require: the formula dialog has an active File and field selection.
            Guarantee: display changed counts and up to five sample outputs.
            Maintain: do not mutate Entries; selected-only follows current rows.
            Assert: invalid formulas and references appear in an error dialog.
            """
            if self.data_file is None:
                return
            ordinals = selected_ordinals()
            if selected_only_var.get() and not ordinals:
                messagebox.showerror(
                    "Cannot preview formula",
                    "Select one or more Entries first.",
                    parent=dialog,
                )
                return
            try:
                plan = self.data_file.preview_mass_formula(
                    field_var.get(),
                    operand_var.get(),
                    entry_ordinals=ordinals if selected_only_var.get() else None,
                    reference_resolver=(
                        formula_reference if self.project_view is not None else None
                    ),
                )
            except (ArithmeticError, IndexError, NotImplementedError, OSError, TypeError, ValueError) as error:
                messagebox.showerror("Cannot preview formula", str(error), parent=dialog)
                return
            examples = tuple(
                f"{name}: {old} → {new}"
                for _, name, old, new in plan[:5]
            )
            preview_text.set(
                f"{len(plan)} value(s) would change"
                + ("\n" + "\n".join(examples) if examples else "; no values change")
            )

        def update_rounding_control(_event: object = None) -> None:
            """Match rounding and formula help controls to the chosen operation.

            Require: operation labels and dialog widgets are constructed.
            Guarantee: enable rounding only for numeric operations and show help
            only for Formula.
            Maintain: changing mode does not edit any Entry value.
            Assert: formula preview is available only in Formula mode.
            """
            operation = operation_labels.get(operation_var.get())
            numeric = operation in {"add", "multiply"}
            round_control.configure(state=tk.NORMAL if numeric else tk.DISABLED)
            if not numeric:
                round_off_var.set(False)
            formula = operation == "formula"
            operand_label.configure(text="Formula" if formula else "Operand")
            formula_help_var.set(
                "Use value for the current value and entry.Field for this Entry. "
                'Use entryAt("ENTRY_NAME", "Field.Path") for another Entry in this file; '
                'use ref("advance.ces", entry.RequiredAdvance, "Cost") for a project reference. '
                "Repeated fields can be indexed from zero, such as entry.Prerequisites[0]. "
                "Math supports abs, ceil, floor, round, trunc, min, max, pow, sqrt, and sign. "
                "Formulas read existing values; preview first."
                if formula
                else ""
            )
            preview_button.configure(state=tk.NORMAL if formula else tk.DISABLED)
            preview_text.set("")

        operation_box.bind("<<ComboboxSelected>>", update_rounding_control)

        preview_button = ttk.Button(
            frame, text="Preview", command=preview_formula, state=tk.DISABLED
        )
        preview_button.grid(row=7, column=0, sticky="w", pady=(8, 0))

        def apply() -> None:
            """Apply the selected operation and close only after success.

            Require: dialog values reflect the user's current selections.
            Guarantee: delegate to the atomic File operation and close on success.
            Maintain: show supported errors without dismissing the dialog.
            Assert: model rollback remains responsible for invalid batches.
            """
            try:
                self._apply_mass_modification(
                    field_var.get(),
                    operation_labels[operation_var.get()],
                    operand_var.get(),
                    selected_only=selected_only_var.get(),
                    round_off=round_off_var.get(),
                    reference_resolver=(
                        formula_reference
                        if operation_labels[operation_var.get()] == "formula"
                        and self.project_view is not None
                        else None
                    ),
                )
            except (
                IndexError,
                NotImplementedError,
                OSError,
                PermissionError,
                TypeError,
                ValueError,
            ) as error:
                messagebox.showerror("Cannot modify entries", str(error), parent=dialog)
                return
            dialog.destroy()

        buttons = ttk.Frame(frame)
        buttons.grid(row=7, column=1, sticky="e", pady=(8, 0))
        ttk.Button(buttons, text="Cancel", command=dialog.destroy).pack(
            side=tk.RIGHT, padx=(8, 0)
        )
        ttk.Button(buttons, text="Apply", command=apply).pack(side=tk.RIGHT)
        frame.columnconfigure(1, weight=1)
        if not field_names:
            field_box.configure(state=tk.DISABLED)
        dialog.grab_set()
        dialog.focus_set()

    def grouped_mass_modify_dialog(self) -> None:
        """Preview and apply one formula per value of a related scalar field.

        Require: an editable format-1/3 File is active and Tk controls exist.
        Guarantee: display existing group keys with Entry counts, resolve
        declared reference labels when project context is available, and apply
        finite per-group multipliers through the File's atomic formula batch.
        Maintain: groups absent from the multiplier map retain their values;
        persistence remains deferred to Save data file.
        Assert: invalid formulas or serialization errors leave all values intact.

        Args:
            None.

        Returns:
            None.

        Called by:
            The structured Entry toolbar's By group button.

        Depends on:
            The restricted formula evaluator and the project's lazy reference resolver.

        Failure modes:
            Invalid multipliers, unresolved formulas, and serialization failures
            are shown in the dialog without partially changing the File.
        """
        data_file = self.data_file
        if (
            data_file is None
            or not data_file.editable
            or data_file.structure.format not in {1, 3}
        ):
            return

        def numeric_value(value: object) -> bool:
            """Return whether a lexical scalar can be used as a numeric target.

            Require: value is a field value from the active File.
            Guarantee: accept only finite Decimal values.
            Maintain: do not change the source value.
            Assert: malformed or infinite strings are excluded from target choices.

            Args:
                value: One parsed scalar value.

            Returns:
                Whether the value is a finite decimal number.

            Raises:
                None.
            """
            if not isinstance(value, str):
                return False
            try:
                return Decimal(value).is_finite()
            except InvalidOperation:
                return False

        target_fields = tuple(
            path
            for path in (*tuple(field.name for field in data_file.fields), *self._entry_matrix_paths)
            if any(
                path == field_path
                and not instance.field.inferred
                and numeric_value(instance.value)
                for (_, field_path), (instance, editable) in self._entry_matrix_cells.items()
                if editable
            )
        )
        target_fields = tuple(dict.fromkeys(target_fields))
        group_fields = tuple(
            field
            for field in data_file.fields
            if field.name.isidentifier()
            and not (
                field.arguments
                and field.arguments[0].argument_type.startswith("*")
            )
            and any(
                (instance := entry.field_instances.item_by_field(field)) is not None
                and isinstance(instance.value, str)
                for entry in data_file.entries
            )
        )
        if not target_fields or not group_fields:
            messagebox.showinfo(
                "Grouped mass modify",
                "This File has no numeric target fields or scalar group fields.",
                parent=self.root,
            )
            return

        dialog = tk.Toplevel(self.root)
        dialog.title("Mass modify by group")
        dialog.transient(self.root)
        dialog.resizable(True, True)
        frame = ttk.Frame(dialog, padding=12)
        frame.grid(sticky="nsew")
        selected_dimension = self._selected_field_dimension
        target_default = next(
            (path for path in target_fields if path.casefold() == (selected_dimension or "").casefold()),
            next((path for path in target_fields if path.casefold() == "cost"), target_fields[0]),
        )
        target_var = tk.StringVar(value=target_default)
        group_default = next(
            (field.name for field in group_fields if field.name.casefold() == "age"),
            group_fields[0].name,
        )
        group_var = tk.StringVar(value=group_default)
        ttk.Label(frame, text="Target field").grid(row=0, column=0, sticky="w", pady=4)
        target_box = ttk.Combobox(
            frame, textvariable=target_var, values=target_fields,
            state="readonly", width=28,
        )
        target_box.grid(row=0, column=1, sticky="ew", pady=4)
        ttk.Label(frame, text="Group by").grid(row=1, column=0, sticky="w", pady=4)
        group_box = ttk.Combobox(
            frame,
            textvariable=group_var,
            values=tuple(field.name for field in group_fields),
            state="readonly",
            width=28,
        )
        group_box.grid(row=1, column=1, sticky="ew", pady=4)
        rule_frame = ttk.LabelFrame(frame, text="Multiplier by group", padding=6)
        rule_frame.grid(row=2, column=0, columnspan=2, sticky="nsew", pady=6)
        selected_var = tk.BooleanVar(value=False)
        ttk.Checkbutton(
            frame,
            text=f"Selected Entries only ({len(self.data_list.selection())} selected)",
            variable=selected_var,
        ).grid(row=3, column=0, columnspan=2, sticky="w", pady=4)
        preview_var = tk.StringVar(value="Enter a multiplier for each group to change.")
        ttk.Label(
            frame, textvariable=preview_var, justify=tk.LEFT, wraplength=650
        ).grid(row=4, column=0, columnspan=2, sticky="w", pady=5)
        rule_entries: dict[str, ttk.Entry] = {}
        rule_labels: dict[str, str] = {}

        def selected_ordinals() -> tuple[int, ...]:
            """Return the selected Entry rows in source order.

            Require: row IDs follow `entry-N`.
            Guarantee: return one-based positions without changing selection.
            Maintain: the model's Entry order remains unchanged.
            Assert: ordinals are valid positions in the active File.

            Returns:
                Selected one-based Entry positions in display order.
            """
            return tuple(
                int(item.removeprefix("entry-")) + 1
                for item in self.data_list.selection()
            )

        def group_label(field: object, key: str) -> tuple[float, str]:
            """Resolve a group key's display label from its referenced schema.

            Require: field is a declared Field and key is an existing scalar.
            Guarantee: show a joined numeric Age label when the field names a
            `.ces` reference and project data contains the matching Entry.
            Maintain: keep unmatched left-side keys visible with a clear label.
            Assert: reference lookup never mutates the related File.

            Args:
                field: The grouping Field definition.
                key: A source value from the active File.

            Returns:
                A sort value and joined display label.
            """
            arguments = getattr(field, "arguments", ())
            structure_name = arguments[0].argument_type if arguments else ""
            if self.project_view is not None and structure_name.casefold().endswith(".ces"):
                try:
                    age_value = resolve_project_formula_reference(
                        self.project_view, structure_name, key, "Age"
                    )
                except (OSError, ValueError):
                    return float("inf"), f"{key} (no matching {structure_name} Entry)"
                if numeric_value(age_value):
                    age_number = Decimal(str(age_value))
                    return float(age_number), f"Age {age_number:g} ({key})"
            return float("inf"), key

        def rebuild_rules(_event: object = None) -> None:
            """Rebuild the visible rows from actual grouping-field values.

            Require: group_var names a direct field in the active Structure.
            Guarantee: list each unique left-side key with its Entry count.
            Maintain: retain unmatched reference keys; blank operands are no-ops.
            Assert: every listed key occurs in at least one active Entry.

            Returns:
                None.
            """
            for child in rule_frame.winfo_children():
                child.destroy()
            rule_entries.clear()
            rule_labels.clear()
            group_field = data_file.fields.item(group_var.get())
            counts: dict[str, int] = {}
            for entry in data_file.entries:
                instance = entry.field_instances.item_by_field(group_field)
                if instance is not None and isinstance(instance.value, str):
                    counts[instance.value] = counts.get(instance.value, 0) + 1
            ordered = sorted(
                counts,
                key=lambda value: (*group_label(group_field, value), value.casefold()),
            )
            ttk.Label(rule_frame, text="Group / related label").grid(row=0, column=0, sticky="w")
            ttk.Label(rule_frame, text="Entries").grid(row=0, column=1, sticky="e")
            ttk.Label(rule_frame, text="Multiplier").grid(row=0, column=2, sticky="w", padx=(12, 0))
            for row, key in enumerate(ordered, start=1):
                _sort_value, label = group_label(group_field, key)
                rule_labels[key] = label
                ttk.Label(rule_frame, text=label).grid(row=row, column=0, sticky="w", pady=2)
                ttk.Label(rule_frame, text=str(counts[key])).grid(row=row, column=1, sticky="e", padx=8)
                operand = ttk.Entry(rule_frame, width=14)
                operand.grid(row=row, column=2, sticky="w", padx=(12, 0), pady=2)
                rule_entries[key] = operand
            if not ordered:
                ttk.Label(rule_frame, text="No Entries have this group value.").grid(row=1, column=0, columnspan=3, sticky="w")

        def build_formula() -> tuple[str, tuple[int, ...] | None, tuple[tuple[int, str, str, str], ...]]:
            """Validate entered multipliers and preview the conditional batch.

            Require: target/group selections are valid and multiplier controls exist.
            Guarantee: return a finite conditional formula and source-snapshot plan.
            Maintain: do not change any Entry values.
            Assert: unmapped groups retain `value` in the generated formula.

            Returns:
                Formula text, optional selected ordinals, and preview results.

            Raises:
                ValueError when scope or multiplier inputs are invalid.
            """
            if selected_var.get() and not self.data_list.selection():
                raise ValueError("Select one or more Entries first.")
            group_field = data_file.fields.item(group_var.get())
            clauses: list[str] = []
            for key, operand in rule_entries.items():
                raw = operand.get().strip()
                if not raw:
                    continue
                try:
                    multiplier = Decimal(raw)
                except InvalidOperation as error:
                    raise ValueError(f"Multiplier for {rule_labels[key]} must be numeric.") from error
                if not multiplier.is_finite():
                    raise ValueError(f"Multiplier for {rule_labels[key]} must be finite.")
                literal = format(multiplier.normalize(), "f")
                clauses.append(
                    f"entry.{group_field.name} === {json.dumps(key)} ? value * {literal}"
                )
            if not clauses:
                raise ValueError("Enter at least one group multiplier.")
            expression = " : ".join(clauses + ["value"])
            ordinals = selected_ordinals() if selected_var.get() else None
            plan = data_file.preview_mass_formula(
                target_var.get(), expression, entry_ordinals=ordinals
            )
            return expression, ordinals, plan

        def preview() -> None:
            """Show group counts and representative output without mutation.

            Require: the rule rows reflect the chosen grouping field.
            Guarantee: display changed count, per-group rule counts, and samples.
            Maintain: keep all source values unchanged.
            Assert: invalid multipliers and formula results are reported in-dialog.

            Returns:
                None.
            """
            try:
                _expression, ordinals, plan = build_formula()
            except (ArithmeticError, IndexError, NotImplementedError, OSError, TypeError, ValueError) as error:
                messagebox.showerror("Cannot preview grouped edit", str(error), parent=dialog)
                return
            scope = set(ordinals) if ordinals is not None else None
            group_field = data_file.fields.item(group_var.get())
            group_lines = []
            for key, label in rule_labels.items():
                members = sum(
                    1
                    for ordinal, entry in enumerate(data_file.entries, start=1)
                    if (scope is None or ordinal in scope)
                    and (instance := entry.field_instances.item_by_field(group_field)) is not None
                    and instance.value == key
                    and rule_entries[key].get().strip()
                )
                if members:
                    group_lines.append(f"{label}: {members} Entry/Entries")
            samples = tuple(f"{name}: {old} → {new}" for _, name, old, new in plan[:4])
            preview_var.set(
                f"{len(plan)} value(s) will change.\n"
                + "\n".join(group_lines)
                + ("\n" + "\n".join(samples) if samples else "\nNo values change.")
            )

        def apply() -> None:
            """Confirm and apply the validated grouped formula as one batch.

            Require: at least one finite multiplier is entered.
            Guarantee: apply every matching formula result together or none.
            Maintain: do not write to the loaded source file.
            Assert: retain the dialog on validation, resolution, or save errors.

            Returns:
                None.
            """
            try:
                expression, _ordinals, plan = build_formula()
            except (ArithmeticError, IndexError, NotImplementedError, OSError, TypeError, ValueError) as error:
                messagebox.showerror("Cannot modify groups", str(error), parent=dialog)
                return
            if not plan:
                messagebox.showinfo("No changes", "The current rules would not change any values.", parent=dialog)
                return
            sample = "\n".join(f"{name}: {old} → {new}" for _, name, old, new in plan[:5])
            if not messagebox.askyesno(
                "Apply grouped changes?",
                f"Apply {len(plan)} value change(s)?\n\n{sample}\n\nSave the result to a separate copy.",
                parent=dialog,
            ):
                return
            try:
                self._apply_mass_modification(
                    target_var.get(),
                    "formula",
                    expression,
                    selected_only=selected_var.get(),
                    round_off=False,
                )
            except (IndexError, NotImplementedError, OSError, PermissionError, TypeError, ValueError) as error:
                messagebox.showerror("Cannot modify groups", str(error), parent=dialog)
                return
            dialog.destroy()

        group_box.bind("<<ComboboxSelected>>", rebuild_rules)
        rebuild_rules()
        buttons = ttk.Frame(frame)
        buttons.grid(row=5, column=0, columnspan=2, sticky="e", pady=(8, 0))
        ttk.Button(buttons, text="Preview", command=preview).pack(side=tk.LEFT)
        ttk.Button(buttons, text="Apply", command=apply).pack(side=tk.LEFT, padx=(8, 0))
        ttk.Button(buttons, text="Cancel", command=dialog.destroy).pack(side=tk.LEFT, padx=(8, 0))
        frame.columnconfigure(1, weight=1)
        dialog.grab_set()
        dialog.focus_set()

    def apply_sort(self, field_name: str, method: str, reverse: bool) -> int:
        """Sort the displayed File's Entries and refresh the Entries list.

        Require: method is "alpha" or "num"; an editable format-1/3 File is displayed.
        Guarantee: call `self.data_file.sort_entries(field_name, method, reverse)`, refresh the Entries display
        and the selected-Entry controls exactly as mass modification does after a change, and return the number of
        Entries moved.
        Maintain: persistence stays deferred to Save.
        Assert: the Entries count is unchanged.
        """
        if self.data_file is None:
            raise ValueError("no data file is loaded")
        undo_state = self._capture_undo()
        count = self.data_file.sort_entries(field_name, method, reverse)
        self._push_undo(undo_state, "sort entries")
        self._display_data(self.data_file)
        self.show_selected_entry()
        self.status.set(
            f"Sorted {count} entries; save the data file copy to keep the change."
        )
        return count

    def apply_prerequisite_sort(self, manual: bool) -> int:
        """Order the displayed File's Entries after their prerequisites.

        Require: an editable format-1/3 File whose Structure declares `preq_field`.
        Guarantee: call `self.data_file.sort_by_prerequisites(preq_field, resolve, choose)` where
        `resolve` maps a prerequisite FieldInstance to the Entry of the same name in this File
        (`self.data_file.entries.item_no_error(instance.value)`, None when absent) and `choose` is
        `self.choose_entry_dialog` when `manual` is true, else None (automatic, "Choose currently
        highest"); refresh the Entries display and selected-Entry controls; return the number moved.
        Maintain: persistence stays deferred to Save; raise ValueError("no prerequisite field is declared")
        when the Structure has no preq_field.
        Assert: the Entries count is unchanged.
        """
        if self.data_file is None:
            raise ValueError("no data file is loaded")
        preq_field = self.data_file.structure.preq_field
        if preq_field is None:
            raise ValueError("no prerequisite field is declared")

        def resolve(instance: FieldInstance) -> Entry | None:
            return self.data_file.entries.item_no_error(instance.value)

        undo_state = self._capture_undo()
        count = self.data_file.sort_by_prerequisites(
            preq_field,
            resolve,
            self.choose_entry_dialog if manual else None,
        )
        self._push_undo(undo_state, "prerequisite sort")
        self._display_data(self.data_file)
        self.show_selected_entry()
        self.status.set(
            f"Sorted {count} entries by prerequisite; save the data file copy to keep the change."
        )
        return count

    def choose_entry_dialog(self, candidates: list[Entry]) -> Entry | None:
        """Ask which candidate Entry to place next.

        Require: two or more candidates.
        Guarantee: show a modal Toplevel titled "Choose entry" with a Listbox of candidate names, an OK
        and a Cancel button; return the selected Entry, or None on Cancel or window close.
        Maintain: no model change.
        Assert: the dialog is destroyed before returning.
        """
        dialog = tk.Toplevel(self.root)
        dialog.title("Choose entry")
        dialog.transient(self.root)
        dialog.resizable(False, False)
        frame = ttk.Frame(dialog, padding=12)
        frame.grid(sticky="nsew")

        listbox = tk.Listbox(frame, height=min(len(candidates), 15), exportselection=False)
        for entry in candidates:
            listbox.insert(tk.END, entry.name)
        listbox.selection_set(0)
        listbox.grid(row=0, column=0, columnspan=2, sticky="nsew")
        chosen: list[Entry | None] = [None]

        def ok() -> None:
            selection = listbox.curselection()
            if selection:
                chosen[0] = candidates[selection[0]]
            dialog.destroy()

        def cancel() -> None:
            dialog.destroy()

        buttons = ttk.Frame(frame)
        buttons.grid(row=1, column=0, columnspan=2, sticky="e", pady=(8, 0))
        ttk.Button(buttons, text="OK", command=ok).pack(side=tk.RIGHT)
        ttk.Button(buttons, text="Cancel", command=cancel).pack(side=tk.RIGHT, padx=(0, 8))
        dialog.protocol("WM_DELETE_WINDOW", cancel)
        dialog.grab_set()
        dialog.focus_set()
        dialog.wait_window()
        return chosen[0]

    def sort_dialog(self) -> None:
        """Open the Sort dialog for the loaded File.

        Require: an editable format-1/3 File is displayed.
        Guarantee: show a modal dialog titled "Sorting entries of <file name>" with a combobox of the File's
        declared field names (first selected), radio buttons "Alphabetically" and "Numerically" (default
        Alphabetically), a checkbutton "In Reverse", and a "Go" button. "By order in referenced file" is not
        offered (needs project-file resolution; documented gap). A separate prerequisite frame defaults to
        "Choose manually", offers "Choose currently highest", and calls `apply_prerequisite_sort` from its
        own Go button; disable those controls when no defining field is declared. Both Go actions close the
        dialog on success and show the error text (same messagebox style as Mass modify) on failure.
        Maintain: the dialog never writes to disk.
        Assert: the dialog is destroyed after a successful Go.
        """
        if (
            self.data_file is None
            or not self.data_file.editable
            or self.data_file.structure.format not in {1, 3}
        ):
            return

        dialog = tk.Toplevel(self.root)
        dialog.title(f"Sorting entries of {Path(str(self.data_file.source)).name}")
        dialog.transient(self.root)
        dialog.resizable(False, False)
        frame = ttk.Frame(dialog, padding=12)
        frame.grid(sticky="nsew")

        field_names = tuple(field.name for field in self.data_file.fields)
        field_var = tk.StringVar(value=field_names[0] if field_names else "")
        method_labels = {"Alphabetically": "alpha", "Numerically": "num"}
        method_var = tk.StringVar(value="Alphabetically")
        reverse_var = tk.BooleanVar(value=False)
        manual_var = tk.BooleanVar(value=True)

        ttk.Label(frame, text="Field").grid(row=0, column=0, sticky="w", pady=4)
        field_box = ttk.Combobox(
            frame,
            textvariable=field_var,
            values=field_names,
            state="readonly",
            width=28,
        )
        field_box.grid(row=0, column=1, sticky="ew", pady=4)
        for row, label in enumerate(method_labels, start=1):
            ttk.Radiobutton(frame, text=label, value=label, variable=method_var).grid(
                row=row, column=0, columnspan=2, sticky="w", pady=2
            )
        ttk.Checkbutton(frame, text="In Reverse", variable=reverse_var).grid(
            row=3, column=0, columnspan=2, sticky="w", pady=4
        )

        def go(prerequisites: bool = False) -> None:
            """Dispatch the chosen sort; retain the dialog on a supported model error."""
            try:
                if prerequisites:
                    self.apply_prerequisite_sort(manual_var.get())
                else:
                    self.apply_sort(
                        field_var.get(),
                        method_labels[method_var.get()],
                        reverse_var.get(),
                    )
            except (
                IndexError,
                NotImplementedError,
                PermissionError,
                TypeError,
                ValueError,
            ) as error:
                messagebox.showerror("Cannot sort entries", str(error), parent=dialog)
                return
            dialog.destroy()

        buttons = ttk.Frame(frame)
        buttons.grid(row=4, column=0, columnspan=2, sticky="e", pady=(8, 0))
        ttk.Button(buttons, text="Go", command=go).pack(side=tk.RIGHT)
        if not field_names:
            field_box.configure(state=tk.DISABLED)
        prerequisite_frame = ttk.LabelFrame(
            frame, text="Sort by prerequisite structure", padding=8
        )
        prerequisite_frame.grid(
            row=5, column=0, columnspan=2, sticky="ew", pady=(8, 0)
        )
        prerequisite_state = (
            tk.NORMAL if self.data_file.structure.preq_field else tk.DISABLED
        )
        for row, (label, manual) in enumerate(
            (("Choose manually", True), ("Choose currently highest", False))
        ):
            ttk.Radiobutton(
                prerequisite_frame,
                text=label,
                value=manual,
                variable=manual_var,
                state=prerequisite_state,
            ).grid(row=row, column=0, sticky="w", pady=2)
        ttk.Button(
            prerequisite_frame,
            text="Go",
            command=lambda: go(True),
            state=prerequisite_state,
        ).grid(row=2, column=0, sticky="e", pady=(8, 0))
        dialog.grab_set()
        dialog.focus_set()

    def edit_selected_value(self) -> None:
        """Edit the selected field-value row and validate its serialization.

        Require: one selected Entry and one editable row in the field table.
        Guarantee: update that row's scalar value only after writer validation.
        Maintain: restore the previous value when validation rejects input.
        Assert: a read-only row cannot enter the edit path.
        """
        if self.data_file is None or not self.data_file.editable:
            return
        entry_selection = self.data_list.selection()
        if not entry_selection:
            return
        active_cell = self._active_grid_cell
        selected_indices = {
            int(item.removeprefix("entry-")) for item in entry_selection
        }
        if active_cell is not None and active_cell[0] in selected_indices:
            matrix_target = self._entry_matrix_cells.get(active_cell)
            target = (
                (active_cell[1], matrix_target[0], matrix_target[1])
                if matrix_target is not None
                else None
            )
        else:
            field_selection = self.field_value_table.selection()
            target = (
                self._field_value_targets.get(field_selection[0])
                if field_selection
                else None
            )
        if target is None or not target[2]:
            return
        path, instance, _can_edit = target
        if _is_raw_nested_value(instance):
            self._open_raw_nested_editor(path, instance)
            return
        value = simpledialog.askstring(
            "Edit field value",
            path,
            initialvalue=instance.value,
            parent=self.root,
        )
        if value is None:
            return
        undo_state = self._capture_undo()
        previous = instance.value
        instance.set_value(value)
        try:
            self.data_file.to_bytes()
        except (ValueError, UnicodeEncodeError) as error:
            instance.set_value(previous)
            messagebox.showerror("Invalid field value", str(error), parent=self.root)
            return
        self._push_undo(undo_state, "edit value")
        self.show_selected_entry(preferred_path=path)
        self.status.set(
            f"Edited {instance.field.name}; save the data file copy to keep the change."
        )
        self._refresh_entry_matrix_values()

    def _apply_raw_nested_edit(
        self, path: str, instance: FieldInstance, value: str
    ) -> bool:
        """Validate and stage one whole raw nested-block replacement.

        Require: an editable structured File and a source-spanned raw nested value.
        Guarantee: commit the text only when File serialization succeeds.
        Maintain: keep disk writes deferred and restore the previous value on error.
        Assert: a successful update remains serializable through the File model.
        """
        if self.data_file is None or not self.data_file.editable:
            return False
        if not _is_raw_nested_value(instance):
            raise ValueError("selected field is not a source-spanned raw nested block")
        undo_state = self._capture_undo()
        previous = instance.value
        instance.set_value(value)
        try:
            self.data_file.to_bytes()
        except (ValueError, UnicodeEncodeError, NotImplementedError) as error:
            instance.set_value(previous)
            messagebox.showerror("Invalid nested block", str(error), parent=self.root)
            return False
        self._push_undo(undo_state, "edit nested block")
        self.show_selected_entry(preferred_path=path)
        self._refresh_entry_matrix_values()
        self.status.set(
            f"Edited raw nested block {path}; save the data file copy to keep the change."
        )
        return True

    def _open_raw_nested_editor(self, path: str, instance: FieldInstance) -> None:
        """Show a multiline editor for one raw nested block.

        Require: ``instance`` is an editable nested value without a child schema.
        Guarantee: Apply uses the validated source-span writer; Cancel changes nothing.
        Maintain: do not infer child field types or expose mass-edit behavior.
        Assert: only one complete block can be committed through the model.
        """
        if not _is_raw_nested_value(instance):
            raise ValueError("selected field is not a source-spanned raw nested block")
        dialog = tk.Toplevel(self.root)
        dialog.title(f"Edit raw nested block: {path}")
        dialog.transient(self.root)
        dialog.geometry("760x520")
        frame = ttk.Frame(dialog, padding=10)
        frame.pack(fill=tk.BOTH, expand=True)
        ttk.Label(
            frame,
            text="No child descriptor is available; edit the complete brace block.",
        ).pack(anchor="w", pady=(0, 6))
        editor_frame = ttk.Frame(frame)
        editor_frame.pack(fill=tk.BOTH, expand=True)
        editor = tk.Text(editor_frame, wrap=tk.NONE, undo=True)
        vertical = ttk.Scrollbar(editor_frame, orient=tk.VERTICAL, command=editor.yview)
        horizontal = ttk.Scrollbar(editor_frame, orient=tk.HORIZONTAL, command=editor.xview)
        editor.configure(yscrollcommand=vertical.set, xscrollcommand=horizontal.set)
        editor.grid(row=0, column=0, sticky="nsew")
        vertical.grid(row=0, column=1, sticky="ns")
        horizontal.grid(row=1, column=0, sticky="ew")
        editor_frame.rowconfigure(0, weight=1)
        editor_frame.columnconfigure(0, weight=1)
        editor.insert("1.0", str(instance.value))
        buttons = ttk.Frame(frame)
        buttons.pack(fill=tk.X, pady=(8, 0))

        def apply() -> None:
            if self._apply_raw_nested_edit(
                path, instance, editor.get("1.0", "end-1c")
            ):
                dialog.destroy()

        ttk.Button(buttons, text="Apply", command=apply).pack(side=tk.RIGHT)
        ttk.Button(buttons, text="Cancel", command=dialog.destroy).pack(
            side=tk.RIGHT, padx=(0, 8)
        )
        dialog.bind("<Escape>", lambda _event: dialog.destroy())
        dialog.grab_set()
        editor.focus_set()

    def show_selected_field(self, _event: object = None) -> None:
        """Show flags, spacing, and argument rows for the selected field.

        Require: event follows a Treeview selection change.
        Guarantee: render details for the selected field, if any.
        Maintain: do not modify parsed field data.
        Assert: selected row index resolves to the same source-order field.
        """
        if self.document is None:
            return
        selection = self.field_list.selection()
        if not selection:
            return
        index = int(selection[0].removeprefix("field-"))
        value = self.document.fields.item(index + 1)
        lines = [
            f"Name: {value.name}",
            f"Required: {value.compulsory}",
            f"Present by default: {value.present_by_default}",
            f"Allows multiple: {value.allows_multiple}",
            f"Lines between instances: {value.lines_between_instances}",
            f"Lines after instances: {value.lines_after_instances}",
            f"Arguments: {len(value.arguments)}",
        ]
        for ordinal, argument in enumerate(value.arguments, start=1):
            lines.extend(
                (
                    "",
                    f"Argument {ordinal}",
                    f"  Type: {argument.argument_type}",
                    f"  Default: {argument.default_value}",
                    f"  Comment: {argument.comment}",
                )
            )
        self._set_details("\n".join(lines))

    def _set_details(self, text: str) -> None:
        """Replace the detail panel text.

        Require: ``text`` is display-ready Unicode.
        Guarantee: the panel shows exactly the supplied text.
        Maintain: leave the panel read-only to the user.
        Assert: widget state returns to disabled.
        """
        self._replace_text(self.details, text)

    def _replace_text(self, widget: tk.Text, text: str) -> None:
        """Replace one read-only Text widget's contents.

        Require: ``widget`` is a Text control and ``text`` is display-ready.
        Guarantee: show exactly the supplied text and return to read-only state.
        Maintain: discard all previous widget contents.
        Assert: final widget state is disabled.
        """
        widget.configure(state=tk.NORMAL)
        widget.delete("1.0", tk.END)
        widget.insert("1.0", text)
        widget.configure(state=tk.DISABLED)
        assert str(widget.cget("state")) == tk.DISABLED


def run() -> None:
    """Start the tkinter desktop application.

    Require: tkinter is installed and a desktop display is available.
    Guarantee: run the editor window until it is closed.
    Maintain: initialize exactly one root window.
    Assert: the event loop starts after all widgets are constructed.
    """
    root = tk.Tk()
    EditorWindow(root)
    root.mainloop()


if __name__ == "__main__":
    run()
