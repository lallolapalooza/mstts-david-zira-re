
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CNusTrajectoryRefiner::DoPitchRefinement(class CTTSUtterance * __ptr64)
   __ptr64 */

long __thiscall
CNusTrajectoryRefiner::DoPitchRefinement(CNusTrajectoryRefiner *this,CTTSUtterance *param_1)

{
  longlong lVar1;
  int iVar2;
  long lVar3;
  ulonglong uVar4;
  CTTSAcousticSpace *this_00;
  float *pfVar5;
  uint uVar6;
  CTTSAcousticSpace *pCVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  uint local_res10 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68 [3];
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_50 = 0;
  local_res10[0] = 0;
  uVar8 = 0;
  pCVar7 = (CTTSAcousticSpace *)
           (param_1 + (ulonglong)(-(uint)(*(int *)(param_1 + 0x2c0) != 0) & 0x208) + 0x2c8);
  if (((*(longlong *)(pCVar7 + 8) == 0) ||
      (this_00 = pCVar7, iVar2 = (**(code **)(*(longlong *)pCVar7 + 0x20))(), iVar2 != 0)) ||
     (*(longlong *)(pCVar7 + 0xc0) == 0)) {
    TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
    ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
              ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_68);
    TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
    ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
              ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_88);
    TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
    ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
              ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_48);
    TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
    ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
              ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_c8);
    TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
    ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
              ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_a8);
    return -0x7fff0001;
  }
  iVar2 = *(int *)(this + 0x68);
  if (iVar2 == 0) {
    lVar3 = CalculateHalfPhoneDuration
                      ((CNusTrajectoryRefiner *)this_00,pCVar7,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_a8,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_c8,local_res10);
    if (lVar3 < 0) goto LAB_1800e8917;
    lVar3 = CalcNusRefHalfPhonePitch
                      ((CNusTrajectoryRefiner *)this_00,param_1,
                       (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_88);
  }
  else if (iVar2 == 1) {
    lVar3 = CalculatePhoneDuration
                      ((CNusTrajectoryRefiner *)this_00,pCVar7,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_a8,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_c8,local_res10);
    if (lVar3 < 0) goto LAB_1800e8917;
    lVar3 = CalcNusRefPhonePitch
                      ((CNusTrajectoryRefiner *)this_00,param_1,
                       (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_88);
  }
  else {
    if (iVar2 != 2) {
      lVar3 = -0x7fff0001;
      goto LAB_1800e8917;
    }
    lVar3 = CalculateSyllableDuration
                      ((CNusTrajectoryRefiner *)this_00,pCVar7,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_a8,
                       (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_c8,local_res10);
    if (lVar3 < 0) goto LAB_1800e8917;
    lVar3 = CalcNusRefSyllablePitch
                      ((CNusTrajectoryRefiner *)this_00,param_1,
                       (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_88);
  }
  if ((-1 < lVar3) &&
     (lVar3 = CalcTargetPitch((CNusTrajectoryRefiner *)this_00,
                              *(CMemoryMatrix<float> **)(pCVar7 + 0xc0),
                              (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_a8,
                              (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_c8,
                              (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_48), -1 < lVar3
     )) {
    if (*(int *)(this + 0x6c) == 0) {
      uVar6 = local_res10[0];
    }
    else {
      AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xd8));
      uVar8 = *(uint *)(pCVar7 + 0x17c);
      uVar6 = *(uint *)(pCVar7 + 0x178);
      ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xd8));
    }
    lVar3 = CalcPitchDistance(this,local_res10[0],
                              (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_a8,
                              (CAtlArray<int,TTS::CElementTraits<int>_> *)&local_c8,
                              (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_88,
                              (CAtlArray<float,TTS::CElementTraits<float>_> *)&local_48,
                              (CAtlArray<float,TTS::CElementTraits<float>_> *)local_68,uVar6);
    if ((-1 < lVar3) && (lVar1 = *(longlong *)(*(longlong *)(pCVar7 + 0xc0) + 8), uVar8 < uVar6)) {
      pfVar5 = (float *)(lVar1 + (ulonglong)uVar8 * 4);
      uVar4 = (ulonglong)(uVar6 - uVar8);
      do {
        if (0.0 < *pfVar5) {
          fVar10 = *(float *)((local_68[0] - lVar1) + (longlong)pfVar5) * *(float *)(this + 100) +
                   *pfVar5;
          fVar9 = 0.0;
          if (0.0 <= fVar10) {
            fVar9 = fVar10;
          }
          *pfVar5 = fVar9;
        }
        pfVar5 = pfVar5 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
LAB_1800e8917:
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_68);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_88);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_48);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_c8);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_a8);
  return lVar3;
}

