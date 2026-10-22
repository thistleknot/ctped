# Source layout contract

## Current disposition (2026-10-21)

Move application Python modules into `src/` while preserving their existing flat module names. Keep tests at repository root in `tests/`, and add `src/` to pytest's import path. Keep PyInstaller's entry spec at repository root and point it at `src/app.py`. Move project documentation and behavioral specs into `docs/`; keep only the user-facing README at root. Move the recovered Ghidra pseudocode and type header into `reference/ghidra/`. Keep `legacy/` as the archived prior implementation, and keep release artifacts under `releases/`.

## Structural requirements

- R1. WHEN tests are run from the repository root, imports resolve to the modules under `src/` and only `tests/` is collected.
- R2. WHEN the desktop app is started with `python src/app.py`, existing UI and data-file behavior remains unchanged.
- R3. WHEN the transformation API is started with `python src/transform_api.py`, its existing loopback API contract remains unchanged.
- R4. WHEN PyInstaller builds from `CTPEdPython.spec` at the repository root, analysis resolves `src/app.py` and sibling imports from `src/`.
- R5. WHEN users follow README commands and links, paths resolve from the repository root after documentation relocation.
- R6. WHEN the Windows release archive is rebuilt, it contains the runnable `CTPEdPython/CTPEdPython.exe` bundle.

## Validation

- Run the complete pytest suite from the repository root.
- Build using the checked-in root spec and confirm the executable starts.
- Rebuild and inspect the release ZIP, then confirm the executable from the extracted archive starts.
- Inspect root listing and Git status for misplaced product modules or accidental generated files.

## Closed decisions

- Keep flat modules inside `src/`: existing product and test imports use flat names; introducing a package would require broad import changes without improving the requested source separation.
- Keep `CTPEdPython.spec`, `pytest.ini`, dependency files, `README.md`, `tests/`, `legacy/`, and `releases/` at root: they are project/build/test/archive interfaces rather than application source.
- Store decompiler output under `reference/ghidra/`, not `src/`: it is incomplete evidence, not buildable application source.
