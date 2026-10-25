
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CSpsVocoder::PrepareLSFParameter(class CTTSUtterance * __ptr64,unsigned
   long,unsigned long * __ptr64,unsigned long * __ptr64) __ptr64 */

long __thiscall
CSpsVocoder::PrepareLSFParameter
          (CSpsVocoder *this,CTTSUtterance *param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  size_t _Size;
  ulonglong uVar1;
  uint uVar2;
  ulong uVar3;
  void *_Dst;
  undefined4 *puVar4;
  int iVar5;
  ulong *puVar6;
  CMemoryMatrix<float> *this_00;
  CTTSUtterance *pCVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulong uVar18;
  void *_Src;
  int local_res10;
  CMemoryArray<int> *in_stack_ffffffffffffff38;
  NUSPS_FEATURE_TYPE in_stack_ffffffffffffff60;
  int local_98;
  CMemoryMatrix<float> *local_90;
  InternalSubMatrix<unsigned_long> local_88 [4];
  ulong local_84;
  longlong local_80;
  InternalSubMatrix<unsigned_long> local_78 [8];
  undefined8 local_70;
  InternalSubMatrix<unsigned_long> local_68 [8];
  undefined8 local_60;
  void *local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  if (((((param_1 == (CTTSUtterance *)0x0) || (param_3 == (ulong *)0x0)) ||
       (param_4 == (ulong *)0x0)) ||
      ((pCVar7 = param_1 + (ulonglong)(-(uint)(*(int *)(param_1 + 0x2c0) != 0) & 0x208) + 0x2c8,
       pCVar7 == (CTTSUtterance *)0x0 ||
       (iVar5 = (**(code **)(*(longlong *)pCVar7 + 0x20))(pCVar7), *(int *)(this + 0x38) != iVar5)))
      ) || (*(longlong *)(pCVar7 + 8) == 0)) {
    return -0x7ff8ffa9;
  }
  local_res10 = 0;
  if (*(ulong *)(pCVar7 + 0xb8) == 0) {
    return 0;
  }
  if ((*(CMemoryMatrix<float> **)(pCVar7 + 200) == (CMemoryMatrix<float> *)0x0) &&
     (local_res10 = CMemoryMatrix<float>::CreateInstance
                              ((CMemoryMatrix<float> **)(pCVar7 + 200),*(ulong *)(pCVar7 + 0xb8),
                               *(int *)(this + 0x94) - 1), -1 < local_res10)) {
    local_res10 = CMemoryMatrix<float>::CreateInstance
                            ((CMemoryMatrix<float> **)(pCVar7 + 0xd8),*(ulong *)(pCVar7 + 0xb8),1);
  }
  *param_3 = 1;
  uVar9 = *param_4;
  *param_4 = *(ulong *)(this + 0xfc);
  uVar18 = 1;
  if (param_2 != 0) {
    uVar18 = *(ulong *)(this + 0xf8);
  }
  *param_3 = uVar18;
  uVar8 = uVar18 + param_2;
  uVar14 = *(uint *)(pCVar7 + 0xb0);
  uVar17 = (ulonglong)uVar14;
  uVar2 = uVar14;
  if (*(int *)(this + 0x100) + uVar8 <= uVar14) {
    uVar2 = *(int *)(this + 0x100) + uVar8;
  }
  local_90 = (CMemoryMatrix<float> *)CONCAT44(local_90._4_4_,uVar2);
  uVar13 = (ulonglong)uVar8;
  uVar11 = uVar8;
  if (uVar8 < uVar2) {
    uVar18 = *(ulong *)(*(longlong *)(pCVar7 + 8) + 4);
    lVar15 = *(longlong *)(*(longlong *)(pCVar7 + 8) + 8);
    uVar16 = 0;
    uVar2 = 0;
    do {
      uVar10 = (ulonglong)uVar8;
      puVar6 = (ulong *)0x0;
      if (lVar15 != 0) {
        puVar6 = (ulong *)(lVar15 + (ulonglong)(uVar18 * uVar8) * 4);
      }
      uVar3 = CTTSMath::Sum<unsigned_long>(puVar6,uVar18);
      uVar14 = (uint)uVar17;
      if (uVar2 < uVar3) {
        iVar5 = uVar3 - uVar2;
      }
      else {
        iVar5 = uVar2 - uVar3;
      }
      uVar1 = (ulonglong)((uVar3 + uVar2) * (uVar3 + uVar2)) / (ulonglong)(iVar5 + 5);
      if ((uint)uVar16 < (uint)uVar1) {
        uVar13 = uVar10 & 0xffffffff;
        uVar16 = uVar1;
      }
      uVar11 = (uint)uVar13;
      uVar8 = (int)uVar10 + 1;
      uVar2 = uVar3;
    } while (uVar8 < (uint)local_90);
  }
  if (uVar14 - uVar11 < *(uint *)(this + 0xf8)) {
    *param_4 = 0;
    uVar11 = uVar14;
  }
  if (param_2 < uVar9) {
    uVar18 = 0;
  }
  else {
    uVar18 = param_2 - uVar9;
    param_2 = uVar9;
  }
  uVar12 = uVar11 + (*param_4 - uVar18);
  *param_3 = uVar12;
  puVar6 = param_4;
  uVar3 = uVar18;
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_88,*(CMemoryMatrix<int> **)(pCVar7 + 8),uVar18,uVar12);
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  if (-1 < local_res10) {
    local_res10 = TTS::
                  CAtlArray<HTS::RAW_PDF<int,int,1>,TTS::CElementTraits<HTS::RAW_PDF<int,int,1>_>_>
                  ::SetCount((CAtlArray<HTS::RAW_PDF<int,int,1>,TTS::CElementTraits<HTS::RAW_PDF<int,int,1>_>_>
                              *)&local_58,
                             (ulonglong)(uVar12 * *(int *)(this + 0x98) * *(int *)(this + 0x9c)),
                             uVar3);
    if (-1 < local_res10) {
      uVar3 = CTTSAcousticSpace::CalculateFrameCount
                        ((CMemoryMatrix<unsigned_long> *)local_88,(CMemoryArray<int> *)0x0);
      memcpy(local_58,(void *)(*(longlong *)(pCVar7 + 0x1a8) +
                              (ulonglong)(*(int *)(this + 0x9c) * *(int *)(this + 0x98) * uVar18) *
                              0x28),local_50 * 0x28);
      local_90 = (CMemoryMatrix<float> *)0x0;
      local_res10 = CMemoryMatrix<float>::CreateInstance(&local_90,uVar3,*(ulong *)(this + 0x94));
      this_00 = local_90;
      if (-1 < local_res10) {
        local_res10 = CCholeskyDecomposition::Decompose<HTS::RAW_PDF<int,int,1>,int>
                                ((CAtlArray<HTS::RAW_PDF<int,int,1>,TTS::CElementTraits<HTS::RAW_PDF<int,int,1>_>_>
                                  *)&local_58,1,(CMemoryMatrix<unsigned_long> *)local_88,
                                 *(ulong *)(this + 0x90),*(ulong *)(this + 0x94),
                                 *(ulong *)(this + 0x9c),in_stack_ffffffffffffff38,
                                 *(CHMMDynamicWindowSet **)(this + 0x88),
                                 (CMemoryMatrix<int> *)local_90,*(CTTSUtterance **)(pCVar7 + 0xa8),
                                 *(int *)(*(longlong *)(this + 200) + 0x50),
                                 in_stack_ffffffffffffff60);
      }
      goto LAB_18010f886;
    }
    puVar6 = param_4;
  }
  param_4 = puVar6;
  this_00 = (CMemoryMatrix<float> *)0x0;
LAB_18010f886:
  iVar5 = 0;
  local_98 = 0;
  uVar9 = 0;
  if (param_2 != 0) {
    lVar15 = local_80;
    do {
      puVar6 = (ulong *)0x0;
      if (lVar15 != 0) {
        puVar6 = (ulong *)(lVar15 + (ulonglong)(local_84 * uVar9) * 4);
      }
      uVar3 = CTTSMath::Sum<unsigned_long>(puVar6,local_84);
      iVar5 = iVar5 + uVar3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_2);
    local_98 = iVar5;
  }
  uVar3 = (*param_3 - *param_4) - param_2;
  *param_3 = uVar3;
  iVar5 = *(int *)(this + 0x94);
  if (-1 < local_res10) {
    CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
              (local_68,*(CMemoryMatrix<int> **)(pCVar7 + 8),0,uVar18);
    uVar12 = CTTSAcousticSpace::CalculateFrameCount
                       ((CMemoryMatrix<unsigned_long> *)local_68,(CMemoryArray<int> *)0x0);
    local_90 = (CMemoryMatrix<float> *)CONCAT44(local_90._4_4_,uVar12);
    CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
              (local_78,*(CMemoryMatrix<int> **)(pCVar7 + 8),uVar18 + param_2,uVar3);
    uVar18 = CTTSAcousticSpace::CalculateFrameCount
                       ((CMemoryMatrix<unsigned_long> *)local_78,(CMemoryArray<int> *)0x0);
    if (uVar18 != 0) {
      _Size = (ulonglong)(iVar5 - 1) * 4;
      iVar5 = (uint)local_90;
      local_98 = local_98 + (uint)local_90;
      uVar17 = (ulonglong)uVar18;
      do {
        _Src = (void *)0x0;
        if (*(longlong *)(this_00 + 8) != 0) {
          _Src = (void *)(*(longlong *)(this_00 + 8) +
                         (ulonglong)(uint)((local_98 - iVar5) * *(int *)(this_00 + 4)) * 4);
        }
        _Dst = (void *)0x0;
        lVar15 = *(longlong *)(*(longlong *)(pCVar7 + 200) + 8);
        if (lVar15 != 0) {
          _Dst = (void *)(lVar15 + (ulonglong)
                                   (uint)(local_98 * *(int *)(*(longlong *)(pCVar7 + 200) + 4)) * 4)
          ;
        }
        memcpy(_Dst,_Src,_Size);
        puVar4 = (undefined4 *)0x0;
        lVar15 = *(longlong *)(*(longlong *)(pCVar7 + 0xd8) + 8);
        if (lVar15 != 0) {
          puVar4 = (undefined4 *)
                   (lVar15 + (ulonglong)
                             (uint)(local_98 * *(int *)(*(longlong *)(pCVar7 + 0xd8) + 4)) * 4);
        }
        *puVar4 = *(undefined4 *)((longlong)_Src + _Size);
        local_98 = local_98 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    local_70 = 0;
    CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_78);
    local_60 = 0;
    CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_68);
  }
  if (this_00 != (CMemoryMatrix<float> *)0x0) {
    CMemoryMatrix<float>::Release(this_00);
  }
  if (local_res10 < 0) {
    if (*(CMemoryMatrix<float> **)(pCVar7 + 0xd8) != (CMemoryMatrix<float> *)0x0) {
      CMemoryMatrix<float>::Release(*(CMemoryMatrix<float> **)(pCVar7 + 0xd8));
      *(longlong *)(pCVar7 + 0xd8) = 0;
    }
    if (*(CMemoryMatrix<float> **)(pCVar7 + 200) != (CMemoryMatrix<float> *)0x0) {
      CMemoryMatrix<float>::Release(*(CMemoryMatrix<float> **)(pCVar7 + 200));
      *(longlong *)(pCVar7 + 200) = 0;
    }
  }
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_58);
  local_80 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_88);
  return local_res10;
}

