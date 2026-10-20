# CTPEd Python port

This project is a visual Python reimplementation of CTPEd, the Civilization: Call to Power 2 data-file editor by John Bytheway. It uses the recovered Ghidra pseudocode, the manual, and the supplied descriptors as behavioral evidence. The export is not the original buildable C source, and Python output parity with CTPEd is still open.

## Run

From this folder:

```powershell
python app.py
```

The app uses tkinter and needs a desktop Python installation with Tcl/Tk and a graphical session.

## Current workflows

- Choose **Open gamefile…** and select the mod's `gamefile.txt` or prefixed `*_gamefile.txt`; bundled default descriptors populate a scrollable **Project files** list without loading all data.
- Select a structured row and choose **Import selected file**, then edit and **Save data file…** to a copy; **Check paths** shows missing files and descriptors.
- Open `.ces` descriptors and inspect fields, flags, defaults, and argument definitions.
- Open `.ced` projects, inspect declarations, choose roots and language, check every resolved data/structure path without importing, and import one selected declaration.
- Open matching data files; view and edit format-0/2 direct text or inspect format-1/3 entries.
- Use the Entries matrix's visible scrollbars to reach every row and field; focus the matrix and press **Ctrl+A** to select all Entries for a selected-only mass edit.
- Edit supported scalar values, including schema-bound nested values; add defaulted entries (including nested defaults when child descriptors are available) and delete selected entries.
- Edit raw nested blocks as complete source-preserving blocks when their child descriptor is unavailable; these remain outside scalar mass-edit operations.
- Apply formula mass edits to a field dimension, preview changes, and reference same-file Entries or project data files with recursion-safe source snapshots.
- Save copies of descriptors, projects, preferences, scripts, templates, or supported data-file edits.
- Open `.prf`, `.gls`, and `.glt` files; preview supported Great Library template directives, save a selected Entry render as a CP1252 text copy, and preview the separate unit-icon name template's `%n` shortcut.

Writes remain deferred until the user chooses a save destination. Unsupported schemas or edits surface errors instead of being silently rewritten.

## Local transformation API

The HTTP API is an optional local service; it does not replace or change the Tk editor. Install its separate dependencies and start it from this folder:

```powershell
.venv\Scripts\python.exe -m pip install -r requirements-api.txt
.venv\Scripts\python.exe transform_api.py
```

It listens on `127.0.0.1:8765`. Download a blank workbook from `GET /v1/transforms/template`; fill its `Rules` sheet with one row per operation. `StructureFile` must identify a declared `.ces` file, `FieldPath` is the exact field path, `Operation` is `set`, `concatenate`, `add`, `multiply`, or `formula`, and `Operand` is a literal or CTPEd formula expression as text. Rules apply to all Entries, in worksheet order. Excel formula cells are not evaluated.

Send the workbook and project paths as multipart form data to `POST /v1/transforms/preview` or `POST /v1/transforms/apply`. Both require `workbook`, `gamefile_path`, `template_path`, and `structure_root`; `language` is optional. Apply also requires a new `output_directory`. Preview reports per-rule counts and samples without writing files. Apply writes only changed files into a relative-path overlay and leaves the source game files unchanged. Each rule shows an Entry-count `tqdm` bar in the service terminal; progress is not streamed to the browser. See `transform_api_spec.md` for the full contract.

## Verify

Run the tests with:

```powershell
python -m pytest -q
```

Some Tk callback tests skip when the active Python installation lacks Tcl/Tk runtime files. See `plan.md` for current coverage, known gaps, and `test-plan.md` for operator checks.

