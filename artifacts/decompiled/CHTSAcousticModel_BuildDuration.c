
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: long __cdecl CHTSAcousticModel::BuildDuration(class CHTSDecisionTree const *
   __ptr64,class TTS::CAtlArray<struct TTS_ATTRIBUTE,class TTS::CElementTraits<struct TTS_ATTRIBUTE>
   > const * __ptr64,class CHMMState * __ptr64)const __ptr64 */

long __thiscall
CHTSAcousticModel::BuildDuration
          (CHTSAcousticModel *this,CHTSDecisionTree *param_1,
          CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *param_2,CHMMState *param_3)

{
  CHTSPhoneDurationLeafNode *pCVar1;
  long lVar2;
  CHMMGaussMixture *pCVar3;
  CHMMGaussMixture *pCVar4;
  CHMMGaussMixture *pCVar5;
  CHMMGaussMixture *pCVar6;
  undefined4 uVar7;
  CHTSPhoneDurationLeafNode *this_00;
  undefined4 uVar8;
  CHMMGaussMixture *pCVar9;
  CHTSPhoneDurationLeafNode *local_48;
  CHMMGaussMixture *local_40;
  CHMMGaussMixture *local_38;
  
  local_48 = (CHTSPhoneDurationLeafNode *)0x0;
  if (*(int *)(*(longlong *)(this + 8) + 8) == 3) {
    lVar2 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                      (param_1,param_2,&local_48,
                       (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                       param_3);
    if (lVar2 < 0) {
      return lVar2;
    }
    uVar7 = *(undefined4 *)(local_48 + 0x28);
    pCVar9 = (CHMMGaussMixture *)(local_48 + 0x14);
    uVar8 = *(undefined4 *)(*(longlong *)(this + 8) + 0x50);
  }
  else {
    lVar2 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                      (param_1,param_2,&local_48,
                       (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                       param_3);
    if (lVar2 < 0) {
      return lVar2;
    }
    uVar8 = 1;
    uVar7 = *(undefined4 *)(local_48 + 8);
    pCVar9 = (CHMMGaussMixture *)(local_48 + 4);
  }
  pCVar1 = local_48;
  pCVar3 = operator_new(0x30,&std::nothrow);
  pCVar6 = (CHMMGaussMixture *)0x0;
  local_40 = pCVar3;
  if (pCVar3 == (CHMMGaussMixture *)0x0) {
    pCVar3 = pCVar6;
  }
  else {
    *(undefined ***)pCVar3 = CHMMStream::_vftable_;
    *(undefined8 *)(pCVar3 + 8) = 0;
    *(undefined8 *)(pCVar3 + 0x10) = 0;
    *(undefined8 *)(pCVar3 + 0x18) = 0;
    *(undefined4 *)(pCVar3 + 0x20) = 0;
    *(undefined8 *)(pCVar3 + 0x28) = 0;
    if (pCVar3 != (CHMMGaussMixture *)0x0) {
      if (*(int *)(*(longlong *)(this + 8) + 0x1c) != 1) {
        lVar2 = -0x7fff0001;
        goto LAB_1800b144a;
      }
      *(undefined4 *)(pCVar3 + 0x28) = **(undefined4 **)(*(longlong *)(this + 8) + 0x20);
      *(undefined4 *)(pCVar3 + 0x2c) = uVar7;
      pCVar4 = operator_new(0x38,&std::nothrow);
      local_48 = (CHTSPhoneDurationLeafNode *)pCVar4;
      if (pCVar4 == (CHMMGaussMixture *)0x0) {
        this_00 = (CHTSPhoneDurationLeafNode *)pCVar6;
LAB_1800b1409:
        lVar2 = -0x7ff8fff2;
LAB_1800b140e:
        if (this_00 != (CHTSPhoneDurationLeafNode *)0x0) {
          CHMMGaussMixture::Release((CHMMGaussMixture *)this_00);
        }
        if (lVar2 < 0) goto LAB_1800b144a;
      }
      else {
        *(undefined8 *)(pCVar4 + 8) = 1;
        *(undefined ***)pCVar4 = CHMMGaussMixture::_vftable_;
        *(undefined8 *)(pCVar4 + 0x10) = 0;
        *(undefined8 *)(pCVar4 + 0x18) = 0;
        *(undefined8 *)(pCVar4 + 0x20) = 0;
        *(undefined8 *)(pCVar4 + 0x28) = 0;
        *(undefined8 *)(pCVar4 + 0x30) = 0;
        this_00 = (CHTSPhoneDurationLeafNode *)pCVar4;
        if (pCVar4 == (CHMMGaussMixture *)0x0) goto LAB_1800b1409;
        *(undefined4 *)(pCVar4 + 0xc) = 0x3f800000;
        *(undefined4 *)(pCVar4 + 0x10) = 1;
        local_38 = operator_new(0x20,&std::nothrow);
        if (local_38 == (CHMMGaussMixture *)0x0) {
          pCVar5 = pCVar6;
        }
        else {
          *(undefined4 *)local_38 = 1;
          *(undefined4 *)(local_38 + 4) = uVar8;
          *(CHTSPhoneDurationLeafNode **)(local_38 + 8) = pCVar1;
          *(undefined4 *)(local_38 + 0x10) = 0;
          *(CHTSPhoneDurationLeafNode **)(local_38 + 0x18) = pCVar1;
          pCVar5 = local_38;
        }
        *(CHMMGaussMixture **)(pCVar4 + 0x18) = pCVar5;
        if (pCVar5 == (CHMMGaussMixture *)0x0) goto LAB_1800b1409;
        local_38 = operator_new(0x20,&std::nothrow);
        if (local_38 != (CHMMGaussMixture *)0x0) {
          *(undefined4 *)local_38 = 1;
          *(undefined4 *)(local_38 + 4) = uVar8;
          *(CHMMGaussMixture **)(local_38 + 8) = pCVar9;
          *(undefined4 *)(local_38 + 0x10) = 0;
          *(CHMMGaussMixture **)(local_38 + 0x18) = pCVar9;
          pCVar6 = local_38;
        }
        *(CHMMGaussMixture **)(pCVar4 + 0x20) = pCVar6;
        if (pCVar6 == (CHMMGaussMixture *)0x0) goto LAB_1800b1409;
        lVar2 = TTS::
                CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>
                ::Add((CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>
                       *)(pCVar3 + 8),(CHMMGaussMixture **)&local_48);
        if (lVar2 < 0) {
          this_00 = local_48;
          goto LAB_1800b140e;
        }
      }
      lVar2 = TTS::CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_>::Add
                        ((CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_> *
                         )(param_3 + 8),(CHMMStream **)&local_40);
      if (-1 < lVar2) {
        return lVar2;
      }
      pCVar3 = local_40;
      goto LAB_1800b144a;
    }
  }
  lVar2 = -0x7ff8fff2;
LAB_1800b144a:
  if (pCVar3 != (CHMMGaussMixture *)0x0) {
    (*(code *)**(undefined8 **)pCVar3)(pCVar3,1);
  }
  return lVar2;
}

