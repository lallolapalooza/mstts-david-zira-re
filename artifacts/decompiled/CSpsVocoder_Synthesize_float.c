
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CSpsVocoder::Synthesize<float>(void) __ptr64 */

long __thiscall CSpsVocoder::Synthesize<float>(CSpsVocoder *this)

{
  uint uVar1;
  short *psVar2;
  float *pfVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined7 uVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  short sVar11;
  uint uVar12;
  ulong uVar13;
  ulonglong uVar14;
  CTTSPhone *pCVar15;
  float *pfVar16;
  CTTSPhone *pCVar17;
  CMemoryMatrix<float> *pCVar18;
  int *piVar19;
  float *pfVar20;
  SYNTHESIZING_SEGMENT<float> *pSVar21;
  int in_R8D;
  longlong lVar22;
  int *piVar23;
  uint uVar24;
  ulonglong uVar25;
  ulong *puVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  __uint64 _Size;
  CMemoryMatrix<float> *pCVar30;
  float fVar31;
  float fVar32;
  ulong local_res8 [2];
  uint local_res10;
  uint local_res18;
  ulong local_res20 [2];
  CTTSPhone *local_158;
  int local_150;
  ulong local_14c;
  long local_148;
  short *local_120;
  int local_118 [2];
  type_info *local_110;
  int local_108 [2];
  type_info *local_100;
  uint local_f8 [2];
  int *local_f0;
  int local_e8 [2];
  type_info *local_e0;
  int local_d8 [2];
  type_info *local_d0;
  int local_c8 [2];
  type_info *local_c0;
  int local_b8 [2];
  type_info *local_b0;
  int local_a8 [2];
  type_info *local_a0;
  int local_98 [2];
  type_info *local_90;
  SYNTHESIZING_SEGMENT<float> *local_88;
  undefined4 local_80;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  
  pSVar21 = *(SYNTHESIZING_SEGMENT<float> **)(this + 0xb0);
  if ((pSVar21 == (SYNTHESIZING_SEGMENT<float> *)0x0) || (*(longlong *)(this + 0xb8) == 0)) {
    return -0x7fff0001;
  }
  local_res18 = *(uint *)(pSVar21 + 0x68);
  if (local_res18 == *(uint *)pSVar21) {
    return 1;
  }
  psVar2 = *(short **)(this + 0x10);
  uVar24 = *(uint *)(this + 0x18);
  uVar12 = uVar24 / *(uint *)(this + 0xc);
  uVar1 = *(uint *)(pSVar21 + 0x6c);
  pCVar17 = *(CTTSPhone **)(pSVar21 + 0x70);
  local_88 = pSVar21;
  local_148 = TTS::CAtlArray<float,TTS::CElementTraits<float>_>::SetCount
                        ((CAtlArray<float,TTS::CElementTraits<float>_> *)(pSVar21 + 0x78),
                         (ulonglong)uVar24,in_R8D);
  pfVar3 = *(float **)(pSVar21 + 0x78);
  local_res10 = 0;
  uVar28 = 0;
  local_14c = 0;
  if (-1 < local_148) {
    if ((*(int **)(pSVar21 + 0x18))[1] * **(int **)(pSVar21 + 0x18) == 0) {
      if (uVar12 < *(uint *)(pSVar21 + 4) - uVar1) {
        local_res10 = 0;
        uVar28 = uVar12;
      }
      else {
        local_res10 = *(uint *)pSVar21;
        uVar28 = *(uint *)(pSVar21 + 4) - uVar1;
      }
    }
    else {
      local_14c = 0;
      local_150 = 1;
      if (((pCVar17 == (CTTSPhone *)0x0) || (lVar22 = *(longlong *)(pCVar17 + 0xd8), lVar22 == 0))
         || (*(longlong *)(lVar22 + 0x38) == 0)) {
        local_148 = -0x7fff0001;
      }
      else {
        local_14c = *(int *)(*(longlong *)(lVar22 + 0x38) + 4);
        local_150 = *(int *)(lVar22 + 0x4c);
      }
      uVar10 = (**(code **)(*(longlong *)(pCVar17 + 0x30) + 0x30))();
      local_res8[0] = CONCAT22(local_res8[0]._2_2_,uVar10);
      local_res20[0] = local_res18;
      uVar29 = uVar28;
      local_158 = pCVar17;
      while( true ) {
        uVar28 = uVar29;
        if ((local_148 < 0) || (*(uint *)pSVar21 <= local_res20[0])) goto LAB_180009d97;
        lVar22 = *(longlong *)(pSVar21 + 0x18);
        piVar19 = (int *)0x0;
        if (*(longlong *)(lVar22 + 8) != 0) {
          piVar19 = (int *)(*(longlong *)(lVar22 + 8) +
                           (ulonglong)(local_res20[0] * *(int *)(lVar22 + 4)) * 4);
        }
        iVar27 = 0;
        if (*(int *)(lVar22 + 4) != 0) {
          uVar14 = (ulonglong)*(uint *)(lVar22 + 4);
          do {
            iVar27 = iVar27 + *piVar19;
            piVar19 = piVar19 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        sVar11 = (**(code **)(*(longlong *)(local_158 + 0x30) + 0x30))();
        if ((sVar11 != (short)local_res8[0]) || (uVar28 = iVar27 + uVar29, uVar12 < uVar28)) break;
        local_res10 = local_res10 + 1;
        local_res20[0] = local_res20[0] + 1;
        pCVar15 = (CTTSPhone *)0x0;
        if ((*(longlong *)(local_158 + 0x20) != 0) && (**(longlong **)(local_158 + 0x28) != 0)) {
          pCVar15 = *(CTTSPhone **)(**(longlong **)(local_158 + 0x28) + 0x10);
        }
        if (pCVar15 == (CTTSPhone *)0x0) goto LAB_180009d97;
        lVar22 = *(longlong *)(pCVar15 + 0xd8);
        if ((lVar22 == 0) || (*(longlong *)(lVar22 + 0x38) == 0)) {
          local_148 = -0x7fff0001;
        }
        else if ((*(int *)(lVar22 + 0x4c) != local_150) ||
                (*(int *)(*(longlong *)(lVar22 + 0x38) + 4) != local_14c)) goto LAB_180009d97;
        uVar29 = uVar28;
        local_158 = pCVar15;
        if ((local_res18 == 0) && ((1 < local_res10 && (*(int *)(this + 0x7c) == 0))))
        goto LAB_180009d97;
      }
      uVar28 = uVar29;
      if (local_res10 == 0) {
        local_148 = -0x7ff8ff86;
      }
    }
LAB_180009d97:
    local_14c = uVar28 * *(int *)(this + 0xc);
    if ((-1 < local_148) && (uVar24 < local_14c)) {
      local_148 = -0x7fff0001;
    }
  }
  iVar27 = (**(code **)(**(longlong **)(this + 0x48) + 0x18))();
  uVar29 = uVar28 - iVar27;
  uVar12 = (**(code **)(**(longlong **)(this + 0x48) + 0x10))();
  pCVar18 = (CMemoryMatrix<float> *)((ulonglong)uVar29 % (ulonglong)uVar12);
  uVar24 = (uVar12 - (int)pCVar18) + uVar29;
  if (uVar12 <= uVar24 - uVar29) {
    uVar24 = uVar29;
  }
  iVar27 = uVar24 + iVar27;
  if (*(uint *)(pSVar21 + 4) <= iVar27 + uVar1) {
    iVar27 = *(uint *)(pSVar21 + 4) - uVar1;
  }
  puVar4 = *(uint **)(pSVar21 + 0x18);
  local_f8[0] = 0;
  local_f8[1] = 0;
  uVar24 = 0;
  local_f0 = (int *)0x0;
  if (((puVar4 != (uint *)0x0) && (*(longlong *)(puVar4 + 2) != 0)) &&
     (pCVar18 = (CMemoryMatrix<float> *)(ulonglong)local_res10, local_res10 + local_res18 <= *puVar4
     )) {
    uVar24 = puVar4[1];
    local_f8[1] = uVar24;
    local_f8[0] = local_res10;
    local_f0 = (int *)(*(longlong *)(puVar4 + 2) + (ulonglong)(uVar24 * local_res18) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x28);
  local_118[0] = 0;
  local_118[1] = 0;
  local_110 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_118[1] = puVar4[1];
    local_118[0] = iVar27;
    local_110 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x30);
  local_108[0] = 0;
  local_108[1] = 0;
  local_100 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_108[1] = puVar4[1];
    local_108[0] = iVar27;
    local_100 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x38);
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_e0 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_e8[1] = puVar4[1];
    local_e8[0] = iVar27;
    local_e0 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x40);
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c0 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_c8[1] = puVar4[1];
    local_c8[0] = iVar27;
    local_c0 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x48);
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d0 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_d8[1] = puVar4[1];
    local_d8[0] = iVar27;
    local_d0 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x60);
  local_98[0] = 0;
  local_98[1] = 0;
  local_90 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_98[1] = puVar4[1];
    local_98[0] = iVar27;
    local_90 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x50);
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a0 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_a8[1] = puVar4[1];
    local_a8[0] = iVar27;
    local_a0 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  puVar4 = *(uint **)(pSVar21 + 0x58);
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_b0 = (type_info *)0x0;
  if (((puVar4 != (uint *)0x0) &&
      (pCVar18 = *(CMemoryMatrix<float> **)(puVar4 + 2), pCVar18 != (CMemoryMatrix<float> *)0x0)) &&
     (iVar27 + uVar1 <= *puVar4)) {
    local_b8[1] = puVar4[1];
    local_b8[0] = iVar27;
    local_b0 = (type_info *)(pCVar18 + (ulonglong)(puVar4[1] * uVar1) * 4);
  }
  if (-1 < local_148) {
    pCVar18 = (CMemoryMatrix<float> *)local_118;
    if (*(int *)(this + 0x10c) == 0) {
      if (local_c0 == (type_info *)0x0) {
        local_148 = CExcitationGeneratorImpl<float>::GenerateExcitation
                              (*(CExcitationGeneratorImpl<float> **)(this + 0x48),pCVar18,pfVar3,
                               local_14c,*(ulong *)(this + 0xc));
      }
      else {
        local_148 = CExcitationGeneratorImpl<float>::GenerateExcitation
                              (*(CExcitationGeneratorImpl<float> **)(this + 0x48),pCVar18,
                               (CMemoryMatrix<float> *)local_c8,pfVar3,local_14c,
                               *(ulong *)(this + 0xc));
      }
    }
    else {
      local_78 = *(longlong *)(*(longlong *)(pSVar21 + 0x20) + 8) + (ulonglong)uVar1 * 4;
      local_80 = 1;
      local_70 = 0;
      local_7c = iVar27;
      local_68 = local_78;
      local_148 = CITFTEExcitationGeneratorImpl<float>::GenerateExcitation
                            (*(CITFTEExcitationGeneratorImpl<float> **)(this + 0x48),pCVar18,
                             (CMemoryMatrix<float> *)local_108,(CMemoryMatrix<float> *)local_98,
                             (CMemoryMatrix<float> *)local_a8,(CMemoryMatrix<float> *)local_b8,
                             (CMemoryArray<int> *)&local_80,pfVar3,local_14c,uVar28,
                             *(ulong *)(this + 0xc));
      CMemoryArray<CTTSPhone*___ptr64>::~CMemoryArray<CTTSPhone*___ptr64>
                ((CMemoryArray<CTTSPhone*___ptr64> *)&local_80);
    }
  }
  pfVar20 = (float *)0x0;
  fVar32 = 0.0;
  local_158 = (CTTSPhone *)0x0;
  pCVar15 = (CTTSPhone *)(float *)0x0;
  if (-1 < local_148) {
    bVar9 = type_info::operator!=((type_info *)&float__RTTI_Type_Descriptor_,(type_info *)pCVar18);
    pCVar15 = (CTTSPhone *)0x0;
    if ((!bVar9) ||
       ((*(int *)(*(longlong *)(this + 200) + 0x24) == 100 && (*(float *)(this + 0xf4) == 0.0)))) {
LAB_18000a23d:
      if (*(int *)(this + 0xf0) == 0) {
        pCVar18 = (CMemoryMatrix<float> *)0x0;
        pCVar30 = (CMemoryMatrix<float> *)0x0;
        local_res8[0] = 0;
      }
      else {
        pCVar18 = (CMemoryMatrix<float> *)local_d8;
        pCVar30 = (CMemoryMatrix<float> *)local_118;
        local_res8[0] = *(ulong *)(this + 8);
      }
      local_148 = CLsfSynthesizerImpl<float,float>::Synthesize<float,float,float>
                            (*(CLsfSynthesizerImpl<float,float> **)(this + 0x50),
                             (CMemoryMatrix<float> *)local_108,(CMemoryMatrix<float> *)local_e8,
                             pfVar3,psVar2,local_14c,*(ulong *)(this + 0xc),*(int *)(this + 0x10c),
                             fVar32,(float *)local_158,pCVar18,pCVar30,local_res8[0]);
      pSVar21 = local_88;
      pfVar20 = (float *)0x0;
      pCVar15 = local_158;
      if (-1 < local_148) {
        if (*(int *)(this + 0x7c) != 0) {
          local_148 = ProcessKeyboardEchoScenarioVolume
                                (this,(CMemoryMatrix<unsigned_long> *)local_f8,pCVar17,psVar2,
                                 local_14c,*(ulong *)(this + 0xc));
          pfVar20 = (float *)0x0;
          if (local_148 < 0) goto LAB_18000a284;
        }
        uVar1 = local_res10;
        pfVar20 = (float *)0x0;
        if (local_res10 != 0) {
          bVar9 = false;
          bVar8 = false;
          local_120 = psVar2;
          if (*(uint *)(pSVar21 + 0x68) == 0) {
            piVar19 = (int *)0x0;
            if (local_f0 != (int *)0x0) {
              piVar19 = local_f0;
            }
            *piVar19 = *piVar19 - *(uint *)(pSVar21 + 8);
            local_120 = psVar2 + *(int *)(this + 0xc) * *(uint *)(pSVar21 + 8);
            bVar9 = true;
          }
          if (*(uint *)(pSVar21 + 0x68) + local_res10 == *(uint *)pSVar21) {
            piVar19 = (int *)0x0;
            if (local_f0 != (int *)0x0) {
              piVar19 = local_f0 + (local_res10 - 1) * uVar24;
            }
            piVar19[uVar24 - 1] = piVar19[uVar24 - 1] - *(uint *)(pSVar21 + 0xc);
            bVar8 = true;
          }
          local_res8[0] = 0;
          local_res20[0] = 0;
          piVar19 = local_f0;
          if (pCVar17 != (CTTSPhone *)0x0) {
            pCVar15 = pCVar17;
            do {
              puVar26 = (ulong *)0x0;
              pCVar17 = pCVar15;
              if (uVar1 <= local_res20[0]) break;
              if (piVar19 != (int *)0x0) {
                puVar26 = (ulong *)(piVar19 + uVar24 * local_res20[0]);
              }
              iVar27 = CTTSPhone::IsSilence(pCVar15);
              if (iVar27 != 0) {
                uVar12 = uVar24 >> 1;
                if (*(int *)(this + 0x3c) == 0) {
                  pCVar17 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                                      ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>
                                        *)pCVar15,0);
                  if (pCVar17 == (CTTSPhone *)0x0) {
LAB_18000a58d:
                    uVar29 = 0;
                  }
                  else {
                    iVar27 = CTTSPhone::IsSilence(pCVar17);
                    uVar29 = uVar12;
                    if (iVar27 != 0) goto LAB_18000a58d;
                  }
                  pCVar17 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                                      ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>
                                        *)pCVar15,0);
                  if ((pCVar17 == (CTTSPhone *)0x0) ||
                     (iVar27 = CTTSPhone::IsSilence(pCVar17), iVar27 != 0)) goto LAB_18000a56c;
                }
                else {
                  uVar29 = 0;
LAB_18000a56c:
                  uVar12 = uVar24 - 1;
                }
                uVar13 = CTTSMath::Sum<unsigned_long>(puVar26,uVar29);
                uVar14 = (ulonglong)(uVar13 * *(int *)(this + 0xc));
                uVar13 = CTTSMath::Sum<unsigned_long>(puVar26 + uVar29,(uVar12 - uVar29) + 1);
                SafeZeroMemory(local_120 + (uVar14 & 0xffffffff) + (ulonglong)local_res8[0],2,
                               (ulonglong)(uVar13 * *(int *)(this + 0xc)));
                piVar19 = local_f0;
              }
              iVar27 = 0;
              if (uVar24 != 0) {
                uVar14 = (ulonglong)uVar24;
                do {
                  iVar27 = iVar27 + *puVar26;
                  puVar26 = puVar26 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              local_res8[0] = local_res8[0] + iVar27 * *(int *)(this + 0xc);
              pCVar17 = (CTTSPhone *)0x0;
              if ((*(longlong *)(pCVar15 + 0x20) != 0) && (**(longlong **)(pCVar15 + 0x28) != 0)) {
                pCVar17 = *(CTTSPhone **)(**(longlong **)(pCVar15 + 0x28) + 0x10);
              }
              local_res20[0] = local_res20[0] + 1;
              pCVar15 = pCVar17;
            } while (pCVar17 != (CTTSPhone *)0x0);
            pSVar21 = local_88;
          }
          pfVar20 = (float *)0x0;
          if (bVar9) {
            piVar23 = (int *)0x0;
            if (piVar19 != (int *)0x0) {
              piVar23 = piVar19;
            }
            *piVar23 = *piVar23 + *(uint *)(pSVar21 + 8);
          }
          if (bVar8) {
            piVar23 = (int *)0x0;
            if (piVar19 != (int *)0x0) {
              piVar23 = piVar19 + (local_res10 - 1) * uVar24;
            }
            piVar23[uVar24 - 1] = piVar23[uVar24 - 1] + *(uint *)(pSVar21 + 0xc);
          }
        }
        goto LAB_18000a284;
      }
    }
    else {
      fVar31 = ((float)*(uint *)(*(longlong *)(this + 200) + 0x24) - 100.0) / 100.0 +
               *(float *)(this + 0xf4);
      fVar32 = -1.0;
      if (-1.0 <= fVar31) {
        fVar32 = fVar31;
      }
      if (1.0 <= fVar32) {
        fVar32 = 1.0;
      }
      fVar32 = fVar32 * 0.25;
      uVar1 = *(uint *)(*(longlong *)(pSVar21 + 0x30) + 4);
      uVar25 = (ulonglong)uVar1;
      uVar14 = 4;
      iVar27 = CNewArrayHelper::IsGoodForIntegerOverflow(4,(ulonglong)uVar1);
      if (iVar27 == 0) {
        pfVar20 = (float *)pCVar15;
      }
      else {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar14 & 0xffffffff;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar25;
        _Size = SUB168(auVar5 * auVar6,0);
        if (SUB168(auVar5 * auVar6,8) != 0) {
          _Size = uVar14 - 5;
        }
        pCVar15 = operator_new__(_Size,&std::nothrow);
        if (pCVar15 == (CTTSPhone *)0x0) {
          pCVar15 = (CTTSPhone *)0x0;
        }
        else {
          memset(pCVar15,0,_Size);
        }
        pfVar20 = (float *)0x0;
        if (pCVar15 != (CTTSPhone *)0x0) {
          *(float *)pCVar15 = -fVar32;
          local_158 = pCVar15;
          if (1 < uVar1) {
            uVar14 = (ulonglong)(uVar1 - 1);
            pfVar20 = (float *)pCVar15;
            pfVar16 = (float *)pCVar15;
            do {
              pfVar16 = pfVar16 + 1;
              *pfVar16 = -fVar32 * *pfVar20;
              pfVar20 = pfVar20 + 1;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
          goto LAB_18000a23d;
        }
      }
      local_148 = -0x7ff8fff2;
    }
  }
  local_158 = pCVar15;
LAB_18000a284:
  local_res8[0] = (ulong)pfVar20;
  uVar14 = (ulonglong)pfVar20 & 0xffffffff;
  local_res20[0] = local_14c;
  if (((-1 < local_148) && (*(float **)(this + 0x30) != pfVar20)) &&
     (*(uint *)(this + 0xe8) == local_res8[0])) {
    uVar7 = (undefined7)((ulonglong)pfVar20 >> 8);
    local_148 = DoWaveConcatenation<float>
                          (this,psVar2,local_14c,(int)CONCAT71(uVar7,local_res18 == 0),
                           (int)CONCAT71(uVar7,*(uint *)pSVar21 <= local_res10 + local_res18),
                           pSVar21,*(ulong *)(this + 0xc),local_res8,local_res20);
    uVar14 = (ulonglong)local_res8[0];
    pfVar20 = (float *)0x0;
  }
  *(CTTSPhone **)(pSVar21 + 0x70) = pCVar17;
  *(uint *)(pSVar21 + 0x68) = *(int *)(pSVar21 + 0x68) + local_res10;
  *(uint *)(pSVar21 + 0x6c) = *(int *)(pSVar21 + 0x6c) + uVar28;
  *(short **)(*(longlong *)(this + 0xb8) + 8) = psVar2 + uVar14;
  *(ulong *)(*(longlong *)(this + 0xb8) + 0x10) = local_res20[0] - (int)uVar14;
  iVar27 = (int)pfVar20;
  *(int *)(*(longlong *)(this + 0xb8) + 0x14) = iVar27;
  *(int *)(*(longlong *)(this + 0xb8) + 0x18) = iVar27;
  lVar22 = *(longlong *)(this + 0xb8);
  if (*(int *)(lVar22 + 4) == iVar27) {
    *(int *)(lVar22 + 0x14) = (int)uVar14 - *(int *)(pSVar21 + 8) * *(int *)(this + 0xc);
    lVar22 = *(longlong *)(this + 0xb8);
  }
  if (*(int *)(pSVar21 + 0x68) == *(int *)pSVar21) {
    *(ulong *)(lVar22 + 0x18) =
         (local_14c - *(int *)(pSVar21 + 0xc) * *(int *)(this + 0xc)) - local_res20[0];
  }
  *(undefined4 *)(*(longlong *)(this + 0xb8) + 4) = *(undefined4 *)(pSVar21 + 0x68);
  **(uint **)(this + 0xb8) = local_res10;
  if (local_158 != (CTTSPhone *)0x0) {
    operator_delete__(local_158);
  }
  return local_148;
}

