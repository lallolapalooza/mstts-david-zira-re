# Evidence artifacts

| File/dir | Contents |
|---|---|
| `inventory.json` | SHA-256, size, PE version/PDB for engine, model and locale files |
| `registry.json` | Recursive dump of the SAPI/OneCore voice tokens and engine CLSIDs |
| `format_probe.json` | Parsed APM/BEP/NUS/DAT headers from the shipped files |
| `parity_report.json` | 176/176 archive verification result |
| `determinism.txt` | Three-render byte-identical SAPI probe |
| `functions_MSTTSEngine_OneCore_dll.json` | 6,851 functions with addresses, signatures, call graph |
| `onecore_strings.txt`, `desktop_strings.txt`, `loconecore_strings.txt` | Extracted ASCII/UTF-16 strings |
| `decompiled/` | 39 decompiled OneCore engine functions |
| `decompiled_loc/` | 11 decompiled OneCore locale-handler functions |
| `decompiled_loc_desktop/` | Desktop `GetLocaleHandler` |
| `decompiled_desktop/` | 11 decompiled Desktop engine functions |
| `pdb/pdb_info.json` | CodeView GUID/age and symbol URLs; PDBs themselves are not committed |
| `bin/` | Generated staging dir for DLL/PDB copies (not committed) |
| `probes/` | Determinism and re-render probe WAVs |
| `ghidra_*_pdb.log` | Ghidra import/analysis logs |
| `README.md` | This index |

`ghidra_proj_pdb/` is the Ghidra project; `scripts/run_ghidra.py` reproduces the
imports. The public PDBs have no source/local-variable names.
