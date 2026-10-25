
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: long __cdecl CHTSAcousticModel::LoadDecisionTrees(unsigned char const *
   __ptr64,unsigned __int64,class CTTSFeatureQuestion const * __ptr64,unsigned long) __ptr64 */

long __thiscall
CHTSAcousticModel::LoadDecisionTrees
          (CHTSAcousticModel *this,uchar *param_1,__uint64 param_2,CTTSFeatureQuestion *param_3,
          ulong param_4)

{
  int iVar1;
  undefined1 auVar2 [16];
  CLwHuffDecoder *this_00;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulonglong uVar6;
  __uint64 _Var7;
  ulonglong *puVar8;
  char *pcVar9;
  ulonglong uVar10;
  CHTSDecisionTree *this_01;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  __uint64 *p_Var15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  void *pvVar19;
  ulonglong uVar20;
  longlong lVar21;
  CHTSDecisionTreeSet *this_02;
  CLwHuffCodec *pCVar22;
  uint *local_res10;
  ulonglong local_res18;
  CTTSFeatureQuestion *local_res20;
  uint local_e8;
  ulong local_e4;
  uint *local_e0;
  ulonglong local_d8;
  CLwHuffDecoder *local_d0;
  uint local_c4;
  void *local_c0;
  CLwHuffCodec *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  uint *local_a0;
  ulonglong local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  CHTSDecisionTreeSet *local_78;
  uint *local_70;
  undefined4 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_a0 = (uint *)0x0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_d0 = (CLwHuffDecoder *)0x0;
  _Var7 = param_2;
  local_res18 = param_2;
  local_res20 = param_3;
  local_e0 = (uint *)param_1;
  local_d8 = param_2;
  lVar4 = CHTSVoiceData::CreateDecompressor(*(CHTSVoiceData **)(this + 0x58),&local_d0);
  this_00 = local_d0;
  puVar12 = (uint *)param_1;
  local_res10 = (uint *)param_1;
  if (local_d0 != (CLwHuffDecoder *)0x0) {
    lVar4 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                      ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)&local_a0,
                       param_2 * 2,(int)_Var7);
    if (-1 < lVar4) {
      uVar6 = param_2 & 0xffffffff;
      lVar4 = (*(code *)**(undefined8 **)this_00)(this_00,param_1);
      uVar11 = local_res18;
      if (-1 < lVar4) {
        puVar12 = local_a0;
        uVar10 = 0;
        do {
          uVar20 = (ulonglong)((int)uVar10 + 1);
          if (local_98 <= uVar10) {
            lVar4 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                              ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)
                               &local_a0,uVar20 + uVar11,(int)uVar6);
            puVar12 = local_a0;
          }
          iVar14 = (int)uVar6;
          if (lVar4 < 0) break;
          lVar4 = CLwHuffCodec::Read((CLwHuffCodec *)this_00,(uchar *)(uVar10 + (longlong)puVar12));
          iVar14 = (int)uVar6;
          uVar10 = uVar20;
        } while (-1 < lVar4);
        puVar12 = local_e0;
        if ((lVar4 == -0x7ff8ffda) &&
           (lVar4 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                              ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)
                               &local_a0,uVar10,iVar14), -1 < lVar4)) {
          local_e0 = local_a0;
          local_res18 = local_98;
          local_d8 = local_98;
          local_res10 = local_a0;
          param_2 = local_98;
          puVar12 = local_a0;
        }
      }
    }
    (**(code **)(*(longlong *)this_00 + 8))(this_00,1);
  }
  if (-1 < lVar4) {
    lVar4 = 0;
    if (param_2 < 4) {
      lVar4 = -0x7fff0001;
    }
    else {
      *(uint *)(this + 0x18) = *puVar12;
      puVar12 = puVar12 + 1;
      param_2 = param_2 - 4;
      local_e0 = puVar12;
      local_d8 = param_2;
    }
  }
  local_e4 = 0;
  if (-1 < lVar4) {
    if (param_2 < 4) {
      lVar4 = -0x7fff0001;
    }
    else {
      local_e4 = *puVar12;
      puVar12 = puVar12 + 1;
      param_2 = param_2 - 4;
      uVar5 = *(uint *)(this + 0x18);
      local_e0 = puVar12;
      local_d8 = param_2;
      if (uVar5 == 0) {
        lVar4 = -0x7ffb7fe8;
      }
      else {
        uVar11 = CONCAT44(0,uVar5);
        if (uVar5 < 0x6666667) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar11;
          uVar6 = SUB168(ZEXT816(0x28) * auVar2,0);
          if (SUB168(ZEXT816(0x28) * auVar2,8) != 0) {
            uVar6 = 0xffffffffffffffff;
          }
          _Var7 = uVar6 + 8;
          if (0xfffffffffffffff7 < uVar6) {
            _Var7 = 0xffffffffffffffff;
          }
          puVar8 = operator_new__(_Var7,&std::nothrow);
          if (puVar8 == (ulonglong *)0x0) {
            puVar8 = (ulonglong *)0x0;
          }
          else {
            *puVar8 = uVar11;
            puVar8 = puVar8 + 1;
            _eh_vector_constructor_iterator_
                      (puVar8,0x28,uVar11,CHTSDecisionTreeSet::CHTSDecisionTreeSet,
                       CHTSDecisionTreeSet::~CHTSDecisionTreeSet);
          }
        }
        else {
          puVar8 = (ulonglong *)0x0;
        }
        *(ulonglong **)(this + 0x10) = puVar8;
        lVar4 = 0;
        if (puVar8 == (ulonglong *)0x0) {
          lVar4 = -0x7ff8fff2;
        }
      }
    }
  }
  iVar18 = 0;
  iVar14 = 0;
  *(undefined4 *)(this + 0x50) = 0xffffffff;
  *(undefined4 *)(this + 0x54) = 0;
  uVar11 = 0;
  local_c4 = 0;
  if (lVar4 < 0) {
LAB_180014c44:
    local_res18 = local_res18 & 0xffffffff00000000;
    if (-1 < lVar4) {
      uVar11 = 0;
      uVar5 = 0;
      do {
        if (*(uint *)(this + 0x18) <= uVar5) goto LAB_180014c59;
        uVar11 = (ulonglong)
                 (uint)(*(int *)(*(longlong *)(this + 0x10) + uVar11 * 0x28) - *(int *)(this + 0x50)
                       );
        if (*(int *)(*(longlong *)(this + 0x30) + uVar11 * 4) == -1) {
          lVar4 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetAt
                            ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                             (this + 0x30),uVar11,(ulong *)&local_res18);
        }
        else {
          lVar4 = -0x7fff0001;
        }
        uVar5 = uVar5 + 1;
        local_res18 = CONCAT44(local_res18._4_4_,uVar5);
        uVar11 = (ulonglong)uVar5;
      } while (-1 < lVar4);
    }
  }
  else {
    do {
      if (*(uint *)(this + 0x18) <= (uint)uVar11) {
        local_res18 = local_res18 & 0xffffffff00000000;
        p_Var15 = &local_d8;
        lVar4 = CMemoryLoadHelper::LoadValue<unsigned_long>
                          ((ulong *)&local_res18,(uchar **)&local_e0,p_Var15);
        if (lVar4 < 0) goto LAB_180014c44;
        if (((int)local_res18 == iVar18) &&
           (uVar5 = (*(int *)(this + 0x54) - *(int *)(this + 0x50)) + 1,
           *(uint *)(this + 0x18) <= uVar5)) {
          lVar4 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                            ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                             (this + 0x30),(ulonglong)uVar5,(int)p_Var15);
          _Var7 = 0;
          if (lVar4 < 0) goto LAB_180014c44;
          goto LAB_180015347;
        }
        lVar4 = -0x7ffb7fe8;
        break;
      }
      this_02 = (CHTSDecisionTreeSet *)(*(longlong *)(this + 0x10) + uVar11 * 0x28);
      local_78 = this_02;
      if (param_2 < 4) {
        lVar4 = -0x7fff0001;
        break;
      }
      uVar5 = *puVar12;
      puVar12 = puVar12 + 1;
      param_2 = param_2 - 4;
      *(uint *)this_02 = uVar5;
      if (uVar5 < *(uint *)(this + 0x50)) {
        *(uint *)(this + 0x50) = uVar5;
      }
      if (*(uint *)(this + 0x54) < *(uint *)this_02) {
        *(uint *)(this + 0x54) = *(uint *)this_02;
      }
      local_e0 = puVar12;
      local_d8 = param_2;
      if (*(int *)(*(longlong *)(*(longlong *)(this + 0x58) + 0x38) + 0xc) == 0) {
        lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSOffsetLeafNode>_>
                          (this_02,local_e4);
LAB_1800152cb:
        iVar18 = iVar14;
      }
      else {
        iVar1 = *(int *)(*(longlong *)(this + 8) + 8);
        if (iVar1 == 3) {
          lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSStateDurationLeafNode>_>
                            (this_02,local_e4);
          goto LAB_1800152cb;
        }
        if (iVar1 == 6) {
          lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSPhoneDurationLeafNode>_>
                            (this_02,local_e4);
          goto LAB_1800152cb;
        }
        if (iVar1 == 1) {
          lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSLSFLeafNode>_>
                            (this_02,local_e4);
          goto LAB_1800152cb;
        }
        if (iVar1 == 2) {
          lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSF0LeafNode>_>
                            (this_02,local_e4);
          goto LAB_1800152cb;
        }
        if (iVar1 == 7) {
          lVar4 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSMBELeafNode>_>
                            (this_02,local_e4);
          goto LAB_1800152cb;
        }
        lVar4 = -0x7fff0001;
      }
      local_e8 = 0;
      if (-1 < lVar4) {
        do {
          if (*(uint *)(this_02 + 0xc) <= local_e8) break;
          pvVar19 = (void *)0x0;
          local_c0 = (void *)0x0;
          local_b8 = (CLwHuffCodec *)0x0;
          local_b0 = 0;
          local_a8 = 0;
          uVar10 = 0;
          uVar6 = 0;
          uVar11 = param_2;
          puVar3 = puVar12;
          if (param_2 < 4) {
LAB_18001500f:
            puVar12 = puVar3;
            param_2 = uVar11;
            lVar4 = -0x7fff0001;
          }
          else {
            uVar10 = (ulonglong)*puVar12;
            local_e0 = puVar12 + 1;
            local_d8 = param_2 - 4;
            lVar4 = 0;
            uVar11 = local_d8;
            puVar3 = local_e0;
            if (local_d8 < 4) goto LAB_18001500f;
            uVar6 = (ulonglong)*local_e0;
            puVar12 = puVar12 + 2;
            param_2 = param_2 - 8;
            local_e0 = puVar12;
            local_d8 = param_2;
          }
          if (-1 < lVar4) {
            if (uVar10 + uVar6 < uVar10) {
              lVar4 = -0x7ff8fdea;
            }
            else {
              lVar4 = 0;
              if (local_res18 < uVar10 + uVar6) {
                lVar4 = -0x7ffb7fe8;
              }
            }
            if (-1 < lVar4) {
              local_70 = (uint *)(uVar10 + (longlong)local_res10);
              if ((local_70 == (uint *)0x0) || (uVar6 == 0)) {
                lVar4 = -0x7ff8ffa9;
              }
              else {
                local_b8 = (CLwHuffCodec *)0x0;
                local_b0 = 0;
                pCVar22 = (CLwHuffCodec *)0x0;
                if (uVar6 < 4) {
                  lVar4 = -0x7fff0001;
                }
                else {
                  uVar5 = *local_70;
                  pCVar22 = (CLwHuffCodec *)(ulonglong)uVar5;
                  if (uVar5 == 0) {
                    lVar4 = -0x7ffb7fe8;
                  }
                  else {
                    lVar4 = 0;
                    if (uVar5 == 0) {
                      local_b8 = (CLwHuffCodec *)0x0;
                      local_b0 = 0;
                    }
                    else {
                      lVar4 = TTS::
                              CAtlArray<CHTSDecisionTree::IMAGE_NODE,TTS::CElementTraits<CHTSDecisionTree::IMAGE_NODE>_>
                              ::GrowBuffer((CAtlArray<CHTSDecisionTree::IMAGE_NODE,TTS::CElementTraits<CHTSDecisionTree::IMAGE_NODE>_>
                                            *)&local_c0,(ulonglong)uVar5);
                      if (-1 < lVar4) {
                        local_b8 = pCVar22;
                      }
                    }
                  }
                }
                pvVar19 = local_c0;
                local_68 = (undefined4 *)0x0;
                local_60 = 0;
                local_58 = 0;
                local_50 = 0;
                if (lVar4 < 0) {
LAB_180014eff:
                  if (pvVar19 != (void *)0x0) {
                    operator_delete__(pvVar19);
                    pvVar19 = (void *)0x0;
                    local_c0 = (void *)0x0;
                  }
                  local_b8 = (CLwHuffCodec *)0x0;
                  local_b0 = 0;
                }
                else {
                  uVar5 = (uint)pCVar22;
                  if (uVar5 == 0) {
                    local_d0 = (CLwHuffDecoder *)0x0;
                  }
                  else {
                    local_d0 = (CLwHuffDecoder *)pCVar22;
                    lVar4 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::
                            GrowBuffer((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>
                                        *)&local_68,(__uint64)pCVar22);
                    if (lVar4 < 0) goto LAB_180014eff;
                  }
                  if (local_d0 == (CLwHuffDecoder *)0x0) {
                    lVar4 = -0x7ff8ffa9;
                    goto LAB_180014eff;
                  }
                  *local_68 = 4;
                  lVar4 = 0;
                  uVar17 = 1;
                  uVar11 = 0;
                  while( true ) {
                    uVar13 = (uint)uVar11;
                    local_80 = uVar6;
                    if (uVar5 <= uVar13) break;
                    uVar10 = (ulonglong)(uint)local_68[uVar11];
                    if (uVar6 <= uVar10) {
LAB_180015101:
                      lVar4 = -0x7ffb7fe8;
                      goto LAB_180014eff;
                    }
                    pcVar9 = (char *)((longlong)local_70 + uVar10);
                    lVar21 = uVar6 - uVar10;
                    if (lVar21 == 0) {
LAB_180014efa:
                      lVar4 = -0x7fff0001;
                      goto LAB_180014eff;
                    }
                    lVar4 = 0;
                    if (*pcVar9 == '\0') {
                      *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18) = 0;
                      if ((lVar21 - 2U < 2) ||
                         (*(undefined2 *)((longlong)pvVar19 + uVar11 * 0x18 + 8) =
                               *(undefined2 *)(pcVar9 + 2), lVar21 - 4U < 4)) goto LAB_180014efa;
                      *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18 + 0xc) =
                           *(undefined4 *)(pcVar9 + 4);
                      if (lVar21 - 8U < 4) {
                        lVar4 = -0x7fff0001;
                      }
                      else {
                        *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18 + 0x10) =
                             *(undefined4 *)(pcVar9 + 8);
                      }
                    }
                    else {
                      if (*pcVar9 != '\x01') goto LAB_180015101;
                      lVar4 = 0;
                      if (lVar21 - 4U < 4) {
                        lVar4 = -0x7ffb7fe8;
                      }
                      *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18) = 1;
                      *(char **)((longlong)pvVar19 + uVar11 * 0x18 + 8) = pcVar9 + 4;
                      *(int *)((longlong)pvVar19 + uVar11 * 0x18 + 0x10) = (int)(lVar21 - 4U);
                    }
                    if (lVar4 < 0) goto LAB_180014eff;
                    if (*(int *)((longlong)pvVar19 + uVar11 * 0x18) == 0) {
                      if (uVar17 < uVar5) {
                        if ((CLwHuffCodec *)(ulonglong)uVar17 < local_d0) {
                          local_68[(longlong)(ulonglong)uVar17] =
                               *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18 + 0xc);
                        }
                        *(uint *)((longlong)pvVar19 + uVar11 * 0x18 + 0xc) = uVar17 - uVar13;
                        uVar16 = uVar17 + 1;
                        if (uVar16 < uVar5) {
                          if ((CLwHuffCodec *)(ulonglong)uVar16 < local_d0) {
                            local_68[uVar16] =
                                 *(undefined4 *)((longlong)pvVar19 + uVar11 * 0x18 + 0x10);
                          }
                          *(uint *)((longlong)pvVar19 + uVar11 * 0x18 + 0x10) = uVar16 - uVar13;
                          uVar17 = uVar17 + 2;
                          goto LAB_180014e64;
                        }
                      }
                      goto LAB_180015101;
                    }
LAB_180014e64:
                    uVar11 = (ulonglong)(uVar13 + 1);
                  }
                }
                if (local_68 != (undefined4 *)0x0) {
                  operator_delete__(local_68);
                }
                this_02 = local_78;
                if (-1 < lVar4) {
                  if ((local_e8 < *(uint *)(local_78 + 0xc)) &&
                     (*(longlong *)(local_78 + 0x10) != 0)) {
                    this_01 = *(CHTSDecisionTree **)
                               (*(longlong *)(local_78 + 0x10) + (ulonglong)local_e8 * 8);
                  }
                  else {
                    this_01 = (CHTSDecisionTree *)0x0;
                  }
                  lVar4 = CHTSDecisionTree::ArrangeNodes
                                    (this_01,(CAtlArray<CHTSDecisionTree::IMAGE_NODE,TTS::CElementTraits<CHTSDecisionTree::IMAGE_NODE>_>
                                              *)&local_c0,local_res20,param_4,
                                     *(uchar **)(this + 0x20),*(ulong *)(this + 0x28));
                }
              }
            }
          }
          if (pvVar19 != (void *)0x0) {
            operator_delete__(pvVar19);
          }
          local_e8 = local_e8 + 1;
          iVar18 = iVar14 + 1;
          iVar14 = iVar18;
        } while (-1 < lVar4);
        uVar11 = (ulonglong)local_c4;
      }
      local_c4 = (int)uVar11 + 1;
      uVar11 = (ulonglong)local_c4;
    } while (-1 < lVar4);
  }
LAB_180014c50:
  Reset(this);
LAB_180014c59:
  if (local_a0 != (uint *)0x0) {
    operator_delete__(local_a0);
  }
  return lVar4;
  while( true ) {
    lVar4 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetAt
                      ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)(this + 0x30)
                       ,_Var7,&INVALID_INDEX);
    _Var7 = (__uint64)(uVar17 + 1);
    if (lVar4 < 0) break;
LAB_180015347:
    uVar17 = (uint)_Var7;
    if (uVar5 <= uVar17) goto LAB_180014c44;
  }
  goto LAB_180014c50;
}

