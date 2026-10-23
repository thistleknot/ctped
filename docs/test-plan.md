# CTPEd Python port: operator test plan

CURRENT - 2026-10-21: validate History + change review in the Windows desktop app on H: when a usable Tcl/Tk runtime is available; the current Python installs skip these UI cases.

1. Open a structured format-1/3 data file, edit a scalar, press Ctrl+Z, and confirm the loaded model returns to its prior value without changing source bytes.
2. Press Ctrl+Y and confirm the edit returns; make a new edit after Undo and confirm Redo is cleared.
3. Add an Entry, Undo it, and confirm the visible list and selected-Entry preview refresh without a callback error.
4. Open format-0/2 text and a supported settings file, edit, Undo, and Redo; confirm the active source file remains unchanged.
5. Open Changes before edits, after edits, after Undo, and after Redo; confirm the read-only diff matches each current state, then close it and continue editing.
6. Load another document and confirm both history buttons disable; toggle an active document read-only and confirm Undo/Redo are disabled.
7. Save an edited copy and confirm the source stays unchanged and history remains available.

Automated checks: `python -m pytest -q`; GUI cases require a working Tcl/Tk runtime. Historical operator plan: [2026-10-17 handoff](archive/test-plan-2026-10-17.md).
