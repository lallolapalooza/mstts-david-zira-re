
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CAcousticProsodyTagger::AdjustPitch<int>(class CMemoryMatrix<unsigned long>
   const & __ptr64,class CTTSPhone const * __ptr64,class CMemoryMatrix<int> * __ptr64,class
   CTTSUtterance * __ptr64)const __ptr64 */

long __thiscall
CAcousticProsodyTagger::AdjustPitch<int>
          (CAcousticProsodyTagger *this,CMemoryMatrix<unsigned_long> *param_1,CTTSPhone *param_2,
          CMemoryMatrix<int> *param_3,CTTSUtterance *param_4)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  longlong *plVar12;
  ulong *puVar13;
  CTTSWord *pCVar14;
  undefined8 uVar15;
  CAcousticProsodyTagger *pCVar16;
  int iVar17;
  undefined8 *puVar18;
  CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *this_00;
  ulonglong uVar19;
  TTSCONTOURPOINT *pTVar20;
  uint uVar21;
  longlong lVar22;
  TTSCONTOURPOINT *pTVar23;
  float fVar24;
  float fVar25;
  CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *local_res18;
  longlong local_res20;
  uint local_e8;
  uint local_d8;
  long local_c8;
  uint local_c4;
  longlong local_c0;
  CAcousticProsodyTagger *local_b8;
  uint local_b0;
  ulong local_ac;
  ulong local_a8;
  uint local_a4;
  longlong local_a0;
  TTSCONTOURPOINT *local_98;
  CTTSString *local_90;
  CTTSPhone *local_88;
  CTTSString local_80 [72];
  
  if (param_3 == (CMemoryMatrix<int> *)0x0) {
    return -0x7ff8ffa9;
  }
  lVar10 = 0;
  local_b0 = *(uint *)param_1;
  local_ac = *(ulong *)(param_1 + 4);
  uVar2 = *(uint *)param_3;
  local_b8 = *(CAcousticProsodyTagger **)(param_3 + 8);
  pTVar23 = (TTSCONTOURPOINT *)0x0;
  local_a0 = 0;
  uVar21 = 0;
  uVar11 = 0;
  local_e8 = 0;
  local_88 = param_2;
  plVar12 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
  local_c0 = 0;
  if (plVar12 == (longlong *)0x0) {
LAB_1800a0a85:
    bVar4 = false;
    bVar7 = false;
    bVar5 = false;
    if (-1 < lVar10) goto LAB_1800a0a96;
LAB_1800a0b0c:
    bVar6 = false;
    local_res20._0_4_ = 100;
    if (lVar10 < 0) goto LAB_1800a0b29;
  }
  else {
    local_res20 = 0;
    lVar10 = (**(code **)(*plVar12 + 0x28))(plVar12,L"Psola",L"Enable",&local_res20);
    local_c0 = 0;
    if ((lVar10 < 0) || (local_c0 = 0, local_res20 == 0)) goto LAB_1800a0a85;
    local_c0 = 0;
    iVar9 = _o__wcsicmp();
    if (iVar9 != 0) goto LAB_1800a0a85;
    local_c0 = 1;
LAB_1800a0a96:
    bVar5 = false;
    bVar7 = false;
    bVar4 = false;
    if (*(int *)(*(longlong *)(this + 0xa0) + 0x4c) == 1) {
      bVar5 = true;
      puVar18 = *(undefined8 **)(param_4 + 0xe8);
      uVar19 = 0;
      while ((uVar19 < *(ulonglong *)(param_4 + 0xf8) && (puVar18 != (undefined8 *)0x0))) {
        plVar12 = puVar18 + 2;
        puVar18 = (undefined8 *)*puVar18;
        if (*(int *)(*plVar12 + 0xe0) == 0) {
          bVar4 = true;
          bVar7 = true;
          bVar5 = false;
          goto LAB_1800a0aef;
        }
        uVar19 = uVar19 + 1;
      }
      bVar4 = false;
    }
LAB_1800a0aef:
    if (*(longlong *)(param_4 + 0x128) == 0) goto LAB_1800a0b0c;
    bVar6 = true;
  }
  local_res20._0_4_ = 100;
  if (*(longlong *)(param_4 + 0xc0) != 0) {
    local_res20._0_4_ = *(int *)(*(longlong *)(param_4 + 0xc0) + 8);
  }
LAB_1800a0b29:
  if ((!bVar4) ||
     ((*(int *)(*(longlong *)(this + 0xa0) + 0x14) == 100 &&
      (*(int *)(*(longlong *)(this + 0xa0) + 0x18) == 100)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_d8 = 0;
  local_res18 = (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)param_2;
  if (-1 < lVar10) {
LAB_1800a0b5c:
    do {
      if (local_b0 <= local_d8) {
LAB_1800a0ee8:
        if (uVar11 != uVar2) {
          lVar10 = -0x7fff0001;
        }
        break;
      }
      if (local_res18 == (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)0x0) {
        if (-1 < lVar10) goto LAB_1800a0ee8;
        break;
      }
      puVar13 = (ulong *)0x0;
      if (*(longlong *)(param_1 + 8) != 0) {
        puVar13 = (ulong *)(*(longlong *)(param_1 + 8) +
                           (ulonglong)(local_d8 * *(int *)(param_1 + 4)) * 4);
      }
      local_a8 = CTTSMath::Sum<unsigned_long>(puVar13,local_ac);
      local_c4 = local_a8 + uVar11;
      if (uVar2 < local_c4) {
        lVar10 = -0x7fff0001;
        break;
      }
      this_00 = local_res18;
      pCVar14 = CTTSPhone::GetWord((CTTSPhone *)local_res18);
      if (pCVar14 == (CTTSWord *)0x0) {
        local_a0 = 0;
      }
      else {
        pCVar14 = CTTSPhone::GetWord((CTTSPhone *)this_00);
        (**(code **)(*(longlong *)pCVar14 + 0x110))(pCVar14,&local_a0);
      }
      if (((local_a0 == 0) || (*(longlong *)(local_a0 + 0x28) == 0)) ||
         (pTVar20 = *(TTSCONTOURPOINT **)(*(longlong *)(local_a0 + 0x28) + 0x48),
         pTVar20 == (TTSCONTOURPOINT *)0x0)) {
        pTVar20 = (TTSCONTOURPOINT *)0x0;
      }
      if (pTVar23 == (TTSCONTOURPOINT *)0x0) {
LAB_1800a0c21:
        pTVar23 = pTVar20;
        uVar21 = uVar11;
      }
      else if (pTVar20 != pTVar23) {
        lVar10 = ApplyF0MultiplierContour<int>
                           (local_b8,(int *)(local_b8 + (ulonglong)uVar21 * 4),uVar11 - uVar21,
                            pTVar23);
        goto LAB_1800a0c21;
      }
      local_a4 = uVar21;
      local_98 = pTVar23;
      if (-1 < lVar10) {
        if ((local_c4 == uVar2) && (pTVar20 != (TTSCONTOURPOINT *)0x0)) {
          lVar10 = ApplyF0MultiplierContour<int>
                             (local_b8,(int *)(local_b8 + (ulonglong)uVar21 * 4),uVar2 - uVar21,
                              pTVar23);
          if (lVar10 < 0) goto LAB_1800a0e9c;
        }
        lVar22 = *(longlong *)(this + 0xa0);
        local_90 = local_80;
        uVar15 = CTTSString::CTTSString(local_80,(CTTSString *)(param_4 + 0x70));
        uVar8 = (**(code **)(*(longlong *)(local_res18 + 0x30) + 0x30))();
        pCVar16 = CTtsExtraModuleContainer<CAcousticProsodyTagger>::GetExtraModule
                            ((CTtsExtraModuleContainer<CAcousticProsodyTagger> *)(this + 0x10),uVar8
                             ,uVar15);
        if (pCVar16 != (CAcousticProsodyTagger *)0x0) {
          if (*(longlong *)(pCVar16 + 0xa0) != 0) {
            lVar22 = *(longlong *)(pCVar16 + 0xa0);
          }
        }
        lVar3 = *(longlong *)(this + 0x9b0);
        lVar10 = CTTSOutput::CheckPitchChange((CTTSOutput *)(lVar3 + 0x250));
        dVar1 = *(double *)(lVar3 + 0x278);
        local_c8 = 0;
        if (-1 < lVar10) {
          if (dVar1 == 1.0) {
            plVar12 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
            if (plVar12 == (longlong *)0x0) {
              lVar10 = -0x7fff0001;
              break;
            }
            lVar10 = (**(code **)(*plVar12 + 0x10))(plVar12,L"MSTTS.Pitch",&local_c8);
            if (lVar10 < 0) goto LAB_1800a0e97;
          }
          iVar9 = (int)local_res20;
          if (((!bVar5) || (local_c0 == 0)) &&
             ((local_c8 != 0 ||
              ((((dVar1 != 1.0 || (*(int *)(*(longlong *)(local_res18 + 0x78) + 8) != 0)) ||
                (*(int *)(lVar22 + 0x10) != 100)) || ((bVar4 || ((int)local_res20 != 100)))))))) {
            fVar24 = CTTSOutput::CalculateMSTTSPitchScale(local_c8);
            fVar25 = (float)_o_powf(0x40000000);
            fVar24 = fVar24 * fVar25 * (float)dVar1;
            iVar17 = *(int *)(lVar22 + 0x10);
            if (bVar4) {
              if (bVar6) {
                if (*(int *)(*(longlong *)(this + 0xa0) + 0x18) != 100) {
                  iVar17 = iVar17 + -100 + *(int *)(lVar22 + 0x18);
                }
              }
              else if (*(int *)(*(longlong *)(this + 0xa0) + 0x14) != 100) {
                iVar17 = iVar17 + -100 + *(int *)(lVar22 + 0x14);
              }
            }
            uVar11 = iVar17 + -100 + iVar9;
            if (uVar11 != 100) {
              fVar24 = ((float)uVar11 * fVar24) / 100.0;
            }
            lVar10 = CTTSOutput::AdjustPitchLevel<int>
                               ((int *)(local_b8 + (ulonglong)local_e8 * 4),local_a8,fVar24);
          }
          pTVar23 = local_98;
          uVar21 = local_a4;
          uVar11 = local_c4;
          if (-1 < lVar10) {
            local_e8 = local_c4;
            local_res18 = (CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                          CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                                    (local_res18,0);
            local_d8 = local_d8 + 1;
            goto LAB_1800a0b5c;
          }
        }
LAB_1800a0e97:
        uVar11 = local_e8;
      }
LAB_1800a0e9c:
      local_d8 = local_d8 + 1;
    } while (-1 < lVar10);
  }
  lVar22 = *(longlong *)(this + 0xa0);
  uVar11 = *(uint *)(lVar22 + 0x34);
  if ((-1 < lVar10) && (bVar7)) {
    if (bVar6) {
      iVar9 = *(int *)(lVar22 + 0x3c);
    }
    else {
      iVar9 = *(int *)(lVar22 + 0x38);
    }
    if (iVar9 != 100) {
      uVar11 = (uVar11 - 100) + iVar9;
    }
  }
  if (*(longlong *)(param_4 + 0xc0) != 0) {
    uVar11 = uVar11 + *(int *)(*(longlong *)(param_4 + 0xc0) + 0xc) + -100;
  }
  if (-1 < lVar10) {
    fVar24 = 1.0;
    if ((local_88 != (CTTSPhone *)0x0) && (*(float *)(*(longlong *)(local_88 + 0x78) + 0xc) != 0.0))
    {
      fVar24 = *(float *)(*(longlong *)(local_88 + 0x78) + 0xc);
    }
    if ((fVar24 != 1.0) || (uVar11 != 100)) {
      lVar10 = CTTSOutput::ScalePitchRange<int>
                         ((int *)local_b8,uVar2,((float)uVar11 / 100.0) * fVar24);
    }
  }
  return lVar10;
}

