## Superseded FieldInstance resolution decision

- Prior decision: Format 1 and 3 ordinary/reference `FieldInstance.value` values retained exact lexical tokens, and no type conversion or reference resolution was applied. The recovered `ValueToObject` dependency on project relationships had not yet been implemented.
- Superseded on 2026-10-15 after mapping the recovered type 0/1/2 switch, implementing explicit type-1 resolution against imported Files, passing synthetic preservation/failure tests, and resolving a real Buildings `EnableAdvance` value to the matching Advance Entry. Entry parsing still preserves original lexical tokens; resolution is a separate explicit operation.

## Superseded relative-root decisions

- Prior decision: relative `%s` and `%c` roots resolve against the `.ced` directory. Superseded on 2026-10-15 after a direct reproduction constructed `.private_samples/.private_samples/Structure/advance.ces`; explicit roots now resolve from the process working directory.
- Prior decision: only chooser-returned roots resolve from the process working directory, while direct `ProjectFileSpec` roots remain project-relative. Superseded on 2026-10-15 after the duplicate-folder reproduction identified the direct relative-root join as the defect; both UI and direct explicit roots now share working-directory semantics.

## Superseded nested-value decision

- Prior decision: type-2 values should be nested `Entry` objects, but Python would retain all nested blocks as raw strings until a schema context was available. Superseded on 2026-10-15 after `File.from_bytes` began accepting an explicit structure root and produced child Entries for schema-matched blocks. Unknown child fields still fail, matching the anchored `Entry.ReadFromFile` lookup behavior.
