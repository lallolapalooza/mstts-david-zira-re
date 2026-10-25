# Reimplementation assessment

## Verdict

Architecture-only is the deliverable. A faithful reimplementation of the David or
Zira voice is **not** achievable from the available artifacts in this workspace
without the trained model data plus a compatible front-end/back-end stack. The
dossier below is sufficient for another agent to continue, but it is not a
voice clone and makes no parity claim.

## What is proven

- Two engine generations exist and are selected by registry CLSID.
- The OneCore engine (10.3.21207.0) contains HTS HMM, optional DNN, NUS unit
  selection, Opus/SILK/CELP inventories, and an LSF/TFTE vocoder.
- David/Zira `.APM` files are HTS voice fonts: 0x18-byte font header, 0x40-byte
  voice header, question set, acoustic model set, float parameter block, and
  Huffman-compressed PDFs.
- The `.BEP` file is a `CParameterManager` table: magic `BEPT`, 16-byte GUID,
  u32 count, 12-byte `{id,offset,size}` records, then parameter blobs.
- `.NUS` is a GUID-tagged unit inventory with a mask-encrypted UTF-16 feature
  string table; `.NU2` is the domain variant.
- `.DAT` is a recursive GUID-tagged object directory: 0x28-byte records
  `{GUID id, GUID type, u64 size, payload}` aligned to 8 bytes.
- The front-end is locale-handler driven: `GetLocaleHandler(LCID)` constructs
  `CTTSLocaleHandlerENU` for 0x409; `CLocaleTextAnalyzerENU` wires a compound
  word breaker and grapheme-phoneme converter.

## What is missing for a reimplementation

1. **Trained model semantics.** The APM decision trees and PDFs are parsed, but
   the exact question set, stream layout, and parameter transforms are only
   partially decoded. Rebuilding them from the binary is possible in principle
   but requires finishing the APM tree/PDF deserializer.
2. **Vocoder fidelity.** `CSpsVocoder` uses LSF synthesis plus either a standard
   excitation generator or TFTE. The exact windowing, LSP decomposition, pulse
   placement, and post-filter constants are spread across several functions and
   are not yet extracted into a standalone algorithm.
3. **Front-end data.** The locale `.dat` contains the lexicon/TN/CART data in a
   binary object graph. Its leaf formats are partially documented but not fully
   decoded.
4. **Voice identity.** Even with a perfect engine, the voice is the trained
   APM/BEP parameters. A clone would need those parameters or a new training
   pipeline; the binary does not contain a synthesizer that can invent them.

## Paths to continue

- Finish `CHTSAcousticModel::LoadDecisionTrees` and `BuildHMMState` decoding to
  recover the exact question set and PDF layout.
- Extract the vocoder constants from `CSpsVocoder::PrepareLSFParameter`,
  `CLsfSynthesizerImpl::Synthesize`, and `CITFTE::SynthesisTFTE`.
- Decode the `.dat` leaves (`CTTSFeatureCARTData`, `CTrieLexicon`,
  `CWordPronunciation`) and the phone converter tables.
- Build a reference harness that calls the original engine (already in
  `samples/`) and compare intermediate stages only if instrumentation is added.

## Validation target

`python scripts/verify_parity.py --candidate <dir>` is the acceptance test.
The archive currently passes 176/176 against its own manifest. A reimplementation
must match every WAV byte-for-byte for "100% parity"; `--pcm-only` ignores the
container header. A perceptually similar clone is a mismatch by definition.
