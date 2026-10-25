
/* protected: long __cdecl CHTSVoiceData::LoadVoiceDataHeader(unsigned char const * __ptr64 *
   __ptr64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CHTSVoiceData::LoadVoiceDataHeader(CHTSVoiceData *this,uchar **param_1,__uint64 *param_2)

{
  VOICE_FONT_SECTION_HEADER *pVVar1;
  uchar *puVar2;
  long lVar3;
  longlong lVar4;
  VOICE_FONT_SECTION_HEADER *local_res10;
  __uint64 local_res20;
  char *in_stack_ffffffffffffffe8;
  
  if ((param_1 == (uchar **)0x0) || (param_2 == (__uint64 *)0x0)) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    local_res20 = 0;
    local_res10 = (VOICE_FONT_SECTION_HEADER *)0x0;
    lVar3 = CTTSDataLoader::LoadFontSectionHeader
                      (*param_1,*param_2,&local_res20,&local_res10,in_stack_ffffffffffffffe8);
    if (-1 < lVar3) {
      lVar4 = *(longlong *)(local_res10 + 4) + -0x4a9b42036b708576;
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(local_res10 + 0xc) + 0x2f525bad0700e265;
      }
      if (lVar4 == 0) {
        *param_1 = *param_1 + local_res20;
        *param_2 = *param_2 - local_res20;
        local_res10 = (VOICE_FONT_SECTION_HEADER *)0x0;
        lVar3 = ULongLongMult(0x40,1,(__uint64 *)&local_res10);
        if (-1 < lVar3) {
          pVVar1 = (VOICE_FONT_SECTION_HEADER *)*param_2;
          if (pVVar1 < local_res10) {
            lVar3 = -0x7fff0001;
          }
          else {
            puVar2 = *param_1;
            *(uchar **)(this + 0x38) = puVar2;
            *param_1 = puVar2 + (longlong)local_res10;
            *param_2 = (longlong)pVVar1 - (longlong)local_res10;
          }
        }
      }
      else {
        lVar3 = -0x7ffb7fe8;
      }
    }
  }
  return lVar3;
}

