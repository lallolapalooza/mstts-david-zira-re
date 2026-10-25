
/* public: long __cdecl CParameterManager::Query(enum RUNTIME_PARAMETER,unsigned char const *
   __ptr64 * __ptr64,int * __ptr64)const __ptr64 */

long __thiscall
CParameterManager::Query
          (CParameterManager *this,RUNTIME_PARAMETER param_1,uchar **param_2,int *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if ((param_2 == (uchar **)0x0) || (param_3 == (int *)0x0)) {
    uVar2 = 0x80070057;
  }
  else {
    lVar3 = 0;
    for (uVar4 = 0; uVar1 = *(ulonglong *)(this + 0x40), uVar4 < uVar1; uVar4 = uVar4 + 1) {
      if (*(RUNTIME_PARAMETER *)(lVar3 + *(longlong *)(this + 0x38)) == param_1) {
        *param_2 = *(uchar **)(*(longlong *)(this + 0x38) + 8 + uVar4 * 0x18);
        *param_3 = *(int *)(*(longlong *)(this + 0x38) + 0x10 + uVar4 * 0x18);
        uVar1 = *(ulonglong *)(this + 0x40);
        break;
      }
      lVar3 = lVar3 + 0x18;
    }
    uVar2 = (uint)(uVar4 == uVar1);
  }
  return uVar2;
}

