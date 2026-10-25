# Microsoft David / Zira — MSTTS reverse-engineering dossier

**Status: architecture-only.** This repository documents the Microsoft David and
Zira TTS voices installed on this Windows host, with evidence from Ghidra, public
PDBs, registry data, and runtime probes. It does **not** contain a voice clone or
a reimplementation, and it makes no reimplementation-parity claim.

The user-approved fallback applies: where a faithful reimplementation is not
feasible from the available artifacts, only the architecture is documented.

## Deliverables

| Path | Contents |
|---|---|
| `docs/architecture.md` | Runtime topology, voice data sets, pipeline, class map, verdict |
| `docs/formats.md` | `.APM`, `.BEP`, `.NUS/.NU2`, `.DAT`, `.INI` on-disk layouts |
| `docs/ghidra-index.md` | PDB provenance, key function addresses, decompiled artifacts |
| `docs/reimplementation.md` | What is proven, what is missing, how to continue |
| `docs/verification.md` | Commands and observed results |
| `samples/` | 176 reference WAVs (4 render paths × 44 utterances) and manifest |
| `artifacts/` | Hashes, registry dump, PDB metadata, Ghidra inventories, decompiled C |
| `scripts/` | Capture, inventory, Ghidra, decompile and parity-check tools |

## Key findings

- **Two engines.** SAPI/OneCore select `MSTTSEngine_OneCore.dll` 10.3.21207.0
  (David, WinRT voices) or `MSTTSEngine.dll` 11.0.58.18 (Desktop Zira) by token
  CLSID. The OneCore build links DNN, NUS, Opus/SILK/CELP and TFTE; the Desktop
  build is the older HTS/NUS line.
- **`.APM` is an HTS voice font.** 0x18-byte font header (`"APM "` + signature +
  size), 0x40-byte voice header (LCID, 16 kHz/16-bit, frame shift, section
  offsets), question set, acoustic model set, float mean/variance block, and
  Huffman-compressed PDFs.
- **`.BEP` is a runtime parameter table**, not an excitation model. It is loaded
  as `CParameterManager` data (`BEPT` magic, GUID, count, 12-byte
  `{id,offset,size}` records).
- **`.NUS` is unit selection.** GUID-tagged inventory with a mask-encrypted
  UTF-16 feature-name table; `.NU2` is the per-domain variant.
- **`.DAT` is a recursive GUID object graph.** 0x28-byte records
  `{GUID id, GUID type, u64 size, payload}`, padded to 8 bytes; leaves include
  trie lexicons and CART models.
- **Locale front-end.** `GetLocaleHandler(0x409)` constructs
  `CTTSLocaleHandlerENU`; `CLocaleTextAnalyzerENU` wires the compound word
  breaker and grapheme-phoneme converter.

## omp session archive

`archive/omp-archive-2026-10-24_mstts-re.zip` is the full session export made
with [`alosslessdev/omp-archive-main`](https://github.com/alosslessdev/omp-archive-main).
It contains `session.jsonl`, tool logs, `agents.json`, `jobs.json`,
`viewer.html`, and `manifest.json`. See `archive/README.md` for the hash and
contents.

## Verification

- All 176 archived WAVs match `samples/MANIFEST.json` byte-for-byte:
  **176/176, 100.000%** (`python scripts/verify_parity.py`).
- Re-rendering the first corpus line with each SAPI voice now reproduces the
  archived David and Zira WAVs exactly.
- Three independent SAPI renders per voice are byte-identical
  (`artifacts/determinism.txt`).
- Engine/PDB/model hashes are in `artifacts/inventory.json`; registry evidence is
  in `artifacts/registry.json`.

## Reproduce

```powershell
# Render the reference corpus
powershell -ExecutionPolicy Bypass -File scripts\capture_corpus.ps1
powershell -ExecutionPolicy Bypass -File scripts\capture_corpus_winrt.ps1

# Rebuild evidence
python scripts\inventory.py
python scripts\dump_registry.py
python scripts\verify_parity.py
```

Ghidra analysis is reproducible with `scripts/run_ghidra.py`. Microsoft DLLs and
PDBs are not committed; run `python scripts/fetch_pdbs.py` to stage them in
`artifacts/bin/`.

## Toolchain

Windows 10.0.26200 x64; Ghidra 12.2 PUBLIC; Temurin JDK 25; Python 3.14 with
`pefile`, `capstone`, `pyghidra`; PowerShell 5.1; System.Speech and WinRT
`Windows.Media.SpeechSynthesis`.

## Limits

Static analysis cannot establish bit-exact output parity without executing the
original engine. The archive is the golden corpus for any future work; a
perceptually similar clone is not "100% parity" under the included checker.

## Repository

https://github.com/lallolapalooza/mstts-david-zira-re
