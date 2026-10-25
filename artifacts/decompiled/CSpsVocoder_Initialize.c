
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CSpsVocoder::Initialize(class CFormantSharpenSetting const * __ptr64,class
   CTTSEngine * __ptr64,int,unsigned long,unsigned long,int) __ptr64 */

long __thiscall
CSpsVocoder::Initialize
          (CSpsVocoder *this,CFormantSharpenSetting *param_1,CTTSEngine *param_2,int param_3,
          ulong param_4,ulong param_5,int param_6)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ITTSEngineSetting *pIVar5;
  CAcousticProsodyTagger *pCVar6;
  CHTSVoiceData *pCVar7;
  CShareable *pCVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  ushort *puVar12;
  undefined **ppuVar13;
  ulonglong uVar14;
  CShareable *pCVar15;
  CHTSAcousticModel *this_00;
  ulong uVar16;
  CHTSVoiceData *local_res10;
  longlong local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 *puStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((param_1 == (CFormantSharpenSetting *)0x0) || (param_2 == (CTTSEngine *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_res10 = (CHTSVoiceData *)((ulonglong)local_res10 & 0xffffffff00000000);
  *(int *)(this + 0x38) = param_3;
  *(ulong *)(this + 8) = param_4;
  *(ulong *)(this + 0xc) = param_5;
  *(CFormantSharpenSetting **)(this + 0x40) = param_1;
  *(int *)(this + 0x3c) = param_6;
  *(CTTSEngine **)(this + 0xc0) = param_2;
  pIVar5 = (ITTSEngineSetting *)(**(code **)(*(longlong *)param_2 + 0xb0))(param_2);
  if (pIVar5 == (ITTSEngineSetting *)0x0) {
    uVar16 = 0;
    iVar3 = -0x7ffb7fef;
  }
  else {
    local_88 = 0;
    plVar10 = (longlong *)(**(code **)(**(longlong **)(this + 0xc0) + 0xb0))();
    lVar2 = (long)&local_88;
    iVar3 = (**(code **)(*plVar10 + 0x18))(plVar10,L"NN.EnableStreaming");
    local_res10 = (CHTSVoiceData *)CONCAT44(local_res10._4_4_,iVar3);
    if (((iVar3 < 0) || (local_88 == 0)) || (iVar4 = _o__wcsicmp(L"true"), iVar4 != 0)) {
      uVar16 = 0;
      if (iVar3 < 0) goto LAB_1800530b1;
    }
    else {
      *(undefined4 *)(this + 0xa8) = 1;
    }
    pCVar6 = DynamicCastAssert<CAcousticProsodyTagger*___ptr64,ITTSHandler*___ptr64>
                       (*(ITTSHandler **)(*(longlong *)(this + 0xc0) + 0x200),(long *)&local_res10,
                        lVar2);
    if ((int)local_res10 < 0) {
      return (int)local_res10;
    }
    *(undefined4 *)(this + 0xec) = *(undefined4 *)(pCVar6 + 0x58);
    *(undefined4 *)(this + 0x10c) = *(undefined4 *)(pCVar6 + 0x9d4);
    uVar16 = *(ulong *)(pCVar6 + 0x2ac);
    iVar3 = (int)local_res10;
  }
LAB_1800530b1:
  if (iVar3 < 0) {
    return iVar3;
  }
  if (*(int *)(this + 0x38) == 0) {
    if (*(int *)(this + 0x10c) == 0) {
      local_res10 = operator_new(0x1068,&std::nothrow);
      if (local_res10 != (CHTSVoiceData *)0x0) {
        ppuVar13 = CExcitationGeneratorImpl<float>::_vftable_;
        goto LAB_1800530e9;
      }
    }
    else {
      local_res10 = operator_new(0x1090,&std::nothrow);
      if (local_res10 != (CHTSVoiceData *)0x0) {
        pCVar7 = (CHTSVoiceData *)
                 CITFTEExcitationGeneratorImpl<float>::CITFTEExcitationGeneratorImpl<float>
                           ((CITFTEExcitationGeneratorImpl<float> *)local_res10);
        goto LAB_18005317c;
      }
    }
LAB_180053179:
    pCVar7 = (CHTSVoiceData *)0x0;
  }
  else {
    local_res10 = operator_new(0x1068,&std::nothrow);
    if (local_res10 == (CHTSVoiceData *)0x0) goto LAB_180053179;
    ppuVar13 = CExcitationGeneratorImpl<int>::_vftable_;
LAB_1800530e9:
    *(undefined8 *)(local_res10 + 0x1038) = 0;
    *(undefined8 *)(local_res10 + 0x1030) = 0;
    *(undefined4 *)(local_res10 + 0x102c) = 0;
    *(undefined8 *)(local_res10 + 0x20) = 0;
    *(undefined8 *)(local_res10 + 0x18) = 0;
    *(undefined4 *)(local_res10 + 0x10) = 0;
    *(undefined8 *)(local_res10 + 8) = 0;
    *(undefined ***)local_res10 = ppuVar13;
    *(undefined8 *)(local_res10 + 0x1040) = 0;
    *(undefined8 *)(local_res10 + 0x1048) = 0;
    *(undefined8 *)(local_res10 + 0x1050) = 0;
    *(undefined8 *)(local_res10 + 0x105c) = 0;
    *(undefined4 *)(local_res10 + 0x1058) = 0;
    pCVar7 = local_res10;
  }
LAB_18005317c:
  *(CHTSVoiceData **)(this + 0x48) = pCVar7;
  if (pCVar7 == (CHTSVoiceData *)0x0) {
    iVar3 = -0x7ff8fff2;
  }
  if (iVar3 < 0) {
    return iVar3;
  }
  lVar2 = CExcitationGenerator::Initialize
                    ((CExcitationGenerator *)pCVar7,pIVar5,*(ulong *)(this + 8),param_5,uVar16);
  pCVar15 = (CShareable *)0x0;
  if (lVar2 < 0) {
    return lVar2;
  }
  if (*(int *)(this + 0x38) == 0) {
    local_res10 = operator_new(0x20,&std::nothrow);
    if (local_res10 != (CHTSVoiceData *)0x0) {
      ppuVar13 = CLsfSynthesizerImpl<float,float>::_vftable_;
      goto LAB_1800531f0;
    }
LAB_1800531fd:
    pCVar7 = (CHTSVoiceData *)pCVar15;
  }
  else {
    local_res10 = operator_new(0x20,&std::nothrow);
    if (local_res10 == (CHTSVoiceData *)0x0) goto LAB_1800531fd;
    ppuVar13 = CLsfSynthesizerImpl<short,int>::_vftable_;
LAB_1800531f0:
    *(undefined8 *)(local_res10 + 0x18) = 0;
    *(undefined ***)local_res10 = ppuVar13;
    *(undefined8 *)(local_res10 + 0xc) = 0;
    pCVar7 = local_res10;
  }
  *(CHTSVoiceData **)(this + 0x50) = pCVar7;
  if (pCVar7 == (CHTSVoiceData *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  if (lVar2 < 0) {
    return lVar2;
  }
  *(longlong *)(this + 0xa0) = *(longlong *)(this + 0xc0) + 0x250;
  *(CTTSEngine **)(this + 200) = param_2 + 0xa0;
  local_res10 = operator_new(0x10,&std::nothrow);
  if (local_res10 == (CHTSVoiceData *)0x0) {
    pCVar8 = pCVar15;
  }
  else {
    *(undefined8 *)local_res10 = 0;
    *(undefined4 *)(local_res10 + 8) = 0;
    pCVar8 = (CShareable *)local_res10;
  }
  *(CShareable **)(this + 0x58) = pCVar8;
  if (pCVar8 == (CShareable *)0x0) {
    lVar2 = -0x7ff8fff2;
  }
  if (lVar2 < 0) {
    return lVar2;
  }
  *(undefined4 *)(pCVar8 + 0xc) = *(undefined4 *)(this + 8);
  lVar2 = CDrcSoundEffect::Initialize(*(CDrcSoundEffect **)(this + 0x58),pIVar5);
  if (lVar2 < 0) {
    return lVar2;
  }
  local_res10 = operator_new(0x58,&std::nothrow);
  if (local_res10 == (CHTSVoiceData *)0x0) {
    pCVar8 = pCVar15;
  }
  else {
    *(undefined8 *)local_res10 = 0;
    *(undefined8 *)(local_res10 + 8) = 0;
    *(undefined8 *)(local_res10 + 0x10) = 0;
    *(undefined4 *)(local_res10 + 0x18) = 0;
    *(undefined ***)(local_res10 + 0x20) = CBiquadsFilterSetting::_vftable_;
    *(undefined8 *)(local_res10 + 0x28) = 0;
    *(undefined8 *)(local_res10 + 0x30) = 0;
    *(undefined8 *)(local_res10 + 0x38) = 0;
    *(undefined4 *)(local_res10 + 0x40) = 0;
    *(undefined4 *)(local_res10 + 0x48) = 0;
    *(undefined4 *)(local_res10 + 0x50) = 0;
    pCVar8 = (CShareable *)local_res10;
  }
  *(CShareable **)(this + 0x60) = pCVar8;
  if (pCVar8 == (CShareable *)0x0) {
    return -0x7ff8fff2;
  }
  *(undefined4 *)(pCVar8 + 0x54) = *(undefined4 *)(this + 8);
  lVar2 = CBiquadsFilterSoundEffect::Initialize(*(CBiquadsFilterSoundEffect **)(this + 0x60),pIVar5)
  ;
  if (lVar2 < 0) {
    return lVar2;
  }
  local_res10 = operator_new(0xb0,&std::nothrow);
  if (local_res10 == (CHTSVoiceData *)0x0) {
    pCVar8 = pCVar15;
  }
  else {
    pCVar8 = (CShareable *)CEchoEffect::CEchoEffect((CEchoEffect *)local_res10);
  }
  *(CShareable **)(this + 0x68) = pCVar8;
  if (pCVar8 == (CShareable *)0x0) {
    return -0x7ff8fff2;
  }
  *(undefined4 *)(pCVar8 + 0x98) = *(undefined4 *)(this + 8);
  *(undefined4 *)(*(longlong *)(this + 0x68) + 0x9c) = *(undefined4 *)(this + 0xc);
  lVar2 = CEchoEffect::Initialize(*(CEchoEffect **)(this + 0x68),pIVar5);
  if (lVar2 < 0) {
    return lVar2;
  }
  local_80 = CTTSString::_vftable_;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lVar9 = (**(code **)(**(longlong **)(this + 0xc0) + 0xa8))();
  if ((lVar9 != 0) && (*(int *)(this + 0x38) != 0)) {
    plVar10 = (longlong *)(**(code **)(**(longlong **)(this + 0xc0) + 0x98))();
    pcVar1 = *(code **)(*plVar10 + 0x30);
    uVar11 = (**(code **)(**(longlong **)(this + 0xc0) + 0xa8))();
    lVar2 = (*pcVar1)(plVar10,uVar11,L"APM",&local_80);
    local_res10 = (CHTSVoiceData *)0x0;
    if (-1 < lVar2) {
      puVar12 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_80);
      lVar2 = GetSharedObject<CHTSVoiceData>(puVar12,&local_res10);
      pCVar15 = (CShareable *)local_res10;
      if (-1 < lVar2) {
        this_00 = *(CHTSAcousticModel **)(local_res10 + 0x80);
        if (*(uint *)(local_res10 + 0x88) != 0) {
          uVar14 = (ulonglong)*(uint *)(local_res10 + 0x88);
          do {
            if (*(longlong *)(this_00 + 8) == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = *(int *)(*(longlong *)(this_00 + 8) + 8);
            }
            if (iVar3 == 1) {
              local_60 = 0;
              uStack_58 = 0;
              local_50 = 0;
              puStack_48 = (undefined4 *)0x0;
              local_40 = 0;
              uStack_38 = 0;
              lVar2 = CHTSAcousticModel::GetModelConfig(this_00,(ACOUSTIC_MODEL_CONFIG *)&local_60);
              if (-1 < lVar2) {
                *(undefined8 *)(this + 0x88) = local_40;
                *(undefined4 *)(this + 0x98) = uStack_58._4_4_;
                *(undefined4 *)(this + 0x9c) = (undefined4)local_50;
                *(undefined4 *)(this + 0x94) = local_60._4_4_;
                *(undefined4 *)(this + 0x90) = *puStack_48;
              }
            }
            this_00 = this_00 + 0x60;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
      }
    }
    ReleaseSharedObject(pCVar15);
  }
  CTTSString::~CTTSString((CTTSString *)&local_80);
  if (lVar2 < 0) {
    return lVar2;
  }
  local_res10 = (CHTSVoiceData *)((ulonglong)local_res10 & 0xffffffff00000000);
  local_88 = 0;
  iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x10))
                    (pIVar5,L"LSPDecomposing.LsfBaseModelStep",&local_res10);
  if (iVar3 == 0) {
    if ((int)local_res10 != 0) {
      *(int *)(this + 0xf8) = (int)local_res10;
    }
LAB_1800534fd:
    iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x10))
                      (pIVar5,L"LSPDecomposing.LsfOverlappedStep",&local_res10);
    if (iVar3 != 0) goto LAB_18005352c;
    if ((int)local_res10 != 0) {
      *(int *)(this + 0xfc) = (int)local_res10;
      goto LAB_18005352f;
    }
LAB_180053533:
    iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x10))
                      (pIVar5,L"LSPDecomposing.LsfOverlappedModelRange",&local_res10);
    iVar4 = (int)local_res10;
  }
  else {
    if (-1 < iVar3) goto LAB_1800534fd;
LAB_18005352c:
LAB_18005352f:
    iVar4 = (int)local_res10;
    if (-1 < iVar3) goto LAB_180053533;
  }
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      *(int *)(this + 0x100) = iVar4;
      goto LAB_180053560;
    }
LAB_180053564:
    iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x10))
                      (pIVar5,L"LSPDecomposing.F0ForwardModelRange",&local_res10);
    iVar4 = (int)local_res10;
  }
  else {
LAB_180053560:
    if (-1 < iVar3) goto LAB_180053564;
  }
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      *(int *)(this + 0x104) = iVar4;
      goto LAB_180053591;
    }
LAB_180053595:
    iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x10))
                      (pIVar5,L"LSPDecomposing.F0BackwardModelRange",&local_res10);
    iVar4 = (int)local_res10;
  }
  else {
LAB_180053591:
    if (-1 < iVar3) goto LAB_180053595;
  }
  if (iVar3 == 0) {
    if (iVar4 != 0) {
      *(int *)(this + 0x108) = iVar4;
      goto LAB_1800535c2;
    }
  }
  else {
LAB_1800535c2:
    if (iVar3 < 0) goto LAB_1800535e4;
  }
  iVar3 = (**(code **)(*(longlong *)pIVar5 + 0x18))(pIVar5,L"Vocoder.PowerEnabled",&local_88);
LAB_1800535e4:
  if ((iVar3 == 0) && (local_88 != 0)) {
    iVar4 = _o__wcsicmp(local_88,L"true");
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0xf0) = 1;
    }
    iVar4 = _o__wcsicmp(local_88,L"false");
    if (iVar4 == 0) {
      *(undefined4 *)(this + 0xf0) = 0;
    }
  }
  return iVar3;
}

