
/* protected: virtual long __cdecl CHTSVoiceData::LoadHTSFontSectionHeader(unsigned char const *
   __ptr64 * __ptr64,unsigned __int64 * __ptr64,unsigned __int64 * __ptr64,struct
   VOICE_FONT_SECTION_HEADER const * __ptr64) __ptr64 */

long __thiscall
CHTSVoiceData::LoadHTSFontSectionHeader
          (CHTSVoiceData *this,uchar **param_1,__uint64 *param_2,__uint64 *param_3,
          VOICE_FONT_SECTION_HEADER *param_4)

{
  long lVar1;
  longlong lVar2;
  
  if (((param_1 == (uchar **)0x0) || (param_2 == (__uint64 *)0x0)) || (param_3 == (__uint64 *)0x0))
  {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    lVar1 = CTTSDataLoader::LoadFontSectionHeader(*param_1,*param_2,param_3,&param_4,"APM ");
    if (-1 < lVar1) {
      lVar2 = *(longlong *)(param_4 + 4) + -0x4a9b42036b708576;
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_4 + 0xc) + 0x2f525bad0700e265;
      }
      if (lVar2 != 0) {
        lVar1 = -0x7ffb7fe8;
      }
    }
  }
  return lVar1;
}

