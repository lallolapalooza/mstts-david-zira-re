
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CUnitSelector::GenerateSegmentList(struct WAVE_UNIT_COST_NODE const *
   __ptr64 * __ptr64,class CTTSUnitList const * __ptr64,class CTTSSegmentList * __ptr64) __ptr64 */

long __thiscall
CUnitSelector::GenerateSegmentList
          (CUnitSelector *this,WAVE_UNIT_COST_NODE **param_1,CTTSUnitList *param_2,
          CTTSSegmentList *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulonglong uVar6;
  CTTSUnit *pCVar7;
  CTTSSegment *pCVar8;
  longlong lVar9;
  __POSITION *p_Var10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ushort uVar14;
  short sVar15;
  ushort uVar16;
  __POSITION *p_Var17;
  int iVar18;
  ulonglong uVar19;
  __POSITION *p_Var20;
  bool bVar21;
  uint local_res10;
  uint local_res18;
  CTTSUnitList *in_stack_ffffffffffffff58;
  CTTSSegment *local_70 [6];
  
  lVar4 = 0;
  bVar3 = false;
  bVar21 = false;
  local_res18 = *(uint *)(this + 0x68) - 1;
  if (param_1[1] != (WAVE_UNIT_COST_NODE *)0x0) {
    local_res18 = *(uint *)(this + 0x68);
  }
  uVar6 = -(ulonglong)(param_1[1] != (WAVE_UNIT_COST_NODE *)0x0) & 0xfffffffffffffff8;
  lVar13 = uVar6 + 0x10;
  pCVar7 = CTTSUtteranceNodeList<CTTSUnit>::GetByIndex
                     ((CTTSUtteranceNodeList<CTTSUnit> *)param_2,(longlong)*(int *)(this + 0x4c));
  if ((pCVar7 != (CTTSUnit *)0x0) &&
     (pCVar8 = CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance>::GetNext
                         ((CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance> *)pCVar7,0),
     pCVar8 != (CTTSSegment *)0x0)) {
    bVar21 = *(int *)(pCVar8 + 0xe0) != *(int *)(pCVar7 + 0xe0);
  }
  if ((*(int *)(this + 0x48) == *(int *)(param_2 + 0x10)) || (bVar21)) {
    local_res18 = local_res18 + 1;
  }
  local_res10 = 0;
LAB_18006af14:
  if (local_res10 < local_res18) {
    puVar1 = *(undefined8 **)(this + 0x58);
    p_Var10 = (__POSITION *)puVar1[1];
    *(undefined8 *)(this + 0x58) = *puVar1;
    pCVar7 = (CTTSUnit *)puVar1[2];
    if (pCVar7 == (CTTSUnit *)0x0) {
      lVar4 = -0x7fffbffb;
    }
    else {
      pCVar8 = operator_new(0x78,&std::nothrow);
      if (pCVar8 != (CTTSSegment *)0x0) {
        *(undefined8 *)(pCVar8 + 8) = 0;
        *(undefined8 *)(pCVar8 + 0x10) = 0;
        *(undefined8 *)(pCVar8 + 0x18) = 0;
        *(undefined8 *)(pCVar8 + 0x20) = 0;
        *(undefined8 *)(pCVar8 + 0x28) = 0;
        *(undefined ***)pCVar8 = CTTSSegment::_vftable_;
        *(undefined8 *)(pCVar8 + 0x30) = 0;
        *(undefined8 *)(pCVar8 + 0x38) = 0x3f800000;
        *(undefined4 *)(pCVar8 + 0x40) = 0;
        *(undefined8 *)(pCVar8 + 0x44) = 0x3f800000;
        *(undefined8 *)(pCVar8 + 0x4c) = 0;
        *(undefined8 *)(pCVar8 + 0x58) = 0;
        *(undefined2 *)(pCVar8 + 0x60) = 0;
        *(undefined8 *)(pCVar8 + 0x70) = 0;
        if (pCVar8 == (CTTSSegment *)0x0) goto LAB_18006b37e;
        *(CTTSUnit **)(pCVar8 + 0x10) = pCVar7;
        *(CTTSUnit **)(pCVar8 + 0x18) = pCVar7;
        local_70[0] = pCVar8;
        if (*(int *)(pCVar7 + 0xe0) == 0) {
          if ((*(int *)(pCVar7 + 0xb0) == 1) && (local_res10 == local_res18 - 1)) {
            local_res18 = local_res18 + 1;
            bVar3 = true;
          }
          lVar12 = *(longlong *)(this + 0x78);
          lVar4 = 0;
          uVar16 = *(ushort *)(pCVar7 + 0xae);
          iVar18 = *(int *)(lVar12 + 0xe8);
          *(undefined4 *)(pCVar8 + 0x40) = 0;
          *(undefined2 *)(pCVar8 + 0x48) = 0;
          pCVar8[0x4b] = (CTTSSegment)0x1;
          *(uint *)(pCVar8 + 0x30) = (uint)uVar16 * iVar18;
          *(undefined2 *)(pCVar8 + 0x60) = *(undefined2 *)(lVar12 + 0xe8);
          goto LAB_18006b2e6;
        }
        if (*(short *)(pCVar7 + 0xac) == -1) {
          lVar4 = FillSilenceSegmentInfo(this,pCVar8,pCVar7);
          if (-1 < lVar4) goto LAB_18006b2e6;
        }
        else {
          iVar18 = local_res10 - 1;
          lVar4 = FillSegmentInfo(this,pCVar8,
                                  (WAVE_UNIT_COST_NODE **)((longlong)param_1 + uVar6 + 8),
                                  local_res10 + 1,in_stack_ffffffffffffff58,
                                  *(__POSITION **)(this + 0x58),p_Var10);
          uVar19 = 0;
          while (-1 < lVar4) {
            if (*(ulonglong *)(this + 0x30) <= uVar19) {
              if ((*(int *)(pCVar7 + 0xb0) != 0) && (*(int *)(pCVar7 + 0xb0) != 3))
              goto LAB_18006b2e6;
              lVar12 = *(longlong *)((longlong)param_1 + (ulonglong)local_res10 * 8 + lVar13);
              if ((*(int *)(lVar12 + 0xfc) != 0) ||
                 ((*(float *)(lVar12 + 0xb8) < *(float *)(this + 0x1ac) ||
                   *(float *)(lVar12 + 0xb8) == *(float *)(this + 0x1ac) &&
                  (ABS((float)*(ushort *)(lVar12 + 0x12) - (float)*(ushort *)(pCVar7 + 0xdc)) <=
                   *(float *)(this + 0x1b0))))) goto LAB_18006b2e6;
              lVar5 = CTTSOutput::CalculateRateHighRes
                                ((float)*(ushort *)(lVar12 + 0x12) /
                                 (float)*(ushort *)(pCVar7 + 0xdc));
              *(long *)(pCVar7 + 0x40) = lVar5;
              *(undefined2 *)(pCVar7 + 0x44) =
                   *(undefined2 *)
                    (*(longlong *)((longlong)param_1 + (ulonglong)local_res10 * 8 + lVar13) + 0x12);
              local_70[0] = *(CTTSSegment **)
                             ((longlong)param_1 + (ulonglong)local_res10 * 8 + lVar13);
              uVar16 = *(ushort *)(local_70[0] + 0x12);
              if (p_Var10 == (__POSITION *)0x0) goto LAB_18006b2e6;
              lVar12 = (longlong)iVar18 * 8;
              p_Var20 = p_Var10;
              uVar14 = *(ushort *)(pCVar7 + 0xdc);
              goto LAB_18006b1d0;
            }
            lVar4 = FillSegmentInfo(*(CUnitSelector **)(*(longlong *)(this + 0x28) + uVar19 * 8),
                                    pCVar8,(WAVE_UNIT_COST_NODE **)((longlong)param_1 + uVar6 + 8),
                                    local_res10 + 1,in_stack_ffffffffffffff58,
                                    *(__POSITION **)(this + 0x58),p_Var10);
            uVar19 = uVar19 + 1;
          }
        }
        goto LAB_18006b0b1;
      }
LAB_18006b37e:
      lVar4 = -0x7ff8fff2;
    }
  }
  goto LAB_18006b390;
LAB_18006b1d0:
  p_Var17 = p_Var10;
  if (iVar18 < 0) goto LAB_18006b241;
  lVar9 = *(longlong *)(p_Var17 + 0x10);
  p_Var20 = p_Var17;
  if (((lVar5 * *(int *)(lVar9 + 0x40) < 1) || (0x6df < (uint)*(ushort *)(lVar9 + 0x44) * 0x50)) ||
     (lVar2 = *(longlong *)((longlong)param_1 + lVar12 + lVar13),
     0.25 <= ABS(*(float *)(local_70[0] + 0xb8) - *(float *)(lVar2 + 0xb8)))) goto LAB_18006b241;
  uVar14 = uVar14 + *(short *)(lVar9 + 0xdc);
  iVar18 = iVar18 + -1;
  uVar16 = uVar16 + *(short *)(lVar2 + 0x12);
  lVar12 = lVar12 + -8;
  p_Var10 = *(__POSITION **)(p_Var17 + 8);
  if (*(__POSITION **)(p_Var17 + 8) == (__POSITION *)0x0) goto LAB_18006b241;
  goto LAB_18006b1d0;
LAB_18006b241:
  if (*(ushort *)(pCVar7 + 0xdc) < uVar14) {
    lVar5 = CTTSOutput::CalculateRateHighRes((float)uVar16 / (float)uVar14);
    if (-1 < iVar18) {
      p_Var20 = *(__POSITION **)p_Var20;
    }
    iVar18 = iVar18 + 1;
    sVar15 = 0;
    if (iVar18 <= (int)local_res10) {
      uVar19 = (ulonglong)((local_res10 - iVar18) + 1);
      lVar12 = (longlong)iVar18 * 8;
      do {
        lVar9 = *(longlong *)(p_Var20 + 0x10);
        p_Var20 = *(__POSITION **)p_Var20;
        *(long *)(lVar9 + 0x40) = lVar5;
        lVar2 = lVar12 + lVar13;
        lVar12 = lVar12 + 8;
        sVar15 = sVar15 + *(short *)(*(longlong *)((longlong)param_1 + lVar2) + 0x12);
        *(short *)(lVar9 + 0x44) = sVar15;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
LAB_18006b2e6:
  *(undefined2 *)(pCVar8 + 0x68) = *(undefined2 *)(pCVar7 + 0xdc);
  *(undefined4 *)(pCVar8 + 100) = *(undefined4 *)(pCVar7 + 0xd8);
  if ((*(int *)(pCVar8 + 0x30) == 0) && (*(int *)(pCVar7 + 0xe0) != 0)) {
    lVar12 = 0;
    if (*(longlong *)(param_3 + 0x10) != 0) {
      lVar12 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
    }
    lVar9 = 0;
    uVar11 = *(uint *)(lVar12 + 0x30) >> 1;
    *(uint *)(pCVar8 + 0x30) = uVar11;
    if (*(longlong *)(param_3 + 0x10) != 0) {
      lVar9 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
    }
    *(uint *)(lVar9 + 0x30) = uVar11;
  }
  local_70[0] = pCVar8;
  p_Var10 = TTS::
            CAtlList<CTTSIntonationPhrase*___ptr64,TTS::CElementTraits<CTTSIntonationPhrase*___ptr64>_>
            ::AddTail((CAtlList<CTTSIntonationPhrase*___ptr64,TTS::CElementTraits<CTTSIntonationPhrase*___ptr64>_>
                       *)param_3,(CTTSIntonationPhrase **)local_70);
  if (p_Var10 == (__POSITION *)0x0) {
    lVar4 = -0x7ff8fff2;
  }
  else {
    *(CTTSSegmentList **)(pCVar8 + 0x20) = param_3;
    *(__POSITION **)(pCVar8 + 0x28) = p_Var10;
    if (-1 < lVar4) goto LAB_18006b0cc;
  }
LAB_18006b0b1:
  (*(code *)**(undefined8 **)pCVar8)(pCVar8);
LAB_18006b0cc:
  local_res10 = local_res10 + 1;
  if (lVar4 < 0) {
LAB_18006b390:
    if ((bVar21) || (bVar3)) {
      lVar13 = 0;
      do {
        *(undefined8 *)(lVar13 + *(longlong *)(this + 0x60)) = 0;
        lVar13 = lVar13 + 8;
      } while (lVar13 < 0x10);
    }
    else {
      **(undefined8 **)(this + 0x60) = (*(undefined8 **)(this + 0x60))[*(int *)(this + 0x68)];
      *(undefined8 *)(*(longlong *)(this + 0x60) + 8) =
           *(undefined8 *)(*(longlong *)(this + 0x60) + 8 + (longlong)*(int *)(this + 0x68) * 8);
    }
    return lVar4;
  }
  goto LAB_18006af14;
}

