
/* private: long __cdecl CF0Predictor::Predict<int>(class CTTSAcousticSpaceImpl<int> * __ptr64)const
   __ptr64 */

long __thiscall CF0Predictor::Predict<int>(CF0Predictor *this,CTTSAcousticSpaceImpl<int> *param_1)

{
  CTTSAcousticSpaceImpl<int> *pCVar1;
  longlong lVar2;
  longlong lVar3;
  long lVar4;
  uint uVar5;
  CF0Predictor *this_00;
  
  lVar4 = 0;
  if (*(ulong *)(param_1 + 0xb8) != 0) {
    if (((*(longlong *)(param_1 + 8) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
       (pCVar1 = param_1 + 0xc0, *(CMemoryMatrix<float> **)pCVar1 != (CMemoryMatrix<float> *)0x0)) {
      return -0x7ff8ffa9;
    }
    if ((((*(int *)(param_1 + 0x174) == 0) || (*(longlong *)(param_1 + 0x160) != 0)) &&
        ((lVar4 = CMemoryMatrix<float>::CreateInstance
                            ((CMemoryMatrix<float> **)pCVar1,*(ulong *)(param_1 + 0xb8),1),
         -1 < lVar4 && (this_00 = this, lVar4 = CallDecomposer<int>(this,param_1), -1 < lVar4)))) &&
       ((*(CTextFile **)(this + 0x88) == (CTextFile *)0x0 ||
        (lVar4 = DumpF0<int>(this_00,param_1,*(CTextFile **)(this + 0x88)), -1 < lVar4)))) {
      if (*(int *)(param_1 + 0x174) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 8);
        if ((lVar2 == 0) ||
           (lVar3 = *(longlong *)(*(CMemoryMatrix<float> **)pCVar1 + 8), lVar3 == 0)) {
          return -0x7fff0001;
        }
        uVar5 = 0;
        if (*(int *)(param_1 + 0xb8) != 0) {
          do {
            this_00 = (CF0Predictor *)(ulonglong)uVar5;
            if (*(int *)(lVar2 + (longlong)this_00 * 4) == 0) {
              *(undefined4 *)(lVar3 + (longlong)this_00 * 4) = 0;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + 0xb8));
        }
      }
      if (((((*(longlong *)(this + 0x70) == 0) || (*(int *)(param_1 + 0x174) != 0)) ||
           (this_00 = this, lVar4 = ApplyCustomizationFunction<int>(this,param_1), -1 < lVar4)) &&
          ((*(CTextFile **)(this + 0x80) == (CTextFile *)0x0 ||
           (lVar4 = DumpF0<int>(this_00,param_1,*(CTextFile **)(this + 0x80)), -1 < lVar4)))) &&
         ((lVar4 = ApplyHeqTransform<int>
                             (this,param_1,
                              (float)*(uint *)(*(longlong *)(this + 0x78) + 0x28) / 100.0),
          -1 < lVar4 && (*(int *)(*(longlong *)(this + 0x78) + 0x70) != 0)))) {
        lVar4 = GenerateQuestionIntonation<int>(this,param_1);
      }
    }
  }
  return lVar4;
}

