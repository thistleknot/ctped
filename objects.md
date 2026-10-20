header VA=0x40611c projectinfo=0x407ba8 objecttable=0x411cbc objectarray=0x411d10
code 0x4225a0-0x47e320 lpNativeCode=0x47f000 totalObjects=39 inUse=39
project name: 'CTPEditor'  exe name: 'CTPEd'

## Current Python port disposition (2026-10-17)

This is a coverage assessment, not a completion claim. “Ported” means a Python counterpart exists for the observable behavior named below; unresolved behavior remains listed. “UI-only” means the VB object is a form/control concern; the Tk app may cover only part of it. “Dropped” is provisional and requires review before the final Stage 5 gate. Ghidra function-to-object assignments are estimated except where anchored.

Current verification (2026-10-17): full Python 3.10 suite passed 482 tests with 2 skips in 51.46s. The parity pass adds C-derived `.GLName` extraction and duplicate precedence, plus source-spanned editing of raw nested blocks when no child descriptor is available. Native sort direction, `.gl_prefix` wildcard mapping, screenshot roots, exact writer output, and unresolved COM contracts remain open; Python-only tests do not close those native gates. A PyInstaller portable folder and ZIP were built; packaged executable startup remained responsive in the smoke check.

| # | VB object | Disposition | Python counterpart / reason and remaining work |
|---:|---|---|---|
| 0 | EditingForms | UI-only | `EditorWindow._display_data` selects direct-text versus entry views; remaining form factory and removal behavior is incomplete. |
| 1 | CrossRef | Ported | `crossref.py` retains lexical targets; runtime File/Field resolution remains open. |
| 2 | CrossRefs | Ported | `crossrefs.py` parses and stores tree references; project target resolution remains open. |
| 3 | CTPProject | Ported | `ctp_project.py` parses declarations and expands paths; automatic bulk import and project editing remain open. |
| 4 | Entries | Ported | `entries.py` provides ordered keyed storage; exact VB Collection parity remains partially inferred. |
| 5 | Entry | Ported | `entry.py` parses and source-preserves scalar, schema-bound nested, and whole raw nested-block edits; it exposes `gl_entry`, `gl_text`, `same_in_entries`, and `same_as`. Entry string identities and prefix expansion remain partly inferred; exact native writer parity is open. |
| 6 | Field | Ported | `field.py` parses descriptor fields and arguments; control-specific behavior is incomplete. |
| 7 | FieldInstance | Ported | `field_instance.py` stores values and supports scalar edits; type conversion and nested editing remain open. |
| 8 | FieldInstances | Ported | `field_instances.py` provides ordered keyed storage and field lookup. |
| 9 | Fields | Ported | `fields.py` provides ordered keyed storage and field lookup. |
| 10 | File | Ported | `file.py` handles formats 0–3 with direct-text/scalar writes, generated format-1/3 records, nested defaults, atomic `mass_modify`, and source-preserving entry movement. Exact native writer bytes, comment association semantics, and native mass-modify restrictions remain open. |
| 11 | Files | Ported | `files.py` stores project Files and ports existing-object `SneakyAdd`; recovered `Add` constructs a FileReference and uses its BSTR argument as an optional key, but setter meanings and 16-bit argument roles remain unresolved. |
| 12 | Structure | Ported | `structure.py` parses all 42 supplied descriptors; exact descriptor writer behavior is not needed for unchanged copies and edits remain limited. |
| 13 | frmMain | UI-only | `app.py` provides one Tk `EditorWindow`; recovered main-form menus, preferences, and layout are incomplete. Export/import menu wrappers call vtable slot `+0xb0` and late-dispatch to the returned object; its identity and workflow remain unresolved. |
| 14 | Const | Ported | Constants are represented across Python modules; exact completeness against the VB object is unverified. |
| 15 | Useful | Ported | Shared parsing/path helpers exist across modules; one-to-one method mapping is incomplete. |
| 16 | frmProjectProperties | UI-only | No dedicated Python dialog; project property editing is not implemented. |
| 17 | frmProject | UI-only | `EditorWindow` loads and imports a selected project declaration; the VB header lists Export/Export Other/Import/Import Other handlers, but their implementation mapping, bulk workflow, and export contract remain unresolved. |
| 18 | frmEditingEntriesAndFields | UI-only | `EditorWindow` provides the field-by-Entry matrix, formula mass edits, selected scalar edits, raw nested-block editing, deletion, insertion, movement, and sort controls; original layout and native sort parity remain incomplete. |
| 19 | FieldControls | UI-only | Tk controls are assembled in `app.py`; the original control factory and per-field widgets are not ported. |
| 20 | frmCheckFilesExist | UI-only | The project tab checks each declaration's resolved data/structure path and shows exact paths; original dialog layout and message wording remain unknown. |
| 21 | EditingForm | UI-only | Editability state is modeled and reflected in Tk controls; jump-to and shared form lifecycle behavior remain incomplete. |
| 22 | frmEditingNoStructure | UI-only | `EditorWindow` displays and edits format-0/2 direct text; original form commands and layout are incomplete. |
| 23 | frmMassModify | UI-only | `EditorWindow` exposes a field/operation/operand dialog with all-or-selected Entry targeting and optional numeric rounding; original restriction bounds and exact option meanings remain unresolved. |
| 24 | frmGreatLibrary | UI-only | `EditorWindow` previews and edits supported `.glt` source, resolves project `.GLName` using the traced quoted-value/last-duplicate rule, saves selected renders, previews unit-icon `%n`, resolves linked icon fields, edits `.gls`, stages selected or all-entry output, and saves separate copies; prefix expansion, uniticon updates, and native write/failure parity remain open. |
| 25 | Preferences | Ported | `preferences.py` loads and patches ordinal flags; the Tk Preferences tab edits four unnamed flags and saves copies. Flag meaning and the dedicated indent-increment dialog remain open. |
| 26 | Shared | Ported | Shared helpers are distributed across modules; exact method-to-helper mapping is incomplete. |
| 27 | Comment | Ported | `comment.py` stores Entry/FieldInstance associations; comment text is not modeled by the recovered class. |
| 28 | Comments | Ported | `comments.py` stores associations; `CommentByObject` behavior and source comment parsing remain open. |
| 29 | frmIndentIncrement | UI-only | Preference flags are displayed by ordinal; the dedicated increment dialog is absent. |
| 30 | frmSort | UI-only | `EditorWindow` sorts by field and by prerequisite with manual/highest choices. The exact native comparator direction and `CorrectOrder` behavior remain unverified against runtime evidence. |
| 31 | frmChooseEntry | UI-only | No dedicated entry chooser; current selection uses the Tk record list. |
| 32 | frmSLICTemplate | UI-only | `gl_template.py` parses/previews a subset; `app.py` edits the source with CP1252/bracket validation and separate-copy saving; directive coverage and interactive preview controls remain incomplete. |
| 33 | FileAccess | Ported | `file_access.py` reads/writes bytes and surfaces path errors; exact legacy dialog semantics are delegated to Tk. |
| 34 | FileInterface | Ported | `FileInterface` supplies explicit path selection boundaries; original dialog workflow is not reproduced. |
| 35 | FileReference | Ported | `file_access.py` binds a name to a directory and checks paths; exact comparison edge cases remain open. |
| 36 | Action | Ported | Tk callbacks provide event dispatch; the VB global action-queue behavior is not mapped one-to-one. |
| 37 | CancelObject | Dropped (provisional) | Header reports zero methods and the decompilation has no assigned function; cancellation behavior is not proven unnecessary, so revisit if a call site is found. |
| 38 | frmCheckExport | UI-only | Initialization is present in the decompilation; validation rules and complete export workflow remain absent. |

The matrix assigns all 39 header objects, but it does not close Stage 5: several entries are partial, multiple UI counterparts are absent, and the `CancelObject` disposition is provisional.

| # | object | type | methods | named | names found (first 6) | method ptrs in code range |
|---|---|---|---|---|---|---|
| 0 | EditingForms | 0x118003 | 9 | 7 | Add, Item, ItemNoError, Count, Remove, Clear | 0/0 |
| 1 | CrossRef | 0x118003 | 7 | 6 | File, Field, TagString, TagString, ReadFromFile | 0/0 |
| 2 | CrossRefs | 0x118003 | 8 | 6 | Add, Item, Count, Remove, Clear, NewEnum | 0/0 |
| 3 | CTPProject | 0x118003 | 23 | 18 | ProjectFile, Gamefile, Gamefile, GreatLibrary, Files, StringsFile | 0/0 |
| 4 | Entries | 0x118003 | 15 | 13 | Add, SneakyAdd, Item, ItemByName, ItemNoError, IndexOf | 0/0 |
| 5 | Entry | 0x118003 | 10 | 9 | FieldInstances, GLEntry, Structure, Structure, SameAs, ReadFromFile | 0/0 |
| 6 | Field | 0x118003 | 15 | 14 | ArgumentTypeType, ArgumentType, DefaultValue, LinesBetweenInstances, LinesAfterInstances, ArgControl | 0/0 |
| 7 | FieldInstance | 0x118003 | 10 | 10 | Field, Field, ValueAsString, Value, SetValue, ValueToObject | 0/0 |
| 8 | FieldInstances | 0x118003 | 14 | 12 | Add, SneakyAdd, Item, ItemNoError, ItemByField, Count | 0/0 |
| 9 | Fields | 0x118003 | 11 | 9 | Add, Item, ItemNoError, ItemByControl, ItemByControlRecursively, Count | 0/0 |
| 10 | File | 0x118003 | 25 | 23 | Editable, Editable, SetDataSource, DataSource, DuplicateFiles, Comments | 0/0 |
| 11 | Files | 0x118003 | 11 | 9 | Add, SneakyAdd, Item, ItemNoError, ItemByDataSource, Count | 0/0 |
| 12 | Structure | 0x118003 | 16 | 14 | GLPrefix, GLDB, ArticleSuffix, Format, LinesAtStartOfEntry, LinesBetweenEntries | 0/0 |
| 13 | frmMain | 0x18083 | 66 | 20 | Project, Preferences, Language, CTPPath, TempPath, StructurePath | 0/0 |
| 14 | Const | 0x18001 | 0 | 0 |  | 0/0 |
| 15 | Useful | 0x18001 | 30 | 0 |  | 0/0 |
| 16 | frmProjectProperties | 0x18083 | 8 | 0 |  | 0/0 |
| 17 | frmProject | 0x18083 | 18 | 6 | Update, mnuFileExport, mnuFileExportOther, mnuFileImport, mnuFileImportOther | 0/0 |
| 18 | frmEditingEntriesAndFields | 0x18083 | 80 | 32 | Project, Project, File, File, Clipboard | 0/0 |
| 19 | FieldControls | 0x118003 | 7 | 5 | Add, Item, Count, Remove, NewEnum | 0/0 |
| 20 | frmCheckFilesExist | 0x18083 | 9 | 1 | Initialize | 0/0 |
| 21 | EditingForm | 0x118003 | 13 | 13 | Key, Key, Project, Project, File, File | 0/0 |
| 22 | frmEditingNoStructure | 0x18083 | 19 | 14 | Update, EditingForm_Destroy, EditingForm_File, EditingForm_File, EditingForm_JumpTo | 0/0 |
| 23 | frmMassModify | 0x18083 | 10 | 1 | Setup | 0/0 |
| 24 | frmGreatLibrary | 0x18083 | 24 | 1 | Setup | 0/0 |
| 25 | Preferences | 0x118003 | 6 | 5 | IndentInc, IndentInc, File, Load, Save | 0/0 |
| 26 | Shared | 0x18001 | 5 | 0 |  | 0/0 |
| 27 | Comment | 0x118003 | 5 | 5 | Entry, Entry, FieldInstance, FieldInstance, Destroy | 0/0 |
| 28 | Comments | 0x118003 | 12 | 10 | Add, Item, ItemByObject, CommentByObject, Count, Remove | 0/0 |
| 29 | frmIndentIncrement | 0x18083 | 4 | 1 | Preferences | 0/0 |
| 30 | frmSort | 0x18083 | 7 | 2 | CorrectOrder, Setup | 0/0 |
| 31 | frmChooseEntry | 0x18083 | 6 | 1 | Setup | 0/0 |
| 32 | frmSLICTemplate | 0x18083 | 6 | 1 | Setup | 0/0 |
| 33 | FileAccess | 0x118003 | 29 | 27 | CommentChar, DelimiterChar, DelimiterCharRight, DelimiterCharLeft, FileAbsent, FileName | 0/0 |
| 34 | FileInterface | 0x118003 | 10 | 10 | Setup, CurrentPath, FileAbsent, PathInvalid, ObtainOpenFile, ObtainSaveAsFile | 0/0 |
| 35 | FileReference | 0x118003 | 15 | 15 | FileAbsent, FileInterface, FileName, FileName, Path, AssertFileExists | 0/0 |
| 36 | Action | 0x118003 | 1 | 1 | Action | 0/0 |
| 37 | CancelObject | 0x118003 | 0 | 0 |  | 0/0 |
| 38 | frmCheckExport | 0x18083 | 7 | 1 | Initialize | 0/0 |
