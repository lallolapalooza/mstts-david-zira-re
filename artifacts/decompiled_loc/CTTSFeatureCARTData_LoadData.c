
/* private: virtual long __cdecl CTTSFeatureCARTData::LoadData(unsigned char const *
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CTTSFeatureCARTData::LoadData
          (CTTSFeatureCARTData *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  int iVar1;
  longlong lVar2;
  CTTSFeatureCARTData *pCVar3;
  __uint64 local_res8;
  uchar *local_res10;
  uchar *local_res18 [2];
  
  local_res10 = (uchar *)0x0;
  *(__uint64 *)(this + 0x40) = param_2;
  local_res8 = param_2;
  iVar1 = ULongLongMult(0x18,1,(__uint64 *)&local_res10);
  if (iVar1 < 0) goto LAB_180073484;
  if (param_2 < local_res10) {
    iVar1 = -0x7fff0001;
    goto LAB_180073484;
  }
  *(uchar **)(this + 0x20) = param_1;
  local_res8 = param_2 - (longlong)local_res10;
  param_1 = param_1 + (longlong)local_res10;
  local_res10 = param_1;
  iVar1 = _o__strnicmp(this + 0x50,*(undefined8 *)(this + 0x20),3);
  if (iVar1 == 0) {
    lVar2 = *(longlong *)(*(longlong *)(this + 0x20) + 4) + -0x47d75d3df376007f;
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(*(longlong *)(this + 0x20) + 0xc) + -0x5ca78b0a2cf6c9bc;
    }
    if (lVar2 == 0) {
      pCVar3 = this + 0x30;
      iVar1 = CMemoryLoadHelper::LoadValue<int>((int *)pCVar3,&local_res10,&local_res8);
      if (-1 < iVar1) {
        if (*(uint *)pCVar3 != 0) {
          local_res18[0] = (uchar *)0x0;
          iVar1 = CMemoryLoadHelper::LoadVariableArray<unsigned_char>
                            (local_res18,1,(ulonglong)*(uint *)pCVar3,&local_res10,&local_res8);
          if (iVar1 < 0) goto LAB_180073480;
          *(uchar **)(this + 0x28) = local_res18[0];
        }
        pCVar3 = this + 0x48;
        iVar1 = CMemoryLoadHelper::LoadUnalignedValue<int>((int *)pCVar3,&local_res10,&local_res8);
        if (-1 < iVar1) {
          if (*(int *)pCVar3 < 0) {
            iVar1 = -0x7ffb7ff1;
          }
          else if (0x100000 < *(int *)pCVar3) {
            iVar1 = -0x7ff8fff2;
          }
        }
      }
LAB_180073480:
      param_1 = local_res10;
      goto LAB_180073484;
    }
  }
  iVar1 = -0x7ffb7ff1;
LAB_180073484:
  *(uchar **)(this + 0x38) = param_1;
  if (iVar1 < 0) {
    local_res8 = 0;
  }
  else {
    local_res8 = param_2 - local_res8;
  }
  *param_3 = local_res8;
  return iVar1;
}

