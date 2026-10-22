# ctpedit.exe reverse engineered C (Ghidra pseudocode), organized by VB object

Object assignment is an ESTIMATE except where a function is marked `anchored` (it contains the literal `CTPEditor.<Class>`).
Source: H:\Games\ctp2\CTPEd053\ctpedit.exe, REA + Ghidra 12.1.4. Function bodies are unmodified decompiler output.

| # | object | functions | lines | address range | anchored | public methods (from VB header) |
|---|---|---|---|---|---|---|
| 0 | EditingForms | 9 | 507 | 0x4225b0..0x423110 | 0 | Add, Item, ItemNoError, Count, Remove, Clear |
| 1 | CrossRef | 7 | 257 | 0x4231c0..0x4236e0 | 0 | File, Field, TagString, TagString, ReadFromFile |
| 2 | CrossRefs | 8 | 357 | 0x4237a0..0x423f10 | 0 | Add, Item, Count, Remove, Clear, NewEnum |
| 3 | CTPProject | 23 | 9409 | 0x423fc0..0x429700 | 3 | ProjectFile, Gamefile, Gamefile, GreatLibrary, Files, String |
| 4 | Entries | 15 | 1105 | 0x4297b0..0x42ae30 | 0 | Add, SneakyAdd, Item, ItemByName, ItemNoError, IndexOf |
| 5 | Entry | 10 | 1081 | 0x42aee0..0x42cef0 | 2 | FieldInstances, GLEntry, Structure, Structure, SameAs, ReadF |
| 6 | Field | 15 | 2174 | 0x42cf90..0x42ebf0 | 0 | ArgumentTypeType, ArgumentType, DefaultValue, LinesBetweenIn |
| 7 | FieldInstance | 10 | 707 | 0x42ece0..0x42fe40 | 1 | Field, Field, ValueAsString, Value, SetValue, ValueToObject |
| 8 | FieldInstances | 14 | 1439 | 0x42fef0..0x431380 | 0 | Add, SneakyAdd, Item, ItemNoError, ItemByField, Count |
| 9 | Fields | 11 | 540 | 0x431430..0x432070 | 0 | Add, Item, ItemNoError, ItemByControl, ItemByControlRecursiv |
| 10 | File | 25 | 3728 | 0x432120..0x435820 | 0 | Editable, Editable, SetDataSource, DataSource, DuplicateFile |
| 11 | Files | 11 | 565 | 0x4358d0..0x4365b0 | 0 | Add, SneakyAdd, Item, ItemNoError, ItemByDataSource, Count |
| 12 | Structure | 16 | 871 | 0x436660..0x437c90 | 1 | GLPrefix, GLDB, ArticleSuffix, Format, LinesAtStartOfEntry,  |
| 13 | frmMain | 66 | 5102 | 0x437d70..0x440190 | 1 | Project, Preferences, Language, CTPPath, TempPath, Structure |
| 14 | Const | 0 | 0 | - | 0 |  |
| 15 | Useful | 30 | 3686 | 0x440220..0x444240 | 0 |  |
| 16 | frmProjectProperties | 8 | 891 | 0x4449b0..0x445dd0 | 0 |  |
| 17 | frmProject | 18 | 2290 | 0x446110..0x448c50 | 0 | Update, mnuFileExport, mnuFileExportOther, mnuFileImport, mn |
| 18 | frmEditingEntriesAndFields | 80 | 14206 | 0x448f40..0x45b1b0 | 1 | Project, Project, File, File, Clipboard |
| 19 | FieldControls | 0 | 0 | - | 0 | Add, Item, Count, Remove, NewEnum |
| 20 | frmCheckFilesExist | 9 | 2205 | 0x45b4f0..0x45dc60 | 1 | Initialize |
| 21 | EditingForm | 13 | 385 | 0x45dce0..0x45e440 | 0 | Key, Key, Project, Project, File, File |
| 22 | frmEditingNoStructure | 19 | 2500 | 0x45e520..0x4600e0 | 0 | Update, EditingForm_Destroy, EditingForm_File, EditingForm_F |
| 23 | frmMassModify | 7 | 2402 | 0x460560..0x462d80 | 1 | Setup |
| 24 | frmGreatLibrary | 24 | 14014 | 0x463b80..0x46e420 | 2 | Setup |
| 25 | Preferences | 6 | 1917 | 0x46e4b0..0x472200 | 0 | IndentInc, IndentInc, File, Load, Save |
| 26 | Shared | 5 | 312 | 0x472440..0x4728d0 | 0 |  |
| 27 | Comment | 5 | 445 | 0x472960..0x472ec0 | 0 | Entry, Entry, FieldInstance, FieldInstance, Destroy |
| 28 | Comments | 12 | 716 | 0x473110..0x473cb0 | 0 | Add, Item, ItemByObject, CommentByObject, Count, Remove |
| 29 | frmIndentIncrement | 4 | 757 | 0x473db0..0x474d80 | 0 | Preferences |
| 30 | frmSort | 7 | 2411 | 0x4752a0..0x4769d0 | 0 | CorrectOrder, Setup |
| 31 | frmChooseEntry | 6 | 484 | 0x476b60..0x477760 | 0 | Setup |
| 32 | frmSLICTemplate | 6 | 422 | 0x477830..0x477ed0 | 0 | Setup |
| 33 | FileAccess | 29 | 1702 | 0x477f60..0x47a6c0 | 0 | CommentChar, DelimiterChar, DelimiterCharRight, DelimiterCha |
| 34 | FileInterface | 10 | 2673 | 0x47a780..0x47c320 | 0 | Setup, CurrentPath, FileAbsent, PathInvalid, ObtainOpenFile, |
| 35 | FileReference | 15 | 1398 | 0x47c3b0..0x47d7c0 | 0 | FileAbsent, FileInterface, FileName, FileName, Path, AssertF |
| 36 | Action | 1 | 64 | 0x47dc60..0x47dc60 | 0 | Action |
| 37 | CancelObject | 0 | 0 | - | 0 |  |
| 38 | frmCheckExport | 2 | 188 | 0x47dde0..0x47e220 | 0 | Initialize |
| - | runtime stubs / entry | 8 | - | - | - | - |
