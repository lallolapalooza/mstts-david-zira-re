
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CHTSAcousticModel::BuildHMMState(class CHTSOffsetLeafNode const *
   __ptr64,class CHMMState * __ptr64)const __ptr64 */

long __thiscall
CHTSAcousticModel::BuildHMMState
          (CHTSAcousticModel *this,CHTSOffsetLeafNode *param_1,CHMMState *param_2)

{
  CHMMState *pCVar1;
  CAtlArray<CHMMModel*___ptr64,TTS::CElementTraits<CHMMModel*___ptr64>_> *this_00;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  errno_t eVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  CLatticeProcessorBase **ppCVar12;
  void *pvVar13;
  CLatticeProcessorBase **_Size;
  CLatticeProcessorBase **_Dst;
  CHMMGaussMixture *pCVar14;
  undefined4 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  CLatticeProcessorBase **_Src;
  ulonglong uVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  ulonglong local_res10;
  void *local_70;
  
  if ((param_1 == (CHTSOffsetLeafNode *)0x0) || (param_2 == (CHMMState *)0x0)) {
    return -0x7ff8ffa9;
  }
  lVar4 = *(longlong *)param_1;
  uVar2 = *(uint *)(*(longlong *)(this + 8) + 0x1c);
  uVar20 = (ulonglong)uVar2;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 8);
  pCVar1 = param_2 + 8;
  uVar18 = (ulonglong)uVar2;
  _Src = (CLatticeProcessorBase **)0x400;
  if (uVar2 == 0) {
    if (*(CLatticeProcessorBase ***)pCVar1 != (CLatticeProcessorBase **)0x0) {
      operator_delete__(*(CLatticeProcessorBase ***)pCVar1);
      *(CLatticeProcessorBase ***)pCVar1 = (CLatticeProcessorBase **)0x0;
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    uVar16 = 0;
    uVar18 = 0;
  }
  else if (*(ulonglong *)(param_2 + 0x18) < uVar20) {
    uVar10 = (ulonglong)*(int *)(param_2 + 0x20);
    if (*(CLatticeProcessorBase ***)pCVar1 == (CLatticeProcessorBase **)0x0) {
      if (uVar20 < uVar10) {
        uVar20 = uVar10;
      }
      uVar16 = TTS::
               CAtlArray<CLatticeProcessorBase*___ptr64,TTS::CElementTraits<CLatticeProcessorBase*___ptr64>_>
               ::NewBufferArray(uVar20,(CLatticeProcessorBase ***)pCVar1);
      if ((int)uVar16 < 0) {
LAB_180004171:
        if ((int)uVar16 < 0) goto LAB_180003f4a;
        goto LAB_180003faf;
      }
    }
    else {
      if (uVar10 == 0) {
        uVar10 = *(ulonglong *)(param_2 + 0x10) >> 3;
        if (uVar10 < 4) {
          uVar10 = 4;
        }
        else if (0x400 < uVar10) {
          uVar10 = 0x400;
        }
      }
      uVar10 = uVar10 + *(ulonglong *)(param_2 + 0x18);
      if (uVar20 < uVar10) {
        uVar20 = uVar10;
      }
      if (uVar20 < *(ulonglong *)(param_2 + 0x10)) {
        uVar16 = 0x8000ffff;
        goto LAB_180003f4a;
      }
      ppCVar12 = (CLatticeProcessorBase **)0x0;
      if (0x1fffffff < uVar20) {
        uVar16 = 0x8007000e;
        goto LAB_180003f4a;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar20;
      _Size = SUB168(ZEXT816(8) * auVar7,0);
      if (SUB168(ZEXT816(8) * auVar7,8) == 0) {
        uVar16 = 0;
        _Dst = operator_new__((__uint64)_Size,&std::nothrow);
        if (_Dst == (CLatticeProcessorBase **)0x0) {
          uVar16 = 0x8007000e;
        }
        else {
          memset(_Dst,0,(size_t)_Size);
          _Src = _Size;
          ppCVar12 = _Dst;
        }
      }
      else {
        uVar16 = 0x80070216;
      }
      if ((int)uVar16 < 0) goto LAB_180004171;
      _Src = *(CLatticeProcessorBase ***)pCVar1;
      eVar9 = memmove_s(ppCVar12,*(longlong *)(param_2 + 0x10) * 8,_Src,
                        *(longlong *)(param_2 + 0x10) * 8);
      ATL::AtlCrtErrorCheck(eVar9);
      operator_delete__(*(CLatticeProcessorBase ***)pCVar1);
      *(CLatticeProcessorBase ***)pCVar1 = ppCVar12;
    }
    *(ulonglong *)(param_2 + 0x18) = uVar20;
  }
  else {
    uVar16 = 0;
  }
LAB_180003faf:
  uVar20 = 0;
  local_res10 = 0;
  *(ulonglong *)(param_2 + 0x10) = uVar18;
LAB_180003fbb:
  do {
    if (uVar2 <= (uint)uVar20) {
      return uVar16;
    }
    puVar11 = operator_new(0x30,&std::nothrow);
    if (puVar11 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
LAB_180004586:
      uVar16 = 0x8007000e;
    }
    else {
      *puVar11 = CHMMStream::_vftable_;
      puVar11[1] = 0;
      puVar11[2] = 0;
      puVar11[3] = 0;
      *(undefined4 *)(puVar11 + 4) = 0;
      *(undefined4 *)(puVar11 + 5) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = 0;
      if (puVar11 == (undefined8 *)0x0) goto LAB_180004586;
      if (-1 < (int)uVar16) {
        uVar21 = *(uint *)(*(longlong *)(*(longlong *)(this + 8) + 0x20) + uVar20 * 4);
        _Src = (CLatticeProcessorBase **)(ulonglong)uVar21;
        *(uint *)(puVar11 + 5) = uVar21;
        uVar3 = *(uint *)(lVar4 + uVar20 * 4);
        puVar22 = (undefined4 *)((ulonglong)uVar3 + *(longlong *)(this + 0x20));
        uVar20 = (ulonglong)(*(int *)(this + 0x28) - uVar3);
        uVar16 = ~-(uint)(uVar3 < *(uint *)(this + 0x28)) & 0x80048018;
        if (uVar3 < *(uint *)(this + 0x28)) {
          uVar18 = (ulonglong)*(uint *)(*(longlong *)(this + 8) + 0x4c);
          uVar16 = 0;
          if (uVar18 == 0) {
            if ((void *)puVar11[1] != (void *)0x0) {
              operator_delete__((void *)puVar11[1]);
              puVar11[1] = 0;
            }
            puVar11[2] = 0;
            puVar11[3] = 0;
          }
          else if ((ulonglong)puVar11[3] < uVar18) {
            uVar10 = (ulonglong)*(int *)(puVar11 + 4);
            if (puVar11[1] == 0) {
              uVar17 = uVar18;
              if (uVar18 < uVar10) {
                uVar17 = uVar10;
              }
              puVar11[1] = 0;
              if (uVar17 < 0x20000000) {
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar17;
                ppCVar12 = SUB168(ZEXT816(8) * auVar8,0);
                if (SUB168(ZEXT816(8) * auVar8,8) == 0) {
                  pvVar13 = operator_new__((__uint64)ppCVar12,&std::nothrow);
                  if (pvVar13 == (void *)0x0) {
                    uVar16 = 0x8007000e;
                  }
                  else {
                    memset(pvVar13,0,(size_t)ppCVar12);
                    puVar11[1] = pvVar13;
                    uVar16 = 0;
                    _Src = ppCVar12;
                  }
                }
                else {
                  uVar16 = 0x80070216;
                }
                if ((int)uVar16 < 0) {
LAB_180004249:
                  if ((int)uVar16 < 0) goto LAB_180004258;
                }
                else {
                  puVar11[3] = uVar17;
                }
                goto LAB_18000424f;
              }
LAB_18000454b:
              uVar16 = 0x8007000e;
            }
            else {
              if (uVar10 == 0) {
                uVar10 = (ulonglong)puVar11[2] >> 3;
                if (uVar10 < 4) {
                  uVar10 = 4;
                }
                else if (0x400 < uVar10) {
                  uVar10 = 0x400;
                }
              }
              uVar10 = uVar10 + puVar11[3];
              uVar17 = uVar18;
              if (uVar18 < uVar10) {
                uVar17 = uVar10;
              }
              if ((ulonglong)puVar11[2] <= uVar17) {
                local_70 = (void *)0x0;
                if (0x1fffffff < uVar17) goto LAB_18000454b;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar17;
                ppCVar12 = SUB168(ZEXT816(8) * auVar6,0);
                if (SUB168(ZEXT816(8) * auVar6,8) == 0) {
                  uVar16 = 0;
                  pvVar13 = operator_new__((__uint64)ppCVar12,&std::nothrow);
                  if (pvVar13 == (void *)0x0) {
                    uVar16 = 0x8007000e;
                  }
                  else {
                    memset(pvVar13,0,(size_t)ppCVar12);
                    _Src = ppCVar12;
                    local_70 = pvVar13;
                  }
                }
                else {
                  uVar16 = 0x80070216;
                }
                if ((int)uVar16 < 0) goto LAB_180004249;
                _Src = (CLatticeProcessorBase **)puVar11[1];
                eVar9 = memmove_s(local_70,puVar11[2] * 8,_Src,puVar11[2] * 8);
                ATL::AtlCrtErrorCheck(eVar9);
                operator_delete__((void *)puVar11[1]);
                puVar11[1] = local_70;
                puVar11[3] = uVar17;
                goto LAB_18000424f;
              }
              uVar16 = 0x8000ffff;
            }
          }
          else {
LAB_18000424f:
            puVar11[2] = uVar18;
          }
        }
LAB_180004258:
        uVar18 = 0;
        if (-1 < (int)uVar16) {
LAB_18000426c:
          if ((ulonglong)puVar11[2] <= uVar18) goto LAB_180004479;
          pCVar14 = operator_new(0x38,&std::nothrow);
          if (pCVar14 == (CHMMGaussMixture *)0x0) {
            pCVar14 = (CHMMGaussMixture *)0x0;
LAB_18000440d:
            uVar16 = 0x8007000e;
          }
          else {
            *(undefined ***)pCVar14 = CHMMGaussMixture::_vftable_;
            *(undefined4 *)(pCVar14 + 8) = 1;
            *(undefined4 *)(pCVar14 + 0xc) = 0;
            *(undefined4 *)(pCVar14 + 0x10) = 0;
            *(undefined4 *)(pCVar14 + 0x14) = 0;
            *(undefined8 *)(pCVar14 + 0x18) = 0;
            *(undefined8 *)(pCVar14 + 0x20) = 0;
            *(undefined8 *)(pCVar14 + 0x28) = 0;
            *(undefined8 *)(pCVar14 + 0x30) = 0;
            if (pCVar14 == (CHMMGaussMixture *)0x0) goto LAB_18000440d;
            if ((int)uVar16 < 0) goto LAB_1800045cf;
            if (3 < uVar20) {
              *(undefined4 *)(pCVar14 + 0xc) = *puVar22;
              puVar22 = puVar22 + 1;
              uVar20 = uVar20 - 4;
              uVar10 = SUB168(ZEXT416(uVar21) * ZEXT816(4),0);
              if (SUB168(ZEXT416(uVar21) * ZEXT816(4),8) != 0) {
LAB_180004417:
                uVar16 = 0x80070216;
                goto LAB_1800045cf;
              }
              if (uVar10 <= uVar20) {
                puVar23 = (undefined4 *)((longlong)puVar22 + uVar10);
                uVar20 = uVar20 - uVar10;
                puVar15 = operator_new(0x20,&std::nothrow);
                _Src = (CLatticeProcessorBase **)CONCAT44(0,uVar21);
                if (puVar15 != (undefined4 *)0x0) {
                  *puVar15 = 1;
                  puVar15[1] = uVar21;
                  *(undefined4 **)(puVar15 + 2) = puVar22;
                  puVar15[4] = 0;
                  *(undefined4 **)(puVar15 + 6) = puVar22;
                }
                *(undefined4 **)(pCVar14 + 0x18) = puVar15;
                puVar22 = puVar23;
                if (puVar15 != (undefined4 *)0x0) {
                  *(undefined4 *)(pCVar14 + 0x10) = 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = _Src;
                  uVar10 = SUB168(auVar5 * ZEXT816(4),0);
                  if (SUB168(auVar5 * ZEXT816(4),8) != 0) goto LAB_180004417;
                  if (uVar20 < uVar10) goto LAB_180004421;
                  puVar22 = (undefined4 *)((longlong)puVar23 + uVar10);
                  uVar20 = uVar20 - uVar10;
                  puVar15 = operator_new(0x20,&std::nothrow);
                  if (puVar15 != (undefined4 *)0x0) {
                    *puVar15 = 1;
                    puVar15[1] = uVar21;
                    *(undefined4 **)(puVar15 + 2) = puVar23;
                    puVar15[4] = 0;
                    *(undefined4 **)(puVar15 + 6) = puVar23;
                  }
                  *(undefined4 **)(pCVar14 + 0x20) = puVar15;
                  if (puVar15 == (undefined4 *)0x0) goto LAB_18000440d;
                  *(undefined4 *)(pCVar14 + 0x10) = 1;
                  if ((ulonglong)puVar11[2] <= uVar18) {
                    uVar16 = 0x80070057;
                    goto LAB_1800045cf;
                  }
                  *(CHMMGaussMixture **)(puVar11[1] + uVar18 * 8) = pCVar14;
                  uVar16 = 0;
                  uVar18 = (ulonglong)((int)uVar18 + 1);
                  goto LAB_18000426c;
                }
                goto LAB_18000440d;
              }
            }
LAB_180004421:
            uVar16 = 0x8000ffff;
          }
LAB_1800045cf:
          if (pCVar14 != (CHMMGaussMixture *)0x0) {
            CHMMGaussMixture::Release(pCVar14);
          }
          uVar18 = (ulonglong)((int)uVar18 + 1);
          if ((int)uVar16 < 0) goto LAB_18000443b;
          goto LAB_18000426c;
        }
LAB_18000443b:
        this_00 = (CAtlArray<CHMMModel*___ptr64,TTS::CElementTraits<CHMMModel*___ptr64>_> *)
                  (puVar11 + 1);
        uVar20 = puVar11[2];
        uVar18 = 0;
        if (uVar20 != 0) {
          do {
            pCVar14 = *(CHMMGaussMixture **)(*(longlong *)this_00 + uVar18 * 8);
            if (pCVar14 != (CHMMGaussMixture *)0x0) {
              CHMMGaussMixture::Release(pCVar14);
              *(undefined8 *)(*(longlong *)this_00 + uVar18 * 8) = 0;
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar20);
        }
        TTS::CAtlArray<CHMMModel*___ptr64,TTS::CElementTraits<CHMMModel*___ptr64>_>::SetCount
                  (this_00,0,(int)_Src);
        *(undefined4 *)(puVar11 + 5) = 0;
LAB_180004479:
        *(undefined4 *)((longlong)puVar11 + 0x2c) = *(undefined4 *)(lVar4 + local_res10 * 4);
        uVar20 = local_res10;
        if (-1 < (int)uVar16) {
          if (local_res10 < *(ulonglong *)(param_2 + 0x10)) {
            *(undefined8 **)(*(longlong *)(param_2 + 8) + local_res10 * 8) = puVar11;
            uVar16 = 0;
            uVar20 = (ulonglong)((int)local_res10 + 1U);
            local_res10 = (ulonglong)((int)local_res10 + 1U);
            goto LAB_180003fbb;
          }
          uVar16 = 0x80070057;
        }
      }
    }
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11);
    }
    uVar21 = (int)uVar20 + 1;
    uVar20 = (ulonglong)uVar21;
    local_res10 = (ulonglong)uVar21;
  } while (-1 < (int)uVar16);
LAB_180003f4a:
  iVar19 = (int)_Src;
  uVar20 = *(ulonglong *)(param_2 + 0x10);
  uVar18 = 0;
  if (uVar20 != 0) {
    do {
      lVar4 = *(longlong *)(param_2 + 8);
      puVar11 = *(undefined8 **)(lVar4 + uVar18 * 8);
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)();
        *(undefined8 *)(lVar4 + uVar18 * 8) = 0;
      }
      iVar19 = (int)_Src;
      uVar18 = uVar18 + 1;
    } while (uVar18 < uVar20);
  }
  TTS::CAtlArray<CHMMModel*___ptr64,TTS::CElementTraits<CHMMModel*___ptr64>_>::SetCount
            ((CAtlArray<CHMMModel*___ptr64,TTS::CElementTraits<CHMMModel*___ptr64>_> *)(param_2 + 8)
             ,0,iVar19);
  return uVar16;
}

