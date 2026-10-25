
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CTTSEngine::InitializeBackend(void) __ptr64 */

long __thiscall CTTSEngine::InitializeBackend(CTTSEngine *this)

{
  CTTSEngine *pCVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  CRUSVoiceDataManager *this_00;
  __uint64 _Var5;
  uchar *puVar6;
  CAcousticProsodyTagger *pCVar7;
  CTTSEngine *this_01;
  wchar_t *pwVar8;
  long lVar9;
  undefined8 local_res8;
  longlong local_res10;
  
  local_res8 = (CRUSVoiceDataManager *)((ulonglong)local_res8 & 0xffffffff00000000);
  if (*(int *)(this + 0x344) == 0) {
    local_res10 = 0;
    lVar9 = (long)&local_res10;
    iVar3 = (**(code **)(*(longlong *)(this + 0x588) + 0x18))
                      (this + 0x588,L"Pipeline.ParallelProcess");
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (-1 < iVar3) {
      if (local_res10 != 0) {
        iVar3 = _o__wcsicmp(L"yes");
        if (iVar3 == 0) {
          *(undefined4 *)(this + 0x6a8) = 1;
        }
      }
      goto LAB_18005902c;
    }
  }
  else {
LAB_18005902c:
    local_res10 = 0;
    lVar9 = (long)&local_res10;
    iVar3 = (**(code **)(*(longlong *)(this + 0x588) + 0x18))
                      (this + 0x588,L"Pipeline.EnableLongUnitAnchor");
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (-1 < iVar3) {
      if (local_res10 != 0) {
        iVar4 = _o__wcsicmp(L"yes");
        if (iVar4 == 0) {
          *(undefined4 *)(this + 0x6ac) = 1;
        }
      }
      if ((*(uint *)(this + 0x100) & 0x79c0000) == 0x79c0000) {
        local_res8 = operator_new(0x30,&std::nothrow);
        if (local_res8 == (CRUSVoiceDataManager *)0x0) {
          this_00 = (CRUSVoiceDataManager *)0x0;
        }
        else {
          *(undefined8 *)local_res8 = 0;
          *(undefined8 *)(local_res8 + 8) = 0;
          *(undefined8 *)(local_res8 + 0x10) = 0;
          *(undefined8 *)(local_res8 + 0x18) = 0;
          *(undefined4 *)(local_res8 + 0x20) = 0;
          *(undefined4 *)(local_res8 + 0x28) = 0;
          *(undefined4 *)(local_res8 + 0x2c) = 0x3f800000;
          this_00 = local_res8;
        }
        *(CRUSVoiceDataManager **)(this + 0x220) = this_00;
        if (this_00 == (CRUSVoiceDataManager *)0x0) {
          iVar3 = -0x7ff8fff2;
          local_res8._4_4_ = (undefined4)((ulonglong)local_res8 >> 0x20);
          local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,0x8007000e);
        }
        else {
          iVar3 = CRUSVoiceDataManager::Initialize(this_00,(IMSTTSEngine *)this);
          local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
        }
      }
    }
  }
  if (iVar3 < 0) goto LAB_180059439;
  if ((*(uint *)(this + 0x100) & 0x80000) != 0) {
    pCVar1 = this + 0x1f8;
    iVar3 = CLinguisticProsodyTagger::CreateInstance((ITTSHandler **)pCVar1);
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (iVar3 < 0) {
LAB_18005915a:
      if (*(ITTSHandler **)pCVar1 != (ITTSHandler *)0x0) {
        (**(code **)(*(longlong *)*(ITTSHandler **)pCVar1 + 0x28))();
        *(ITTSHandler **)pCVar1 = (ITTSHandler *)0x0;
      }
    }
    else {
      iVar3 = (*(code *)**(undefined8 **)*(ITTSHandler **)pCVar1)(*(ITTSHandler **)pCVar1,this);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_18005915a;
      iVar3 = TTS::CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>::Add
                        ((CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>
                          *)(this + 0x1a8),(ITTSHandler **)pCVar1);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_18005915a;
    }
    lVar9 = 0;
    CTTSTracingHelper::LogComponentInitialization(iVar3,"Linguistic Prosody Tagger",(ushort *)0x0);
  }
  if (iVar3 < 0) goto LAB_180059439;
  if ((*(uint *)(this + 0x100) & 0x100000) != 0) {
    pCVar1 = this + 0x218;
    iVar3 = CTTSUnitGenerator::CreateInstance((ITTSHandler **)pCVar1);
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (iVar3 < 0) {
LAB_1800591e1:
      if (*(ITTSHandler **)pCVar1 != (ITTSHandler *)0x0) {
        (**(code **)(*(longlong *)*(ITTSHandler **)pCVar1 + 0x28))();
        *(ITTSHandler **)pCVar1 = (ITTSHandler *)0x0;
      }
    }
    else {
      iVar3 = (*(code *)**(undefined8 **)*(ITTSHandler **)pCVar1)(*(ITTSHandler **)pCVar1,this);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_1800591e1;
      iVar3 = TTS::CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>::Add
                        ((CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>
                          *)(this + 0x1a8),(ITTSHandler **)pCVar1);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_1800591e1;
    }
    lVar9 = 0;
    CTTSTracingHelper::LogComponentInitialization(iVar3,"Unit Generator",(ushort *)0x0);
  }
  if (iVar3 < 0) goto LAB_180059439;
  if ((*(uint *)(this + 0x100) & 0x4000000) != 0) {
    pCVar1 = this + 0x200;
    iVar3 = CAcousticProsodyTagger::CreateInstance((ITTSHandler **)pCVar1);
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (iVar3 < 0) {
LAB_180059286:
      if (*(ITTSHandler **)pCVar1 != (ITTSHandler *)0x0) {
        (**(code **)(*(longlong *)*(ITTSHandler **)pCVar1 + 0x28))();
        *(ITTSHandler **)pCVar1 = (ITTSHandler *)0x0;
      }
LAB_1800592fb:
      if (iVar3 < 0) goto LAB_180059308;
      pwVar8 = L"%s Successfully Initialize %S. ";
    }
    else {
      *(undefined4 *)(*(ITTSHandler **)pCVar1 + 0x9e8) = 0;
      iVar3 = (*(code *)**(undefined8 **)*(ITTSHandler **)pCVar1)(*(ITTSHandler **)pCVar1,this);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_180059286;
      this_01 = this + 0x1a8;
      if (*(int *)(this + 0x6a8) != 0) {
        this_01 = this + 0x1c8;
      }
      iVar3 = TTS::CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>::Add
                        ((CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>
                          *)this_01,(ITTSHandler **)pCVar1);
      local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
      if (iVar3 < 0) goto LAB_180059286;
      pCVar7 = DynamicCastAssert<CAcousticProsodyTagger*___ptr64,ITTSHandler*___ptr64>
                         (*(ITTSHandler **)pCVar1,(long *)&local_res8,lVar9);
      iVar3 = (int)local_res8;
      if (-1 < (int)local_res8) {
        if ((*(longlong *)(pCVar7 + 0x40) != 0) &&
           (lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(pCVar7 + 0x40) + 8) + 0x28),
           lVar2 != 0)) {
          _Var5 = (**(code **)(*(longlong *)(lVar2 + 0x18) + 0x20))(lVar2 + 0x18);
          puVar6 = (uchar *)(**(code **)(*(longlong *)(lVar2 + 0x18) + 0x18))(lVar2 + 0x18);
          AddWarmupTask(this,puVar6,_Var5);
        }
        goto LAB_1800592fb;
      }
LAB_180059308:
      pwVar8 = L"%s No %S in Current Engine";
      if (iVar3 != -0x7ffb7fe6) {
        pwVar8 = L"%s Error happens in Initializing %S! ";
      }
    }
    lVar9 = -0x7fe822b0;
    CTTSLogger::TraceMessage(3,(ushort *)pwVar8,L"[Initialization]","Acoustic Prosody Tagger");
  }
  if (((iVar3 < 0) || ((*(uint *)(this + 0x100) & 0x4000000) == 0)) || (*(int *)(this + 0x6ac) == 0)
     ) goto LAB_180059439;
  pCVar1 = this + 0x208;
  iVar3 = CAcousticProsodyTagger::CreateInstance((ITTSHandler **)pCVar1);
  local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
  if (iVar3 < 0) {
LAB_1800593b3:
    if (*(ITTSHandler **)pCVar1 != (ITTSHandler *)0x0) {
      (**(code **)(*(longlong *)*(ITTSHandler **)pCVar1 + 0x28))();
      *(ITTSHandler **)pCVar1 = (ITTSHandler *)0x0;
    }
  }
  else {
    *(undefined4 *)(*(ITTSHandler **)pCVar1 + 0x9e8) = 1;
    iVar3 = (*(code *)**(undefined8 **)*(ITTSHandler **)pCVar1)(*(ITTSHandler **)pCVar1,this);
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (iVar3 < 0) goto LAB_1800593b3;
    iVar3 = TTS::CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_>::Add
                      ((CAtlArray<ITTSHandler*___ptr64,TTS::CElementTraits<ITTSHandler*___ptr64>_> *
                       )(this + 0x1a8),(ITTSHandler **)pCVar1);
    local_res8 = (CRUSVoiceDataManager *)CONCAT44(local_res8._4_4_,iVar3);
    if (iVar3 < 0) goto LAB_1800593b3;
    pCVar7 = DynamicCastAssert<CAcousticProsodyTagger*___ptr64,ITTSHandler*___ptr64>
                       (*(ITTSHandler **)pCVar1,(long *)&local_res8,lVar9);
    iVar3 = (int)local_res8;
    if (((-1 < (int)local_res8) && (*(longlong *)(pCVar7 + 0x40) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(pCVar7 + 0x40) + 8) + 0x28), lVar2 != 0))
    {
      _Var5 = (**(code **)(*(longlong *)(lVar2 + 0x18) + 0x20))(lVar2 + 0x18);
      puVar6 = (uchar *)(**(code **)(*(longlong *)(lVar2 + 0x18) + 0x18))(lVar2 + 0x18);
      AddWarmupTask(this,puVar6,_Var5);
    }
  }
  lVar9 = 0;
  CTTSTracingHelper::LogComponentInitialization
            (iVar3,"Acoustic Prosody Tagger For Long Unit Selection",(ushort *)0x0);
LAB_180059439:
  *(undefined4 *)(this + 0xec) = 1;
  if (-1 < iVar3) {
    pCVar7 = DynamicCastAssert<CAcousticProsodyTagger*___ptr64,ITTSHandler*___ptr64>
                       (*(ITTSHandler **)(this + 0x200),(long *)&local_res8,lVar9);
    iVar3 = (int)local_res8;
    if (-1 < (int)local_res8) {
      if (*(longlong *)(pCVar7 + 0x40) != 0) {
        iVar3 = InitializeRUS(this);
      }
      if (-1 < iVar3) {
        if (1 < *(int *)(this + 0x4a0) - 2U) {
          iVar3 = SetupExtraBackend(this);
        }
        if (-1 < iVar3) {
          pCVar1 = this + 0x588;
          iVar3 = (**(code **)(*(longlong *)pCVar1 + 0x20))(pCVar1,this + 0x250);
          if (-1 < iVar3) {
            iVar3 = (*(code *)**(undefined8 **)(this + 0x250))(this + 0x250,pCVar1);
          }
        }
      }
    }
  }
  return iVar3;
}

