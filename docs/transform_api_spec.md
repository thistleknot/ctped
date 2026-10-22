# CTPEd transformation API spec

## Current contract

Add a localhost-only HTTP interface that previews and applies ordered workbook rules through existing CTPEd project and File models. The Tk editor remains available with its existing behavior.

### Requirements

- R1. `GET /health` returns service readiness without touching project files.
- R2. `GET /v1/transforms/template` returns a valid `.xlsx` workbook with one `Rules` sheet and headers, in order: `StructureFile`, `FieldPath`, `Operation`, `Operand`.
- R3. Preview and apply accept an uploaded `.xlsx` and multipart fields `gamefile_path`, `template_path`, `structure_root`, and optional `language`; apply additionally requires `output_directory`.
- R4. Load the Gamefile through `app.load_gamefile`; use the supplied default project template and structure root, preserving the application's language inference when `language` is omitted.
- R5. Require exactly one `Rules` worksheet and the exact ordered header row from R2. Reject uploads over 10 MiB, workbooks with over 500 rules, empty workbooks, blank rule cells, formula-typed Excel cells, extra or missing columns, and unsupported workbook types with row-specific validation errors. Workbook operands are literal cell values; CTPEd formula expressions are text, not Excel formulas.
- R6. Each data row names one unique declared `.ces` basename, one exact field path, and one of `set`, `concatenate`, `add`, `multiply`, or `formula`. Rules target all Entries in that File and execute in worksheet order.
- R7. Resolve rule targets using the existing project declaration resolver; formula references use `resolve_project_formula_reference`. Do not evaluate arbitrary JavaScript or implement a second transformation engine.
- R8. Preview executes the rule sequence only against a newly loaded in-memory project and returns per-rule changed counts, up to ten before/after samples, and changed relative file paths. It writes no files.
- R9. Apply runs the same sequence against a fresh in-memory project, serializes every loaded File, and stages only changed declared data files under paths relative to the project's inferred data root. Formula reads see already staged earlier worksheet rows; a formula's own batch reads values as of that row's start, matching `File.mass_modify` behavior. No rule is reevaluated.
- R10. Publish apply output only after every rule and serialization succeeds. Require a new output directory whose parent exists; reject an existing destination and any destination equal to or inside the source data root. Stage in a temporary sibling directory and rename it into place. Leave source Gamefile, descriptors, and data bytes unchanged.
- R11. Return HTTP 422 with actionable validation/model errors and no partial output. Keep request/response paths relative in results except the caller-supplied output directory.
- R12. Bind the runnable service to `127.0.0.1` only; do not alter `python src/app.py` or its manual workflows.
- R13. During each API rule, show an Entry-count `tqdm` progress bar in the service terminal; the existing GUI and default model callers have no progress side effects. The bar reports processed Entries, closes on success or error, and is not streamed through HTTP.

### Closed decisions

- The API is a separate FastAPI service, not a network/LAN listener or a replacement for the Tk app.
- The workbook is uploaded with each preview/apply call; it is not read from an arbitrary server-side workbook path.
- First-version rules apply to all Entries in each target File; per-Entry targeting is out of scope.
- Apply creates a changed-file overlay, not a full copy of the game/mod tree and not in-place writes.
- The endpoint set is health, workbook-template download, transform preview, and transform apply.
- Formula operations use the existing restricted ECMAScript subset. They do not evaluate Excel formula cells.
- Progress is terminal-only and reports per-rule Entry traversal; browser-side streaming and aggregate multi-rule progress are out of scope.

### Preconditions and failure modes

The caller supplies an accessible Gamefile, matching `default.ced`, and Structure directory; the referenced project data files and descriptors must exist. A target descriptor must be unique and editable as a format-1/3 File. Formula references must resolve uniquely to declared scalar values. Invalid workbook data, path escapes, missing inputs, serialization errors, or output publication failures return an error and leave source files untouched; apply must not leave a partial destination.

### Acceptance checks

- Workbook template downloads and parses with the exact headers.
- Three varied transformation rows preview expected counts/samples without changing source bytes.
- Apply writes only changed files at their relative overlay locations and preserves every source byte.
- Invalid later rules and serialization failures produce no output directory or partial files.
- Same-File and project-File formula references follow worksheet order and do not recursively reevaluate prior formulas.
- API binds only to loopback and the existing Tk/manual save-copy tests remain unchanged.
- A varied model battery confirms progress callbacks advance to the Entry total for simple and formula operations; API rule execution creates and closes a `tqdm` bar.

### Spec validation

The behavior layer is governed by R1-R12; the structural layer is one service module with explicit rule/result types and endpoint functions; the sequence and publication transaction are specified in R8-R10; rendered requirements are the module's opening pipeline/EARS front matter; catalog disposition is recorded in `docs/objects.md`. Each R requirement has at least one API or model-level acceptance test planned above.
