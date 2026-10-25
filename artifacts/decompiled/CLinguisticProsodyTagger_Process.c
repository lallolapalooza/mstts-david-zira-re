
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CLinguisticProsodyTagger::Process(struct ITTSUtterance * __ptr64)
   __ptr64 */

long __thiscall
CLinguisticProsodyTagger::Process(CLinguisticProsodyTagger *this,ITTSUtterance *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  CTTSUtterance *this_00;
  CTTSString *this_01;
  ushort *puVar6;
  uint uVar7;
  bool bVar8;
  CTTSString local_48 [32];
  
  bVar8 = false;
  CTTSLogger::TraceMessage(3,(ushort *)L"[TTS]Entering: %s\n",L"CLinguisticProsodyTagger::Process");
  lVar1 = *(longlong *)(this + 0x38);
  if (*(longlong **)(lVar1 + 0x350) == (longlong *)0x0) goto LAB_18006010a;
  iVar3 = (**(code **)(**(longlong **)(lVar1 + 0x350) + 0x90))();
  if (iVar3 == 0) goto LAB_18006010a;
  if (lVar1 == -0x4a8) {
LAB_1800600e1:
    bVar2 = false;
  }
  else {
    this_00 = (CTTSUtterance *)
              __RTDynamicCast(param_1,0,&struct_ITTSUtterance__RTTI_Type_Descriptor_,
                              &class_CTTSUtterance__RTTI_Type_Descriptor_,0);
    this_01 = (CTTSString *)CTTSUtterance::GetDomain(this_00);
    bVar8 = true;
    puVar6 = CTTSString::operator_unsigned_short_const____ptr64(this_01);
    lVar4 = IsStringInMapKey((CRBMap<CTTSString_const_,CTTSString,TTS::CStringRefElementTraits<CTTSString>,TTS::CElementTraits<CTTSString>_>
                              *)(lVar1 + 0x518),puVar6);
    bVar2 = true;
    if (lVar4 != 0) goto LAB_1800600e1;
  }
  if (bVar8) {
    CTTSString::~CTTSString(local_48);
  }
  if (bVar2) {
    PredictLinguisticProsodyForSpecifiedPart(this,param_1);
  }
LAB_18006010a:
  uVar5 = PredictLinguisticProsody(this,param_1);
  uVar7 = uVar5;
  if (-1 < (int)uVar5) {
    uVar7 = 0;
  }
  CTTSLogger::TraceMessage
            (3,(ushort *)L"[TTS]Leaving: %s - hr = 0x%08X",L"CLinguisticProsodyTagger::Process",
             (ulonglong)uVar5);
  return uVar7;
}

