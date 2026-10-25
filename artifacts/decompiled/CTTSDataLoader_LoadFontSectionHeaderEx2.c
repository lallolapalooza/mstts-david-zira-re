
/* public: static long __cdecl CTTSDataLoader::LoadFontSectionHeaderEx(unsigned char const *
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64,struct VOICE_FONT_SECTION_HEADER_EX *
   __ptr64,unsigned long,struct _GUID const & __ptr64) */

long __cdecl
CTTSDataLoader::LoadFontSectionHeaderEx
          (uchar *param_1,__uint64 param_2,__uint64 *param_3,VOICE_FONT_SECTION_HEADER_EX *param_4,
          ulong param_5,_GUID *param_6)

{
  undefined8 uVar1;
  long lVar2;
  longlong lVar3;
  __uint64 local_res8;
  
  if ((((param_1 == (uchar *)0x0) || (param_2 == 0)) || (param_3 == (__uint64 *)0x0)) ||
     (param_4 == (VOICE_FONT_SECTION_HEADER_EX *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_res8 = 0;
  lVar2 = ULongLongMult(0x24,1,&local_res8);
  if (-1 < lVar2) {
    if (param_2 < local_res8) {
      lVar2 = -0x7fff0001;
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_4 = *(undefined8 *)param_1;
      *(undefined8 *)(param_4 + 8) = uVar1;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_4 + 0x18) = uVar1;
      *(int *)(param_4 + 0x20) = *(int *)(param_1 + 0x20);
      if (*(ulong *)param_4 == param_5) {
        lVar3 = *(longlong *)(param_4 + 4) - *(longlong *)param_6;
        if (lVar3 == 0) {
          lVar3 = *(longlong *)(param_4 + 0xc) - *(longlong *)param_6->Data4;
        }
        if ((lVar3 == 0) && (*(longlong *)(param_4 + 0x1c) == param_2 - local_res8)) {
          *param_3 = param_2 - (param_2 - local_res8);
          return lVar2;
        }
      }
      lVar2 = -0x7ffb7fe8;
    }
  }
  return lVar2;
}

