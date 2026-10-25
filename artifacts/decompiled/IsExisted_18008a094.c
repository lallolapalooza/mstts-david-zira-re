
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static int __cdecl CTTSFile::IsExisted(unsigned short const * __ptr64,unsigned short
   const * __ptr64) */

int __cdecl CTTSFile::IsExisted(ushort *param_1,ushort *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_258 [32];
  wchar_t *local_238;
  ushort local_228 [264];
  ulonglong local_18;
  
  local_18 = __security_cookie ^ (ulonglong)auStack_258;
  iVar3 = 0;
  if (param_1 != (ushort *)0x0) {
    memset(local_228,0,0x20a);
    local_238 = L"APM";
    lVar1 = StringCchPrintfW(local_228,0x105,(ushort *)L"%s.%s",param_1);
    if (-1 < lVar1) {
      iVar2 = IsExisted(local_228);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}

