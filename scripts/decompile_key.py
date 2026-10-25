import os, json, re
import pyghidra
os.environ['JAVA_HOME']=r'C:\Users\[user]\Downloads\samre\tools\jdk-25.0.4.1+1'
os.environ['PATH']=os.environ['JAVA_HOME']+r'\bin;'+os.environ.get('PATH','')
pyghidra.start(install_dir=r'C:\Users\[user]\Downloads\anna-re\tools\ghidra_12.2_PUBLIC')
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
OUT=r'C:\Users\[user]\Downloads\mstts-re\artifacts\decompiled'
os.makedirs(OUT,exist_ok=True)
ADDRS={
'1800637d0':'CEngineAdapterSAPI_Speak','180028288':'CTTSEngine_LocalSpeak','180094904':'CTTSEngine_PrepareForSpeaking',
'180094a2c':'CTTSEngine_ProcessParallelPipelines','18005c794':'CTextProcessor_DoProcess','180018ed4':'CSentenceAnalyzer_DoTextNormalization',
'180065980':'CSentenceAnalyzer_Analyze','1800bb318':'CSentenceAnalyzer_DoPhoneConvert','18009de2c':'CTTSPhoneConverter_Convert',
'180060010':'CLinguisticProsodyTagger_Process','1800a39f0':'CAcousticProsodyTagger_Process','1800a3324':'CAcousticProsodyTagger_DoProcess',
'1800692d0':'CDurationPredictor_Predict','1800a615c':'CF0Predictor_Predict_int','1800a6304':'CF0Predictor_Predict_float',
'1800b1218':'CHTSAcousticModel_BuildDuration','180003e94':'CHTSAcousticModel_BuildHMMState','180014b80':'CHTSAcousticModel_LoadDecisionTrees',
'1800b380c':'CHTSVoiceData_LoadVoiceDataHeader','1800b3650':'CHTSVoiceData_LoadData','1800b34d8':'CHTSVoiceData_LoadAcousticModels',
'1800b3918':'CHTSVoiceData_ValidateFileHeader','180009b14':'CSpsVocoder_Synthesize_float','180074968':'CSpsVocoder_Synthesize_int',
'18010c148':'CSpsVocoder_StartSegSynthesis_int','18010f584':'CSpsVocoder_PrepareLSFParameter',
'18010e208':'CITFTEExcitation_GenerateExcitation','18006b620':'CLsfSynthesizer_Synthesize_float',
'1800eb320':'CNUSVoiceDataLoader_LoadData','180035d68':'CNUSVoiceDataLoader_LoadUnit','1800e86a8':'CNusTrajectoryRefiner_DoPitchRefinement',
'18006ae34':'CUnitSelector_GenerateSegmentList','1800fcf5c':'CUnitSelector_SearchOneColumnByViterbi_2','1800321f0':'CWaveGenerator_ProcessSpsUnits',
'18006d71c':'CWaveGenerator_OutputWaveData','180010e208':'noop','1800a0988':'CAcousticProsodyTagger_AdjustPitch_int',
'1800b1024':'CHTSAcousticModel_FindModel_7','180098120':'CTTSDataLoader_LoadFile','1800982b4':'CTTSDataLoader_LoadFontSectionHeader','180098380':'CTTSDataLoader_LoadFontSectionHeaderEx1','180098458':'CTTSDataLoader_LoadFontSectionHeaderEx2','180098530':'CTTSDataLoader_LoadFromMemory','180053968':'CTTSDataLoader_ValidateOffsetAndSize','1800b3790':'CHTSVoiceData_LoadHTSFontSectionHeader','180035680':'CHTSAcousticModelHeader_Deserialize','1800b1e28':'CHTSAcousticModelHeader_ParseExtensionHeader','1800b1570':'CHTSAcousticModel_CreateModelHeader','1800b15d8':'CRawPDFDecompressor_Decompress','1800af728':'CHTSVoiceData_ctor','180063378':'CTextProcessor_ParseSentence','1800b2f90':'CHTSAcousticModel_ctor','1800b3240':'CHTSAcousticModel_dtor','180092464':'CTTSEngine_InitializeEngineSetting','18008a094':'IsExisted_18008a094','1800b0080':'ParseIniSetting_1800b0080','180052f70':'CSpsVocoder_Initialize','18004ef80':'CAcousticProsodyTagger_Initialize','180092958':'CTTSEngine_InitializeExtraModels','180058fac':'CTTSEngine_InitializeBackend','1800931b8':'CTTSEngine_InitializeSegments','180113dc0':'CParameterManager_LoadData','18007abac':'CParameterManager_Query','18009c958':'CParameterManager_Query_USB','1800f9610':'CParameterManager_Query_ulong','180073638':'CHTSAcousticModel_FindModel_1','18007b324':'CHTSAcousticModel_FindModel_2',
}
def run(df,p):
    ifc=DecompInterface(); ifc.setOptions(DecompileOptions()); ifc.openProgram(p)
    fm=p.getFunctionManager(); mon=ConsoleTaskMonitor()
    for addr,label in ADDRS.items():
        if label=='noop': continue
        a=p.getAddressFactory().getAddress(addr)
        f=fm.getFunctionAt(a)
        if f is None:
            print('MISSING',addr,label,flush=True); continue
        res=ifc.decompileFunction(f,180,mon)
        if not res.decompileCompleted():
            print('FAIL',addr,label,res.getErrorMessage(),flush=True); continue
        c=res.getDecompiledFunction().getC()
        open(os.path.join(OUT,label+'.c'),'w',encoding='utf-8').write(c)
        print('OK',addr,label,len(c),flush=True)
pyghidra.walk_programs(pyghidra.open_project(r'C:\Users\[user]\Downloads\mstts-re\ghidra_proj_pdb','MSTTS'), run)
