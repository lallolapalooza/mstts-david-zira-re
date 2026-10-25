
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: virtual long __cdecl CDurationPredictor::Predict(class CTTSAcousticSpace *
   __ptr64)const __ptr64 */

long __thiscall CDurationPredictor::Predict(CDurationPredictor *this,CTTSAcousticSpace *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  CTTSDomainHandlerList *pCVar3;
  bool bVar4;
  undefined2 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  CHMMGaussMixture *this_00;
  CHMMGaussMixture *this_01;
  CHistogramEqualizationTable *this_02;
  undefined8 uVar9;
  ITTSDomainHandler *pIVar10;
  longlong lVar11;
  CTTSPhone *pCVar12;
  CTTSWord *pCVar13;
  CTTSWord *pCVar14;
  CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *pCVar15;
  uint uVar16;
  CDurationPredictor *pCVar17;
  ulong uVar18;
  CHMMModelSet *pCVar19;
  CTTSPhone *pCVar20;
  undefined4 uVar21;
  CHMMModel *this_03;
  ulong *puVar22;
  CTTSString *in_R9;
  ulong *puVar23;
  CHMMModel *this_04;
  CTTSString *pCVar24;
  CAtlArray<CHMMModelSet*___ptr64,TTS::CElementTraits<CHMMModelSet*___ptr64>_> *pCVar25;
  CHMMModelSet *pCVar26;
  uint uVar27;
  ulonglong uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  ulong local_res10 [2];
  float local_res18;
  uint local_res20;
  float local_128;
  float local_124;
  float local_120 [2];
  CTTSString *local_118;
  CHMMModelSet *local_110;
  CHMMModelSet *local_108;
  CTTSPhone *local_100;
  CTTSString local_f8 [32];
  CTTSString *local_d8;
  CTTSString local_d0 [32];
  CTTSString local_b0 [112];
  
  if (param_1 == (CTTSAcousticSpace *)0x0) {
    lVar6 = -0x7ff8ffa9;
  }
  else {
    pCVar17 = this;
    lVar6 = PredictNusDuration(this,param_1);
    if (-1 < lVar6) {
      lVar6 = PredictLUADuration(pCVar17,param_1);
    }
    local_110 = (CHMMModelSet *)0x0;
    pCVar25 = (CAtlArray<CHMMModelSet*___ptr64,TTS::CElementTraits<CHMMModelSet*___ptr64>_> *)
              (param_1 + 0x88);
    if (-1 < lVar6) {
      lVar6 = CTTSAcousticSpace::FindModelSet
                        (pCVar25,&local_110,*(HMM_MODEL_TYPE *)(this + 0x10),in_R9);
    }
    pCVar19 = local_110;
    local_108 = (CHMMModelSet *)0x0;
    if ((*(int *)(this + 0xac) != 0) && (-1 < lVar6)) {
      lVar6 = CTTSAcousticSpace::FindModelSet(pCVar25,&local_108,6,in_R9);
    }
    pCVar26 = local_108;
    local_124 = 0.0;
    local_res20 = *(uint *)(param_1 + 0xb4);
    if (-1 < lVar6) {
      local_124 = *(float *)(pCVar19 + 0x50);
    }
    fVar33 = 0.0;
    fVar34 = 0.0;
    pCVar20 = (CTTSPhone *)0x0;
    if (((*(int *)(this + 0xa8) != 0) &&
        (plVar2 = *(longlong **)(param_1 + 0x80), plVar2 != (longlong *)0x0)) && (plVar2[2] != 0)) {
      pCVar20 = *(CTTSPhone **)(*plVar2 + 0x10);
    }
    fVar35 = (float)*(uint *)(*(longlong *)(this + 0x78) + 0x2c) / 100.0;
    local_100 = pCVar20;
    CTTSString::CTTSString(local_d0,(CTTSString *)(*(longlong *)(param_1 + 0xa8) + 0x70));
    uVar28 = 0;
    while( true ) {
      uVar8 = (ulong)in_R9;
      local_res18 = (float)uVar28;
      if ((lVar6 < 0) || ((uint)local_124 <= (uint)local_res18)) break;
      this_03 = *(CHMMModel **)(*(longlong *)(pCVar19 + 0x48) + uVar28 * 8);
      iVar7 = *(int *)(this + 0xac);
      if (iVar7 == 0) {
        this_04 = (CHMMModel *)0x0;
      }
      else {
        this_04 = *(CHMMModel **)(*(longlong *)(pCVar26 + 0x48) + uVar28 * 8);
      }
      if ((this_03 == (CHMMModel *)0x0) || ((iVar7 != 0 && (this_04 == (CHMMModel *)0x0)))) {
        lVar6 = -0x7ff8ffa9;
        goto LAB_180069af5;
      }
      local_res10[0] = 0;
      local_118 = (CTTSString *)0x0;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      puVar22 = (ulong *)(*(longlong *)(param_1 + 8) + 4);
      if (lVar11 != 0) {
        local_118 = (CTTSString *)(lVar11 + (ulonglong)((int)local_res18 * *puVar22) * 4);
      }
      pCVar24 = local_118;
      if (*(int *)local_118 == 0) {
        uVar18 = 0;
        this_00 = CHMMModel::GetMixture(this_03,0,(ulong)this_03,uVar8);
        if (iVar7 == 0) {
          this_01 = (CHMMGaussMixture *)0x0;
        }
        else {
          this_01 = CHMMModel::GetMixture(this_04,uVar18,(ulong)this_03,uVar8);
        }
        if ((this_00 == (CHMMGaussMixture *)0x0) ||
           ((iVar7 != 0 && (this_01 == (CHMMGaussMixture *)0x0)))) {
          lVar6 = -0x7fff0001;
          goto LAB_180069af5;
        }
        local_120[0] = 0.0;
        local_128 = 0.0;
        lVar6 = CountDurationStatistic(this_00,local_120,&local_128);
        fVar32 = local_120[0];
        if (iVar7 == 0) {
          if (-1 < lVar6) goto LAB_18006953d;
        }
        else if (-1 < lVar6) {
          fVar29 = CHMMGaussMixture::GetRawMean(this_01,0);
          if (fVar29 <= (float)local_res20) {
            fVar29 = (float)local_res20;
          }
          fVar32 = (fVar29 - fVar32) * *(float *)(*(longlong *)(this + 0x78) + 0x7c) + fVar32;
LAB_18006953d:
          if (*(longlong *)(this + 0x98) != 0) {
            lVar6 = DumpPhoneDuration(this,pCVar20,fVar32);
          }
        }
        local_d8 = local_f8;
        CTTSString::CTTSString(local_f8,local_d0);
        uVar5 = (**(code **)(*(longlong *)(pCVar20 + 0x30) + 0x30))();
        pCVar17 = this;
        this_02 = CAcousticPredictorBase::GetHeqTable((CAcousticPredictorBase *)this,6,uVar5);
        if ((this_02 != (CHistogramEqualizationTable *)0x0) && (-1 < lVar6)) {
          pCVar17 = (CDurationPredictor *)pCVar20;
          iVar7 = CTTSPhone::IsShortPause(pCVar20);
          if (iVar7 == 0) {
            pCVar17 = (CDurationPredictor *)pCVar20;
            iVar7 = CTTSPhone::IsSilence(pCVar20);
            if (iVar7 == 0) {
              pCVar17 = (CDurationPredictor *)this_02;
              fVar29 = CHistogramEqualizationTable::Transform(this_02,fVar32);
              fVar32 = fVar29 * fVar35 + (1.0 - fVar35) * fVar32;
            }
          }
        }
        uVar27 = local_res20;
        fVar29 = 0.0;
        if (0.0 < local_128) {
          fVar29 = (fVar32 - local_120[0]) / local_128;
        }
        in_R9 = (CTTSString *)0x0;
        pCVar24 = local_118;
        if (-1 < lVar6) {
          for (; (uint)in_R9 < uVar27; in_R9 = (CTTSString *)(ulonglong)((int)in_R9 + 1)) {
            fVar30 = CHMMGaussMixture::GetRawMean(this_00,(uint)in_R9);
            if (fVar30 == 0.0) {
              fVar31 = 0.0;
            }
            else {
              fVar31 = fVar29 / *(float *)(*(longlong *)(*(longlong *)(this_00 + 0x20) + 8) +
                                          (longlong)in_R9 * 4);
            }
            uVar16 = (uint)(fVar31 + fVar30 + fVar34 + 0.5);
            pCVar17 = (CDurationPredictor *)(ulonglong)uVar16;
            if ((int)uVar16 < 2) {
              pCVar17 = (CDurationPredictor *)0x1;
            }
            iVar7 = (int)pCVar17;
            fVar34 = fVar34 + ((fVar31 + fVar30) - (float)iVar7);
            *(int *)(pCVar24 + (longlong)in_R9 * 4) = iVar7;
            local_res10[0] = local_res10[0] + iVar7;
          }
          if (1.0 < ABS(fVar34)) {
            in_R9 = pCVar24;
            lVar6 = ScaleToWantedDuration
                              (pCVar17,local_res10,(int)(fVar32 + 0.5),(ulong *)pCVar24,uVar27);
          }
        }
        if ((this_02 != (CHistogramEqualizationTable *)0x0) &&
           (*(int *)(*(longlong *)(this + 0x78) + 0x2c) != 0)) {
LAB_18006975e:
          uVar28 = (ulonglong)(uint)local_res18;
          goto LAB_180069765;
        }
        if (-1 < lVar6) {
          pCVar12 = (CTTSPhone *)CTTSPhone::GetWord(pCVar20);
          if ((((*(longlong *)(this + 0x80) == 0) ||
               (*(int *)(*(longlong *)(this + 0x80) + 0x6a4) == 0)) || (pCVar12 == (CTTSPhone *)0x0)
              ) || (iVar7 = (**(code **)(*(longlong *)pCVar12 + 0x68))(), iVar7 != 4)) {
            pCVar12 = pCVar20;
            iVar7 = CTTSPhone::IsShortPause(pCVar20);
            if (iVar7 == 0) {
              uVar16 = *(uint *)(*(longlong *)(this + 0x78) + 0x88);
            }
            else {
              uVar16 = 0x50;
            }
          }
          else {
            uVar16 = 0xa0;
          }
          if (uVar16 < local_res10[0]) {
            in_R9 = pCVar24;
            lVar6 = ScaleToWantedDuration
                              ((CDurationPredictor *)pCVar12,local_res10,uVar16,(ulong *)pCVar24,
                               uVar27);
            goto LAB_18006975e;
          }
          uVar28 = (ulonglong)(uint)local_res18;
          goto LAB_180069776;
        }
        fVar32 = local_res18;
      }
      else {
        local_res10[0] = CTTSMath::Sum<unsigned_long>((ulong *)local_118,*puVar22);
        fVar34 = 0.0;
LAB_180069765:
        fVar32 = (float)uVar28;
        if (-1 < lVar6) {
LAB_180069776:
          in_R9 = pCVar24;
          uVar21 = 100;
          if (*(longlong *)(*(longlong *)(param_1 + 0x40) + uVar28 * 8) != 0) {
            CTTSString::CTTSString(local_f8,(CTTSString *)(*(longlong *)(param_1 + 0xa8) + 0x70));
            pCVar3 = *(CTTSDomainHandlerList **)(this + 0x90);
            if ((pCVar3 != (CTTSDomainHandlerList *)0x0) &&
               (iVar7 = operator!=(local_f8,(ushort *)L"none"), iVar7 != 0)) {
              uVar9 = CTTSString::CTTSString(local_b0,local_f8);
              pIVar10 = CTTSDomainHandlerList::GetDomainHandler(pCVar3,uVar9);
              if ((pIVar10 != (ITTSDomainHandler *)0x0) &&
                 (lVar11 = (**(code **)(*(longlong *)pIVar10 + 0x10))(pIVar10), lVar11 != 0)) {
                uVar21 = *(undefined4 *)(lVar11 + 0xa0);
              }
            }
            CTTSString::~CTTSString(local_f8);
          }
          uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 200);
          uVar9 = CTTSString::CTTSString(local_b0,local_d0);
          lVar6 = ScaleDuration(this,pCVar20,local_res10,in_R9,local_res20,uVar21,uVar9,uVar1);
          fVar32 = (float)uVar28;
        }
      }
      if (pCVar20 != (CTTSPhone *)0x0) {
        pCVar20 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                            ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar20,
                             0);
      }
      uVar28 = (ulonglong)((int)fVar32 + 1);
      pCVar19 = local_110;
      pCVar26 = local_108;
    }
    fVar35 = 0.0;
    local_res18 = 0.0;
    bVar4 = false;
    fVar34 = 0.0;
    pCVar20 = local_100;
    while (local_128 = fVar34, -1 < lVar6) {
      if ((uint)local_124 <= (uint)fVar34) {
        *(float *)(param_1 + 0xb8) = fVar35;
        break;
      }
      if ((pCVar20 == (CTTSPhone *)0x0) || (*(int *)(*(longlong *)(pCVar20 + 0x78) + 0x14) < 1)) {
        bVar4 = false;
      }
      else {
        pCVar12 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                            ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar20,
                             0);
        if (pCVar12 == local_100) {
LAB_180069950:
          local_res10[0] = 0;
          uVar27 = 0;
          pCVar15 = (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar20;
          do {
            iVar7 = CTTSPhone::IsShortPause((CTTSPhone *)pCVar15);
            if ((iVar7 == 0) && (iVar7 = CTTSPhone::IsSilence((CTTSPhone *)pCVar15), iVar7 == 0)) {
              if ((*(int *)(*(longlong *)(pCVar15 + 0x78) + 0x14) !=
                   *(int *)(*(longlong *)(pCVar20 + 0x78) + 0x14)) ||
                 (pCVar13 = CTTSPhone::GetWord(pCVar20), pCVar13 == (CTTSWord *)0x0)) break;
              pCVar12 = (CTTSPhone *)pCVar15;
              pCVar13 = CTTSPhone::GetWord((CTTSPhone *)pCVar15);
              if (pCVar13 == (CTTSWord *)0x0) break;
              pCVar13 = CTTSPhone::GetWord(pCVar12);
              pCVar14 = CTTSPhone::GetWord(pCVar20);
              if (*(longlong *)(pCVar14 + 0x90) != *(longlong *)(pCVar13 + 0x90)) break;
              uVar8 = *(ulong *)(*(longlong *)(param_1 + 8) + 4);
              puVar22 = (ulong *)0x0;
              lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
              if (lVar11 != 0) {
                puVar22 = (ulong *)(lVar11 + (ulonglong)(uVar8 * (int)fVar34) * 4);
              }
              uVar8 = CTTSMath::Sum<unsigned_long>(puVar22,uVar8);
              uVar27 = uVar27 + uVar8;
            }
            pCVar15 = (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                      CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                                (pCVar15,0);
            fVar34 = (float)((int)fVar34 + 1);
          } while (pCVar15 != (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)0x0);
          local_res10[0] = uVar27;
          uVar8 = CalculateFrame(this,*(long *)(*(longlong *)(pCVar20 + 0x78) + 0x14));
          fVar33 = (float)uVar8 / (float)local_res10[0];
          bVar4 = true;
          fVar34 = local_128;
          fVar35 = local_res18;
        }
        else {
          pCVar12 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                              ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                               pCVar20,0);
          if (pCVar12 != (CTTSPhone *)0x0) {
            pCVar15 = (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar20;
            pCVar13 = CTTSPhone::GetWord(pCVar20);
            if (pCVar13 != (CTTSWord *)0x0) {
              pCVar12 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                                  (pCVar15,0);
              pCVar13 = CTTSPhone::GetWord(pCVar12);
              if (pCVar13 != (CTTSWord *)0x0) {
                pCVar12 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                                    ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                     pCVar20,0);
                pCVar13 = CTTSPhone::GetWord(pCVar12);
                pCVar14 = CTTSPhone::GetWord(pCVar20);
                if (*(longlong *)(pCVar14 + 0x90) != *(longlong *)(pCVar13 + 0x90))
                goto LAB_180069950;
              }
            }
          }
        }
      }
      puVar23 = (ulong *)0x0;
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
      puVar22 = (ulong *)(*(longlong *)(param_1 + 8) + 4);
      if (lVar11 != 0) {
        puVar23 = (ulong *)(lVar11 + (ulonglong)((int)fVar34 * *puVar22) * 4);
      }
      local_res10[0] = CTTSMath::Sum<unsigned_long>(puVar23,*puVar22);
      if (bVar4) {
        uVar27 = *(uint *)(*(longlong *)(this + 0x78) + 0x88);
        uVar16 = (uint)(longlong)((float)local_res10[0] * fVar33);
        if (uVar27 <= uVar16) {
          uVar16 = uVar27;
        }
        lVar6 = ScaleToWantedDuration
                          ((CDurationPredictor *)(ulonglong)uVar27,local_res10,uVar16,puVar23,
                           local_res20);
        if (-1 < lVar6) goto LAB_180069abc;
      }
      else {
LAB_180069abc:
        fVar35 = (float)((int)fVar35 + local_res10[0]);
        local_res18 = fVar35;
      }
      if (pCVar20 != (CTTSPhone *)0x0) {
        pCVar20 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                            ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar20,
                             0);
      }
      fVar34 = (float)((int)fVar34 + 1);
    }
LAB_180069af5:
    CTTSString::~CTTSString(local_d0);
  }
  return lVar6;
}

