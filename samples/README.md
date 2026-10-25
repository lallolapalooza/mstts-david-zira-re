# Reference voice archive (Microsoft David / Zira)

176 WAV files: 43 plain-text utterances + 1 SSML utterance for each of four
render paths. PCM is 16 kHz, 16-bit, mono (the voice models' native rate).

| Directory | API | Engine | Voice data |
|---|---|---|---|
| `david/` | SAPI5 (`System.Speech`) | `MSTTSEngine_OneCore.dll` 10.3.21207.0 | `C:\Windows\Speech_OneCore\...\M1033David.*` |
| `zira/` | SAPI5 (`System.Speech`) | `MSTTSEngine.dll` 11.0.58.18 | `C:\Windows\Speech\...\M1033ZIR.*` |
| `david-onecore/` | WinRT (`Windows.Media.SpeechSynthesis`) | `MSTTSEngine_OneCore.dll` 10.3.21207.0 | `C:\Windows\Speech_OneCore\...\M1033David.*` |
| `zira-onecore/` | WinRT (`Windows.Media.SpeechSynthesis`) | `MSTTSEngine_OneCore.dll` 10.3.21207.0 | `C:\Windows\Speech_OneCore\...\M1033Zira.*` |

`MANIFEST.json` records SHA-256, byte size, WAV format, duration and source text
for every file, plus the hashes of the engine binaries, models and corpus.
`root_sha256` is computed over `voice/file:sha256` lines sorted by file name.

## Reproduce

```powershell
powershell -ExecutionPolicy Bypass -File scripts\capture_corpus.ps1        # SAPI paths
powershell -ExecutionPolicy Bypass -File scripts\capture_corpus_winrt.ps1  # OneCore paths
python scripts\verify_parity.py
```

The engine is deterministic on this host: three independent SAPI renders of the
same text produced byte-identical WAV files (SHA-256 values in
`../artifacts/determinism.txt`).

## Parity criterion

`python scripts\verify_parity.py --candidate <dir>` compares a reimplementation
(or any other renderer) against the archive. Byte-exact WAV equality is required
for "100% parity"; `--pcm-only` ignores container headers. A voice clone that is
perceptually similar but not sample-identical is reported as a mismatch.

The archive is complete against its own manifest (176/176, 100.000%). This is a
reference corpus, **not** evidence that any reimplementation exists.
