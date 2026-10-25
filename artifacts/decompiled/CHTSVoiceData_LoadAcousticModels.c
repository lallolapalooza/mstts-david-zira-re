
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: long __cdecl CHTSVoiceData::LoadAcousticModels(unsigned char const * __ptr64 *
   __ptr64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CHTSVoiceData::LoadAcousticModels(CHTSVoiceData *this,uchar **param_1,__uint64 *param_2)

{
  CHTSVoiceData *pCVar1;
  __uint64 _Var2;
  ulong uVar3;
  long lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uchar *puVar10;
  ulong local_res8 [2];
  ulong local_res10 [2];
  uchar *local_res18;
  __uint64 local_res20;
  CTTSFeatureQuestion *local_58;
  uchar *local_50;
  
  puVar10 = *param_1;
  pCVar1 = this + 0x88;
  _Var2 = *param_2;
  local_res18 = puVar10;
  local_res20 = _Var2;
  local_50 = puVar10;
  lVar4 = CMemoryLoadHelper::LoadValue<unsigned_long>((ulong *)pCVar1,&local_res18,&local_res20);
  if (-1 < lVar4) {
    if (*(ulong *)pCVar1 == 0) {
      lVar4 = -0x7fff0001;
    }
    else {
      lVar4 = (**(code **)(*(longlong *)this + 0x20))(this);
      puVar10 = local_50;
    }
  }
  local_58 = (CTTSFeatureQuestion *)0x0;
  local_res8[0] = 0;
  if ((-1 < lVar4) &&
     (lVar4 = CForestQuestionSet::GetQuestions
                        ((CForestQuestionSet *)(this + 0x40),&local_58,local_res8),
     uVar3 = local_res8[0], -1 < lVar4)) {
    uVar8 = 0;
    if (*(ulong *)pCVar1 != 0) {
      do {
        local_res8[0] = 0;
        lVar4 = CMemoryLoadHelper::LoadValue<unsigned_long>(local_res8,&local_res18,&local_res20);
        if (lVar4 < 0) {
          return lVar4;
        }
        local_res10[0] = 0;
        lVar4 = CMemoryLoadHelper::LoadValue<unsigned_long>(local_res10,&local_res18,&local_res20);
        if (lVar4 < 0) {
          return lVar4;
        }
        uVar9 = (ulonglong)local_res10[0];
        uVar6 = (ulonglong)local_res8[0];
        lVar4 = CTTSDataLoader::ValidateOffsetAndSize(uVar9,uVar6,_Var2);
        if (lVar4 < 0) {
          return lVar4;
        }
        *(CHTSVoiceData **)(*(longlong *)(this + 0x80) + 0x58 + uVar8 * 0x60) = this;
        plVar5 = (longlong *)(uVar8 * 0x60 + *(longlong *)(this + 0x80));
        lVar4 = (**(code **)(*plVar5 + 8))(plVar5,puVar10 + uVar6,uVar9 & 0xffffffff,local_58,uVar3)
        ;
        if (lVar4 < 0) {
          return lVar4;
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        puVar10 = local_50;
      } while (uVar7 < *(uint *)pCVar1);
    }
    *param_1 = local_res18;
    *param_2 = local_res20;
  }
  return lVar4;
}

