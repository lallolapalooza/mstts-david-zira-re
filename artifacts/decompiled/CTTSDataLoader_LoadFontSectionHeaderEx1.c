
/* public: static long __cdecl CTTSDataLoader::LoadFontSectionHeaderEx(class CTTSFile *
   __ptr64,struct VOICE_FONT_SECTION_HEADER_EX * __ptr64,unsigned long,struct _GUID const & __ptr64)
    */

long __cdecl
CTTSDataLoader::LoadFontSectionHeaderEx
          (CTTSFile *param_1,VOICE_FONT_SECTION_HEADER_EX *param_2,ulong param_3,_GUID *param_4)

{
  long lVar1;
  longlong lVar2;
  __uint64 local_res8;
  __uint64 local_18 [2];
  
  if ((param_1 == (CTTSFile *)0x0) || (param_2 == (VOICE_FONT_SECTION_HEADER_EX *)0x0)) {
    return -0x7ff8ffa9;
  }
  lVar1 = TTS::CAtlFile::Read((CAtlFile *)param_1,param_2,0x24);
  if (-1 < lVar1) {
    if (*(ulong *)param_2 == param_3) {
      lVar2 = *(longlong *)(param_2 + 4) - *(longlong *)param_4;
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_2 + 0xc) - *(longlong *)param_4->Data4;
      }
      if (lVar2 == 0) {
        local_res8 = 0;
        lVar1 = TTS::CAtlFile::GetSize((CAtlFile *)param_1,&local_res8);
        local_18[0] = 0;
        if (lVar1 < 0) {
          return lVar1;
        }
        lVar1 = TTS::CAtlFile::GetPosition((CAtlFile *)param_1,local_18);
        if (lVar1 < 0) {
          return lVar1;
        }
        if (local_res8 - local_18[0] == *(longlong *)(param_2 + 0x1c)) {
          return lVar1;
        }
        return -0x7ffb7ff1;
      }
    }
    lVar1 = -0x7ffb7fe8;
  }
  return lVar1;
}

