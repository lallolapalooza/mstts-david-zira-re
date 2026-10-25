# Notice

This repository contains original analysis, documentation, scripts and generated
reference audio. It does **not** redistribute Microsoft DLLs or PDBs. Those are
installed components of Windows; `scripts/fetch_pdbs.py` retrieves public symbols
from Microsoft's symbol server for local analysis.

The `samples/` WAV files are outputs of the locally installed Microsoft TTS
engine, archived as a measurement corpus for interoperability and
reverse-engineering research. They are not a voice model and are not intended as
a substitute for the Microsoft components.

`archive/` contains an omp session export that was PII-sanitized with
`scripts/sanitize_archive.py` (user paths/names and email addresses redacted).
It still contains terminal output and research context.
