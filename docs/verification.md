# Verification log

## Environment

- Windows 10.0.26200, x64.
- SAPI voices: Microsoft David Desktop, Microsoft Zira Desktop.
- OneCore voices: Microsoft David, Microsoft Zira (also Mark/Sabina/Raul).
- Ghidra 12.2 PUBLIC, Temurin JDK 25, Python 3.14.7, pefile 2024.8.26,
  capstone 5.0.7, pyghidra 3.2.0.

## 1. Voice archive self-parity

```
$ python scripts/verify_parity.py
david           44/ 44  100.000%
zira            44/ 44  100.000%
david-onecore   44/ 44  100.000%
zira-onecore    44/ 44  100.000%
TOTAL          176/176  100.000%
```

Byte-exact SHA-256 comparison against `samples/MANIFEST.json`; exit code 0.
`artifacts/parity_report.json` records the result.

## 2. Re-render reproducibility

Rendered the first corpus line (`"The quick brown fox jumps over the lazy dog."`)
again at 16 kHz/16-bit/mono:

```
david repro==archive True 07fdeacaa20312e9...
zira  repro==archive True 66c7fe6b831d519b...
```

The live engine still produces byte-identical files to the archive.

## 3. Determinism

Three independent SAPI renders per voice, same text:

- David: `327cefeccf1921fe…` × 3
- Zira: `cc456c7b150ac0c8…` × 3

`artifacts/determinism.txt` contains the full hashes.

## 4. Engine selection

`scripts/module_probe.ps1` synthesizes in-process and enumerates loaded modules:

- Microsoft David Desktop → `MSTTSEngine_OneCore.dll` 10.3.21207.0,
  `MSTTSLoc_OneCore.DLL` 10.3.21207.0.
- Microsoft Zira Desktop → both engine pairs are loaded; the Zira token CLSID is
  the Desktop engine, and its rendered audio differs from WinRT Zira.

Cross-API comparison for David: same 3.375 s duration, PCM correlation 0.9498,
gain 0.9953. Zira: SAPI 3.330 s vs WinRT 3.430 s, different PCM.

## 5. Static analysis

- Public PDBs downloaded from `msdl.microsoft.com`; CodeView GUID/age recorded.
- Ghidra imported the PDBs from `artifacts/bin/` beside the DLL copies.
- `MSTTSEngine_OneCore.dll`: 6,851 functions; `MSTTSLoc_OneCore.dll`: 3,039;
  `MSTTSEngine.dll`: 3,703; `MSTTSLoc.dll`: 1,171.
- Decompiled key functions are in `artifacts/decompiled/`,
  `artifacts/decompiled_loc/`, and `artifacts/decompiled_desktop/`.

## 6. Archive integrity

`artifacts/inventory.json` records SHA-256, size and PE version/PDB for every
engine and model file. `samples/MANIFEST.json` records SHA-256, format, duration
and source text for every WAV, plus the corpus hashes and per-voice root hashes.

## 7. Limit

No reimplementation exists, so "100% parity" is verified only for the reference
archive against its own manifest. The checker will report any future
reimplementation's actual byte-level agreement.
