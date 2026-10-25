
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CSpsVocoder::Synthesize<int>(void) __ptr64 */

long __thiscall CSpsVocoder::Synthesize<int>(CSpsVocoder *this)

{
  SYNTHESIZING_SEGMENT<int> *pSVar1;
  short *psVar2;
  int *piVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined2 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  CTTSPhone *pCVar16;
  float *pfVar17;
  ulonglong uVar18;
  float *pfVar19;
  int *piVar20;
  longlong lVar21;
  CMemoryMatrix<int> *pCVar22;
  uint uVar23;
  int in_R8D;
  uint uVar24;
  ulong *puVar25;
  ulonglong uVar26;
  uint uVar27;
  ulong *puVar28;
  uint uVar29;
  uint uVar30;
  __uint64 _Size;
  InternalSubMatrix<unsigned_long> *pIVar31;
  float fVar32;
  float fVar33;
  undefined8 local_res8;
  ulong local_res10 [2];
  uint local_res18;
  long local_res20;
  ulong *local_148;
  ulong local_140;
  CTTSPhone *local_128;
  float *local_118;
  InternalSubMatrix<unsigned_long> local_108 [8];
  undefined8 local_100;
  InternalSubMatrix<unsigned_long> local_f8 [4];
  ulong uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  InternalSubMatrix<unsigned_long> local_e8 [8];
  longlong local_e0;
  InternalSubMatrix<unsigned_long> local_d8 [8];
  undefined8 local_d0;
  InternalSubMatrix<unsigned_long> local_c8 [8];
  undefined8 local_c0;
  InternalSubMatrix<unsigned_long> local_b8 [8];
  undefined8 local_b0;
  InternalSubMatrix<unsigned_long> local_a8 [8];
  undefined8 local_a0;
  InternalSubMatrix<unsigned_long> local_98 [8];
  undefined8 local_90;
  InternalSubMatrix<unsigned_long> local_88 [8];
  undefined8 local_80;
  undefined4 local_78;
  ulong local_74;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  
  pSVar1 = *(SYNTHESIZING_SEGMENT<int> **)(this + 0xb0);
  if ((pSVar1 == (SYNTHESIZING_SEGMENT<int> *)0x0) || (*(longlong *)(this + 0xb8) == 0)) {
    return -0x7fff0001;
  }
  local_res18 = *(uint *)(pSVar1 + 0x68);
  if (local_res18 == *(uint *)pSVar1) {
    return 1;
  }
  psVar2 = *(short **)(this + 0x10);
  uVar27 = *(uint *)(this + 0x18);
  uVar10 = uVar27 / *(uint *)(this + 0xc);
  uVar24 = *(uint *)(pSVar1 + 0x6c);
  local_128 = *(CTTSPhone **)(pSVar1 + 0x70);
  iVar11 = TTS::CAtlArray<int,TTS::CElementTraits<int>_>::SetCount
                     ((CAtlArray<int,TTS::CElementTraits<int>_> *)(pSVar1 + 0x78),(ulonglong)uVar27,
                      in_R8D);
  piVar3 = *(int **)(pSVar1 + 0x78);
  uVar30 = 0;
  local_res10[0] = 0;
  local_140 = 0;
  uVar29 = 0;
  if (-1 < iVar11) {
    if ((*(int **)(pSVar1 + 0x18))[1] * **(int **)(pSVar1 + 0x18) == 0) {
      local_res10[0] = *(int *)(pSVar1 + 4) - uVar24;
      if (uVar10 < local_res10[0]) {
        local_res10[0] = uVar10;
      }
      else {
        uVar30 = *(uint *)pSVar1;
        uVar10 = local_res10[0];
      }
    }
    else {
      local_140 = 0;
      local_res20 = 1;
      if (((local_128 == (CTTSPhone *)0x0) ||
          (lVar21 = *(longlong *)(local_128 + 0xd8), lVar21 == 0)) ||
         (*(longlong *)(lVar21 + 0x38) == 0)) {
        iVar11 = -0x7fff0001;
      }
      else {
        local_140 = *(int *)(*(longlong *)(lVar21 + 0x38) + 4);
        local_res20 = *(long *)(lVar21 + 0x4c);
      }
      uVar8 = (**(code **)(*(longlong *)(local_128 + 0x30) + 0x30))();
      local_res8 = (InternalSubMatrix<unsigned_long> *)CONCAT62(local_res8._2_6_,uVar8);
      pCVar16 = local_128;
      uVar29 = local_res18;
      uVar23 = 0;
      while( true ) {
        uVar13 = uVar23;
        if ((iVar11 < 0) || (*(uint *)pSVar1 <= uVar29)) goto LAB_180074b79;
        lVar21 = *(longlong *)(pSVar1 + 0x18);
        puVar25 = (ulong *)0x0;
        if (*(longlong *)(lVar21 + 8) != 0) {
          puVar25 = (ulong *)(*(longlong *)(lVar21 + 8) +
                             (ulonglong)(uVar29 * *(int *)(lVar21 + 4)) * 4);
        }
        uVar12 = CTTSMath::Sum<unsigned_long>(puVar25,*(ulong *)(lVar21 + 4));
        sVar9 = (**(code **)(*(longlong *)(pCVar16 + 0x30) + 0x30))();
        if ((sVar9 != (short)local_res8) || (uVar13 = uVar12 + uVar23, uVar10 < uVar13)) break;
        uVar30 = uVar30 + 1;
        uVar29 = uVar29 + 1;
        local_res10[0] = uVar13;
        pCVar16 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                            ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)pCVar16,
                             0);
        if (pCVar16 == (CTTSPhone *)0x0) goto LAB_180074b79;
        lVar21 = *(longlong *)(pCVar16 + 0xd8);
        if ((lVar21 == 0) || (*(longlong *)(lVar21 + 0x38) == 0)) {
          iVar11 = -0x7fff0001;
        }
        else if ((*(int *)(lVar21 + 0x4c) != local_res20) ||
                (*(int *)(*(longlong *)(lVar21 + 0x38) + 4) != local_140)) goto LAB_180074b79;
        uVar23 = uVar13;
        if ((local_res18 == 0) && ((1 < uVar30 && (*(int *)(this + 0x7c) == 0))))
        goto LAB_180074b79;
      }
      uVar13 = uVar23;
      if (uVar30 == 0) {
        iVar11 = -0x7ff8ff86;
      }
LAB_180074b79:
      uVar10 = uVar13;
    }
    local_140 = uVar10 * *(int *)(this + 0xc);
    uVar29 = uVar10;
    if ((-1 < iVar11) && (uVar27 < local_140)) {
      iVar11 = -0x7fff0001;
    }
  }
  iVar14 = (**(code **)(**(longlong **)(this + 0x48) + 0x18))();
  local_res10[0] = local_res10[0] - iVar14;
  uVar10 = (**(code **)(**(longlong **)(this + 0x48) + 0x10))();
  uVar27 = (uVar10 - local_res10[0] % uVar10) + local_res10[0];
  if (uVar10 <= uVar27 - local_res10[0]) {
    uVar27 = local_res10[0];
  }
  uVar12 = uVar27 + iVar14;
  uVar18 = (ulonglong)uVar24;
  if (*(uint *)(pSVar1 + 4) <= uVar12 + uVar24) {
    uVar12 = *(int *)(pSVar1 + 4) - uVar24;
  }
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_f8,*(CMemoryMatrix<int> **)(pSVar1 + 0x18),local_res18,uVar30);
  uVar15 = uVar12;
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_108,*(CMemoryMatrix<int> **)(pSVar1 + 0x28),uVar24,uVar12);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_c8,*(CMemoryMatrix<int> **)(pSVar1 + 0x30),uVar24,uVar15);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_d8,*(CMemoryMatrix<int> **)(pSVar1 + 0x38),uVar24,uVar15);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_e8,*(CMemoryMatrix<int> **)(pSVar1 + 0x40),uVar24,uVar15);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_b8,*(CMemoryMatrix<int> **)(pSVar1 + 0x48),uVar24,uVar15);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_88,*(CMemoryMatrix<int> **)(pSVar1 + 0x60),uVar24,uVar15);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_98,*(CMemoryMatrix<int> **)(pSVar1 + 0x50),uVar24,uVar15);
  pCVar22 = *(CMemoryMatrix<int> **)(pSVar1 + 0x58);
  CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>
            (local_a8,pCVar22,uVar24,uVar15);
  if (-1 < iVar11) {
    if (*(int *)(this + 0x10c) != 0) {
      local_70 = *(longlong *)(*(longlong *)(pSVar1 + 0x20) + 8) + uVar18 * 4;
      local_78 = 1;
      local_68 = 0;
      iVar11 = -0x7fffbfff;
      local_74 = uVar12;
      local_60 = local_70;
      CMemoryArray<CTTSPhone*___ptr64>::~CMemoryArray<CTTSPhone*___ptr64>
                ((CMemoryArray<CTTSPhone*___ptr64> *)&local_78);
      pfVar17 = (float *)0x0;
      goto LAB_180075188;
    }
    pCVar22 = (CMemoryMatrix<int> *)local_108;
    if (local_e0 == 0) {
      iVar11 = CExcitationGeneratorImpl<int>::GenerateExcitation
                         (*(CExcitationGeneratorImpl<int> **)(this + 0x48),pCVar22,piVar3,local_140,
                          *(ulong *)(this + 0xc));
    }
    else {
      iVar11 = CExcitationGeneratorImpl<int>::GenerateExcitation
                         (*(CExcitationGeneratorImpl<int> **)(this + 0x48),pCVar22,
                          (CMemoryMatrix<int> *)local_e8,piVar3,local_140,*(ulong *)(this + 0xc));
    }
  }
  fVar33 = 0.0;
  pfVar17 = (float *)0x0;
  local_118 = (float *)0x0;
  if (iVar11 < 0) goto LAB_180075188;
  bVar7 = type_info::operator!=((type_info *)&int__RTTI_Type_Descriptor_,(type_info *)pCVar22);
  if ((!bVar7) ||
     ((*(int *)(*(longlong *)(this + 200) + 0x24) == 100 && (*(float *)(this + 0xf4) == 0.0)))) {
LAB_180074e74:
    if (*(int *)(this + 0xf0) == 0) {
      pIVar31 = (InternalSubMatrix<unsigned_long> *)0x0;
      local_res8 = (InternalSubMatrix<unsigned_long> *)0x0;
      uVar12 = 0;
    }
    else {
      local_res8 = local_108;
      uVar12 = *(ulong *)(this + 8);
      pIVar31 = local_b8;
    }
    iVar11 = CLsfSynthesizerImpl<short,int>::Synthesize<int,int,int>
                       (*(CLsfSynthesizerImpl<short,int> **)(this + 0x50),
                        (CMemoryMatrix<int> *)local_c8,(CMemoryMatrix<int> *)local_d8,piVar3,psVar2,
                        local_140,*(ulong *)(this + 0xc),*(int *)(this + 0x10c),fVar33,local_118,
                        (CMemoryMatrix<int> *)pIVar31,(CMemoryMatrix<int> *)local_res8,uVar12);
    pfVar17 = local_118;
    if (-1 < iVar11) {
      local_res20 = iVar11;
      if (*(int *)(this + 0x7c) != 0) {
        local_res20 = ProcessKeyboardEchoScenarioVolume
                                (this,(CMemoryMatrix<unsigned_long> *)local_f8,local_128,psVar2,
                                 local_140,*(ulong *)(this + 0xc));
        iVar11 = local_res20;
        if (local_res20 < 0) goto LAB_180075188;
      }
      iVar11 = local_res20;
      if (uVar30 != 0) {
        bVar7 = false;
        bVar6 = false;
        piVar3 = (int *)CONCAT44(uStack_ec,local_f0);
        local_148 = (ulong *)psVar2;
        if (*(int *)(pSVar1 + 0x68) == 0) {
          piVar20 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar20 = piVar3;
          }
          *piVar20 = *piVar20 - *(int *)(pSVar1 + 8);
          local_148 = (ulong *)(psVar2 + (uint)(*(int *)(this + 0xc) * *(int *)(pSVar1 + 8)));
          bVar7 = true;
        }
        puVar25 = local_148;
        if (*(int *)(pSVar1 + 0x68) + uVar30 == *(int *)pSVar1) {
          piVar20 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar20 = piVar3 + (uVar30 - 1) * uStack_f4;
          }
          piVar20[uStack_f4 - 1] = piVar20[uStack_f4 - 1] - *(int *)(pSVar1 + 0xc);
          bVar6 = true;
        }
        local_res8 = (InternalSubMatrix<unsigned_long> *)
                     ((ulonglong)local_res8 & 0xffffffff00000000);
        pCVar22 = (CMemoryMatrix<int> *)local_res8;
        local_res10[0] = 0;
        if (local_128 != (CTTSPhone *)0x0) {
          local_res8._0_4_ = 0;
          uVar27 = (uint)local_res8;
          local_res8 = (InternalSubMatrix<unsigned_long> *)pCVar22;
          do {
            if (uVar30 <= local_res10[0]) break;
            local_148 = (ulong *)0x0;
            if (piVar3 != (int *)0x0) {
              local_148 = (ulong *)(piVar3 + uStack_f4 * local_res10[0]);
            }
            iVar11 = CTTSPhone::IsSilence(local_128);
            if (iVar11 != 0) {
              uVar24 = (uint)(CONCAT44(local_f0,uStack_f4) >> 1);
              uVar10 = uVar24 & 0x7fffffff;
              local_res8 = (InternalSubMatrix<unsigned_long> *)
                           (CONCAT44(local_res8._4_4_,uVar24) & 0xffffffff7fffffff);
              if (*(int *)(this + 0x3c) == 0) {
                pCVar16 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                                    ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                     local_128,0);
                if ((pCVar16 == (CTTSPhone *)0x0) ||
                   (iVar11 = CTTSPhone::IsSilence(pCVar16), iVar11 != 0)) {
                  local_res8 = (InternalSubMatrix<unsigned_long> *)
                               ((ulonglong)local_res8 & 0xffffffff00000000);
                }
                pCVar16 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                                    ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                     local_128,0);
                if ((pCVar16 == (CTTSPhone *)0x0) ||
                   (iVar11 = CTTSPhone::IsSilence(pCVar16), iVar11 != 0)) {
                  uVar10 = uStack_f4 - 1;
                }
                uVar12 = (uint)local_res8;
              }
              else {
                uVar10 = uStack_f4 - 1;
                uVar12 = 0;
              }
              puVar28 = local_148;
              uVar15 = CTTSMath::Sum<unsigned_long>(local_148,uVar12);
              uVar18 = (ulonglong)(uVar15 * *(int *)(this + 0xc));
              uVar12 = CTTSMath::Sum<unsigned_long>(puVar28 + uVar12,(uVar10 - uVar12) + 1);
              SafeZeroMemory((short *)((longlong)puVar25 +
                                      ((uVar18 & 0xffffffff) + (ulonglong)uVar27) * 2),2,
                             (ulonglong)(uVar12 * *(int *)(this + 0xc)));
            }
            uVar12 = CTTSMath::Sum<unsigned_long>(local_148,uStack_f4);
            uVar27 = uVar27 + uVar12 * *(int *)(this + 0xc);
            local_128 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetNext
                                  ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                   local_128,0);
            local_res10[0] = local_res10[0] + 1;
          } while (local_128 != (CTTSPhone *)0x0);
        }
        if (bVar7) {
          piVar20 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar20 = piVar3;
          }
          *piVar20 = *piVar20 + *(int *)(pSVar1 + 8);
        }
        if (bVar6) {
          piVar20 = (int *)0x0;
          if (piVar3 != (int *)0x0) {
            piVar20 = piVar3 + (uVar30 - 1) * uStack_f4;
          }
          piVar20[uStack_f4 - 1] = piVar20[uStack_f4 - 1] + *(int *)(pSVar1 + 0xc);
        }
        iVar11 = local_res20;
      }
    }
  }
  else {
    fVar32 = ((float)*(uint *)(*(longlong *)(this + 200) + 0x24) - 100.0) / 100.0 +
             *(float *)(this + 0xf4);
    fVar33 = -1.0;
    if (-1.0 <= fVar32) {
      fVar33 = fVar32;
    }
    if (1.0 <= fVar33) {
      fVar33 = 1.0;
    }
    fVar33 = fVar33 * 0.25;
    uVar27 = *(uint *)(*(longlong *)(pSVar1 + 0x30) + 4);
    local_res8 = (InternalSubMatrix<unsigned_long> *)CONCAT44(local_res8._4_4_,uVar27);
    uVar26 = (ulonglong)uVar27;
    uVar18 = 4;
    iVar11 = CNewArrayHelper::IsGoodForIntegerOverflow(4,(ulonglong)uVar27);
    if (iVar11 != 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18 & 0xffffffff;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar26;
      _Size = SUB168(auVar4 * auVar5,0);
      if (SUB168(auVar4 * auVar5,8) != 0) {
        _Size = uVar18 - 5;
      }
      pfVar17 = operator_new__(_Size,&std::nothrow);
      if (pfVar17 == (float *)0x0) {
        pfVar17 = (float *)0x0;
      }
      else {
        memset(pfVar17,0,_Size);
      }
      if (pfVar17 != (float *)0x0) {
        *pfVar17 = -fVar33;
        local_118 = pfVar17;
        if (1 < (uint)local_res8) {
          uVar18 = (ulonglong)((uint)local_res8 - 1);
          pfVar19 = pfVar17;
          do {
            pfVar19 = pfVar19 + 1;
            *pfVar19 = -fVar33 * *pfVar17;
            pfVar17 = pfVar17 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
        goto LAB_180074e74;
      }
    }
    iVar11 = -0x7ff8fff2;
  }
LAB_180075188:
  uVar27 = 0;
  local_res8 = (InternalSubMatrix<unsigned_long> *)((ulonglong)local_res8 & 0xffffffff00000000);
  local_res10[0] = local_140;
  if (((-1 < iVar11) && (*(longlong *)(this + 0x30) != 0)) && (*(int *)(this + 0xe8) == 0)) {
    iVar11 = DoWaveConcatenation<int>
                       (this,psVar2,local_140,(uint)(local_res18 == 0),
                        (uint)(*(uint *)pSVar1 <= local_res18 + uVar30),pSVar1,
                        *(ulong *)(this + 0xc),(ulong *)&local_res8,local_res10);
    uVar27 = (uint)local_res8;
  }
  *(CTTSPhone **)(pSVar1 + 0x70) = local_128;
  *(uint *)(pSVar1 + 0x68) = *(int *)(pSVar1 + 0x68) + uVar30;
  *(uint *)(pSVar1 + 0x6c) = *(int *)(pSVar1 + 0x6c) + uVar29;
  *(short **)(*(longlong *)(this + 0xb8) + 8) = psVar2 + uVar27;
  *(ulong *)(*(longlong *)(this + 0xb8) + 0x10) = local_res10[0] - uVar27;
  *(undefined4 *)(*(longlong *)(this + 0xb8) + 0x14) = 0;
  *(undefined4 *)(*(longlong *)(this + 0xb8) + 0x18) = 0;
  lVar21 = *(longlong *)(this + 0xb8);
  if (*(int *)(lVar21 + 4) == 0) {
    *(uint *)(lVar21 + 0x14) = uVar27 - *(int *)(pSVar1 + 8) * *(int *)(this + 0xc);
    lVar21 = *(longlong *)(this + 0xb8);
  }
  if (*(int *)(pSVar1 + 0x68) == *(int *)pSVar1) {
    *(ulong *)(lVar21 + 0x18) =
         (local_140 - *(int *)(pSVar1 + 0xc) * *(int *)(this + 0xc)) - local_res10[0];
  }
  *(undefined4 *)(*(longlong *)(this + 0xb8) + 4) = *(undefined4 *)(pSVar1 + 0x68);
  **(ulong **)(this + 0xb8) = uVar30;
  if (pfVar17 != (float *)0x0) {
    operator_delete__(pfVar17);
  }
  local_a0 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_a8);
  local_90 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_98);
  local_80 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_88);
  local_b0 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_b8);
  local_e0 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_e8);
  local_d0 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_d8);
  local_c0 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_c8);
  local_100 = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_108);
  local_f0 = 0;
  uStack_ec = 0;
  CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)local_f8);
  return iVar11;
}

