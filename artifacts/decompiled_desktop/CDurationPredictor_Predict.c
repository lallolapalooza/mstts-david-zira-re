
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: virtual long __cdecl CDurationPredictor::Predict(class CTTSAcousticSpace *
   __ptr64)const __ptr64 */

long __thiscall CDurationPredictor::Predict(CDurationPredictor *this,CTTSAcousticSpace *param_1)

{
  ulong *puVar1;
  uint uVar2;
  longlong *plVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  CHMMGaussMixture *pCVar9;
  CHMMGaussMixture *this_00;
  ITTSDomainHandler *pIVar10;
  longlong lVar11;
  CTTSPhone *this_01;
  CHMMModel *this_02;
  CHMMModel *this_03;
  CTTSPhone *this_04;
  ulong uVar12;
  ulonglong uVar13;
  CHMMModel *pCVar14;
  CTTSString *in_R9;
  uint *puVar15;
  uint uVar16;
  ulonglong uVar17;
  CHMMModelSet *pCVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_res8;
  __uint64 local_res18;
  float local_res20 [2];
  uint local_74;
  CHMMModelSet *local_70;
  CHMMModelSet *local_68;
  CHMMGaussMixture *local_60;
  
  lVar4 = PredictNusDuration(this,param_1);
  local_70 = (CHMMModelSet *)0x0;
  if (-1 < lVar4) {
    lVar4 = CTTSAcousticSpace::FindModelSet
                      ((CAtlArray<CHMMModelSet*___ptr64,TTS::CElementTraits<CHMMModelSet*___ptr64>_>
                        *)(param_1 + 0x68),&local_70,*(HMM_MODEL_TYPE *)(this + 0x10),in_R9);
  }
  pCVar18 = local_70;
  local_68 = (CHMMModelSet *)0x0;
  if ((*(int *)(this + 0x54) != 0) && (-1 < lVar4)) {
    lVar4 = CTTSAcousticSpace::FindModelSet
                      ((CAtlArray<CHMMModelSet*___ptr64,TTS::CElementTraits<CHMMModelSet*___ptr64>_>
                        *)(param_1 + 0x68),&local_68,6,in_R9);
  }
  uVar2 = *(uint *)(param_1 + 0x94);
  local_74 = 0;
  if (-1 < lVar4) {
    local_74 = *(uint *)(pCVar18 + 0x30);
  }
  this_01 = (CTTSPhone *)0x0;
  fVar24 = 0.0;
  local_res8 = 0;
  if (((*(int *)(this + 0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x60), plVar3 != (longlong *)0x0)) && (plVar3[2] != 0)) {
    this_01 = *(CTTSPhone **)(*plVar3 + 0x10);
  }
  uVar17 = 0;
  do {
    uVar16 = (uint)uVar17;
    if (lVar4 < 0) {
      return lVar4;
    }
    if (local_74 <= uVar16) {
      *(int *)(param_1 + 0x98) = local_res8;
      return lVar4;
    }
    uVar8 = *(ulong *)(this + 0x54);
    this_03 = *(CHMMModel **)(*(longlong *)(pCVar18 + 0x28) + uVar17 * 8);
    if (uVar8 == 0) {
      this_02 = (CHMMModel *)0x0;
    }
    else {
      this_02 = *(CHMMModel **)(*(longlong *)(local_68 + 0x28) + uVar17 * 8);
    }
    if ((this_03 == (CHMMModel *)0x0) || ((uVar8 != 0 && (this_02 == (CHMMModel *)0x0)))) {
      return -0x7ff8ffa9;
    }
    uVar5 = 0;
    puVar15 = (uint *)0x0;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
    puVar1 = (ulong *)(*(longlong *)(param_1 + 8) + 4);
    if (lVar11 != 0) {
      puVar15 = (uint *)(lVar11 + (ulonglong)(uVar16 * *puVar1) * 4);
    }
    if (*puVar15 == 0) {
      uVar12 = 0;
      pCVar14 = this_03;
      pCVar9 = CHMMModel::GetMixture(this_03,0,(ulong)this_03,uVar8);
      local_60 = pCVar9;
      if (uVar8 == 0) {
        this_00 = (CHMMGaussMixture *)0x0;
      }
      else {
        this_00 = CHMMModel::GetMixture(this_02,uVar12,(ulong)pCVar14,uVar8);
        this_03 = this_02;
      }
      if ((pCVar9 == (CHMMGaussMixture *)0x0) ||
         ((uVar8 != 0 && (this_00 == (CHMMGaussMixture *)0x0)))) {
        return -0x7fff0001;
      }
      fVar22 = 0.0;
      local_res18 = local_res18 & 0xffffffff00000000;
      fVar20 = 0.0;
      fVar21 = 0.0;
      if (uVar8 == 0) {
LAB_180011fb4:
        if (lVar4 < 0) goto LAB_180012145;
      }
      else {
        local_res20[0] = 0.0;
        lVar4 = CountDurationStatistic(pCVar9,(float *)&local_res18,local_res20);
        fVar20 = CHMMGaussMixture::GetRawMean(this_00,0);
        this_03 = (CHMMModel *)this_00;
        fVar21 = (float)local_res18;
        if (lVar4 < 0) goto LAB_180011fb4;
        fVar22 = ((fVar20 - (float)local_res18) * *(float *)(*(longlong *)(this + 0x30) + 0x4c)) /
                 local_res20[0];
      }
      for (uVar13 = 0; (uint)uVar13 < uVar2; uVar13 = (ulonglong)((uint)uVar13 + 1)) {
        fVar19 = *(float *)(*(longlong *)(*(longlong *)(local_60 + 0x18) + 8) + uVar13 * 4);
        lVar11 = *(longlong *)(local_60 + 0x20);
        if (lVar11 != 0) {
          fVar19 = fVar19 / *(float *)(*(longlong *)(lVar11 + 8) + uVar13 * 4);
        }
        if (fVar19 == 0.0) {
          fVar23 = 0.0;
        }
        else {
          fVar23 = fVar22 / *(float *)(*(longlong *)(lVar11 + 8) + uVar13 * 4);
        }
        this_03 = (CHMMModel *)0x1;
        uVar6 = (uint)(fVar23 + fVar19 + fVar24 + 0.5);
        if ((int)uVar6 < 2) {
          uVar6 = 1;
        }
        uVar5 = uVar5 + uVar6;
        puVar15[uVar13] = uVar6;
        fVar24 = fVar24 + ((fVar23 + fVar19) - (float)(int)uVar6);
      }
      if (1.0 < ABS(fVar24)) {
        if (*(int *)(this + 0x54) != 0) {
          fVar21 = (fVar20 - fVar21) * *(float *)(*(longlong *)(this + 0x30) + 0x4c) + fVar21;
        }
        uVar5 = ScaleToWantedDuration
                          ((CDurationPredictor *)this_03,uVar5,(int)(fVar21 + 0.5),puVar15,uVar2);
      }
      this_04 = this_01;
      iVar7 = CTTSPhone::IsShortPause(this_01);
      uVar6 = (-(uint)(iVar7 != 0) & 0x28) + 0x28;
      if (uVar6 < uVar5) {
        uVar5 = ScaleToWantedDuration((CDurationPredictor *)this_04,uVar5,uVar6,puVar15,uVar2);
      }
LAB_1800120c8:
      uVar8 = 100;
      if (((*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar17 * 8) != 0) &&
          (*(CTTSDomainHandlerList **)(this + 0x38) != (CTTSDomainHandlerList *)0x0)) &&
         (*(TTS_DOMAIN *)(*(longlong *)(param_1 + 0x88) + 0x70) != 0)) {
        local_res18 = 0;
        pIVar10 = CTTSDomainHandlerList::GetDomainHandler
                            (*(CTTSDomainHandlerList **)(this + 0x38),
                             *(TTS_DOMAIN *)(*(longlong *)(param_1 + 0x88) + 0x70),&local_res18);
        if ((pIVar10 != (ITTSDomainHandler *)0x0) &&
           (lVar11 = (**(code **)(*(longlong *)pIVar10 + 0x10))(pIVar10), lVar11 != 0)) {
          uVar8 = *(ulong *)(lVar11 + 0x28);
        }
      }
      uVar8 = ScaleDuration(this,this_01,uVar5,puVar15,uVar2,uVar8);
      local_res8 = local_res8 + uVar8;
    }
    else {
      uVar5 = CTTSMath::Sum<unsigned_int>(puVar15,*puVar1);
      fVar24 = 0.0;
      if (-1 < lVar4) goto LAB_1800120c8;
    }
LAB_180012145:
    if (this_01 != (CTTSPhone *)0x0) {
      this_01 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                          ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)this_01,0)
      ;
    }
    uVar17 = (ulonglong)(uVar16 + 1);
    pCVar18 = local_70;
  } while( true );
}

