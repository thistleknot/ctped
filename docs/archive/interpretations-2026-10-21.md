# Superseded decisions — 2026-10-21

- README example: an SVG illustration showed supplied `Advance.txt` values and supported edits. It was replaced with PNG after the user's README viewer did not display SVG images.
- Windows package resources: the PyInstaller build initially collected no `.ced` template or `.ces` structure descriptors. This caused **Open gamefile…** to prompt users to locate a `.ced`. The current disposition bundles the supplied `default.ced` and `Structure` beside the executable.
