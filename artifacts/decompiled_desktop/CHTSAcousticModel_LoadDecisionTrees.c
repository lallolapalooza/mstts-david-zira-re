
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CHTSAcousticModel::LoadDecisionTrees(unsigned char const * __ptr64,unsigned
   __int64,class CTTSFeatureQuestion const * __ptr64,unsigned long) __ptr64 */

long __thiscall
CHTSAcousticModel::LoadDecisionTrees
          (CHTSAcousticModel *this,uchar *param_1,__uint64 param_2,CTTSFeatureQuestion *param_3,
          ulong param_4)

{
  CHTSAcousticModel *pCVar1;
  CHTSAcousticModel *pCVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  CLwHuffDecoder *pCVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  __uint64 _Var10;
  ulonglong *puVar11;
  CHTSDecisionTree *this_00;
  uint uVar12;
  ulonglong uVar13;
  CLwHuffDecoder *this_01;
  ulong uVar14;
  uint uVar15;
  ulonglong *puVar16;
  __uint64 *p_Var17;
  uint *puVar18;
  CHTSAcousticModel *local_res8;
  uint *local_res10;
  __uint64 local_res18;
  CTTSFeatureQuestion *local_res20;
  ulong local_b8 [2];
  CLwHuffDecoder *local_b0;
  __uint64 local_a8;
  uint *local_a0;
  uint local_98;
  int local_94;
  ulong local_90;
  uint local_8c;
  uint *local_88;
  __uint64 local_80;
  undefined8 local_78;
  undefined4 local_70;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  local_88 = (uint *)0x0;
  local_80 = 0;
  puVar18 = (uint *)0x0;
  local_78 = 0;
  local_70 = 0;
  local_b0 = (CLwHuffDecoder *)0x0;
  _Var10 = param_2;
  local_res8 = this;
  local_res10 = (uint *)param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_a8 = param_2;
  local_a0 = (uint *)param_1;
  iVar7 = CHTSVoiceData::CreateDecompressor(*(CHTSVoiceData **)(this + 0x58),&local_b0);
  pCVar6 = local_b0;
  if (local_b0 != (CLwHuffDecoder *)0x0) {
    iVar7 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                      ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)&local_88,
                       param_2 * 2,(int)_Var10);
    if (-1 < iVar7) {
      uVar9 = param_2 & 0xffffffff;
      iVar7 = (*(code *)**(undefined8 **)pCVar6)(pCVar6,param_1);
      if (-1 < iVar7) {
        puVar18 = local_88;
        uVar12 = 0;
        do {
          uVar15 = uVar12 + 1;
          if (local_80 <= uVar12) {
            iVar7 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                              ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)
                               &local_88,uVar15 + param_2,(int)uVar9);
            puVar18 = local_88;
          }
          iVar8 = (int)uVar9;
          if (iVar7 < 0) break;
          iVar7 = CLwHuffCodec::Read((CLwHuffCodec *)pCVar6,
                                     (uchar *)((ulonglong)uVar12 + (longlong)puVar18));
          iVar8 = (int)uVar9;
          uVar12 = uVar15;
        } while (-1 < iVar7);
        this = local_res8;
        if ((iVar7 == -0x7ff8ffda) &&
           (iVar7 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                              ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)
                               &local_88,(ulonglong)uVar12,iVar8), -1 < iVar7)) {
          local_a0 = local_88;
          local_res18 = local_80;
          local_a8 = local_80;
          local_res10 = local_88;
        }
      }
    }
    puVar18 = local_88;
    (**(code **)(*(longlong *)pCVar6 + 8))(pCVar6,1);
  }
  if (iVar7 < 0) {
    *(undefined4 *)(this + 0x54) = 0;
  }
  else {
    iVar7 = CMemoryLoadHelper::LoadValue<unsigned_long>
                      ((ulong *)(this + 0x18),(uchar **)&local_a0,&local_a8);
    local_b8[0] = 0;
    if ((iVar7 < 0) ||
       (iVar7 = CMemoryLoadHelper::LoadValue<unsigned_long>(local_b8,(uchar **)&local_a0,&local_a8),
       iVar7 < 0)) {
LAB_1800070b7:
      *(undefined4 *)(this + 0x50) = 0xffffffff;
      pCVar1 = this + 0x50;
      *(undefined4 *)(this + 0x54) = 0;
      pCVar2 = this + 0x54;
      local_94 = 0;
      local_8c = 0;
      iVar8 = 0;
      if (iVar7 < 0) goto LAB_1800073a5;
      _Var10 = local_a8;
      puVar18 = local_a0;
      uVar14 = local_b8[0];
      while (uVar12 = *(uint *)(this + 0x18), local_8c < uVar12) {
        local_b0 = (CLwHuffDecoder *)(*(longlong *)(this + 0x10) + (ulonglong)local_8c * 0x18);
        if (_Var10 < 4) goto LAB_1800073e0;
        uVar12 = *puVar18;
        _Var10 = _Var10 - 4;
        puVar18 = puVar18 + 1;
        *(uint *)local_b0 = uVar12;
        if (uVar12 < *(uint *)pCVar1) {
          *(uint *)pCVar1 = uVar12;
        }
        if (*(uint *)pCVar2 < *(uint *)local_b0) {
          *(uint *)pCVar2 = *(uint *)local_b0;
        }
        local_a8 = _Var10;
        local_a0 = puVar18;
        if (*(int *)(*(longlong *)(*(longlong *)(this + 0x58) + 0x38) + 0xc) == 0) {
          iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSOffsetLeafNode>_>
                            ((CHTSDecisionTreeSet *)local_b0,uVar14);
LAB_1800071a4:
          uVar14 = local_b8[0];
        }
        else {
          iVar7 = **(int **)(this + 8);
          if (iVar7 == 3) {
            iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSStateDurationLeafNode>_>
                              ((CHTSDecisionTreeSet *)local_b0,uVar14);
            goto LAB_1800071a4;
          }
          if (iVar7 == 6) {
            iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSPhoneDurationLeafNode>_>
                              ((CHTSDecisionTreeSet *)local_b0,uVar14);
            goto LAB_1800071a4;
          }
          if (iVar7 == 1) {
            iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSLSFLeafNode>_>
                              ((CHTSDecisionTreeSet *)local_b0,uVar14);
            goto LAB_1800071a4;
          }
          if (iVar7 == 2) {
            iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSF0LeafNode>_>
                              ((CHTSDecisionTreeSet *)local_b0,uVar14);
            goto LAB_1800071a4;
          }
          if (iVar7 == 7) {
            iVar7 = CHTSDecisionTreeSet::Create<CHTSDecisionTreeImpl<CHTSMBELeafNode>_>
                              ((CHTSDecisionTreeSet *)local_b0,uVar14);
            goto LAB_1800071a4;
          }
          iVar7 = -0x7fff0001;
        }
        local_98 = 0;
        if (-1 < iVar7) {
          do {
            if (*(uint *)(local_b0 + 0x10) <= local_98) break;
            local_68 = (void *)0x0;
            local_60 = 0;
            local_58 = 0;
            local_50 = 0;
            if (_Var10 < 4) {
              iVar7 = -0x7fff0001;
              this = local_res8;
              goto LAB_1800073f3;
            }
            uVar9 = (ulonglong)*puVar18;
            local_a0 = puVar18 + 1;
            local_90 = 0;
            local_a8 = _Var10 - 4;
            iVar7 = CMemoryLoadHelper::LoadValue<unsigned_long>
                              (&local_90,(uchar **)&local_a0,&local_a8);
            uVar14 = local_90;
            if (-1 < iVar7) {
              iVar7 = CTTSDataLoader::ValidateOffsetAndSize
                                (uVar9 & 0xffffffff,(ulonglong)local_90,local_res18);
              uVar12 = local_98;
              pCVar6 = local_b0;
              if (-1 < iVar7) {
                this_01 = local_b0;
                CHTSDecisionTreeSet::GetAt((CHTSDecisionTreeSet *)local_b0,local_98);
                iVar7 = CHTSDecisionTree::Deserialize
                                  ((CHTSDecisionTree *)this_01,
                                   (uchar *)((longlong)local_res10 + (uVar9 & 0xffffffff)),
                                   (ulonglong)uVar14,
                                   (CAtlArray<CHTSDecisionTree::IMAGE_NODE,TTS::CElementTraits<CHTSDecisionTree::IMAGE_NODE>_>
                                    *)&local_68);
                if (-1 < iVar7) {
                  if ((uVar12 < *(uint *)(pCVar6 + 0x10)) &&
                     (plVar3 = *(longlong **)(pCVar6 + 8), plVar3 != (longlong *)0x0)) {
                    this_00 = (CHTSDecisionTree *)(**(code **)(*plVar3 + 0x20))(plVar3,uVar12);
                  }
                  else {
                    this_00 = (CHTSDecisionTree *)0x0;
                  }
                  iVar7 = CHTSDecisionTree::ArrangeNodes
                                    (this_00,(CAtlArray<CHTSDecisionTree::IMAGE_NODE,TTS::CElementTraits<CHTSDecisionTree::IMAGE_NODE>_>
                                              *)&local_68,local_res20,param_4,
                                     *(uchar **)(local_res8 + 0x20),*(ulong *)(local_res8 + 0x28));
                }
                if (local_68 != (void *)0x0) {
                  operator_delete__(local_68);
                }
              }
            }
            local_98 = local_98 + 1;
            local_94 = local_94 + 1;
            _Var10 = local_a8;
            puVar18 = local_a0;
          } while (-1 < iVar7);
          this = local_res8;
          uVar14 = local_b8[0];
          iVar8 = local_94;
        }
        local_8c = local_8c + 1;
        if (iVar7 < 0) goto LAB_1800073f3;
      }
      p_Var17 = &local_a8;
      local_res8 = (CHTSAcousticModel *)((ulonglong)local_res8 & 0xffffffff00000000);
      iVar7 = CMemoryLoadHelper::LoadValue<unsigned_long>
                        ((ulong *)&local_res8,(uchar **)&local_a0,p_Var17);
      if (iVar7 < 0) goto LAB_1800073a1;
      if (((int)local_res8 == iVar8) &&
         (uVar15 = (*(int *)(this + 0x54) - *(int *)(this + 0x50)) + 1, uVar12 <= uVar15)) {
        iVar7 = TTS::CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_>::SetCount
                          ((CAtlArray<unsigned_long,TTS::CElementTraits<unsigned_long>_> *)
                           (this + 0x30),(ulonglong)uVar15,(int)p_Var17);
        uVar12 = 0;
        if (-1 < iVar7) goto LAB_180007379;
        goto LAB_1800073a1;
      }
      iVar7 = -0x7ffb7fe8;
      goto LAB_1800073f3;
    }
    uVar9 = CONCAT44(0,*(uint *)(this + 0x18));
    if (*(uint *)(this + 0x18) == 0) {
      iVar7 = -0x7ffb7fe8;
      *(undefined4 *)(this + 0x54) = 0;
    }
    else {
      uVar13 = 0x18;
      iVar8 = CNewArrayHelper::IsGoodForIntegerOverflow(0x18,uVar9);
      if (iVar8 == 0) {
        *(undefined8 *)(this + 0x10) = 0;
      }
      else {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar13 & 0xffffffff;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar9;
        uVar13 = SUB168(auVar4 * auVar5,0);
        if (SUB168(auVar4 * auVar5,8) != 0) {
          uVar13 = 0xffffffffffffffff;
        }
        _Var10 = uVar13 + 8;
        if (0xfffffffffffffff7 < uVar13) {
          _Var10 = 0xffffffffffffffff;
        }
        puVar11 = operator_new__(_Var10,&std::nothrow);
        if (puVar11 == (ulonglong *)0x0) {
          puVar16 = (ulonglong *)0x0;
        }
        else {
          puVar16 = puVar11 + 1;
          *puVar11 = uVar9;
          _vector_constructor_iterator_(puVar16,0x18,uVar9,CHTSDecisionTreeSet::CHTSDecisionTreeSet)
          ;
        }
        *(ulonglong **)(this + 0x10) = puVar16;
        if (puVar16 != (ulonglong *)0x0) goto LAB_1800070b7;
      }
      iVar7 = -0x7ff8fff2;
      *(undefined4 *)(this + 0x54) = 0;
    }
  }
  *(undefined4 *)(this + 0x50) = 0xffffffff;
LAB_1800073f3:
  Reset(this);
  puVar18 = local_88;
LAB_1800073ff:
  if (puVar18 != (uint *)0x0) {
    operator_delete__(puVar18);
  }
  return iVar7;
LAB_180007379:
  if (uVar15 <= uVar12) goto LAB_1800073a1;
  uVar9 = (ulonglong)uVar12;
  if (*(ulonglong *)(this + 0x38) <= uVar9) goto LAB_180007397;
  iVar7 = 0;
  uVar12 = uVar12 + 1;
  *(undefined4 *)(*(longlong *)(this + 0x30) + uVar9 * 4) = 0xffffffff;
  goto LAB_180007379;
LAB_1800073a1:
  puVar18 = local_88;
LAB_1800073a5:
  uVar12 = 0;
  if (-1 < iVar7) {
    for (; uVar12 < *(uint *)(this + 0x18); uVar12 = uVar12 + 1) {
      uVar15 = *(int *)(*(longlong *)(this + 0x10) + (ulonglong)uVar12 * 0x18) -
               *(int *)(this + 0x50);
      if (*(int *)(*(longlong *)(this + 0x30) + (ulonglong)uVar15 * 4) != -1) goto LAB_1800073e0;
      if (*(ulonglong *)(this + 0x38) <= (ulonglong)uVar15) goto LAB_180007397;
      *(uint *)(*(longlong *)(this + 0x30) + (ulonglong)uVar15 * 4) = uVar12;
      iVar7 = 0;
    }
    goto LAB_1800073ff;
  }
  goto LAB_1800073f3;
LAB_1800073e0:
  iVar7 = -0x7fff0001;
  goto LAB_1800073f3;
LAB_180007397:
  iVar7 = -0x7ff8ffa9;
  goto LAB_1800073f3;
}

