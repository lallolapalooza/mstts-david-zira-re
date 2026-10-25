
/* public: long __cdecl CTrieLexicon::Load(unsigned char const * __ptr64,unsigned __int64) __ptr64
    */

long __thiscall CTrieLexicon::Load(CTrieLexicon *this,uchar *param_1,__uint64 param_2)

{
  CTrieLexicon *pCVar1;
  long lVar2;
  ulonglong uVar3;
  CVocabTrie *local_res10;
  uchar *local_res18;
  CVocabTrie *local_res20;
  uchar *local_28 [2];
  
  pCVar1 = this + 8;
  local_res18 = param_1;
  local_res20 = (CVocabTrie *)param_2;
  lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)pCVar1,&local_res18,(__uint64 *)&local_res20);
  local_28[0] = (uchar *)0x0;
  if ((lVar2 < 0) ||
     (lVar2 = CMemoryLoadHelper::LoadVariableArray<unsigned_char>
                        (local_28,1,(ulonglong)*(uint *)pCVar1,&local_res18,(__uint64 *)&local_res20
                        ), lVar2 < 0)) {
LAB_180062dae:
    if (lVar2 < 0) {
      return lVar2;
    }
  }
  else {
    local_res10 = (CVocabTrie *)0x0;
    lVar2 = CVocabTrie::Construct(&local_res10,local_28[0],*(ulong *)pCVar1);
    if (lVar2 < 0) goto LAB_180062dae;
    *(CVocabTrie **)(this + 0x18) = local_res10;
  }
  local_res10 = (CVocabTrie *)((ulonglong)local_res10 & 0xffffffff00000000);
  lVar2 = CMemoryLoadHelper::LoadValue<int>
                    ((int *)&local_res10,&local_res18,(__uint64 *)&local_res20);
  if (lVar2 < 0) {
    return lVar2;
  }
  pCVar1 = this + 0x20;
  lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)pCVar1,&local_res18,(__uint64 *)&local_res20);
  if (lVar2 < 0) {
    return lVar2;
  }
  if ((int)local_res10 == 0) {
    lVar2 = CMemoryLoadHelper::LoadVariableArray<unsigned_char>
                      (local_28,1,(ulonglong)*(uint *)pCVar1 << 2,&local_res18,
                       (__uint64 *)&local_res20);
    if (lVar2 < 0) {
      return lVar2;
    }
    *(uchar **)(this + 0x30) = local_28[0];
  }
  else {
    lVar2 = CMemoryLoadHelper::LoadVariableArray<unsigned_char>
                      (local_28,1,(ulonglong)*(uint *)pCVar1,&local_res18,(__uint64 *)&local_res20);
    if (lVar2 < 0) {
      return lVar2;
    }
    *(uchar **)(this + 0x28) = local_28[0];
    if ((*(uint *)pCVar1 & 3) != 0) {
      uVar3 = (ulonglong)(4 - (*(uint *)pCVar1 & 3));
      local_res18 = local_res18 + uVar3;
      local_res10 = local_res20 + -uVar3;
      goto LAB_180062e37;
    }
  }
  local_res10 = local_res20;
LAB_180062e37:
  lVar2 = CMemoryLoadHelper::LoadValue<int>
                    ((int *)(this + 0x38),&local_res18,(__uint64 *)&local_res10);
  local_res20 = (CVocabTrie *)0x0;
  if ((-1 < lVar2) &&
     (lVar2 = CMemoryLoadHelper::LoadVariableArray<unsigned_char>
                        ((uchar **)&local_res20,1,(ulonglong)*(uint *)(this + 0x38),&local_res18,
                         (__uint64 *)&local_res10), -1 < lVar2)) {
    *(CVocabTrie **)(this + 0x40) = local_res20;
  }
  return lVar2;
}

