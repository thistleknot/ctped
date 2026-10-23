# Source layout contract

## Current disposition (2026-10-22)

Keep flat application modules in `src/`, tests in `tests/`, user and engineering documents in `docs/`, recovered Ghidra evidence in `reference/ghidra/`, historical notes in `docs/archive/`, tracked runtime descriptors in `resources/`, the prior implementation in `legacy/`, and packaged downloads in `releases/`. Keep build and test output ignored. The PyInstaller spec and project configuration remain at the root. The normal source build and desktop gamefile workflow use committed resources, without `.private_samples/`.

## Structural requirements

- R1. WHEN tests are run from the repository root, imports resolve to the modules under `src/` and only `tests/` is collected.
- R2. WHEN the desktop app is started with `python src/app.py`, existing UI and data-file behavior remains unchanged.
- R3. WHEN the transformation API is started with `python src/transform_api.py`, its existing loopback API contract remains unchanged.
- R4. WHEN PyInstaller builds from `CTPEdPython.spec` at the repository root, analysis resolves `src/app.py` and sibling imports from `src/`.
- R5. WHEN users follow README commands and links, paths resolve from the repository root after documentation relocation.
- R6. WHEN the Windows release archive is rebuilt, it contains the runnable `CTPEdPython/CTPEdPython.exe` bundle.
- R7. WHEN a source build or desktop gamefile open runs, it uses `resources/default.ced` and `resources/Structure/` from the repository.
- R8. WHEN a date-stamped historical note is retained, store it under `docs/archive/` and link it from its current index.
- R9. WHEN the docs index is opened, it navigates current user and engineering documentation; Ghidra inventory belongs under `reference/ghidra/`.

## Validation

- Run the complete pytest suite from the repository root.
- Build using only tracked source/resources and confirm the executable starts and opens a gamefile without asking for a `.ced` or Structure folder.
- Rebuild and inspect the release ZIP, then confirm the executable from the extracted archive starts.
- Inspect root listing/Git status for misplaced modules or generated files.
- Check all relocated documentation links and archive references.

## Closed decisions

- Keep flat modules inside `src/`: existing product and test imports use flat names; introducing a package would require broad import changes without improving the requested source separation.
- Keep `CTPEdPython.spec`, `pytest.ini`, dependency files, `README.md`, `tests/`, `legacy/`, and `releases/` at root: they are project/build/test/archive interfaces rather than application source.
- Store decompiler output under `reference/ghidra/`, not `src/`: it is incomplete evidence, not buildable application source.
- Keep `.private_samples/` ignored for test and game fixtures; build/runtime descriptors are tracked separately in `resources/`.
- Keep CLI inputs explicit; README examples point to tracked descriptors so callers do not need a separately extracted release bundle.
