# MSTTS data formats (evidence-backed)

All integers are little-endian. "File offset" is relative to the start of the
file on disk. There are two voice-font wrappers: the 0x18-byte
`VOICE_FONT_SECTION_HEADER` (APM) parsed by
`CTTSDataLoader::LoadFontSectionHeader` (`0x1800982b4`), and the 0x24-byte
extended header (BEP/NUS) parsed by `CTTSDataLoader::LoadFontSectionHeaderEx`
(`0x180098380`).

## 1. `VOICE_FONT_SECTION_HEADER` (0x18 bytes)

| Offset | Type | Meaning |
|---:|---|---|
| 0x00 | char[4] | magic, e.g. `"APM "`; checked by `strncmp(...,4)` |
| 0x04 | u64 | signature part 1 (per-format constant) |
| 0x0c | u64 | signature part 2 |
| 0x14 | u32 | payload size = file size − 0x18 |

`CHTSVoiceData::LoadHTSFontSectionHeader` (`0x1800b3790`) compares the 16
signature bytes against the two immediates `0x4A9B42036B708576` and
`0xD0ADA452F8FF1D9B` before accepting an `"APM "` file. The same function then
hands the payload to `CHTSVoiceData::LoadData`.

## 2. `.APM` — acoustic parameter model

### 2.1 wrapper

```
0x00  "APM "                              (4 bytes)
0x04  76 85 70 6B 03 42 9B 4A              (u64 #1)
0x0C  9B 1D FF F8 52 A4 AD D0              (u64 #2)
0x14  u32 payload_size (file size - 0x18)
0x18  payload
```

### 2.2 HTS voice header (payload +0x00 .. +0x3F, file 0x18 .. 0x57)

`CHTSVoiceData::LoadVoiceDataHeader` (`0x1800b380c`) consumes exactly 0x40
bytes. `CHTSVoiceData::ValidateFileHeader` (`0x1800b3918`) requires:

| Payload offset | File offset (OneCore) | Type | Meaning / validation |
|---:|---:|---|---|
| 0x00 | 0x18 | u32 | format version = 3 |
| 0x04 | 0x1c | u32 | checksum |
| 0x08 | 0x20 | u16/u16 | LCID (0x0409) + revision |
| 0x0c | 0x24 | u32 | flags |
| 0x10 | 0x28 | u32 | sample rate; must be 16000 or 8000 |
| 0x14 | 0x2c | u32 | sample width; must be 8 or 16 |
| 0x18 | 0x30 | u32 | frame shift (80 samples = 5 ms at 16 kHz) |
| 0x1c | 0x34 | u32 | question-definition offset (0x58) |
| 0x20 | 0x38 | u32 | question-definition size (0x4AC8) |
| 0x24 | 0x3c | u32 | acoustic-model offset (0x4B20) |
| 0x28 | 0x40 | u32 | acoustic-model size (0x2460F4) |
| 0x2c | 0x44 | u32 | compressed-PDF offset (0x24AC14) |
| 0x30 | 0x48 | u32 | compressed-PDF size (0x0CBE) |
| 0x34 | 0x4c | u32 | extension offset (0) |
| 0x38 | 0x50 | u32 | extension size (0) |
| 0x3c | 0x54 | u32 | reserved (0) |

The validator treats consecutive fields as `(offset,size)` pairs for bounds
checking: `(0x1c,0x20)`, `(0x24,0x28)`, `(0x2c,0x30)`, `(0x34,0x38)`. For the
shipped Zira file these evaluate to `(88,19144)`, `(19232,2384116)`,
`(2403348,3262)`, `(0,0)`.

### 2.3 body layout (OneCore Zira; David differs only in offsets)

| Range | Size | Loaded by | Content |
|---|---:|---|---|
| 0x58 .. 0x4B20 | 19,144 | `CForestQuestionSet::LoadData` | question/feature definitions |
| 0x4B20 .. 0x24AC14 | 2,384,116 | `CHTSAcousticModel` | acoustic model set (header + trees + PDFs) |
| 0x2460F4 .. 0x24AC14 | 19,232 | `CHTSAcousticModel` (inside model set) | `float32` parameter block (mean/variance/gain triples) |
| 0x24AC14 .. 0x24B8D2 | 3,262 | `CHTSAcousticModel` | Huffman/compressed PDF payload |

`CHTSVoiceData::LoadData` (`0x1800b3650`) makes the layout explicit:

```
CForestQuestionSet::LoadData(qset,
    base + hdr[0x2c], hdr[0x30],   // 0x24AC14, 0x0CBE
    base + hdr[0x1c], hdr[0x20]);  // 0x58,     0x4AC8
LoadAcousticModels(base + hdr[0x24], hdr[0x28]); // 0x4B20, 0x2460F4
```

`CHTSAcousticModel::LoadDecisionTrees` (`0x180014b80`) starts by reading two
u32 values: tree count and a second count. It then allocates an array of
`CHTSDecisionTreeSet` (0x28 bytes each) and loops over trees. If the first
payload word equals 0, the payload is treated as uncompressed; otherwise a
`CLwHuffDecoder`/`CLwHuffCodec` decompressor created by
`CHTSVoiceData::CreateDecompressor` (`0x180015e70`) expands it.

`CHTSAcousticModelHeader::Deserialize` (`0x180035680`) reads the model-set
header fields (stream count, state count, PDF counts, dynamic-window
configuration, extension size) and calls `ParseExtensionHeader`. The model-set head is voice-dependent: Zira
`05 00 00 00 2C 00 00 00` = 5 streams, 44 states; David and Desktop Zira
`04 00 00 00 24 00 00 00` = 4 streams, 36 states.

### 2.4 decision-tree leaf types

Ghidra resolves these templates in `CHTSDecisionTreeImpl<T>`:

| Leaf type | Purpose |
|---|---|
| `CHTSPhoneDurationLeafNode` | phone duration regression |
| `CHTSStateDurationLeafNode` | HMM state duration |
| `CHTSF0LeafNode` | log-F0 |
| `CHTSLSFLeafNode` | LSF spectral parameters |
| `CHTSMBELeafNode` | MBE excitation parameters |
| `CHTSOffsetLeafNode` | stream/state offsets |
| `CUnitCandidateLeafNode` | NUS unit candidates |

`CHTSAcousticModel::BuildDuration` (`0x1800b1218`) regresses a
`CHTSPhoneDurationLeafNode`, then builds a `CHMMStream` containing a
`CHMMGaussMixture`; stream count and state count come from the model header.
`BuildHMMState` (`0x180003e94`) performs the same construction for
`CHTSOffsetLeafNode` and allocates the per-state PDF/stream arrays.

## 3. `.BEP` — runtime parameter table

`CTTSEngine::InitializeEngineSetting` (`0x180092464`) builds
`<VoicePath>.BEP` and loads it with
`CTTSSharedDataLoader::LoadSharedData<CParameterManager>` (`0x180090500`).
`CParameterManager::LoadData` (`0x180113dc0`) parses:

```
0x00  u32   magic "BEPT" (0x54504542)
0x04  GUID  30 AF D7 EC A2 39 C2 4F A4 B9 EE 9D 44 02 3A 6F
0x14  u32   3 (format revision)
0x18  u32   checksum (Zira 0x2BD706C8, David 0x4E88051E)
0x1c  u64   payload_size = file_size - 0x24 (1740)
0x24  u32   count (18)
0x28  {u32 id; i32 offset; i32 size}[count]   (12 bytes each)
...   blobs; each offset is relative to the end of the record array
```

The record array ends at `0x24 + 4 + count*12` (`0x100` for count 18). Blob sizes
are 4, 12, or 148 bytes. `CParameterManager::Query` (`0x18007abac`) linearly
scans `{RUNTIME_PARAMETER id, pointer, size}` entries. IDs observed in the
shipped David/Zira/Mark files: `2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,30,31`.
The mapping from IDs to names is not in the public symbols; it is the main
remaining gap in the BEP format.

## 4. `.NUS` / `.NU2` — unit-selection inventory

`CNUSVoiceDataLoader::LoadData` (`0x1800eb320`) calls
`CTTSDataLoader::LoadFontSectionHeaderEx` with the GUID stored at
`this+0x1b0`; the shipped GUID bytes are:

```
06 57 8A 8B CE 75 3B 48 96 4D F7 C2 18 73 DF 8F
```

After the 0x24-byte extended section header it reads:

| Offset | Type | Meaning |
|---:|---|---|
| +0x00 | u32 | feature-name count (`local_a4`) |
| +0x04 | u32 | unit/entry count (`local_a8`) |
| +0x08 | u32 | string-table offset (`uStack_80`) |
| +0x0c | u32 | string-table length (`uStack_7c`, even) |
| +0x10 | ... | 12-byte records (`local_a8` of them) |

The string table is UTF-16LE and **mask-encrypted**; the loader calls
`CStringEncryption::EncryptByMask` before `CTTSFeatureMeta::Parse`. Each 12-byte
record feeds a feature-meta object. `LoadUnit` (`0x180035d68`) then reads a
32-bit unit count, an array of 8-byte unit descriptors, and per-unit feature
arrays of `TTS_FEATURE_VALUE` (4-byte values, count from `this+0x98`).

`.NU2` is the per-domain variant stored under `NUSData\`; the INI names the file
for each domain. Unit payloads are decoded by the Opus/SILK/CELP classes
(`COpusSILKEncodedAcousticData`, `CSILKEncodedAcousticData`,
`CCELPCodedInventory`, `CCELPEncodedSpeechDataVBR`) present in RTTI.

## 5. `.DAT` — locale data pack

`MSTTSLocEnUS.dat` (OneCore: 9,804,832 bytes; Desktop: 9,258,072 bytes) starts
with a GUID `14989F09-AB92-984E-A8B3-82867D871CC5`, 16 zero bytes, then
`u32 payload_size = file_size - 0x28` at offset 0x20. The rest is a directory of
GUID-tagged sections followed by UTF-16LE lexicon/TN strings (e.g. "how's",
"prep conj adv", "economic", "Inc."). Section offsets are absolute u32 values
(for example 0x959BF8, 0x959B70, 0xA2359E at 0x20/0xA8/0xB0 in the header).

`MSTTSLocEnUS.INI` is UTF-16LE and declares six TN domains (`address`, `name`,
`message`, `computer`, `media`, `companyName`) plus `[TN]` and `[SayAsMapping]`
settings. The locale handler DLL exports only `GetLocaleHandler`; the `.DAT` is
its serialized data store.

## 6. `.INI` — voice configuration

Plain ASCII for OneCore David/Zira; the shipped keys that affect synthesis are:

- `[Domain]` — NUS domain list (`phoneNumber`, `tbtdirection`, `speechux`,
  `keyboard`), file names, `BiquadFilterEnable`, `DrcEnable`, `NuspsConvarFp`.
- `[SilenceLength]` — word/inter-phrase/intonation/sentence pauses.
- `[LsfSharpen]`, `[UVDecision]`, `[QuestionIntonation]`, `[ShortPause]`,
  `[PhoneDuration]`, `[SpellOut]`.
- `[DrcSetting]`, `[BiquadFilterSetting]`, `[LSPDecomposing]`,
  `[VoiceSetting]`, `[EmotionRecipe]`.

Desktop Zira's INI only contains `[SilenceLength]`, `[QuestionIntonation]`,
`[LsfSharpen]`, `[UVDecision]`, `[ShortPause]`, `[PhoneDuration]`, `[SpellOut]`,
`[Domain] Number=1, keyboard`, matching its older data set.
