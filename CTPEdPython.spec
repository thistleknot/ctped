"""Pipeline
Stage | Mechanism | Tag | Requirements
ANALYZE | Analyze src/app.py and Python imports | [mandatory] | R1
COLLECT | Bundle runtime and tracked descriptors under the packaged resources directory | [mandatory] | R2

EARS guards
R1. WHEN PyInstaller builds this target, analyze the Tk application from src/app.py.
R2. WHEN the packaged app opens a gamefile, find default.ced and Structure in its bundled resources without asking the user to locate them.

CLOSED
- Bundling game data is unnecessary: Open gamefile derives the data root from the selected gamefile path.

Preconditions: resources/default.ced and resources/Structure exist at build time.
Failure modes: PyInstaller fails when a required bundled source path is missing.
"""
# -*- mode: python ; coding: utf-8 -*-


a = Analysis(
    ['src/app.py'],
    pathex=['src'],
    binaries=[],
    datas=[
        ('resources/default.ced', 'resources'),
        ('resources/Structure', 'resources/Structure'),
    ],
    hiddenimports=[],
    hookspath=[],
    hooksconfig={},
    runtime_hooks=[],
    excludes=[],
    noarchive=False,
    optimize=0,
)
pyz = PYZ(a.pure)

exe = EXE(
    pyz,
    a.scripts,
    [],
    exclude_binaries=True,
    name='CTPEdPython',
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=True,
    console=False,
    disable_windowed_traceback=False,
    argv_emulation=False,
    target_arch=None,
    codesign_identity=None,
    entitlements_file=None,
)
coll = COLLECT(
    exe,
    a.binaries,
    a.datas,
    strip=False,
    upx=True,
    upx_exclude=[],
    name='CTPEdPython',
)
