
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: long __cdecl CUnitSelector::SearchOneColumnByViterbi<2>(class WAVE_UNIT_COST_LIST *
   __ptr64,class WAVE_UNIT_COST_LIST * __ptr64,class CDataTableCursor & __ptr64,int,class
   CUnitSelector const * __ptr64) __ptr64 */

long __thiscall
CUnitSelector::SearchOneColumnByViterbi<2>
          (CUnitSelector *this,WAVE_UNIT_COST_LIST *param_1,WAVE_UNIT_COST_LIST *param_2,
          CDataTableCursor *param_3,int param_4,CUnitSelector *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  CUnitSelector *this_00;
  CUnitSelector *this_01;
  WAVE_UNIT_COST_LIST *pWVar13;
  CTask *pCVar14;
  float *_Dst;
  WAVE_UNIT_COST_LIST *pWVar15;
  ulonglong uVar16;
  CTTSString *pCVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackY_368 [32];
  float *local_318;
  float *local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  longlong local_2e0 [3];
  undefined4 local_2c8;
  longlong local_2c0 [3];
  undefined4 local_2a8;
  longlong local_2a0 [3];
  undefined4 local_288;
  longlong local_280 [3];
  undefined4 local_268;
  WAVE_UNIT_COST_LIST *local_260;
  CUnitSelector *local_258;
  CUnitSelector *local_250;
  WAVE_UNIT_COST_LIST *local_248;
  WAVE_UNIT_COST_LIST *local_240;
  float local_238;
  float local_234;
  CDataTableCursor *local_230;
  CDataTableCursor *local_228;
  longlong *local_220;
  longlong *local_218;
  CDataTableCursor *local_210;
  CDataTableCursor *local_208;
  longlong *local_200;
  longlong *local_1f8;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  CDataTableCursor local_1d8 [24];
  undefined8 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  CDataTableCursor local_158 [24];
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  CDataTableCursor local_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie ^ (ulonglong)auStackY_368;
  if ((((param_1 == (WAVE_UNIT_COST_LIST *)0x0) || (param_2 == (WAVE_UNIT_COST_LIST *)0x0)) ||
      (*(int *)(param_1 + 0x68) == 0)) || (*(int *)(param_2 + 0x68) == 0)) {
    return -0x7ff8ffa9;
  }
  this_01 = this;
  if (param_5 != (CUnitSelector *)0x0) {
    this_01 = param_5;
  }
  lVar6 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 1;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_280[0] = 0;
  local_280[1] = 0;
  local_280[2] = 0;
  local_268 = 0;
  local_2a0[0] = 0;
  local_2a0[1] = 0;
  local_2a0[2] = 0;
  local_288 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 1;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  bVar5 = false;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 1;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_2c0[0] = 0;
  local_2c0[1] = 0;
  local_2c0[2] = 0;
  local_2a8 = 0;
  local_2e0[0] = 0;
  local_2e0[1] = 0;
  local_2e0[2] = 0;
  local_2c8 = 0;
  bVar3 = false;
  iVar19 = 0;
  pWVar15 = param_2;
  if (param_4 == 0) {
    bVar4 = false;
    if (*(int *)(this + 0x150) == 0) {
LAB_1800fd2d0:
      lVar6 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                        ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)local_280,
                         (ulonglong)*(uint *)(param_2 + 0x68),(int)pWVar15);
      if ((-1 < lVar6) &&
         (lVar6 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                            ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                             local_2a0,(ulonglong)*(uint *)(param_1 + 0x68),(int)pWVar15),
         -1 < lVar6)) {
        uVar12 = 0;
        if (*(int *)(param_2 + 0x68) != 0) {
          pCVar17 = (CTTSString *)(*(longlong *)param_2 + 0x108);
          do {
            if (((*(int *)(this + 0x150) == 0) || (*(longlong *)(pCVar17 + 8) == 0)) ||
               (iVar8 = operator!=(pCVar17,(ushort *)L"general"), iVar8 == 0)) {
LAB_1800fd36a:
              lVar11 = *(longlong *)(param_3 + 0x28);
            }
            else {
              iVar8 = operator!=(pCVar17,(ushort *)L"none");
              lVar11 = local_b0;
              if (iVar8 == 0) goto LAB_1800fd36a;
            }
            uVar10 = *(uint *)(pCVar17 + -0x60);
            if (lVar11 != 0) {
              uVar10 = (uint)*(ushort *)(lVar11 + (ulonglong)uVar10 * 2);
            }
            *(uint *)(local_280[0] + (uVar12 & 0xffffffff) * 4) = uVar10;
            uVar10 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar10;
            pCVar17 = pCVar17 + 0x140;
          } while (uVar10 < *(uint *)(param_2 + 0x68));
        }
        uVar12 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
          pCVar17 = (CTTSString *)(*(longlong *)param_1 + 0x108);
          do {
            if (((*(int *)(this + 0x150) == 0) || (*(longlong *)(pCVar17 + 8) == 0)) ||
               (iVar8 = operator!=(pCVar17,(ushort *)L"general"), iVar8 == 0)) {
LAB_1800fd405:
              lVar11 = *(longlong *)(param_3 + 0x30);
            }
            else {
              iVar8 = operator!=(pCVar17,(ushort *)L"none");
              lVar11 = local_a8;
              if (iVar8 == 0) goto LAB_1800fd405;
            }
            uVar10 = *(uint *)(pCVar17 + -0x60);
            if (lVar11 != 0) {
              uVar10 = (uint)*(ushort *)(lVar11 + (ulonglong)uVar10 * 2);
            }
            *(uint *)(local_2a0[0] + (uVar12 & 0xffffffff) * 4) = uVar10;
            uVar10 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar10;
            pCVar17 = pCVar17 + 0x140;
          } while (uVar10 < *(uint *)(param_1 + 0x68));
        }
      }
    }
    else {
      if ((*(int *)(param_1 + 0xb4) != 0) || (iVar8 = 0, *(int *)(param_2 + 0xb4) != 0)) {
        pWVar15 = (WAVE_UNIT_COST_LIST *)(ulonglong)*(uint *)(param_2 + 0xac);
        lVar6 = CConcatenationCostTableManager::GetCursor
                          (*(CConcatenationCostTableManager **)(this + 200),
                           *(ulong *)(param_1 + 0xac),*(uint *)(param_2 + 0xac),local_d8);
        iVar8 = *(int *)(param_1 + 0xb4);
      }
      bVar4 = false;
      if ((*(CConcatenationCostTableManager **)(this + 0xd0) ==
           (CConcatenationCostTableManager *)0x0) ||
         ((iVar8 == *(int *)(param_2 + 0xb4) && (iVar8 != 2)))) {
LAB_1800fd2c8:
        if (-1 < lVar6) goto LAB_1800fd2d0;
      }
      else {
        bVar3 = true;
        if ((*(int *)(*(longlong *)(param_1 + 0xa0) + 0xb0) == 1) &&
           (*(int *)(*(longlong *)(param_2 + 0xa0) + 0xb0) == 2)) {
          iVar19 = 1;
          bVar4 = false;
          goto LAB_1800fd2c8;
        }
        if ((-1 < lVar6) && ((iVar8 != 1 || (iVar8 = 1, *(int *)(param_2 + 0xb4) != 0)))) {
          pWVar15 = (WAVE_UNIT_COST_LIST *)0xffffffff;
          lVar6 = CConcatenationCostTableManager::GetCursor
                            (*(CConcatenationCostTableManager **)(this + 0xd0),0xffffffff,0xffffffff
                             ,local_158);
          bVar5 = true;
          iVar8 = *(int *)(param_1 + 0xb4);
        }
        bVar4 = false;
        iVar19 = 0;
        if (-1 < lVar6) {
          if ((iVar8 == 0) && (*(int *)(param_2 + 0xb4) == 1)) goto LAB_1800fd2d0;
          pWVar15 = (WAVE_UNIT_COST_LIST *)0xfffffffe;
          lVar6 = CConcatenationCostTableManager::GetCursor
                            (*(CConcatenationCostTableManager **)(this + 0xd0),0xfffffffe,0xfffffffe
                             ,local_1d8);
          bVar4 = true;
          iVar19 = 0;
          goto LAB_1800fd2c8;
        }
      }
    }
    if ((!bVar3) || (iVar19 != 0)) {
      if (-1 < lVar6) goto LAB_1800fd5b6;
    }
    else if ((-1 < lVar6) &&
            ((lVar6 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                                ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                                 local_2c0,(ulonglong)*(uint *)(param_2 + 0x68),(int)pWVar15),
             -1 < lVar6 &&
             (lVar6 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                                ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                                 local_2e0,(ulonglong)*(uint *)(param_1 + 0x68),(int)pWVar15),
             -1 < lVar6)))) {
      uVar12 = 0;
      if (*(int *)(param_2 + 0x68) != 0) {
        pCVar17 = (CTTSString *)(*(longlong *)param_2 + 0x108);
        do {
          if ((*(longlong *)(pCVar17 + 8) == 0) ||
             (iVar8 = operator!=(pCVar17,(ushort *)L"general"), iVar8 == 0)) {
LAB_1800fd4e6:
            iVar7 = (int)uVar12;
            if (bVar4) {
              lVar11 = local_1b0;
LAB_1800fd4f2:
              iVar7 = (int)uVar12;
              uVar10 = *(uint *)(pCVar17 + -0x60);
              if (lVar11 != 0) {
                uVar10 = (uint)*(ushort *)(lVar11 + (ulonglong)uVar10 * 2);
              }
              *(uint *)(local_2c0[0] + (uVar12 & 0xffffffff) * 4) = uVar10;
            }
          }
          else {
            iVar8 = operator!=(pCVar17,(ushort *)L"none");
            iVar7 = (int)uVar12;
            if (iVar8 == 0) goto LAB_1800fd4e6;
            if (bVar5) {
              lVar11 = local_130;
              goto LAB_1800fd4f2;
            }
          }
          uVar12 = (ulonglong)(iVar7 + 1U);
          pCVar17 = pCVar17 + 0x140;
        } while (iVar7 + 1U < *(uint *)(param_2 + 0x68));
      }
      uVar12 = 0;
      if (*(int *)(param_1 + 0x68) != 0) {
        pCVar17 = (CTTSString *)(*(longlong *)param_1 + 0x108);
        do {
          if ((*(longlong *)(pCVar17 + 8) == 0) ||
             (iVar8 = operator!=(pCVar17,(ushort *)L"general"), iVar8 == 0)) {
LAB_1800fd579:
            iVar7 = (int)uVar12;
            if (bVar5) {
              lVar11 = local_128;
LAB_1800fd584:
              iVar7 = (int)uVar12;
              uVar10 = *(uint *)(pCVar17 + -0x60);
              if (lVar11 != 0) {
                uVar10 = (uint)*(ushort *)(lVar11 + (ulonglong)uVar10 * 2);
              }
              *(uint *)(local_2e0[0] + (uVar12 & 0xffffffff) * 4) = uVar10;
            }
          }
          else {
            iVar8 = operator!=(pCVar17,(ushort *)L"none");
            iVar7 = (int)uVar12;
            if (iVar8 == 0) goto LAB_1800fd579;
            if (bVar4) {
              lVar11 = local_1a8;
              goto LAB_1800fd584;
            }
          }
          uVar12 = (ulonglong)(iVar7 + 1U);
          pCVar17 = pCVar17 + 0x140;
        } while (iVar7 + 1U < *(uint *)(param_1 + 0x68));
      }
      goto LAB_1800fd5b6;
    }
  }
  else if (*(uint *)(this + 0x144) == 0) {
LAB_1800fd172:
    if (*(uint *)(this_01 + 0x144) != 0) {
      if (*(uint *)(this_01 + 0x144) <= *(uint *)(param_1 + 0xa8)) goto LAB_1800fd1a1;
      *(undefined4 *)(param_1 + 0x8c) =
           *(undefined4 *)
            (*(longlong *)(this_01 + 0x130) + (ulonglong)*(uint *)(param_1 + 0xa8) * 4);
    }
LAB_1800fd5b6:
    if (*(int *)(this + 0x100) != 0) {
      pWVar15 = param_2;
      lVar6 = SetPreNeighborIndex(this,param_1,param_2);
    }
  }
  else {
    if (*(uint *)(param_2 + 0xa8) < *(uint *)(this + 0x144)) {
      *(undefined4 *)(param_2 + 0x88) =
           *(undefined4 *)(*(longlong *)(this + 0x128) + (ulonglong)*(uint *)(param_2 + 0xa8) * 4);
      goto LAB_1800fd172;
    }
LAB_1800fd1a1:
    lVar6 = -0x7fff0001;
  }
  fVar21 = 3.4028235e+38;
  *(undefined4 *)(param_2 + 0x94) = 0;
  if (*(int *)(param_1 + 0xb4) == 0) {
    if (*(int *)(param_2 + 0xb4) == 0) goto LAB_1800fd6e5;
LAB_1800fd5fd:
    bVar3 = false;
  }
  else {
    if ((*(int *)(param_1 + 0xb4) != 1) || (*(int *)(param_2 + 0xb4) != 1)) goto LAB_1800fd5fd;
LAB_1800fd6e5:
    bVar3 = true;
  }
  _Dst = (float *)0x0;
  local_300 = (float *)0x0;
  local_308 = (float *)0x0;
  local_318 = (float *)0x0;
  local_310 = (float *)0x0;
  local_2f8 = (float *)0x0;
  iVar8 = 0;
  if ((lVar6 < 0) ||
     ((param_4 == 0 &&
      (((*(int *)(this + 0x150) == 0 || (*(longlong *)(this + 0xd0) != 0)) || (bVar3))))))
  goto LAB_1800fd860;
  uVar18 = (uint)((ulonglong)*(uint *)(this + 0xdc) * 4 + 0xf >> 2) & 0xfffffffc;
  iVar8 = *(int *)(param_2 + 0x68);
  uVar10 = iVar8 * 2 + *(int *)(param_1 + 0x68) * 2;
  uVar16 = (ulonglong)uVar10;
  uVar12 = 4;
  iVar7 = CNewArrayHelper::IsGoodForIntegerOverflow(4,(ulonglong)uVar10);
  if (iVar7 == 0) {
    _Dst = (float *)0x0;
LAB_1800fd7ab:
    lVar6 = -0x7ff8fff2;
  }
  else {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar12 & 0xffffffff;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16;
    local_260 = SUB168(auVar1 * auVar2,0);
    if (SUB168(auVar1 * auVar2,8) != 0) {
      local_260 = (WAVE_UNIT_COST_LIST *)0xffffffffffffffff;
    }
    _Dst = operator_new__((__uint64)local_260,&std::nothrow);
    if (_Dst == (float *)0x0) {
      _Dst = (float *)0x0;
    }
    else {
      pWVar15 = local_260;
      memset(_Dst,0,(size_t)local_260);
    }
    if (_Dst == (float *)0x0) goto LAB_1800fd7ab;
    local_318 = _Dst + (uint)(iVar8 * 2);
    iVar8 = *(int *)(param_2 + 0x68);
    local_300 = (float *)_o__aligned_malloc((ulonglong)
                                            (uVar18 * iVar8 + uVar18 * *(int *)(param_1 + 0x68)) <<
                                            2,0x10);
    if (local_300 == (float *)0x0) goto LAB_1800fd7ab;
    local_310 = local_300 + uVar18 * iVar8;
    uVar10 = uVar18 * *(int *)(param_2 + 0x68) * 2;
    local_308 = (float *)_o__aligned_malloc((ulonglong)
                                            (uVar10 + uVar18 * *(int *)(param_1 + 0x68) * 2) << 2,
                                            0x10);
    if (local_308 == (float *)0x0) goto LAB_1800fd7ab;
    local_2f8 = local_308 + uVar10;
  }
  iVar8 = CTTSPhone::IsSonorant(*(CTTSPhone **)(*(longlong *)(param_1 + 0xa0) + 0x10));
  if (iVar8 == 0) {
LAB_1800fd7e2:
    iVar8 = 0;
  }
  else {
    iVar7 = CTTSPhone::IsSonorant(*(CTTSPhone **)(*(longlong *)(param_2 + 0xa0) + 0x10));
    iVar8 = 1;
    if (iVar7 == 0) goto LAB_1800fd7e2;
  }
  if (-1 < lVar6) {
    pWVar15 = (WAVE_UNIT_COST_LIST *)0x0;
    lVar6 = PrepareColumnForRuntimeCC(this,param_2,0,iVar8,_Dst,local_308,local_300,uVar18);
    if (-1 < lVar6) {
      pWVar15 = (WAVE_UNIT_COST_LIST *)0x1;
      lVar6 = PrepareColumnForRuntimeCC
                        (this_01,param_1,1,iVar8,local_318,local_2f8,local_310,uVar18);
    }
  }
LAB_1800fd860:
  this_00 = this;
  pWVar13 = param_2;
  fVar20 = GetTargetCostWeight(this,param_2);
  local_234 = CalcSmoothnessCostWeight(this_00,pWVar13);
  local_230 = local_d8;
  local_220 = local_280;
  local_218 = local_2a0;
  local_210 = local_158;
  local_208 = local_1d8;
  local_200 = local_2c0;
  local_1f8 = local_2e0;
  local_1f0 = param_4;
  local_258 = this_01;
  local_250 = this;
  local_248 = param_1;
  local_240 = param_2;
  local_238 = fVar20;
  local_228 = param_3;
  local_1ec = iVar8;
  local_1e8 = iVar19;
  if ((1 < *(uint *)(this + 0x1b4)) && (-1 < lVar6)) {
    lVar6 = CMemoryArray<unsigned_char>::EnsureCount
                      ((CMemoryArray<unsigned_char> *)(this + 0x860),*(int *)(param_2 + 0x68) << 5);
  }
  uVar18 = 0;
  uVar10 = *(uint *)(param_2 + 0x68);
  if (uVar10 != 0) {
    do {
      if (lVar6 < 0) break;
      if (*(uint *)(this + 0x1b4) < 2) {
        lVar6 = CCalculateRouteCostHelper<2>::CalculateOneCandidate
                          ((CCalculateRouteCostHelper<2> *)&local_258,uVar18);
      }
      else {
        pCVar14 = (CTask *)((ulonglong)uVar18 * 0x20 + *(longlong *)(this + 0x868));
        *(undefined ***)pCVar14 = CCalculateRouteCostTask<2>::_vftable_;
        *(undefined4 *)(pCVar14 + 0x10) = 0;
        *(uint *)(pCVar14 + 0x14) = uVar18;
        *(CUnitSelector ***)(pCVar14 + 0x18) = &local_258;
        CSpTaskQueue::AddTask((CSpTaskQueue *)(this + 0x1b8),pCVar14,SUB81(pWVar15,0));
      }
      uVar18 = uVar18 + 1;
      uVar10 = *(uint *)(param_2 + 0x68);
    } while (uVar18 < uVar10);
  }
  if ((1 < *(uint *)(this + 0x1b4)) && (-1 < lVar6)) {
    lVar6 = CSpTaskQueue::Wait((CSpTaskQueue *)(this + 0x1b8));
    if ((-1 < lVar6) && (uVar12 = 0, *(int *)(param_2 + 0x68) != 0)) {
      do {
        if (lVar6 < 0) break;
        lVar6 = *(long *)(uVar12 * 0x20 + *(longlong *)(this + 0x868) + 0x10);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < *(uint *)(param_2 + 0x68));
    }
    uVar18 = 0;
    uVar10 = 0;
    if (*(int *)(param_2 + 0x68) != 0) {
      do {
        (**(code **)(*(longlong *)((ulonglong)uVar18 * 0x20 + *(longlong *)(this + 0x868)) + 8))();
        uVar18 = uVar18 + 1;
        uVar10 = *(uint *)(param_2 + 0x68);
      } while (uVar18 < uVar10);
    }
  }
  uVar18 = 0;
  if (uVar10 != 0) {
    pfVar9 = (float *)(*(longlong *)param_2 + 0x1c);
    do {
      if (lVar6 < 0) break;
      if (*pfVar9 <= fVar21 && fVar21 != *pfVar9) {
        fVar21 = *pfVar9;
        *(uint *)(param_2 + 0x94) = uVar18;
      }
      uVar18 = uVar18 + 1;
      pfVar9 = pfVar9 + 0x50;
    } while (uVar18 < uVar10);
  }
  if (_Dst != (float *)0x0) {
    operator_delete__(_Dst);
  }
  if (local_300 != (float *)0x0) {
    _o__aligned_free(local_300);
  }
  if (local_308 != (float *)0x0) {
    _o__aligned_free(local_308);
  }
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_2e0);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_2c0);
  CDataTableCursor::~CDataTableCursor(local_1d8);
  CDataTableCursor::~CDataTableCursor(local_158);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_2a0);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)local_280);
  CDataTableCursor::~CDataTableCursor(local_d8);
  return lVar6;
}

