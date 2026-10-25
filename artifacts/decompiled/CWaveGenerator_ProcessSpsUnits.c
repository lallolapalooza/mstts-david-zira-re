
/* private: long __cdecl CWaveGenerator::ProcessSpsUnits(void) __ptr64 */

long __thiscall CWaveGenerator::ProcessSpsUnits(CWaveGenerator *this)

{
  CTTSPhone *pCVar1;
  int iVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  long lVar6;
  CTTSUtteranceNodeList<CTTSPhone> *pCVar7;
  CTTSUtterance *pCVar8;
  longlong lVar9;
  CTTSSegment *pCVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  CSpsVocoder *pCVar22;
  CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance> *this_00;
  uint uVar23;
  int iVar24;
  longlong *plVar25;
  ulong uVar26;
  CTTSUtterance *pCVar27;
  CTTSUtterance *pCVar28;
  bool bVar29;
  CTTSUtterance *local_res10;
  undefined8 *local_res18;
  longlong local_res20;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  CTTSUtterance *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  CTTSUtterance *local_90;
  CTTSUtterance *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  pCVar8 = *(CTTSUtterance **)(this + 0xd0);
  if (pCVar8 == (CTTSUtterance *)0x0) {
    lVar6 = -0x7ffb7fef;
  }
  else if ((pCVar8 == (CTTSUtterance *)0xffffffffffffff18) ||
          (pCVar8 + 0x720 == (CTTSUtterance *)0x0)) {
    lVar6 = -0x7ff8ffa9;
  }
  else {
    lVar6 = 0;
    puVar18 = *(undefined8 **)(this + 0x70);
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = *(undefined8 **)(this + 0x58);
      if (puVar18 == (undefined8 *)0x0) {
        puVar18 = *(undefined8 **)(pCVar8 + 0x720);
        *(undefined8 **)(this + 0x58) = puVar18;
      }
      *(undefined8 **)(this + 0x68) = puVar18;
    }
    else {
      *(undefined8 **)(this + 0x68) = puVar18;
      puVar18 = (undefined8 *)*puVar18;
      *(undefined8 **)(this + 0x68) = puVar18;
      if (*(longlong *)(this + 0x58) == 0) {
        *(undefined8 **)(this + 0x58) = puVar18;
      }
    }
    local_res10 = *(CTTSUtterance **)(this + 0x60);
    if ((((local_res10 != (CTTSUtterance *)0x0) &&
         (lVar9 = *(longlong *)(local_res10 + 0x10), lVar9 != 0)) && (*(int *)(lVar9 + 0xe0) == 0))
       && (puVar18 != (undefined8 *)0x0)) {
      uVar13 = 0;
      local_res20 = lVar9;
      local_c8 = local_res10;
      pCVar7 = CTTSUtterance::GetPhoneList(pCVar8);
      if (*(longlong *)(lVar9 + 0x10) != 0) {
        uVar14 = 0;
        lVar17 = 0;
        if (*(longlong *)(pCVar7 + 0x10) != 0) {
          lVar17 = *(longlong *)(*(longlong *)pCVar7 + 0x10);
        }
        while (lVar17 != 0) {
          if (*(longlong *)(lVar9 + 0x10) == lVar17) {
            uVar13 = (ulonglong)uVar14;
            break;
          }
          lVar11 = 0;
          if ((*(longlong *)(lVar17 + 0x20) != 0) && (**(longlong **)(lVar17 + 0x28) != 0)) {
            lVar11 = *(longlong *)(**(longlong **)(lVar17 + 0x28) + 0x10);
          }
          uVar14 = uVar14 + 1;
          lVar17 = lVar11;
        }
      }
      iVar24 = 1;
      bVar3 = false;
      uVar14 = 1;
      iVar2 = (int)uVar13;
      uVar23 = iVar2 + 1;
      plVar21 = (longlong *)0x0;
      puVar19 = puVar18;
      while( true ) {
        pCVar8 = local_res10;
        if ((local_res10 == (CTTSUtterance *)0x0) || (puVar19 == (undefined8 *)0x0))
        goto LAB_180032329;
        puVar19 = (undefined8 *)*puVar19;
        pCVar8 = local_res10 + 0x10;
        local_res10 = *(CTTSUtterance **)local_res10;
        plVar25 = *(longlong **)(*(longlong *)pCVar8 + 0x10);
        uVar14 = (uint)(*(int *)(*(longlong *)pCVar8 + 0xe0) == 0);
        if (plVar25 == plVar21) {
          uVar14 = 1;
        }
        local_res18 = puVar19;
        if ((*(int *)(this + 0x214) != 0) && (plVar25 != plVar21)) break;
LAB_1800326ae:
        pCVar8 = local_res10;
        if (uVar14 == 0) goto LAB_18003273a;
        *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x68);
        *(undefined8 **)(this + 0x68) = puVar19;
        *(CTTSUtterance **)(this + 0x60) = local_res10;
        *(undefined8 **)(this + 0x58) = puVar19;
        *(CTTSUtterance **)(this + 0x50) = local_res10;
        plVar21 = plVar25;
      }
      if (uVar14 == 0) {
LAB_180032661:
        pCVar8 = *(CTTSUtterance **)(this + 0x200);
        if ((pCVar8 != (CTTSUtterance *)0x0) && (uVar14 == 0)) {
          pCVar22 = *(CSpsVocoder **)(this + 0x150);
          uVar5 = (*(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0)) - 1;
          if (*(int *)(pCVar22 + 0x10c) == 0) {
            uVar5 = *(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0);
          }
          if (uVar5 < uVar23 + 1) goto LAB_1800326e1;
        }
        iVar24 = iVar24 + 1;
        uVar23 = uVar23 + 1;
        goto LAB_1800326ae;
      }
      pCVar22 = *(CSpsVocoder **)(this + 0x150);
      uVar5 = (*(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0)) - 1;
      if (*(int *)(pCVar22 + 0x10c) == 0) {
        uVar5 = *(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0);
      }
      if (uVar23 <= uVar5) goto LAB_180032661;
      pCVar8 = *(CTTSUtterance **)(this + 0x200);
LAB_1800326e1:
      bVar3 = true;
      if ((pCVar8 != (CTTSUtterance *)0x0) && (uVar14 == 0)) {
        iVar15 = *(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0) + -1;
        if (*(int *)(pCVar22 + 0x10c) == 0) {
          iVar15 = *(int *)(pCVar22 + 0xd4) + *(int *)(pCVar22 + 0xd0);
        }
        pCVar8 = (CTTSUtterance *)(ulonglong)(iVar15 + 1U);
        if (iVar24 + iVar2 == iVar15 + 1U) {
          pCVar8 = *(CTTSUtterance **)(this + 0xd0);
          CSpsVocoder::StartNextSegPrediction(pCVar22,pCVar8);
LAB_18003273a:
          bVar3 = false;
        }
      }
LAB_180032329:
      plVar25 = (longlong *)0x0;
      iVar15 = (int)pCVar8;
      iVar24 = 0;
      if (plVar21 != (longlong *)0x0) {
        this_00 = (CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance> *)plVar21[0x1b];
        if ((this_00 != (CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance> *)0x0) &&
           (pCVar10 = CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance>::GetNext
                                (this_00,iVar15), pCVar10 != (CTTSSegment *)0x0)) {
          pCVar10 = CTTSUtteranceNodeBase<CTTSUnit,CTTSSegment,CTTSUtterance>::GetNext
                              (this_00,iVar15);
          if (*(uint *)(pCVar10 + 0xe0) != (uint)plVar25) {
            uVar14 = (uint)plVar25;
          }
        }
        uVar16 = (ulonglong)plVar25 & 0xffffffff;
        iVar24 = (int)plVar25;
        if (plVar25 < *(longlong **)(pCVar7 + 0x10)) {
          plVar4 = *(longlong **)(*(longlong *)pCVar7 + 0x10);
          while ((iVar24 = (int)plVar25, plVar4 != (longlong *)0x0 &&
                 (iVar24 = (int)uVar16, plVar21 != plVar4))) {
            plVar12 = plVar25;
            if (((longlong *)plVar4[4] != plVar25) && (*(longlong *)plVar4[5] != 0)) {
              plVar12 = *(longlong **)(*(longlong *)plVar4[5] + 0x10);
            }
            uVar16 = (ulonglong)(iVar24 + 1);
            plVar4 = plVar12;
          }
        }
      }
      uVar26 = iVar24 + (1 - iVar2);
      if ((uVar13 < *(ulonglong *)(pCVar7 + 0x10)) &&
         (plVar21 = *(longlong **)pCVar7, plVar21 != (longlong *)0x0)) {
        if (iVar2 != 0) {
          do {
            plVar21 = (longlong *)*plVar21;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
      }
      else {
        plVar21 = plVar25;
      }
      local_res10 = (CTTSUtterance *)CONCAT44(local_res10._4_4_,(int)plVar25);
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      pCVar22 = *(CSpsVocoder **)(this + 0x150);
      local_res18 = *(undefined8 **)(this + 0x200);
      pCVar1 = *(CTTSPhone **)(local_res20 + 0x10);
      if ((*(longlong *)(this + 0xd0) == 0) ||
         (pCVar8 = (CTTSUtterance *)
                   __RTDynamicCast(*(longlong *)(this + 0xd0),0,
                                   &struct_ITTSUtterance__RTTI_Type_Descriptor_,
                                   &class_CTTSUtterance__RTTI_Type_Descriptor_,(int)plVar25),
         pCVar8 == (CTTSUtterance *)0x0)) {
        lVar6 = -0x7ff8ffa9;
      }
      else {
        *(uint *)(pCVar22 + 0xe8) = uVar14;
        *(undefined8 **)(pCVar22 + 0x30) = local_res18;
        if (*(int *)(pCVar22 + 0x38) == 0) {
          lVar6 = CSpsVocoder::StartSegSynthesis<float>(pCVar22,pCVar8,pCVar1,uVar26);
        }
        else {
          lVar6 = CSpsVocoder::StartSegSynthesis<int>(pCVar22,pCVar8,pCVar1,uVar26);
        }
        if (-1 < lVar6) {
          pCVar8 = local_c8;
          do {
            if (*(int *)(this + 0x20) == 2) goto LAB_1800324e9;
            pCVar22 = *(CSpsVocoder **)(this + 0x150);
            *(ulonglong **)(pCVar22 + 0xb8) = &local_e8;
            if (*(int *)(pCVar22 + 0x38) == 0) {
              lVar6 = CSpsVocoder::Synthesize<float>(pCVar22);
            }
            else {
              lVar6 = CSpsVocoder::Synthesize<int>(pCVar22);
            }
            bVar29 = lVar6 < 0;
            if (lVar6 != 0) break;
            local_98 = (undefined8 *)0x0;
            local_88 = (CTTSUtterance *)0x0;
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0;
            local_68 = 0;
            uStack_60 = 0;
            local_58 = 10;
            local_b8 = *(undefined8 *)(this + 0xd0);
            local_b0 = uStack_e0;
            local_a8 = (undefined4)local_d8;
            lVar9 = 0;
            uVar13 = local_e8 & 0xffffffff;
            if ((int)local_e8 != 0) {
              do {
                lVar9 = plVar21[2];
                plVar21 = (longlong *)*plVar21;
                uVar13 = uVar13 - 1;
              } while (uVar13 != 0);
            }
            lVar17 = 0;
            if ((*(longlong *)(lVar9 + 0x20) != 0) && (**(longlong **)(lVar9 + 0x28) != 0)) {
              lVar17 = *(longlong *)(**(longlong **)(lVar9 + 0x28) + 0x10);
            }
            lVar9 = *(longlong *)(pCVar8 + 0x10);
            lVar11 = 0;
            puVar19 = puVar18;
            pCVar27 = pCVar8;
            if (lVar9 == 0) {
LAB_18003248b:
              lVar11 = puVar19[2];
              puVar19 = (undefined8 *)*puVar19;
              *(int *)(lVar11 + 0x3c) = *(int *)(lVar11 + 0x30) - local_d8._4_4_;
            }
            else {
              do {
                pCVar28 = pCVar27;
                puVar20 = puVar19;
                puVar19 = puVar20;
                pCVar27 = pCVar28;
                if (*(longlong *)(lVar9 + 0x10) == lVar17) break;
                pCVar27 = *(CTTSUtterance **)pCVar28;
                lVar11 = puVar20[2];
                puVar19 = (undefined8 *)*puVar20;
                *(int *)(lVar11 + 0x3c) = *(int *)(lVar11 + 0x30);
                if (pCVar28 == pCVar8) {
                  *(int *)(lVar11 + 0x3c) = *(int *)(lVar11 + 0x30) - local_d8._4_4_;
                }
                local_98 = puVar20;
                local_88 = pCVar28;
                if (pCVar27 == (CTTSUtterance *)0x0) break;
                lVar9 = *(longlong *)(pCVar27 + 0x10);
              } while (lVar9 != 0);
              if (lVar11 == 0) goto LAB_18003248b;
            }
            *(int *)(lVar11 + 0x3c) = *(int *)(lVar11 + 0x3c) - (int)uStack_d0;
            local_a0 = puVar18;
            local_90 = pCVar8;
            lVar6 = WriteOutSentence(this,(WAVE_BLOCK_INFO *)&local_b8,(SPEECH_STATE *)&local_res10)
            ;
            if ((-1 < lVar6) && ((int)local_res10 == 1)) {
              *(undefined4 *)(this + 0x20) = 2;
            }
            CTTSListHelper<CWaveMetaInfo>::Clear
                      ((CAtlList<CWaveMetaInfo*___ptr64,TTS::CElementTraits<CWaveMetaInfo*___ptr64>_>
                        *)&uStack_80);
            TTS::CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_>::
            RemoveAll((CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_>
                       *)&uStack_80);
            bVar29 = lVar6 < 0;
            puVar18 = puVar19;
            pCVar8 = pCVar27;
          } while (!bVar29);
          if (!bVar29) {
LAB_1800324e9:
            if ((bVar3) && (*(int *)(this + 0x20) != 2)) {
              lVar6 = CSpsVocoder::StartNextSegPrediction
                                (*(CSpsVocoder **)(this + 0x150),*(CTTSUtterance **)(this + 0xd0));
            }
          }
        }
      }
      pCVar22 = *(CSpsVocoder **)(this + 0x150);
      if (*(int *)(pCVar22 + 0x38) == 0) {
        CSpsVocoder::EndSegSynthesis<int>(pCVar22);
      }
      else {
        CSpsVocoder::EndSegSynthesis<int>(pCVar22);
      }
      *(undefined8 *)(pCVar22 + 0xb0) = 0;
    }
  }
  return lVar6;
}

