
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CHTSAcousticModel::BuildDuration(class CHTSDecisionTree const *
   __ptr64,class TTS::CAtlArray<struct TTS_ATTRIBUTE,class TTS::CElementTraits<struct TTS_ATTRIBUTE>
   > const * __ptr64,class CHMMState * __ptr64)const __ptr64 */

long __thiscall
CHTSAcousticModel::BuildDuration
          (CHTSAcousticModel *this,CHTSDecisionTree *param_1,
          CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *param_2,CHMMState *param_3)

{
  long lVar1;
  CHMMGaussMixture *pCVar2;
  CHMMGaussMixture *this_00;
  CHMMGaussMixture *pCVar3;
  CHMMGaussMixture *pCVar4;
  undefined4 uVar5;
  CHMMGaussMixture *pCVar6;
  CHTSPhoneDurationLeafNode *pCVar7;
  undefined4 uVar8;
  CHTSPhoneDurationLeafNode *local_38;
  CHMMGaussMixture *local_30;
  
  uVar5 = 0;
  local_38 = (CHTSPhoneDurationLeafNode *)0x0;
  pCVar7 = (CHTSPhoneDurationLeafNode *)0x0;
  pCVar6 = (CHMMGaussMixture *)0x0;
  uVar8 = 0;
  if (**(int **)(this + 8) == 3) {
    lVar1 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                      (param_1,param_2,&local_38,
                       (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                       param_3);
    pCVar7 = local_38;
    if (lVar1 < 0) {
      pCVar4 = (CHMMGaussMixture *)0x0;
      goto LAB_18005dd56;
    }
    local_38 = (CHTSPhoneDurationLeafNode *)0x0;
    uVar5 = *(undefined4 *)(pCVar7 + 0x28);
    pCVar6 = (CHMMGaussMixture *)(pCVar7 + 0x14);
    uVar8 = *(undefined4 *)(*(longlong *)(this + 8) + 0x48);
  }
  else {
    lVar1 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                      (param_1,param_2,&local_38,
                       (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                       param_3);
    if (lVar1 < 0) {
      pCVar4 = (CHMMGaussMixture *)0x0;
      if (lVar1 < 0) goto LAB_18005dd56;
    }
    else {
      uVar8 = 1;
      uVar5 = *(undefined4 *)(local_38 + 8);
      pCVar6 = (CHMMGaussMixture *)(local_38 + 4);
      pCVar7 = local_38;
    }
  }
  pCVar4 = (CHMMGaussMixture *)0x0;
  pCVar2 = operator_new(0x30,&std::nothrow);
  if (pCVar2 == (CHMMGaussMixture *)0x0) {
    lVar1 = -0x7ff8fff2;
    goto LAB_18005dd56;
  }
  *(undefined ***)pCVar2 = CHMMStream::_vftable_;
  *(undefined8 *)(pCVar2 + 8) = 0;
  *(undefined8 *)(pCVar2 + 0x10) = 0;
  *(undefined8 *)(pCVar2 + 0x18) = 0;
  *(undefined4 *)(pCVar2 + 0x20) = 0;
  *(undefined8 *)(pCVar2 + 0x28) = 0;
  local_38 = (CHTSPhoneDurationLeafNode *)pCVar2;
  if (*(int *)(*(longlong *)(this + 8) + 0x14) != 1) {
    lVar1 = -0x7fff0001;
    pCVar4 = pCVar2;
    goto LAB_18005dd56;
  }
  *(undefined4 *)(pCVar2 + 0x28) = **(undefined4 **)(*(longlong *)(this + 8) + 0x18);
  *(undefined4 *)(pCVar2 + 0x2c) = uVar5;
  this_00 = operator_new(0x38,&std::nothrow);
  if (this_00 == (CHMMGaussMixture *)0x0) {
    this_00 = pCVar4;
LAB_18005dd1b:
    lVar1 = -0x7ff8fff2;
LAB_18005dd20:
    if (this_00 != (CHMMGaussMixture *)0x0) {
      CHMMGaussMixture::Release(this_00);
    }
    pCVar4 = pCVar2;
    if (lVar1 < 0) goto LAB_18005dd56;
  }
  else {
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined ***)this_00 = CHMMGaussMixture::_vftable_;
    *(undefined8 *)(this_00 + 8) = 1;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined4 *)(this_00 + 0xc) = 0x3f800000;
    *(undefined4 *)(this_00 + 0x10) = 1;
    local_30 = this_00;
    pCVar3 = operator_new(0x10,&std::nothrow);
    if (pCVar3 == (CHMMGaussMixture *)0x0) {
      pCVar3 = pCVar4;
    }
    else {
      *(undefined4 *)pCVar3 = 1;
      *(undefined4 *)(pCVar3 + 4) = uVar8;
      *(CHTSPhoneDurationLeafNode **)(pCVar3 + 8) = pCVar7;
    }
    *(CHMMGaussMixture **)(this_00 + 0x18) = pCVar3;
    if (pCVar3 == (CHMMGaussMixture *)0x0) goto LAB_18005dd1b;
    pCVar3 = operator_new(0x10,&std::nothrow);
    if (pCVar3 != (CHMMGaussMixture *)0x0) {
      *(undefined4 *)pCVar3 = 1;
      *(undefined4 *)(pCVar3 + 4) = uVar8;
      *(CHMMGaussMixture **)(pCVar3 + 8) = pCVar6;
      pCVar4 = pCVar3;
    }
    *(CHMMGaussMixture **)(this_00 + 0x20) = pCVar4;
    if (pCVar4 == (CHMMGaussMixture *)0x0) goto LAB_18005dd1b;
    lVar1 = TTS::
            CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>::
            Add((CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>
                 *)(pCVar2 + 8),&local_30);
    if (lVar1 < 0) {
      this_00 = local_30;
      goto LAB_18005dd20;
    }
  }
  lVar1 = TTS::CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_>::Add
                    ((CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_> *)
                     (param_3 + 8),(CHMMStream **)&local_38);
  if (-1 < lVar1) {
    return lVar1;
  }
  pCVar4 = (CHMMGaussMixture *)local_38;
LAB_18005dd56:
  if (pCVar4 != (CHMMGaussMixture *)0x0) {
    (*(code *)**(undefined8 **)pCVar4)(pCVar4,1);
  }
  return lVar1;
}

