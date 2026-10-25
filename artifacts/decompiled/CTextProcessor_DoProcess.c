
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CTextProcessor::DoProcess(struct ITTSUtterance * __ptr64,int * __ptr64)
   __ptr64 */

long __thiscall CTextProcessor::DoProcess(CTextProcessor *this,ITTSUtterance *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  CTTSUtteranceNodeList<CTTSWord> *pCVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  CTTSUtterance *this_00;
  longlong lVar11;
  CTTSWord *this_01;
  CTTSString *pCVar12;
  int iVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  CTTSUtteranceNodeList<CTTSWord> *local_res18;
  int local_res20;
  uint local_98;
  int local_94;
  uint local_90;
  undefined8 *local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  CTTSString local_60 [40];
  
  local_90 = 0;
  local_res8[0] = 0;
  local_res20 = 0;
  iVar13 = 0;
  bVar5 = false;
  bVar4 = false;
  local_98 = 0;
  local_94 = 0;
  local_res18 = (CTTSUtteranceNodeList<CTTSWord> *)param_2;
  if (*(int *)(this + 0x48) == 0) {
    plVar10 = *(longlong **)(this + 0x18);
    pcVar2 = *(code **)(*plVar10 + 0x10);
    uVar9 = (**(code **)(**(longlong **)(this + 0x10) + 0x60))();
    local_res8[0] = (*pcVar2)(plVar10,uVar9);
    if (-1 < (int)local_res8[0]) {
      *(undefined4 *)(this + 0x48) = 1;
      goto LAB_18005c816;
    }
    plVar10 = (longlong *)0x0;
  }
  else {
LAB_18005c816:
    plVar10 = (longlong *)(**(code **)(**(longlong **)(this + 0x10) + 0x58))();
    bVar4 = bVar5;
    if (plVar10 == (longlong *)0x0) {
      local_res8[0] = 0x80004005;
    }
    else {
      local_res8[0] = (**(code **)(*plVar10 + 0x10))(plVar10,&local_98);
      if (-1 < (int)local_res8[0]) {
        if ((local_98 & 2) == 0) {
LAB_18005c894:
          puVar3 = *(undefined8 **)(this + 0x50);
          if (puVar3 != (undefined8 *)0x0) {
            local_res8[0] = (**(code **)*puVar3)(puVar3,0x40004,0,param_1);
          }
        }
        else {
          local_res8[0] = (**(code **)(*plVar10 + 0x40))(plVar10,&local_94);
          if (-1 < (int)local_res8[0]) {
            if (local_94 == 1) {
              bVar4 = true;
              goto LAB_18005c894;
            }
            local_res8[0] = 0x80070057;
          }
        }
      }
    }
    param_2 = (int *)local_res18;
  }
  iVar1 = local_res20;
  uVar7 = local_res8[0];
  if (-1 < (int)local_res8[0]) {
    local_88 = (undefined8 *)0x0;
    if (bVar4) {
      if (local_res20 < 1) {
        do {
          uVar7 = (**(code **)(**(longlong **)(this + 0x18) + 0x20))
                            (*(longlong **)(this + 0x18),&local_88);
          local_res8[0] = uVar7;
          if (uVar7 != 0) break;
          local_res20 = local_res20 + 1;
          if (local_88 != (undefined8 *)0x0) {
            (**(code **)*local_88)(local_88,1);
            local_88 = (undefined8 *)0x0;
          }
        } while (local_res20 < 1);
        if (-1 < (int)uVar7) {
          uVar7 = ParseSentence(this,param_1,0);
          local_res8[0] = uVar7;
          if (-1 < (int)uVar7) goto LAB_18005c955;
        }
      }
      else {
        while (1 < local_res20) {
          uVar7 = (**(code **)(**(longlong **)(this + 0x18) + 0x18))
                            (*(longlong **)(this + 0x18),&local_88);
          local_res8[0] = uVar7;
          if (uVar7 != 0) break;
          local_res20 = local_res20 + -1;
          iVar13 = iVar13 + 1;
          if (local_88 != (undefined8 *)0x0) {
            (**(code **)*local_88)(local_88,1);
            local_88 = (undefined8 *)0x0;
          }
        }
        if (uVar7 == 0) {
          uVar7 = ParseSentence(this,param_1,0);
          local_res8[0] = uVar7;
        }
        if (-1 < (int)uVar7) {
          iVar1 = iVar13 + 1;
LAB_18005c955:
          uVar8 = (**(code **)(*plVar10 + 0x48))(plVar10,iVar1);
          if ((int)uVar8 < 0) goto LAB_18005c9e2;
          goto LAB_18005c9e7;
        }
      }
    }
    else {
      uVar8 = ParseSentence(this,param_1,*param_2);
LAB_18005c9e2:
      uVar7 = uVar8;
      local_res8[0] = uVar8;
LAB_18005c9e7:
      if (-1 < (int)uVar7) {
        puVar3 = *(undefined8 **)(this + 0x50);
        if (puVar3 != (undefined8 *)0x0) {
          uVar7 = (**(code **)*puVar3)(puVar3,0x40004,1,param_1);
          local_res8[0] = uVar7;
        }
      }
    }
  }
  this_00 = (CTTSUtterance *)0x0;
  if (uVar7 == 0) {
    this_00 = DynamicCastAssert<CTTSUtterance*___ptr64,ITTSUtterance*___ptr64>
                        (param_1,(long *)local_res8,-0x7ff8ffa9);
    uVar7 = local_res8[0];
    if (local_res8[0] == 0) {
      if (*(longlong *)(this + 0x20) != 0) {
        lVar11 = __RTDynamicCast(*(longlong *)(this + 0x20),0,
                                 &struct_ISentenceAnalyzer__RTTI_Type_Descriptor_,
                                 &class_CSentenceAnalyzer__RTTI_Type_Descriptor_,0);
        uVar7 = 0;
        if (lVar11 != 0) goto LAB_18005ca6b;
      }
      uVar7 = 0x80070057;
    }
  }
LAB_18005ca6b:
  local_80 = (void *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  if (uVar7 == 0) {
    uVar7 = CTTSEngine::GetBackendPhonemes
                      (*(CTTSEngine **)(this + 0x10),
                       (CAtlArray<IPhoneme_const*___ptr64,TTS::CElementTraits<IPhoneme_const*___ptr64>_>
                        *)&local_80);
    if (-1 < (int)uVar7) {
      uVar7 = CTTSUtterance::BuildPhoneList
                        (this_00,(CAtlArray<IPhoneme_const*___ptr64,TTS::CElementTraits<IPhoneme_const*___ptr64>_>
                                  *)&local_80,
                         (CTTSProsodySetting *)(*(longlong *)(this + 0x10) + 0x4a8));
    }
    if (uVar7 == 0) {
      if (*(longlong **)(this_00 + 0xe0) == (longlong *)0x0) {
        uVar7 = 0x8000ffff;
      }
      else {
        uVar7 = (**(code **)(**(longlong **)(this_00 + 0xe0) + 0xb0))();
        if ((uVar7 == 0) && (*(CSentAndPuncDetector **)(this + 0x28) != (CSentAndPuncDetector *)0x0)
           ) {
          uVar7 = CSentAndPuncDetector::DoSentTypeDetection
                            (*(CSentAndPuncDetector **)(this + 0x28),param_1);
        }
      }
    }
  }
  pCVar6 = local_res18;
  if (*(int *)local_res18 == 0) {
    if ((uVar7 == 0) && (iVar13 = (**(code **)(**(longlong **)(this + 0x18) + 0x50))(), iVar13 == 1)
       ) {
      local_res18 = (CTTSUtteranceNodeList<CTTSWord> *)0x0;
      uVar7 = (**(code **)(**(longlong **)(this_00 + 0xe0) + 0x28))
                        (*(longlong **)(this_00 + 0xe0),&local_res18);
      if (-1 < (int)uVar7) {
        uVar8 = local_90;
        for (uVar14 = 0; uVar14 < *(ulonglong *)(local_res18 + 0x10); uVar14 = uVar14 + 1) {
          this_01 = CTTSUtteranceNodeList<CTTSWord>::GetByIndex(local_res18,uVar14);
          iVar13 = CTTSWord::IsPronounceable(this_01);
          if (iVar13 != 0) goto LAB_18005cbea;
          pCVar12 = (CTTSString *)(**(code **)(*(longlong *)this_01 + 0xe0))(this_01,local_60);
          local_res8[0] = uVar8 | 1;
          iVar13 = operator!=(pCVar12,(ushort *)L"message");
          if ((iVar13 == 0) ||
             (iVar13 = (**(code **)(*(longlong *)this_01 + 0x270))(this_01), iVar13 != 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          uVar8 = uVar8 & 0xfffffffe;
          CTTSString::~CTTSString(local_60);
          if (bVar4) goto LAB_18005cbea;
        }
        *(int *)pCVar6 = 1;
      }
    }
LAB_18005cbea:
    if (*(int *)pCVar6 == 0) goto LAB_18005cbf1;
  }
  else {
    *(int *)local_res18 = 0;
LAB_18005cbf1:
    if (((uVar7 != 0) ||
        (uVar7 = CTextRegularizer::Process(*(CTextRegularizer **)(this + 0x30),this_00), uVar7 != 0)
        ) || (uVar7 = CQuotationDetector::Process(*(CQuotationDetector **)(this + 0x38),this_00),
             uVar7 != 0)) goto LAB_18005cc5e;
    uVar7 = CParallelStructDetector::Process(*(CParallelStructDetector **)(this + 0x40),this_00);
  }
  if (uVar7 == 0) {
    plVar10 = *(longlong **)(this_00 + 0xe0);
    if (plVar10 == (longlong *)0x0) {
      uVar7 = 0x8000ffff;
    }
    else {
      uVar7 = (**(code **)(*plVar10 + 0xa0))(plVar10,&local_80,*(longlong *)(this + 0x10) + 0x4a8);
    }
  }
LAB_18005cc5e:
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
  }
  return uVar7;
}

