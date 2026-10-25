
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CAcousticProsodyTagger::Initialize(struct IMSTTSEngine * __ptr64)
   __ptr64 */

long __thiscall
CAcousticProsodyTagger::Initialize(CAcousticProsodyTagger *this,IMSTTSEngine *param_1)

{
  CTTSEngineConfig *pCVar1;
  CParameterManager *pCVar2;
  code *pcVar3;
  CHTSTransformModelSetManager *this_00;
  CDNNModelSetManager *this_01;
  ushort uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  CNusTrajectoryRefiner *this_02;
  longlong *plVar8;
  __uint64 _Var9;
  ITTSEngineSetting *pIVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  HTS_WAVE_FORMAT *pHVar14;
  uint uVar15;
  CAcousticProsodyTagger *pCVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  CHTSModelSetManager *this_03;
  CDNNAcousticModel *local_res8;
  CDNNAcousticModel *local_res10;
  undefined **local_a8;
  void *local_a0;
  void *pvStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  longlong local_48;
  undefined8 uStack_40;
  
  plVar7 = (longlong *)0x0;
  if (param_1 == (IMSTTSEngine *)0x0) {
LAB_18004efd5:
    iVar5 = -0x7ff8ffa9;
  }
  else {
    plVar7 = (longlong *)
             __RTDynamicCast(param_1,0,&struct_IMSTTSEngine__RTTI_Type_Descriptor_,
                             &class_CTTSEngine__RTTI_Type_Descriptor_,0);
    iVar5 = 0;
    if (plVar7 == (longlong *)0x0) goto LAB_18004efd5;
  }
  *(longlong **)(this + 0x9b0) = plVar7;
  if (plVar7 == (longlong *)0x0) {
    return iVar5;
  }
  pCVar1 = (CTTSEngineConfig *)(plVar7 + 0x14);
  if (pCVar1 == (CTTSEngineConfig *)0x0) {
    iVar5 = -0x7ffb7fef;
  }
  else if (-1 < iVar5) {
    *(CTTSEngineConfig **)(this + 0xa0) = pCVar1;
    if (*(int *)(this + 0x9e8) == 0) {
      local_res8 = (CDNNAcousticModel *)0x0;
      plVar8 = (longlong *)(**(code **)(*plVar7 + 0xb0))();
      iVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,L"NN.EnableStreaming",&local_res8);
      if (iVar5 < 0) goto LAB_18004f171;
      if ((local_res8 != (CDNNAcousticModel *)0x0) && (iVar5 = _o__wcsicmp(L"true"), iVar5 == 0)) {
        *(undefined4 *)(this + 0x5c) = 1;
      }
    }
    puVar19 = *(undefined8 **)(this + 0x38);
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)*puVar19)(puVar19,1);
      *(undefined8 *)(this + 0x38) = 0;
    }
    local_res8 = operator_new(8,&std::nothrow);
    if (local_res8 == (CDNNAcousticModel *)0x0) {
      *(undefined8 *)(this + 0x38) = 0;
LAB_18004f16c:
      iVar5 = -0x7ff8fff2;
    }
    else {
      *(undefined ***)local_res8 = CTTSFeatureExtractionEngine::_vftable_;
      *(CDNNAcousticModel **)(this + 0x38) = local_res8;
      pIVar10 = (ITTSEngineSetting *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
      iVar5 = CFormantSharpenSetting::Initialize((CFormantSharpenSetting *)(this + 0x78),pIVar10);
      if (-1 < iVar5) {
        local_res8 = operator_new(0x70,&std::nothrow);
        if (local_res8 == (CDNNAcousticModel *)0x0) {
          this_02 = (CNusTrajectoryRefiner *)0x0;
        }
        else {
          this_02 = (CNusTrajectoryRefiner *)
                    CNusTrajectoryRefiner::CNusTrajectoryRefiner
                              ((CNusTrajectoryRefiner *)local_res8);
        }
        *(CNusTrajectoryRefiner **)(this + 0x840) = this_02;
        if (this_02 == (CNusTrajectoryRefiner *)0x0) goto LAB_18004f16c;
        pCVar2 = (CParameterManager *)(*(longlong **)(this + 0x9b0))[0xc9];
        pIVar10 = (ITTSEngineSetting *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
        iVar5 = CNusTrajectoryRefiner::Initialize(this_02,pIVar10,pCVar2);
        if (-1 < iVar5) {
          lVar17 = *(longlong *)(this + 0x840);
          iVar6 = GetParallelProcess(this);
          *(int *)(lVar17 + 0x6c) = iVar6;
        }
      }
    }
  }
LAB_18004f171:
  puVar13 = (ushort *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xa8))();
  local_a8 = CTTSString::_vftable_;
  local_a0 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_90 = 0;
  if (iVar5 < 0) goto LAB_18004f612;
  puVar19 = *(undefined8 **)(this + 0x40);
  if (puVar19 != (undefined8 *)0x0) {
    (**(code **)*puVar19)(puVar19,1);
    *(undefined8 *)(this + 0x40) = 0;
  }
  local_res8 = operator_new(0x58,&std::nothrow);
  if (local_res8 == (CDNNAcousticModel *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    iVar5 = -0x7ff8fff2;
    goto LAB_18004f612;
  }
  *(undefined ***)local_res8 = CHTSModelSetManager::_vftable_;
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x20) = 0;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined ***)(local_res8 + 0x30) = CTTSString::_vftable_;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  *(undefined8 *)(local_res8 + 0x40) = 0;
  *(undefined8 *)(local_res8 + 0x48) = 0;
  *(undefined4 *)(local_res8 + 0x50) = 0;
  *(CDNNAcousticModel **)(this + 0x40) = local_res8;
  plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
  iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar13,L"APM",&local_a8);
  if (iVar5 < 0) {
    if (iVar5 != -0x7ff8fffe) goto LAB_18004f612;
    if (*(int *)(*(longlong *)(this + 0x9b0) + 0x4a4) == 0) {
      CTTSString::Clear((CTTSString *)&local_a8);
      plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
      puVar11 = (ushort *)(**(code **)(*plVar8 + 0x28))(plVar8,0);
      iVar5 = CTTSString::Append2HR((CTTSString *)&local_a8,puVar11,puVar13);
      if (-1 < iVar5) goto LAB_18004f2eb;
      goto LAB_18004f32d;
    }
    iVar5 = 0;
    puVar19 = *(undefined8 **)(this + 0x40);
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)*puVar19)(puVar19,1);
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  else {
LAB_18004f2eb:
    plVar8 = *(longlong **)(this + 0x40);
    pcVar3 = *(code **)(*plVar8 + 8);
    (**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
    puVar11 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_a8);
    iVar5 = (*pcVar3)(plVar8,puVar11);
LAB_18004f32d:
    if (iVar5 < 0) goto LAB_18004f612;
  }
  _Var9 = CTTSString::Length((CTTSString *)&local_a8);
  if (_Var9 != 0) {
    puVar19 = *(undefined8 **)(this + 0x48);
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)*puVar19)(puVar19,1);
      *(undefined8 *)(this + 0x48) = 0;
    }
    local_res8 = operator_new(0x58,&std::nothrow);
    if (local_res8 != (CDNNAcousticModel *)0x0) {
      *(undefined8 *)(local_res8 + 8) = 0;
      *(undefined8 *)(local_res8 + 0x10) = 0;
      *(undefined8 *)(local_res8 + 0x18) = 0;
      *(undefined4 *)(local_res8 + 0x20) = 0;
      *(undefined8 *)(local_res8 + 0x28) = 0;
      *(undefined ***)(local_res8 + 0x30) = CTTSString::_vftable_;
      *(undefined8 *)(local_res8 + 0x38) = 0;
      *(undefined8 *)(local_res8 + 0x40) = 0;
      *(undefined8 *)(local_res8 + 0x48) = 0;
      *(undefined4 *)(local_res8 + 0x50) = 0;
      *(undefined ***)local_res8 = CHTSTransformModelSetManager::_vftable_;
      *(CDNNAcousticModel **)(this + 0x48) = local_res8;
      local_88 = CTTSString::_vftable_;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
      iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar13,L"ATM",&local_88);
      if ((iVar5 == -0x7ff8fffe) || (-1 < iVar5)) {
        this_00 = *(CHTSTransformModelSetManager **)(this + 0x48);
        pIVar10 = (ITTSEngineSetting *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
        puVar11 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_88);
        puVar12 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_a8);
        iVar5 = CHTSTransformModelSetManager::Initialize(this_00,puVar12,puVar11,pIVar10);
        if (iVar5 < 0) goto LAB_18004f463;
        if (*(longlong *)(*(longlong *)(this + 0x48) + 0x10) != 0) {
          *(undefined4 *)(this + 0x9cc) = 1;
        }
      }
      else {
LAB_18004f463:
        puVar19 = *(undefined8 **)(this + 0x48);
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19,1);
          *(undefined8 *)(this + 0x48) = 0;
        }
      }
      CTTSString::~CTTSString((CTTSString *)&local_88);
      goto LAB_18004f487;
    }
    *(undefined8 *)(this + 0x48) = 0;
LAB_18004f606:
    iVar5 = -0x7ff8fff2;
    goto LAB_18004f612;
  }
LAB_18004f487:
  if (iVar5 < 0) goto LAB_18004f612;
  if (*(int *)(this + 0x9e8) == 0) {
    local_68 = CTTSString::_vftable_;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = (undefined4 *)0x0;
    local_88 = CTTSString::_vftable_;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    puVar19 = *(undefined8 **)(this + 0x50);
    if (puVar19 != (undefined8 *)0x0) {
      (**(code **)*puVar19)(puVar19,1);
      *(undefined8 *)(this + 0x50) = 0;
    }
    local_res8 = operator_new(0x50,&std::nothrow);
    if (local_res8 == (CDNNAcousticModel *)0x0) {
      *(undefined8 *)(this + 0x50) = 0;
      iVar5 = -0x7ff8fff2;
    }
    else {
      *(undefined ***)local_res8 = CDNNModelSetManager::_vftable_;
      *(undefined8 *)(local_res8 + 8) = 0;
      *(undefined8 *)(local_res8 + 0x10) = 0;
      *(undefined4 *)(local_res8 + 0x18) = 8;
      *(undefined8 *)(local_res8 + 0x20) = 0;
      *(undefined8 *)(local_res8 + 0x28) = 1;
      *(undefined8 *)(local_res8 + 0x30) = 0;
      *(undefined8 *)(local_res8 + 0x38) = 0;
      *(undefined8 *)(local_res8 + 0x40) = 1;
      *(undefined4 *)(local_res8 + 0x48) = 0;
      *(CDNNAcousticModel **)(this + 0x50) = local_res8;
      plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
      iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar13,L"NNM",&local_68);
      if (-1 < iVar5) {
        plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
        iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar13,L"TDAT",&local_88);
      }
      if (iVar5 < 0) {
        if (iVar5 == -0x7ff8fffe) {
          iVar5 = 0;
          puVar19 = *(undefined8 **)(this + 0x50);
          if (puVar19 != (undefined8 *)0x0) {
            (**(code **)*puVar19)(puVar19,1);
            *(undefined8 *)(this + 0x50) = 0;
          }
          *(undefined4 *)(this + 0x58) = 0;
        }
      }
      else {
        this_01 = *(CDNNModelSetManager **)(this + 0x50);
        pIVar10 = (ITTSEngineSetting *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
        puVar11 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_88);
        puVar12 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_68);
        iVar5 = CDNNModelSetManager::Initialize(this_01,puVar12,puVar11,pIVar10);
        if (-1 < iVar5) {
          *(undefined4 *)(this + 0x58) = 1;
        }
      }
    }
    CTTSString::~CTTSString((CTTSString *)&local_88);
    CTTSString::~CTTSString((CTTSString *)&local_68);
  }
  if (iVar5 < 0) goto LAB_18004f612;
  local_68 = CTTSString::_vftable_;
  uStack_60 = 0;
  uStack_58 = 0;
  puStack_50 = (undefined4 *)0x0;
  plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0x98))();
  puVar19 = &local_68;
  iVar5 = -0x7fe79a38;
  iVar6 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar13);
  if (-1 < iVar6) {
    pCVar16 = this + 0x60;
    puVar13 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_68);
    iVar6 = CTTSSharedDataLoader::LoadSharedData<CHistogramEqualizationTableManager>
                      (puVar13,(CSharedPtr<CHistogramEqualizationTableManager> *)pCVar16,iVar5,
                       puVar19);
  }
  iVar5 = 0;
  if (iVar6 != -0x7ff8fffe) {
    iVar5 = iVar6;
  }
  CTTSString::~CTTSString((CTTSString *)&local_68);
  if (iVar5 < 0) goto LAB_18004f612;
  this_03 = *(CHTSModelSetManager **)(this + 0x40);
  if (this_03 == (CHTSModelSetManager *)0x0) {
LAB_18005037a:
    iVar5 = CheckModelConsistency(this);
    goto LAB_18004f612;
  }
  iVar6 = CHTSModelSetManager::IsShortPauseSupported(this_03);
  if (*(int *)((longlong)plVar7 + 0x104) != iVar6) {
    iVar5 = -0x7ffb7fe1;
  }
  *(undefined4 *)(this + 0x9bc) = 0;
  *(undefined8 *)(this + 0x9c4) = 0;
  if (-1 < iVar5) {
    local_res10 = (CDNNAcousticModel *)0x0;
    local_res8 = (CDNNAcousticModel *)((ulonglong)local_res8 & 0xffffffff00000000);
    iVar5 = CHTSModelSetManager::GetModelTypes
                      (this_03,(HMM_MODEL_TYPE **)&local_res10,(ulong *)&local_res8);
    uVar15 = 0;
    if (-1 < iVar5) {
      for (; uVar15 < (uint)local_res8; uVar15 = uVar15 + 1) {
        uVar18 = (ulonglong)uVar15;
        if (*(int *)(local_res10 + uVar18 * 4) == 6) {
          *(undefined4 *)(this + 0x9bc) = 1;
        }
        else if (*(int *)(local_res10 + uVar18 * 4) == 8) {
          *(undefined4 *)(this + 0x9c4) = 1;
        }
        else if (*(int *)(local_res10 + uVar18 * 4) == 9) {
          *(undefined4 *)(this + 0x9c8) = 1;
        }
      }
    }
    if (local_res10 != (CDNNAcousticModel *)0x0) {
      operator_delete__(local_res10);
      local_res10 = (CDNNAcousticModel *)0x0;
    }
    if (*(int *)(this + 0x58) != 0) {
      iVar5 = CDNNModelSetManager::GetModelTypes
                        (*(CDNNModelSetManager **)(this + 0x50),(HMM_MODEL_TYPE **)&local_res10,
                         (ulong *)&local_res8);
      uVar15 = 0;
      if (-1 < iVar5) {
        for (; uVar15 < (uint)local_res8; uVar15 = uVar15 + 1) {
          if (*(int *)(local_res10 + (ulonglong)uVar15 * 4) == 8) {
            *(undefined4 *)(this + 0x9c4) = 1;
            break;
          }
        }
      }
      if (local_res10 != (CDNNAcousticModel *)0x0) {
        operator_delete__(local_res10);
      }
    }
    if (((-1 < iVar5) && (*(int *)(this + 0x9bc) == 0)) &&
       (*(float *)((longlong)plVar7 + 0x11c) != 0.0)) {
      *(undefined4 *)((longlong)plVar7 + 0x11c) = 0;
    }
  }
  plVar8 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
  if (iVar5 < 0) goto LAB_18004f612;
  if (plVar8 == (longlong *)0x0) {
    iVar5 = -0x7ffb7fef;
    goto LAB_18004f612;
  }
  *(undefined4 *)(this + 0x9b8) = 0;
  local_res8 = (CDNNAcousticModel *)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,L"LSPDecomposing.DelayMode",&local_res8);
  if (iVar5 < 0) goto LAB_18004f612;
  if ((uint)local_res8 != 0) {
    *(undefined4 *)(this + 0x9b8) = 1;
    iVar5 = CHTSModelSetManager::IsFixedFont(*(CHTSModelSetManager **)(this + 0x40));
    if (((iVar5 != 0) || (*(int *)(this + 0x58) != 0)) || (*(int *)(this + 0x9e8) != 0))
    goto LAB_18004f8c2;
LAB_18004f8ba:
    iVar5 = -0x7ffb7fe1;
    goto LAB_18004f612;
  }
LAB_18004f8c2:
  local_res8 = (CDNNAcousticModel *)CONCAT44(local_res8._4_4_,100);
  iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,L"SpellOut.UnvoicedPhoneRate",&local_res8);
  if (iVar5 < 0) goto LAB_18004f612;
  *(uint *)((longlong)plVar7 + 300) = (uint)local_res8;
  if (*(void **)(this + 0x68) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x68));
    *(undefined8 *)(this + 0x68) = 0;
  }
  pHVar14 = operator_new(0xc,&std::nothrow);
  *(HTS_WAVE_FORMAT **)(this + 0x68) = pHVar14;
  if (pHVar14 == (HTS_WAVE_FORMAT *)0x0) goto LAB_18004f606;
  iVar5 = CHTSModelSetManager::GetWaveFormat(*(CHTSModelSetManager **)(this + 0x40),pHVar14);
  if ((iVar5 < 0) ||
     (iVar5 = UpdateWaveFormat(*(HTS_WAVE_FORMAT **)(this + 0x68),*(CTTSEngine **)(this + 0x9b0)),
     iVar5 < 0)) goto LAB_18004f612;
  *(undefined4 *)((longlong)plVar7 + 0xe4) = **(undefined4 **)(this + 0x68);
  if ((int)plVar7[0x1c] == 0) {
    *(int *)(plVar7 + 0x1c) = **(int **)(this + 0x68);
  }
  else if ((int)plVar7[0x1c] != **(int **)(this + 0x68)) {
    iVar5 = -0x7fff0001;
  }
  *(undefined4 *)(plVar7 + 0x1d) = *(undefined4 *)(*(longlong *)(this + 0x68) + 8);
  iVar6 = CHTSModelSetManager::IsFixedFont(*(CHTSModelSetManager **)(this + 0x40));
  *(int *)(plVar7 + 0x1f) = iVar6;
  if (iVar5 < 0) goto LAB_18004f612;
  *(undefined4 *)(this + 0x16c) = **(undefined4 **)(this + 0x68);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(*(longlong *)(this + 0x68) + 8);
  pIVar10 = (ITTSEngineSetting *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
  CDurationPredictor::SetEngineConfig((CDurationPredictor *)(this + 200),pCVar1,pIVar10);
  lVar17 = *(longlong *)(this + 0x9b0);
  *(undefined8 *)(this + 0x158) = *(undefined8 *)(lVar17 + 0x580);
  uVar18 = -(ulonglong)(this != (CAcousticProsodyTagger *)0x0) & (ulonglong)(this + 0x10);
  *(ulonglong *)(this + 0xf0) = uVar18;
  *(longlong *)(this + 0x138) = lVar17 + 0x250;
  *(longlong *)(this + 0x148) = lVar17;
  if (*(int *)(this + 0x58) == 0) {
LAB_18004fb51:
    local_68 = (undefined **)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_50 = (undefined4 *)0x0;
    local_48 = 0;
    uStack_40 = 0;
    iVar5 = CHTSModelSetManager::GetAcousticModelConfig
                      (*(CHTSModelSetManager **)(this + 0x40),1,(ACOUSTIC_MODEL_CONFIG *)&local_68);
    if (iVar5 < 0) goto LAB_18004f612;
    if (local_48 != 0) {
      *(undefined4 *)(this + 0x30c) = *(undefined4 *)(this + 0x9b8);
      *(longlong *)(this + 0x298) = local_48;
      *(longlong *)(this + 0x3a8) = local_48;
      *(ulonglong *)(this + 0x3c8) =
           -(ulonglong)(this != (CAcousticProsodyTagger *)0x0) & (ulonglong)(this + 0x10);
      if (1 < local_68._4_4_) {
        *(uint *)(this + 0x2ac) = local_68._4_4_;
        *(undefined4 *)(this + 0x2b0) = *puStack_50;
        *(undefined4 *)(this + 0x2a8) = (undefined4)uStack_58;
        uVar15 = local_68._4_4_ - 1;
        *(uint *)(this + 0x308) = uVar15;
LAB_18004fcb6:
        if (uVar15 < 0x29) {
          if (*(int *)(this + 0x58) != 0) {
            local_res8 = (CDNNAcousticModel *)0x0;
            iVar5 = CDNNModelSetManager::GetModel
                              (*(CDNNModelSetManager **)(this + 0x50),&local_res8,0xd);
            if (iVar5 < 0) goto LAB_18004f612;
            if (local_res8 != (CDNNAcousticModel *)0x0) {
              *(undefined4 *)(this + 0x9d4) = 1;
              *(CNusTrajectoryRefiner **)(this + 0x878) =
                   (CNusTrajectoryRefiner *)(local_res8 + 0x10);
              *(undefined8 *)(this + 0x850) = *(undefined8 *)(local_res8 + 0x30);
              *(undefined4 *)(this + 0x864) = *(undefined4 *)(local_res8 + 0x38);
              *(undefined4 *)(this + 0x868) = *(undefined4 *)(local_res8 + 0x3c);
            }
          }
          if (*(int *)(this + 0x9d4) == 0) {
LAB_18004fdda:
            if (*(int *)(this + 0x9c8) != 1) {
LAB_18004fe6f:
              if (*(int *)(this + 0x58) == 0) {
                *(undefined4 *)(this + 0x198) = 2;
                *(CTTSEngineConfig **)(this + 0x1f8) = pCVar1;
                local_68 = (undefined **)0x0;
                uStack_60 = 0;
                uStack_58 = 0;
                puStack_50 = (undefined4 *)0x0;
                local_48 = 0;
                uStack_40 = 0;
                iVar5 = CHTSModelSetManager::GetAcousticModelConfig
                                  (*(CHTSModelSetManager **)(this + 0x40),2,
                                   (ACOUSTIC_MODEL_CONFIG *)&local_68);
                if (iVar5 < 0) goto LAB_18004f612;
                if (local_48 == 0) goto LAB_18004fb83;
                *(longlong *)(this + 0x208) = local_48;
                *(uint *)(this + 0x21c) = local_68._4_4_;
                *(undefined4 *)(this + 0x220) = *puStack_50;
                *(undefined4 *)(this + 0x218) = (undefined4)uStack_58;
                *(undefined8 *)(this + 0x270) = uStack_40;
                *(CTTSEngineConfig **)(this + 0x278) = pCVar1;
                *(ulonglong *)(this + 0x228) =
                     -(ulonglong)(this != (CAcousticProsodyTagger *)0x0) & (ulonglong)(this + 0x10);
                *(CTTSEngineConfig **)(this + 0x520) = pCVar1;
                *(CTTSEngineConfig **)(this + 0x310) = pCVar1;
LAB_18004fff7:
                *(CTTSEngineConfig **)(this + 0x418) = pCVar1;
              }
              else {
                local_res10 = (CDNNAcousticModel *)0x0;
                iVar5 = CDNNModelSetManager::GetModel
                                  (*(CDNNModelSetManager **)(this + 0x50),&local_res10,2);
                local_res8 = (CDNNAcousticModel *)0x0;
                if (-1 < iVar5) {
                  iVar5 = CDNNModelSetManager::GetModel
                                    (*(CDNNModelSetManager **)(this + 0x50),&local_res8,4);
                }
                if (iVar5 < 0) goto LAB_18004f612;
                *(CDNNAcousticModel **)(this + 0x230) = local_res10 + 0x10;
                *(CNusTrajectoryRefiner **)(this + 0x1b8) =
                     (CNusTrajectoryRefiner *)(local_res8 + 0x10);
                *(undefined4 *)(this + 0x198) = 2;
                *(CTTSEngineConfig **)(this + 0x1f8) = pCVar1;
                *(undefined8 *)(this + 0x208) = *(undefined8 *)(local_res10 + 0x30);
                *(undefined4 *)(this + 0x21c) = *(undefined4 *)(local_res10 + 0x38);
                *(undefined4 *)(this + 0x220) = *(undefined4 *)(local_res10 + 0x3c);
                *(CTTSEngineConfig **)(this + 0x278) = pCVar1;
                *(ulonglong *)(this + 0x228) =
                     -(ulonglong)(this != (CAcousticProsodyTagger *)0x0) & (ulonglong)(this + 0x10);
                *(undefined4 *)(this + 0x268) = *(undefined4 *)(this + 0x5c);
                *(CTTSEngineConfig **)(this + 0x520) = pCVar1;
                *(undefined4 *)(this + 0x510) = *(undefined4 *)(this + 0x5c);
                *(CTTSEngineConfig **)(this + 0x310) = pCVar1;
                if (*(int *)(this + 0x9d0) != 0) goto LAB_18004fff7;
              }
              *(longlong **)(this + 0x518) = *(longlong **)(this + 0x9b0);
              plVar7 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
              if (plVar7 != (longlong *)0x0) {
                local_res8 = (CDNNAcousticModel *)0x0;
                iVar5 = (**(code **)(*plVar7 + 0x18))
                                  (plVar7,L"MultiBandExcitation.Enabled",&local_res8);
                if (iVar5 < 0) goto LAB_18004f612;
                if (local_res8 != (CDNNAcousticModel *)0x0) {
                  iVar5 = _o__wcsicmp(local_res8,L"true");
                  if (iVar5 == 0) {
                    *(undefined4 *)(this + 0x9c0) = 1;
                  }
                  if ((local_res8 != (CDNNAcousticModel *)0x0) &&
                     (iVar5 = _o__wcsicmp(local_res8,L"false"), iVar5 == 0)) {
                    *(undefined4 *)(this + 0x9c0) = 0;
                  }
                }
              }
              if (*(int *)(this + 0x9c0) != 0) {
                local_res10 = (CDNNAcousticModel *)0x0;
                local_res8 = (CDNNAcousticModel *)((ulonglong)local_res8 & 0xffffffff00000000);
                if (*(int *)(this + 0x58) == 0) {
                  iVar5 = CHTSModelSetManager::GetModelTypes
                                    (*(CHTSModelSetManager **)(this + 0x40),
                                     (HMM_MODEL_TYPE **)&local_res10,(ulong *)&local_res8);
                }
                else {
                  iVar5 = CDNNModelSetManager::GetModelTypes
                                    (*(CDNNModelSetManager **)(this + 0x50),
                                     (HMM_MODEL_TYPE **)&local_res10,(ulong *)&local_res8);
                }
                uVar15 = 0;
                if (-1 < iVar5) {
                  for (; uVar15 < (uint)local_res8; uVar15 = uVar15 + 1) {
                    if (*(int *)(local_res10 + (ulonglong)uVar15 * 4) == 7) goto LAB_1800500f4;
                  }
                }
                iVar5 = -0x7ffb7fe4;
LAB_1800500f4:
                if (local_res10 != (CDNNAcousticModel *)0x0) {
                  operator_delete__(local_res10);
                }
                if (iVar5 < 0) goto LAB_18004f612;
                if (*(int *)(this + 0x9c0) != 0) {
                  *(undefined4 *)(this + 0x440) = 7;
                  if (*(int *)(this + 0x58) == 0) {
                    local_68 = (undefined **)0x0;
                    uStack_60 = 0;
                    uStack_58 = 0;
                    puStack_50 = (undefined4 *)0x0;
                    local_48 = 0;
                    uStack_40 = 0;
                    iVar5 = CHTSModelSetManager::GetAcousticModelConfig
                                      (*(CHTSModelSetManager **)(this + 0x40),7,
                                       (ACOUSTIC_MODEL_CONFIG *)&local_68);
                    if (iVar5 < 0) goto LAB_18004f612;
                    if (local_48 == 0) goto LAB_18004fb83;
                    *(longlong *)(this + 0x438) = local_48;
                    *(uint *)(this + 0x44c) = local_68._4_4_;
                    *(undefined4 *)(this + 0x450) = *puStack_50;
                    *(undefined4 *)(this + 0x448) = (undefined4)uStack_58;
                    *(CTTSEngineConfig **)(this + 0x4a0) = pCVar1;
                  }
                  else {
                    local_res8 = (CDNNAcousticModel *)0x0;
                    iVar5 = CDNNModelSetManager::GetModel
                                      (*(CDNNModelSetManager **)(this + 0x50),&local_res8,7);
                    if (iVar5 < 0) goto LAB_18004f612;
                    *(CNusTrajectoryRefiner **)(this + 0x460) =
                         (CNusTrajectoryRefiner *)(local_res8 + 0x10);
                    *(undefined8 *)(this + 0x438) = *(undefined8 *)(local_res8 + 0x30);
                    *(undefined4 *)(this + 0x44c) = *(undefined4 *)(local_res8 + 0x38);
                    *(undefined4 *)(this + 0x450) = *(undefined4 *)(local_res8 + 0x3c);
                    *(CTTSEngineConfig **)(this + 0x4a0) = pCVar1;
                    *(undefined4 *)(this + 0x498) = *(undefined4 *)(this + 0x5c);
                    *(undefined4 *)(this + 0x638) = *(undefined4 *)(local_res8 + 0x38);
                  }
                }
              }
              if (*(int *)(this + 0x9c4) != 0) {
                *(undefined4 *)(this + 0x538) = 8;
                if (*(int *)(this + 0x58) == 0) {
                  local_68 = (undefined **)0x0;
                  uStack_60 = 0;
                  uStack_58 = 0;
                  puStack_50 = (undefined4 *)0x0;
                  local_48 = 0;
                  uStack_40 = 0;
                  iVar5 = CHTSModelSetManager::GetAcousticModelConfig
                                    (*(CHTSModelSetManager **)(this + 0x40),8,
                                     (ACOUSTIC_MODEL_CONFIG *)&local_68);
                  if (iVar5 < 0) goto LAB_18004f612;
                  if (local_48 == 0) goto LAB_18004fb83;
                  *(longlong *)(this + 0x530) = local_48;
                  *(uint *)(this + 0x544) = local_68._4_4_;
                  *(undefined4 *)(this + 0x548) = *puStack_50;
                  *(undefined4 *)(this + 0x540) = (undefined4)uStack_58;
                }
                else {
                  local_res8 = (CDNNAcousticModel *)0x0;
                  iVar5 = CDNNModelSetManager::GetModel
                                    (*(CDNNModelSetManager **)(this + 0x50),&local_res8,8);
                  if (iVar5 < 0) goto LAB_18004f612;
                  if (*(int *)(this + 0x9b8) != 0) goto LAB_18004f8ba;
                  *(CNusTrajectoryRefiner **)(this + 0x558) =
                       (CNusTrajectoryRefiner *)(local_res8 + 0x10);
                  *(undefined8 *)(this + 0x530) = *(undefined8 *)(local_res8 + 0x30);
                  *(undefined4 *)(this + 0x544) = *(undefined4 *)(local_res8 + 0x38);
                  *(undefined4 *)(this + 0x548) = *(undefined4 *)(local_res8 + 0x3c);
                }
                *(CTTSEngineConfig **)(this + 0x598) = pCVar1;
              }
              if (*(int *)(this + 0x58) != 0) {
                iVar5 = CPostNNPredictor::Init
                                  ((CPostNNPredictor *)(this + 0x690),*(CTTSEngine **)(this + 0x9b0)
                                  );
                if (iVar5 < 0) goto LAB_18004f612;
                *(ulonglong *)(this + 0x6b8) =
                     -(ulonglong)(this != (CAcousticProsodyTagger *)0x0) & (ulonglong)(this + 0x10);
              }
              if (*(int *)(this + 0x58) != 0) {
                *(undefined8 *)(this + 0x818) = *(undefined8 *)(this + 0x840);
                *(CAcousticProsodyTagger **)(this + 0x830) = this + 0x78;
                *(int *)(this + 0x800) = *(int *)(this + 0x58);
                *(undefined4 *)(this + 0x808) = *(undefined4 *)(this + 0x70);
                *(undefined8 *)(this + 0x828) = *(undefined8 *)(this + 0x9b0);
                *(undefined8 *)(this + 0x820) = *(undefined8 *)(this + 0xa0);
                *(undefined8 *)(this + 0x810) = *(undefined8 *)(this + 0x30);
                *(undefined4 *)(this + 0x804) = *(undefined4 *)(this + 0x5c);
              }
              iVar5 = SetupPredictorPipeline(this);
              if (iVar5 < 0) goto LAB_18004f612;
              goto LAB_18005037a;
            }
            *(CTTSEngineConfig **)(this + 0x398) = pCVar1;
            local_68 = (undefined **)0x0;
            uStack_60 = 0;
            uStack_58 = 0;
            puStack_50 = (undefined4 *)0x0;
            local_48 = 0;
            uStack_40 = 0;
            iVar5 = CHTSModelSetManager::GetAcousticModelConfig
                              (*(CHTSModelSetManager **)(this + 0x40),9,
                               (ACOUSTIC_MODEL_CONFIG *)&local_68);
            if (iVar5 < 0) goto LAB_18004f612;
            if (local_48 != 0) {
              *(undefined4 *)(this + 0x394) = 0;
              *(longlong *)(this + 800) = local_48;
              if (local_68._4_4_ != 0) {
                *(uint *)(this + 0x334) = local_68._4_4_;
                *(undefined4 *)(this + 0x338) = *puStack_50;
                *(undefined4 *)(this + 0x330) = (undefined4)uStack_58;
                *(uint *)(this + 0x390) = local_68._4_4_;
                if (0x28 < local_68._4_4_) {
                  iVar5 = -0x7fff0001;
                  goto LAB_18004f612;
                }
                goto LAB_18004fe6f;
              }
            }
          }
          else {
            local_res8 = (CDNNAcousticModel *)0x0;
            iVar5 = CDNNModelSetManager::GetModel
                              (*(CDNNModelSetManager **)(this + 0x50),&local_res8,0xe);
            if (iVar5 < 0) goto LAB_18004f612;
            if (local_res8 != (CDNNAcousticModel *)0x0) {
              *(CNusTrajectoryRefiner **)(this + 0x8f0) =
                   (CNusTrajectoryRefiner *)(local_res8 + 0x10);
              *(undefined8 *)(this + 0x8c8) = *(undefined8 *)(local_res8 + 0x30);
              *(undefined4 *)(this + 0x8dc) = *(undefined4 *)(local_res8 + 0x38);
              *(undefined4 *)(this + 0x8e0) = *(undefined4 *)(local_res8 + 0x3c);
              local_res8 = (CDNNAcousticModel *)0x0;
              iVar5 = CDNNModelSetManager::GetModel
                                (*(CDNNModelSetManager **)(this + 0x50),&local_res8,0xf);
              if (iVar5 < 0) goto LAB_18004f612;
              if (local_res8 != (CDNNAcousticModel *)0x0) {
                *(CNusTrajectoryRefiner **)(this + 0x968) =
                     (CNusTrajectoryRefiner *)(local_res8 + 0x10);
                *(undefined8 *)(this + 0x940) = *(undefined8 *)(local_res8 + 0x30);
                *(undefined4 *)(this + 0x954) = *(undefined4 *)(local_res8 + 0x38);
                *(undefined4 *)(this + 0x958) = *(undefined4 *)(local_res8 + 0x3c);
                goto LAB_18004fdda;
              }
            }
          }
          goto LAB_18004fb83;
        }
      }
      iVar5 = -0x7fff0001;
      goto LAB_18004f612;
    }
  }
  else {
    *(CTTSEngineConfig **)(this + 0x610) = pCVar1;
    *(ulonglong *)(this + 0x5c8) = uVar18;
    *(undefined8 *)(this + 0x628) = *(undefined8 *)(this + 0x38);
    *(longlong *)(this + 0x620) = *(longlong *)(this + 0x50);
    *(undefined4 *)(this + 0x630) = *(undefined4 *)(this + 0x9b8);
    *(undefined8 *)(this + 0x688) = *(undefined8 *)(this + 0x9b0);
    *(undefined4 *)(this + 0x680) = *(undefined4 *)(this + 0x5c);
    *(undefined4 *)(*(longlong *)(this + 0x50) + 0x2c) = *(undefined4 *)(this + 0x9b8);
    local_res8 = (CDNNAcousticModel *)((ulonglong)local_res8 & 0xffffffff00000000);
    plVar7 = (longlong *)(**(code **)(**(longlong **)(this + 0x9b0) + 0xb0))();
    iVar5 = (**(code **)(*plVar7 + 0x10))
                      (plVar7,L"NN.NumericLinguisticFeatureNormFactor",&local_res8);
    if (iVar5 < 0) goto LAB_18004f612;
    iVar5 = (uint)local_res8;
    if ((uint)local_res8 == 0) {
      puVar13 = &DAT_180186640;
      for (iVar5 = 0; (ulonglong)(longlong)iVar5 < 7; iVar5 = iVar5 + 1) {
        uVar4 = GetLangID(this);
        if (*puVar13 == uVar4) {
          local_res8 = (CDNNAcousticModel *)
                       CONCAT44(local_res8._4_4_,*(int *)(&DAT_180186620 + (longlong)iVar5 * 4));
          iVar5 = *(int *)(&DAT_180186620 + (longlong)iVar5 * 4);
          goto LAB_18004fb0c;
        }
        puVar13 = puVar13 + 1;
      }
      iVar5 = (uint)local_res8;
    }
LAB_18004fb0c:
    *(int *)(this + 0x63c) = iVar5;
    if (*(int *)(this + 0x9b8) != 0) {
      *(undefined4 *)(this + 0x5c) = 1;
      *(undefined4 *)(this + 0x680) = 1;
    }
    if ((*(int *)(this + 0x5c) != 0) &&
       (iVar5 = CNNPredictor::InitializeStreamingParameters((CNNPredictor *)(this + 0x5a0)),
       iVar5 < 0)) goto LAB_18004f612;
    if (*(int *)(this + 0x58) == 0) goto LAB_18004fb51;
    local_res10 = (CDNNAcousticModel *)0x0;
    iVar5 = CDNNModelSetManager::GetModel(*(CDNNModelSetManager **)(this + 0x50),&local_res10,1);
    local_res8 = (CDNNAcousticModel *)0x0;
    if (-1 < iVar5) {
      iVar5 = CDNNModelSetManager::GetModel(*(CDNNModelSetManager **)(this + 0x50),&local_res8,5);
    }
    if (iVar5 < 0) goto LAB_18004f612;
    if (local_res8 == (CDNNAcousticModel *)0x0) {
      *(undefined4 *)(this + 0x9d0) = 0;
    }
    *(CDNNAcousticModel **)(this + 0x2c0) = local_res10 + 0x10;
    if (*(int *)(this + 0x9d0) != 0) {
      *(CNusTrajectoryRefiner **)(this + 0x3d0) = (CNusTrajectoryRefiner *)(local_res8 + 0x10);
      *(undefined8 *)(this + 0x3a8) = *(undefined8 *)(local_res8 + 0x30);
    }
    *(undefined4 *)(this + 0x30c) = *(undefined4 *)(this + 0x9b8);
    *(undefined8 *)(this + 0x298) = *(undefined8 *)(local_res10 + 0x30);
    if (1 < *(uint *)(local_res10 + 0x38)) {
      *(uint *)(this + 0x2ac) = *(uint *)(local_res10 + 0x38);
      *(undefined4 *)(this + 0x2b0) = *(undefined4 *)(local_res10 + 0x3c);
      uVar15 = *(uint *)(local_res10 + 0x38);
      *(uint *)(this + 0x308) = uVar15;
      *(undefined4 *)(this + 0x634) = *(undefined4 *)(local_res10 + 0x38);
      goto LAB_18004fcb6;
    }
  }
LAB_18004fb83:
  iVar5 = -0x7fff0001;
LAB_18004f612:
  local_a8 = CTTSString::_vftable_;
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a0 = (void *)0x0;
  }
  if (pvStack_98 != (void *)0x0) {
    operator_delete__(pvStack_98);
  }
  return iVar5;
}

