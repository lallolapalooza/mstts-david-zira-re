
/* public: static long __cdecl CTTSDataLoader::LoadFontSectionHeader(unsigned char const *
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64,struct VOICE_FONT_SECTION_HEADER const *
   __ptr64 * __ptr64,char const * __ptr64) */

long __cdecl
CTTSDataLoader::LoadFontSectionHeader
          (uchar *param_1,__uint64 param_2,__uint64 *param_3,VOICE_FONT_SECTION_HEADER **param_4,
          char *param_5)

{
  long lVar1;
  int iVar2;
  ulonglong uVar3;
  __uint64 local_res8;
  
  if ((((param_1 == (uchar *)0x0) || (param_2 == 0)) || (param_3 == (__uint64 *)0x0)) ||
     (param_4 == (VOICE_FONT_SECTION_HEADER **)0x0)) {
    return -0x7ff8ffa9;
  }
  local_res8 = 0;
  lVar1 = ULongLongMult(0x18,1,&local_res8);
  if (-1 < lVar1) {
    if (param_2 < local_res8) {
      lVar1 = -0x7fff0001;
    }
    else {
      uVar3 = param_2 - local_res8;
      *param_4 = (VOICE_FONT_SECTION_HEADER *)param_1;
      if (((param_5 == (char *)0x0) || (iVar2 = strncmp((char *)param_1,param_5,4), iVar2 == 0)) &&
         (*(uint *)(*param_4 + 0x14) <= uVar3)) {
        *param_3 = param_2 - uVar3;
      }
      else {
        lVar1 = -0x7ffb7fe8;
      }
    }
  }
  return lVar1;
}

