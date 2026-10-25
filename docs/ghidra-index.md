# Ghidra index and symbol evidence

## Project

- Ghidra 12.2 PUBLIC, project `ghidra_proj_pdb/MSTTS`.
- Binaries imported from `artifacts/bin/` (copies of the system DLLs), PDBs beside them.
- Image base: `0x180000000` for all MSTTS DLLs.
- Analyzed programs: `MSTTSEngine_OneCore.dll`, `MSTTSLoc_OneCore.dll`
  (Desktop `MSTTSEngine.dll` / `MSTTSLoc.dll` imported separately; see
  `artifacts/ghidra_desktop_pdb.log`).
- Public PDBs downloaded from `msdl.microsoft.com`; the CodeView GUID/age and symbol URL are in `artifacts/pdb/pdb_info.json`. PDBs and DLL copies are not committed; `scripts/fetch_pdbs.py` stages them.

Function counts: `MSTTSEngine_OneCore.dll` 6,851, `MSTTSLoc_OneCore.dll`
3,039, `MSTTSEngine.dll` 3,703, `MSTTSLoc.dll` 1,171 (PDB names applied where
available).

## Key engine functions

| Address | Size | Symbol | Role |
|---|---:|---|---|
| `0x1800637d0` | 456 | `CEngineAdapterSAPI::Speak` | SAPI `ISpTTSEngine::Speak` adapter |
| `0x180028288` | 2,638 | `CTTSEngine::LocalSpeak` | engine speak loop |
| `0x180094904` | 288 | `CTTSEngine::PrepareForSpeaking` | picks pipeline/output for domain/emotion |
| `0x180094a2c` | 567 | `CTTSEngine::ProcessParallelPipelines` | one thread per backend handler |
| `0x18005c794` | 1,269 | `CTextProcessor::DoProcess` | text stage driver |
| `0x180063378` | 1,103 | `CTextProcessor::ParseSentence` | sentence parse/TN invocation |
| `0x180018ed4` | 857 | `CSentenceAnalyzer::DoTextNormalization` | acronym/TN expansion |
| `0x180065980` | 614 | `CSentenceAnalyzer::Analyze` | word breaking + POS |
| `0x1800bb318` | 191 | `CSentenceAnalyzer::DoPhoneConvert` | frontend/backend phone mapping |
| `0x18009de2c` | 959 | `CTTSPhoneConverter::Convert` | UPS/SAPI/TTS phone conversion |
| `0x180060010` | 321 | `CLinguisticProsodyTagger::Process` | break/accent/emphasis |
| `0x1800a39f0` | 764 | `CAcousticProsodyTagger::Process` | domain dispatch + predict |
| `0x1800a3324` | 259 | `CAcousticProsodyTagger::DoProcess` | `BuildModels` + `Predict` |
| `0x1800692d0` | 2,140 | `CDurationPredictor::Predict` | HTS duration regression |
| `0x1800a615c` | 414 | `CF0Predictor::Predict<int>` | F0 regression |
| `0x1800b1218` | 616 | `CHTSAcousticModel::BuildDuration` | duration leaf -> HMM stream |
| `0x180003e94` | 1,926 | `CHTSAcousticModel::BuildHMMState` | offset leaf -> HMM state/streams |
| `0x180014b80` | 2,135 | `CHTSAcousticModel::LoadDecisionTrees` | tree set + Huffman decode |
| `0x1800b380c` | 163 | `CHTSVoiceData::LoadVoiceDataHeader` | APM 0x40-byte header |
| `0x1800b3650` | 301 | `CHTSVoiceData::LoadData` | APM section dispatch |
| `0x1800b3918` | 134 | `CHTSVoiceData::ValidateFileHeader` | sample rate/width/bounds |
| `0x180009b14` | 3,005 | `CSpsVocoder::Synthesize<float>` | excitation + LSF + concatenation |
| `0x18010c148` | 2,316 | `CSpsVocoder::StartSegSynthesis<int>` | per-segment LSF/F0 setup |
| `0x18010f584` | 1,228 | `CSpsVocoder::PrepareLSFParameter` | LSF interpolation/sharpening |
| `0x18010e208` | 850 | `CITFTEExcitationGeneratorImpl<float>::GenerateExcitation` | TFTE excitation |
| `0x18006b620` | 14,842 | `CLsfSynthesizerImpl<float,float>::Synthesize` | LPC synthesis |
| `0x1800eb320` | 1,087 | `CNUSVoiceDataLoader::LoadData` | NUS container parse |
| `0x180035d68` | 754 | `CNUSVoiceDataLoader::LoadUnit` | NUS unit/features |
| `0x18006ae34` | 1,473 | `CUnitSelector::GenerateSegmentList` | unit path -> segments |
| `0x1800fcf5c` | 2,959 | `CUnitSelector::SearchOneColumnByViterbi<2>` | Viterbi unit search |
| `0x1800e86a8` | 758 | `CNusTrajectoryRefiner::DoPitchRefinement` | trajectory/pitch refinement |
| `0x1800321f0` | 1,582 | `CWaveGenerator::ProcessSpsUnits` | HTS units -> waveform |
| `0x18006d71c` | 781 | `CWaveGenerator::OutputWaveData` | PCM chunk output |

## Key locale-handler functions

| Address | Size | Symbol | Role |
|---|---:|---|---|
| `0x1800141f0` | 2,460 | OneCore `GetLocaleHandler` | LCID dispatch; 0x409 -> ENU |
| `0x180003270` | 1,699 | Desktop `GetLocaleHandler` | same dispatch shape; 0x409 -> ENU |
| `0x1800197e0` | 401 | `CTTSLocaleHandlerENU::Initialize` | ENU taggers/feature data |
| `0x180019660` | 370 | `CLocaleTextAnalyzerENU::Initialize` | compound breaker + grapheme/phoneme |
| `0x18000fa30` | 134 | `CTTSLocaleHandler::Initialize` | base handler wiring |
| `0x1800725b0` | 229 | `CTTSDataBase::LoadDataObjects` | `.dat` object directory |
| `0x180072508` | 133 | `CTTSDataBase::GetDataObject` | GUID lookup |
| `0x180073350` | 338 | `CTTSFeatureCARTData::LoadData` | CART leaf |
| `0x180062d20` | 436 | `CTrieLexicon::Load` | trie lexicon leaf |
| `0x18000a1d0` | 1,178 | `CLocaleTextAnalyzerENU::GetOOVPronunciation` | OOV G2P |

## Decompiled artifacts

- Engine: `artifacts/decompiled/*.c` (39 files)
- Locale handler: `artifacts/decompiled_loc/*.c` (11 files); Desktop locale:
  `artifacts/decompiled_loc_desktop/GetLocaleHandler.c`
- Full function metadata: `artifacts/functions_MSTTSEngine_OneCore_dll.json`
- Strings: `artifacts/onecore_strings.txt`, `artifacts/loconecore_strings.txt`

Decompiler caveats: Ghidra's C++ recovery is noisy around ATL containers and
multiple inheritance; addresses, call targets and constants are reliable, but
`this` offsets and local variable types need cross-checking against the
disassembly. `[INFERENCE]` marks conclusions that are not directly proven by a
decompiled call or constant.
