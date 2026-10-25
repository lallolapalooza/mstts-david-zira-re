
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CSpsVocoder::StartSegSynthesis<int>(class CTTSUtterance * __ptr64,class
   CTTSPhone const * __ptr64,unsigned long) __ptr64 */

long __thiscall
CSpsVocoder::StartSegSynthesis<int>
          (CSpsVocoder *this,CTTSUtterance *param_1,CTTSPhone *param_2,ulong param_3)

{
  InternalSubMatrix<unsigned_long> *pIVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  BOOL BVar6;
  CTTSUtteranceNodeList<CTTSPhone> *pCVar7;
  InternalSubMatrix<unsigned_long> *_Dst;
  CTTSPhone *pCVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  CAcousticProsodyTagger *this_00;
  uint uVar13;
  CTTSUtterance *pCVar14;
  long lVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulonglong in_stack_ffffffffffffff68;
  ulong local_88;
  uint local_84;
  ulong local_80;
  uint local_7c;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  CTTSUtterance *local_40;
  
  if (((param_1 == (CTTSUtterance *)0x0) || (param_2 == (CTTSPhone *)0x0)) ||
     (pCVar14 = param_1 + (ulonglong)(-(uint)(*(int *)(param_1 + 0x2c0) != 0) & 0x208) + 0x2c8,
     pCVar14 == (CTTSUtterance *)0x0)) {
LAB_18010ca39:
    return -0x7ff8ffa9;
  }
  local_40 = pCVar14;
  iVar3 = (**(code **)(*(longlong *)pCVar14 + 0x20))(pCVar14);
  if (((*(int *)(this + 0x38) != iVar3) || (*(longlong *)(pCVar14 + 8) == 0)) ||
     ((*(longlong *)(pCVar14 + 0xc0) == 0 || (*(longlong *)(pCVar14 + 200) == 0))))
  goto LAB_18010ca39;
  if (*(int *)(this + 0x10c) == 0) {
    lVar12 = *(longlong *)(pCVar14 + 0xd8);
  }
  else {
    if (*(longlong *)(pCVar14 + 0xf8) == 0) {
      return -0x7ff8ffa9;
    }
    if (*(longlong *)(pCVar14 + 0xf0) == 0) {
      return -0x7ff8ffa9;
    }
    lVar12 = *(longlong *)(pCVar14 + 0x100);
  }
  if (lVar12 == 0) {
    return -0x7ff8ffa9;
  }
  local_88 = 0;
  pCVar7 = CTTSUtterance::GetPhoneList(param_1);
  puVar16 = &local_88;
  uVar4 = CTTSUtteranceNodeList<CTTSPhone>::GetIndex(pCVar7,param_2,puVar16);
  uVar19 = local_88;
  iVar3 = (int)puVar16;
  if ((-1 < (int)uVar4) && (param_3 + local_88 == *(int *)(pCVar14 + 0xb0))) {
    *(undefined4 *)(this + 0xe8) = 0;
  }
  uVar5 = GetMaxFrames(*(uint **)(pCVar14 + 8));
  if (*(int *)(this + 0x7c) != 0) {
    uVar5 = *(ulong *)(pCVar14 + 0xb8);
  }
  uVar13 = uVar5 * *(int *)(this + 0xc);
  if ((int)uVar4 < 0) goto LAB_18010ca28;
  if ((*(longlong *)(this + 0x30) != 0) && (*(int *)(this + 0xe8) == 0)) {
    uVar13 = uVar13 + *(int *)(*(longlong *)(this + 0x30) + 0x18) * 2;
  }
  uVar4 = TTS::CAtlArray<short,TTS::CElementTraits<short>_>::SetCount
                    ((CAtlArray<short,TTS::CElementTraits<short>_> *)(this + 0x10),(ulonglong)uVar13
                     ,iVar3);
  if ((int)uVar4 < 0) goto LAB_18010ca28;
  _Dst = operator_new(0x98,&std::nothrow);
  local_78 = _Dst;
  if (_Dst != (InternalSubMatrix<unsigned_long> *)0x0) {
    *(undefined8 *)(_Dst + 0x78) = 0;
    *(undefined8 *)(_Dst + 0x80) = 0;
    *(undefined8 *)(_Dst + 0x88) = 0;
    *(undefined4 *)(_Dst + 0x90) = 0;
    if (_Dst != (InternalSubMatrix<unsigned_long> *)0x0) {
      memset(_Dst,0,0x98);
      CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
      InternalSubMatrix<unsigned_long>
                ((InternalSubMatrix<unsigned_long> *)&local_78,*(CMemoryMatrix<int> **)(pCVar14 + 8)
                 ,uVar19,param_3);
      pIVar1 = _Dst + 0x18;
      uVar4 = CMemoryMatrix<unsigned_long>::CreateInstance
                        ((CMemoryMatrix<unsigned_long> **)pIVar1,(ulong)local_78,local_78._4_4_);
      if (-1 < (int)uVar4) {
        uVar4 = CMemoryMatrix<unsigned_long>::CopyTo
                          ((CMemoryMatrix<unsigned_long> *)&local_78,
                           *(CMemoryMatrix<unsigned_long> **)pIVar1);
      }
      local_70 = 0;
      CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)&local_78);
      if ((int)uVar4 < 0) goto LAB_18010ca28;
      uVar5 = 0;
      local_80 = CTTSAcousticSpace::CalculateFrameCount
                           (*(CMemoryMatrix<unsigned_long> **)pIVar1,(CMemoryArray<int> *)0x0);
      if (local_80 == 0) {
        local_80 = *(ulong *)(pCVar14 + 0xb8);
      }
      uVar18 = local_80;
      if (uVar19 != 0) {
        CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
        InternalSubMatrix<unsigned_long>
                  ((InternalSubMatrix<unsigned_long> *)&local_78,
                   *(CMemoryMatrix<int> **)(pCVar14 + 8),0,uVar19);
        uVar5 = CTTSAcousticSpace::CalculateFrameCount
                          ((CMemoryMatrix<unsigned_long> *)&local_78,(CMemoryArray<int> *)0x0);
        local_70 = 0;
        CMemoryMatrix<double>::~CMemoryMatrix<double>((CMemoryMatrix<double> *)&local_78);
      }
      uVar13 = 0;
      uVar17 = 0;
      if (((*(longlong *)(this + 0x30) != 0) && (param_3 != 0)) && (*(int *)(this + 0xe8) == 0)) {
        local_7c = *(uint *)(*(longlong *)(this + 0x30) + 0x18);
        local_58 = 0;
        local_50 = 0;
        if ((*(int *)(this + 0xe4) == 0) && (*(int *)(this + 0xa8) == 0)) {
          lVar12 = 0;
        }
        else {
          if ((local_88 != 0) &&
             (pCVar8 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                                 ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                  param_2,0), pCVar8 != (CTTSPhone *)0x0)) {
            pCVar8 = CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable>::GetPrev
                               ((CTTSUtteranceNodeBase<CTTSHalfPhone,CTTSPhone,CTTSSyllable> *)
                                param_2,0);
            local_58 = *(longlong *)(pCVar8 + 0xd8);
          }
          if (local_88 + param_3 < *(uint *)(pCVar14 + 0xb0)) {
            pCVar7 = CTTSUtterance::GetPhoneList(param_1);
            local_78 = (InternalSubMatrix<unsigned_long> *)(ulonglong)(local_88 + param_3);
            pCVar8 = CTTSUtteranceNodeList<CTTSPhone>::GetByIndex
                               (pCVar7,(ulonglong)(local_88 + param_3));
            if (pCVar8 == (CTTSPhone *)0x0) {
              lVar12 = local_50;
              goto LAB_18010c4a8;
            }
            pCVar7 = CTTSUtterance::GetPhoneList(param_1);
            pCVar8 = CTTSUtteranceNodeList<CTTSPhone>::GetByIndex(pCVar7,(__uint64)local_78);
            lVar12 = *(longlong *)(pCVar8 + 0xd8);
          }
          else {
            lVar12 = local_50;
          }
        }
LAB_18010c4a8:
        if (((*(int *)(this + 0xe4) == 0) && (*(int *)(this + 0xa8) == 0)) ||
           ((local_58 != 0 && (*(int *)(local_58 + 0xe0) != 0)))) {
          uVar13 = ((local_7c - 1) + *(int *)(this + 0xc)) / *(uint *)(this + 0xc);
        }
        else {
          uVar13 = 0;
        }
        if (((*(int *)(this + 0xe4) == 0) && (*(int *)(this + 0xa8) == 0)) ||
           ((uVar17 = 0, lVar12 != 0 && (*(int *)(lVar12 + 0xe0) != 0)))) {
          uVar17 = ((*(uint *)(this + 0xc) - 1) + (local_7c >> 1)) / *(uint *)(this + 0xc);
        }
        lVar12 = 0;
        if (uVar5 < uVar13) {
          uVar13 = uVar5;
        }
        if (*(uint *)(pCVar14 + 0xb8) <= local_80 + uVar17 + uVar5) {
          uVar17 = (*(uint *)(pCVar14 + 0xb8) - local_80) - uVar5;
        }
        lVar2 = *(longlong *)(_Dst + 0x18);
        uVar18 = local_80 + uVar13 + uVar17;
        uVar5 = uVar5 - uVar13;
        piVar9 = (int *)0x0;
        if (*(longlong *)(lVar2 + 8) != 0) {
          piVar9 = *(int **)(lVar2 + 8);
        }
        *piVar9 = *piVar9 + uVar13;
        if (*(longlong *)(lVar2 + 8) != 0) {
          lVar12 = *(longlong *)(lVar2 + 8) + (ulonglong)((param_3 - 1) * *(int *)(lVar2 + 4)) * 4;
        }
        piVar9 = (int *)(lVar12 + (ulonglong)(*(int *)(lVar2 + 4) - 1) * 4);
        *piVar9 = *piVar9 + uVar17;
      }
      *(ulong *)_Dst = param_3;
      *(CTTSPhone **)(_Dst + 0x10) = param_2;
      *(CTTSPhone **)(_Dst + 0x70) = param_2;
      *(uint *)(_Dst + 8) = uVar13;
      *(uint *)(_Dst + 0xc) = uVar17;
      *(ulong *)(_Dst + 4) = uVar18;
      local_84 = uVar18;
      uVar13 = (**(code **)(**(longlong **)(this + 0x48) + 0x10))();
      local_80 = uVar18 + uVar18 % uVar13;
      uVar19 = *(uint *)(pCVar14 + 0xb8) - uVar5;
      if (local_80 + uVar5 < *(uint *)(pCVar14 + 0xb8)) {
        uVar19 = local_80;
      }
      local_78 = operator_new(0x10,&std::nothrow);
      uVar11 = 0;
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xc0),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x28) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 200),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x30) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xd8),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x38) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xe0),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x40) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xe8),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x48) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xf0),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x50) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 == (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar10 = uVar11;
      }
      else {
        uVar10 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0xf8),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x58) = uVar10;
      local_78 = operator_new(0x10,&std::nothrow);
      if (local_78 != (InternalSubMatrix<unsigned_long> *)0x0) {
        uVar11 = CMemoryMatrix<unsigned_long>::InternalSubMatrix<unsigned_long>::
                 InternalSubMatrix<unsigned_long>
                           (local_78,*(CMemoryMatrix<int> **)(pCVar14 + 0x100),uVar5,uVar19);
      }
      *(undefined8 *)(_Dst + 0x60) = uVar11;
      pIVar1 = _Dst + 0x20;
      *(CMemoryArray<int> **)pIVar1 = (CMemoryArray<int> *)0x0;
      if ((*(int *)(this + 0x10c) != 0) &&
         (uVar4 = CMemoryArray<int>::CreateInstance((CMemoryArray<int> **)pIVar1,uVar19),
         -1 < (int)uVar4)) {
        in_stack_ffffffffffffff68 = CONCAT44((int)(in_stack_ffffffffffffff68 >> 0x20),uVar19);
        uVar4 = CMemoryArray<int>::CopyTo
                          (*(CMemoryArray<int> **)(pCVar14 + 0x10),*(CMemoryArray<int> **)pIVar1,
                           uVar5,0,uVar19);
      }
      if (((((*(longlong *)(_Dst + 0x28) == 0) || (*(longlong *)(_Dst + 0x30) == 0)) ||
           (*(longlong *)(_Dst + 0x38) == 0)) ||
          ((*(longlong *)(_Dst + 0x40) == 0 || (*(longlong *)(_Dst + 0x48) == 0)))) ||
         ((*(longlong *)(_Dst + 0x50) == 0 ||
          ((*(longlong *)(_Dst + 0x58) == 0 || (*(longlong *)(_Dst + 0x60) == 0)))))) {
        uVar4 = 0x8007000e;
      }
      if (-1 < (int)uVar4) {
        uVar19 = 0;
        if (local_88 == 0) {
          uVar19 = 10;
        }
        uVar18 = 10;
        if (local_88 + param_3 != *(int *)(pCVar14 + 0xb0)) {
          uVar18 = 0;
        }
        if (uVar18 + uVar19 != 0) {
          uVar4 = CAcousticProsodyTagger::FixLsfBoundary<int>
                            (*(CMemoryMatrix<int> **)(_Dst + 0x30),
                             *(CMemoryMatrix<int> **)(_Dst + 0x38),uVar19,uVar18);
        }
        if (-1 < (int)uVar4) {
          if (((*(int *)(this + 0xa8) != 0) && (*(int *)(*(longlong *)(this + 0xc0) + 0x6a8) != 0))
             && (*(int *)(this + 0xac) == 0)) {
            pCVar14 = param_1 + 0xd8;
            while( true ) {
              AcquireSRWLockShared((PSRWLOCK)pCVar14);
              in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffff00000000;
              lVar12 = __RTDynamicCast(param_1 + (ulonglong)
                                                 (-(uint)(*(int *)(param_1 + 0x2c0) != 0) & 0x208) +
                                                 0x2c8,0,
                                       &class_CTTSAcousticSpace__RTTI_Type_Descriptor_,
                                       &class_CTTSAcousticSpaceImpl<float>__RTTI_Type_Descriptor_,
                                       in_stack_ffffffffffffff68);
              if (lVar12 == 0) {
                uVar4 = 0x8000ffff;
              }
              while ((-1 < (int)uVar4 && (*(int *)(lVar12 + 0x180) == 0))) {
                BVar6 = SleepConditionVariableSRW
                                  ((PCONDITION_VARIABLE)(param_1 + 0xd0),(PSRWLOCK)pCVar14,15000,1);
                if (BVar6 == 0) {
                  uVar4 = 0x80004005;
                }
              }
              if (*(int *)(lVar12 + 0x180) == 1) break;
              ReleaseSRWLockShared((PSRWLOCK)pCVar14);
            }
            *(undefined4 *)(this + 0xac) = 1;
            ReleaseSRWLockShared((PSRWLOCK)pCVar14);
            pCVar14 = local_40;
          }
          if (-1 < (int)uVar4) {
            local_68 = 0;
            local_70 = *(longlong *)(*(longlong *)(pCVar14 + 0x18) + 8) + (ulonglong)uVar5 * 4;
            local_78 = (InternalSubMatrix<unsigned_long> *)CONCAT44(local_84,1);
            local_60 = local_70;
            uVar4 = CLineSpectralPair::SharpenLsfSpectrum<int>
                              (*(CMemoryMatrix<int> **)(_Dst + 0x30),
                               *(CFormantSharpenSetting **)(this + 0x40),
                               (CMemoryArray<int> *)&local_78);
            CMemoryArray<CTTSPhone*___ptr64>::~CMemoryArray<CTTSPhone*___ptr64>
                      ((CMemoryArray<CTTSPhone*___ptr64> *)&local_78);
            if (-1 < (int)uVar4) {
              lVar15 = 0;
              uVar4 = CLineSpectralPair::EnsureAsValidLsf<int>
                                (*(CMemoryMatrix<int> **)(_Dst + 0x30),0,0);
              local_84 = uVar4;
              if (-1 < (int)uVar4) {
                if ((*(int *)(this + 0xe4) == 0) || (*(int *)(this + 0xec) == 0)) {
LAB_18010ca1a:
                  *(InternalSubMatrix<unsigned_long> **)(this + 0xb0) = _Dst;
                  return uVar4;
                }
                this_00 = DynamicCastAssert<CAcousticProsodyTagger*___ptr64,ITTSHandler*___ptr64>
                                    (*(ITTSHandler **)(*(longlong *)(this + 0xc0) + 0x200),
                                     (long *)&local_84,lVar15);
                uVar4 = local_84;
                if (-1 < (int)local_84) {
                  uVar4 = CAcousticProsodyTagger::AdjustPitch<int>
                                    (this_00,*(CMemoryMatrix<unsigned_long> **)(_Dst + 0x18),param_2
                                     ,*(CMemoryMatrix<int> **)(_Dst + 0x28),param_1);
                  if (-1 < (int)uVar4) goto LAB_18010ca1a;
                }
              }
            }
          }
        }
      }
      goto LAB_18010ca28;
    }
  }
  uVar4 = 0x8007000e;
LAB_18010ca28:
  EndSegSynthesis<int>(this);
  return uVar4;
}

