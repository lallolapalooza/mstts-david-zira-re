
/* public: long __cdecl CHTSAcousticModel::FindModel<struct HTS::RAW_PDF<int,int,7> >(unsigned
   short,class TTS::CAtlArray<struct TTS_ATTRIBUTE,class TTS::CElementTraits<struct TTS_ATTRIBUTE> >
   const * __ptr64,class CLwHuffDecoder * __ptr64,struct HTS::RAW_PDF<int,int,7> * __ptr64,unsigned
   long)const __ptr64 */

long __thiscall
CHTSAcousticModel::FindModel<HTS::RAW_PDF<int,int,7>_>
          (CHTSAcousticModel *this,ushort param_1,
          CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *param_2,
          CLwHuffDecoder *param_3,RAW_PDF<int,int,7> *param_4,ulong param_5)

{
  CHTSDecisionTreeSet *this_00;
  int iVar1;
  long lVar2;
  CHTSDecisionTree *this_01;
  uint uVar3;
  CHTSDecisionTreeSet *local_res20;
  ACOUSTIC_MODEL_CONFIG local_38 [48];
  
  if ((((param_2 == (CAtlArray<TTS_ATTRIBUTE,TTS::CElementTraits<TTS_ATTRIBUTE>_> *)0x0) ||
       (*(longlong *)(param_2 + 8) == 0)) || (param_4 == (RAW_PDF<int,int,7> *)0x0)) ||
     (param_5 == 0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    local_res20 = (CHTSDecisionTreeSet *)0x0;
    iVar1 = FindTreeSet(this,param_1,&local_res20);
    this_00 = local_res20;
    if (-1 < iVar1) {
      if (local_res20 == (CHTSDecisionTreeSet *)0x0) {
        return -0x7fff0001;
      }
      iVar1 = SumPDFCount(this,(ulong *)&local_res20);
      if (-1 < iVar1) {
        iVar1 = GetModelConfig(this,local_38);
      }
    }
    uVar3 = 0;
    if (-1 < iVar1) {
      while ((uVar3 < *(uint *)(this_00 + 0xc) && (-1 < iVar1))) {
        this_01 = CHTSDecisionTreeSet::GetAt(this_00,uVar3);
        local_res20 = (CHTSDecisionTreeSet *)0x0;
        lVar2 = CHTSDecisionTree::Regress<CHTSPhoneDurationLeafNode>
                          (this_01,param_2,(CHTSPhoneDurationLeafNode **)&local_res20,
                           (CAtlList<TREE_REGRESS_STEP,TTS::CElementTraits<TREE_REGRESS_STEP>_> *)
                           param_3);
        if (lVar2 < 0) {
          return lVar2;
        }
        *(CHTSDecisionTreeSet **)param_4 = local_res20;
        *(CHTSDecisionTreeSet **)(param_4 + 8) = local_res20 + 0x1e;
        param_4 = param_4 + 0x10;
        uVar3 = uVar3 + 1;
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

