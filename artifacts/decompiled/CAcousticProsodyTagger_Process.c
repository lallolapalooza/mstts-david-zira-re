
/* public: virtual long __cdecl CAcousticProsodyTagger::Process(struct ITTSUtterance * __ptr64)
   __ptr64 */

long __thiscall CAcousticProsodyTagger::Process(CAcousticProsodyTagger *this,ITTSUtterance *param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  CTTSUtterance *pCVar5;
  undefined8 uVar6;
  CAcousticProsodyTagger *this_00;
  ushort *puVar7;
  CTTSString *pCVar8;
  longlong lVar9;
  CTTSUtterance *pCVar10;
  bool bVar11;
  long local_res18 [2];
  CTTSString *local_res20;
  CTTSString local_78 [32];
  CTTSString local_58 [32];
  
  lVar4 = 0;
  bVar11 = false;
  local_res18[0] = 0;
  CTTSLogger::TraceMessage(3,(ushort *)L"[TTS]Entering: %s\n",L"CAcousticProsodyTagger::Process");
  pCVar5 = DynamicCastAssert<CTTSUtterance*___ptr64,ITTSUtterance*___ptr64>
                     (param_1,local_res18,-0x7ff8ffa9);
  if (pCVar5 == (CTTSUtterance *)0x0) {
    lVar4 = local_res18[0];
    goto LAB_1800a3cb6;
  }
  if (*(int *)(pCVar5 + 0x754) == 0) {
    if (*(int *)(this + 0x9e8) != 0) goto LAB_1800a3cb6;
  }
  else if (*(int *)(this + 0x9e8) == 0) goto LAB_1800a3cb6;
  local_res20 = local_78;
  uVar6 = CTTSString::CTTSString(local_78,(CTTSString *)(pCVar5 + 0x70));
  uVar2 = GetLangID(this);
  this_00 = CTtsExtraModuleContainer<CAcousticProsodyTagger>::GetExtraModule
                      ((CTtsExtraModuleContainer<CAcousticProsodyTagger> *)(this + 0x10),uVar2,uVar6
                      );
  if ((this_00 == (CAcousticProsodyTagger *)0x0) || (*(longlong *)(this_00 + 0x40) == 0)) {
LAB_1800a3af4:
    bVar1 = false;
  }
  else {
    puVar7 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)(pCVar5 + 0x70));
    pCVar8 = (CTTSString *)GetDomain(this_00);
    bVar11 = true;
    iVar3 = operator==(pCVar8,puVar7);
    bVar1 = true;
    if (iVar3 == 0) goto LAB_1800a3af4;
  }
  if (bVar11) {
    CTTSString::~CTTSString(local_58);
  }
  if (bVar1) {
    *(undefined8 *)(this_00 + 0x138) = *(undefined8 *)(this + 0x138);
    iVar3 = GetParallelProcess(this_00);
    if ((iVar3 != 0) && (iVar3 = GetParallelProcess(this), iVar3 == 0)) {
      *(undefined4 *)(*(longlong *)(this_00 + 0x9b0) + 0x6a8) = 0;
    }
    lVar4 = DoProcess(this_00,pCVar5);
    local_res18[0] = lVar4;
    if (-1 < lVar4) {
      iVar3 = GetParallelProcess(this_00);
      if (iVar3 == 0) {
        iVar3 = GetParallelProcess(this);
        if (iVar3 != 0) {
          iVar3 = *(int *)(pCVar5 + 0x2c0);
          lVar9 = __RTDynamicCast(pCVar5 + (ulonglong)(-(uint)(iVar3 != 0) & 0x208) + 0x2c8,0,
                                  &class_CTTSAcousticSpace__RTTI_Type_Descriptor_,
                                  &class_CTTSAcousticSpaceImpl<float>__RTTI_Type_Descriptor_,0);
          AcquireSRWLockExclusive((PSRWLOCK)(pCVar5 + 0xd8));
          *(undefined4 *)(lVar9 + 0x17c) =
               *(undefined4 *)(pCVar5 + (ulonglong)(-(uint)(iVar3 != 0) & 0x208) + 0x2c8 + 0xb8);
          ReleaseSRWLockExclusive((PSRWLOCK)(pCVar5 + 0xd8));
          WakeAllConditionVariable((PCONDITION_VARIABLE)(pCVar5 + 0xd0));
          lVar4 = local_res18[0];
        }
      }
    }
  }
  else {
    lVar4 = DoProcess(this,pCVar5);
    local_res18[0] = lVar4;
  }
  iVar3 = GetParallelProcess(this);
  if (iVar3 != 0) {
    pCVar10 = pCVar5 + 0x4d0;
    if (*(int *)(pCVar5 + 0x2c0) == 0) {
      pCVar10 = pCVar5 + 0x2c8;
    }
    lVar9 = __RTDynamicCast(pCVar10,0,&class_CTTSAcousticSpace__RTTI_Type_Descriptor_,
                            &class_CTTSAcousticSpaceImpl<float>__RTTI_Type_Descriptor_,0);
    AcquireSRWLockExclusive((PSRWLOCK)(pCVar5 + 0xd8));
    *(undefined4 *)(lVar9 + 0x184) = 1;
    ReleaseSRWLockExclusive((PSRWLOCK)(pCVar5 + 0xd8));
    WakeAllConditionVariable((PCONDITION_VARIABLE)(pCVar5 + 0xd0));
    lVar4 = local_res18[0];
  }
  if (-1 < lVar4) {
    lVar4 = 0;
  }
LAB_1800a3cb6:
  CTTSLogger::TraceMessage
            (3,(ushort *)L"[TTS]Leaving: %s - hr = 0x%08X",L"CAcousticProsodyTagger::Process");
  return lVar4;
}

