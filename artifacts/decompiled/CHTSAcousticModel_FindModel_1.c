
/* public: long __cdecl CHTSAcousticModel::FindModel<struct HTS::RAW_PDF<int,int,1> >(unsigned
   short,class TTS::CAtlArray<struct TTS_ATTRIBUTE,class TTS::CElementTraits<struct TTS_ATTRIBUTE> >
   const * __ptr64,class CLwHuffDecoder * __ptr64,struct HTS::RAW_PDF<int,int,1> * __ptr64,unsigned
   long)const __ptr64 */

long __thiscall
CHTSAcousticModel::FindModel<HTS::RAW_PDF<int,int,1>_>
          (CHTSAcousticModel *this,ushort param_1,
          CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *param_2,
          CLwHuffDecoder *param_3,RAW_PDF<int,int,1> *param_4,ulong param_5)

{
  uint uVar1;
  longlong lVar2;
  CHTSDecisionTreeSet *this_00;
  uint *puVar3;
  int iVar4;
  long lVar5;
  CHTSDecisionTree *this_01;
  ulonglong uVar6;
  uint uVar7;
  RAW_PDF<int,int,1> *pRVar8;
  CLwHuffDecoder *pCVar9;
  CHTSDecisionTreeSet *local_res18;
  ACOUSTIC_MODEL_CONFIG local_58 [16];
  undefined8 local_48;
  uint *puStack_40;
  
  if ((((param_2 == (CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *)0x0) ||
       (*(longlong *)(param_2 + 8) == 0)) || (param_4 == (RAW_PDF<int,int,1> *)0x0)) ||
     (param_5 == 0)) {
    iVar4 = -0x7ff8ffa9;
  }
  else {
    local_res18 = (CHTSDecisionTreeSet *)0x0;
    pCVar9 = param_3;
    iVar4 = FindTreeSet(this,param_1,&local_res18);
    this_00 = local_res18;
    if (-1 < iVar4) {
      if (local_res18 == (CHTSDecisionTreeSet *)0x0) {
        iVar4 = -0x7fff0001;
      }
      else {
        iVar4 = SumPDFCount(this,(ulong *)&local_res18);
      }
    }
    local_48 = 0;
    puStack_40 = (uint *)0x0;
    if (-1 < iVar4) {
      iVar4 = GetModelConfig(this,local_58);
    }
    puVar3 = puStack_40;
    uVar7 = 0;
    if (-1 < iVar4) {
      pRVar8 = param_4 + 0x20;
      while( true ) {
        if (*(uint *)(this_00 + 0xc) <= uVar7) {
          return iVar4;
        }
        if (iVar4 < 0) {
          return iVar4;
        }
        this_01 = CHTSDecisionTreeSet::GetAt(this_00,uVar7);
        local_res18 = (CHTSDecisionTreeSet *)0x0;
        lVar5 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                          (this_01,param_2,(CHTSPhoneDurationLeafNode **)&local_res18,
                           (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                           pCVar9);
        if (lVar5 < 0) {
          return lVar5;
        }
        lVar2 = *(longlong *)(this + 0x20);
        uVar1 = *(uint *)local_res18;
        uVar6 = (ulonglong)(uVar1 + 1);
        if (param_3 == (CLwHuffDecoder *)0x0) {
          uVar6 = (ulonglong)*puVar3 * 2 + 3;
        }
        if (*(uint *)(this + 0x28) < uVar6) break;
        *(CLwHuffDecoder **)(pRVar8 + -0x10) = param_3;
        *(ulonglong *)pRVar8 = lVar2 + (ulonglong)uVar1;
        *(uint *)(pRVar8 + -8) = *puVar3 + 3;
        iVar4 = 0;
        pRVar8 = pRVar8 + 0x28;
        uVar7 = uVar7 + 1;
      }
      iVar4 = -0x7ffb7fe8;
    }
  }
  return iVar4;
}

