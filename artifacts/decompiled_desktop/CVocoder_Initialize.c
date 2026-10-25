
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CVocoder::Initialize(struct IMSTTSEngine * __ptr64) __ptr64 */

long __thiscall CVocoder::Initialize(CVocoder *this,IMSTTSEngine *param_1)

{
  long lVar1;
  CTTSEngine *pCVar2;
  ITTSEngineSetting *pIVar3;
  longlong lVar4;
  ushort *puVar5;
  CExcitationGenerator *this_00;
  undefined8 *puVar6;
  undefined **ppuVar7;
  int iVar8;
  long lVar9;
  void *pvVar10;
  long in_R8D;
  CAnyPromptData *pCVar11;
  CHTSAcousticModel *this_01;
  ulonglong uVar12;
  CHTSVoiceData *local_res8;
  void *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 *puStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_res8 = (CHTSVoiceData *)((ulonglong)local_res8 & 0xffffffff00000000);
  pCVar2 = DynamicCastAssert<CTTSEngine*___ptr64,IMSTTSEngine*___ptr64>
                     (param_1,(long *)&local_res8,in_R8D);
  *(CTTSEngine **)(this + 8) = pCVar2;
  if (pCVar2 == (CTTSEngine *)0x0) {
    return (int)local_res8;
  }
  pIVar3 = (ITTSEngineSetting *)(**(code **)(*(longlong *)pCVar2 + 0x88))(pCVar2);
  if ((pCVar2 + 0x58 == (CTTSEngine *)0x0) ||
     (iVar8 = (int)local_res8, pIVar3 == (ITTSEngineSetting *)0x0)) {
    iVar8 = -0x7ffb7fef;
  }
  if (iVar8 < 0) {
    return iVar8;
  }
  *(longlong *)(this + 0x60) = *(longlong *)(this + 8) + 0x1c8;
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(pCVar2 + 0x84);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(pCVar2 + 0x6c);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(pCVar2 + 0x74);
  lVar1 = CFormantSharpenSetting::Initialize((CFormantSharpenSetting *)(this + 0x38),pIVar3);
  if (lVar1 < 0) {
    return lVar1;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  lVar4 = (**(code **)(**(longlong **)(this + 8) + 0x80))();
  pvVar10 = (void *)0x0;
  lVar9 = lVar1;
  if ((lVar4 != 0) && (*(int *)(this + 0x6c) != 0)) {
    puVar5 = (ushort *)(**(code **)(**(longlong **)(this + 8) + 0x80))();
    lVar1 = CTTSString::Append2HR((CTTSString *)&local_68,puVar5,(ushort *)L".APM");
    local_res8 = (CHTSVoiceData *)0x0;
    pCVar11 = (CAnyPromptData *)0x0;
    lVar9 = lVar1;
    if (-1 < lVar1) {
      puVar5 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_68);
      lVar1 = GetSharedObject<CHTSVoiceData>(puVar5,&local_res8);
      pCVar11 = (CAnyPromptData *)local_res8;
      lVar9 = lVar1;
      if (-1 < lVar1) {
        this_01 = *(CHTSAcousticModel **)(local_res8 + 0x80);
        if (*(uint *)(local_res8 + 0x88) != 0) {
          uVar12 = (ulonglong)*(uint *)(local_res8 + 0x88);
          do {
            if (*(int **)(this_01 + 8) == (int *)0x0) {
              iVar8 = 0;
            }
            else {
              iVar8 = **(int **)(this_01 + 8);
            }
            if (iVar8 == 1) {
              local_58 = 0;
              uStack_50 = 0;
              local_48 = 0;
              puStack_40 = (undefined4 *)0x0;
              local_38 = 0;
              uStack_30 = 0;
              lVar1 = CHTSAcousticModel::GetModelConfig(this_01,(ACOUSTIC_MODEL_CONFIG *)&local_58);
              lVar9 = lVar1;
              if (-1 < lVar1) {
                *(undefined8 *)(this + 0x30) = local_38;
                *(undefined4 *)(this + 0x28) = uStack_50._4_4_;
                *(undefined4 *)(this + 0x2c) = (undefined4)local_48;
                *(undefined4 *)(this + 0x24) = local_58._4_4_;
                *(undefined4 *)(this + 0x20) = *puStack_40;
              }
            }
            this_01 = this_01 + 0x60;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
    }
    ReleaseSharedObject<CAnyPromptData>(pCVar11);
    pvVar10 = local_68;
  }
  operator_delete__(pvVar10);
  if (lVar1 < 0) {
    return lVar1;
  }
  if (*(int *)(this + 0x6c) == 0) {
    this_00 = operator_new(0x1058,&std::nothrow);
    if (this_00 != (CExcitationGenerator *)0x0) {
      ppuVar7 = CExcitationGeneratorImpl<float>::_vftable_;
      goto LAB_18004d5bf;
    }
LAB_18004d601:
    this_00 = (CExcitationGenerator *)0x0;
  }
  else {
    this_00 = operator_new(0x1058,&std::nothrow);
    if (this_00 == (CExcitationGenerator *)0x0) goto LAB_18004d601;
    ppuVar7 = CExcitationGeneratorImpl<int>::_vftable_;
LAB_18004d5bf:
    *(undefined4 *)(this_00 + 0x1048) = 0;
    *(undefined8 *)(this_00 + 0x104c) = 0;
    *(undefined8 *)(this_00 + 0x1040) = 0;
    *(undefined8 *)(this_00 + 0x1038) = 0;
    *(undefined8 *)(this_00 + 0x1030) = 0;
    *(undefined ***)this_00 = ppuVar7;
    *(undefined8 *)(this_00 + 0x1028) = 0;
    *(undefined4 *)(this_00 + 0x1024) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 8) = 0;
  }
  *(CExcitationGenerator **)(this + 0x80) = this_00;
  if (this_00 == (CExcitationGenerator *)0x0) {
    lVar9 = -0x7ff8fff2;
  }
  if (lVar9 < 0) {
    return lVar9;
  }
  lVar1 = CExcitationGenerator::Initialize(this_00,this);
  if (lVar1 < 0) {
    return lVar1;
  }
  if (*(int *)(this + 0x6c) == 0) {
    puVar6 = operator_new(0x28,&std::nothrow);
    if (puVar6 != (undefined8 *)0x0) {
      ppuVar7 = CLsfSynthesizerImpl<float,float>::_vftable_;
      goto LAB_18004d667;
    }
  }
  else {
    puVar6 = operator_new(0x28,&std::nothrow);
    if (puVar6 != (undefined8 *)0x0) {
      ppuVar7 = CLsfSynthesizerImpl<short,long>::_vftable_;
LAB_18004d667:
      puVar6[4] = 0;
      *puVar6 = ppuVar7;
      puVar6[3] = 0;
      puVar6[2] = 0;
      goto LAB_18004d67b;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_18004d67b:
  *(undefined8 **)(this + 0x88) = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    lVar1 = -0x7ff8fff2;
  }
  if (lVar1 < 0) {
    return lVar1;
  }
  puVar6[2] = this;
  *(CTTSEngine **)(this + 0x10) = pCVar2 + 0x58;
  puVar6 = operator_new(0x10,&std::nothrow);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = 0;
    *(undefined4 *)(puVar6 + 1) = 0;
  }
  *(undefined8 **)(this + 0x90) = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)(this + 0x18);
    lVar1 = CDrcSoundEffect::Initialize(*(CDrcSoundEffect **)(this + 0x90),pIVar3);
    if (lVar1 < 0) {
      return lVar1;
    }
    puVar6 = operator_new(0x58,&std::nothrow);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 0;
      puVar6[4] = CBiquadsFilterSetting::_vftable_;
      puVar6[5] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      *(undefined4 *)(puVar6 + 8) = 0;
      *(undefined4 *)(puVar6 + 9) = 0;
      *(undefined4 *)(puVar6 + 10) = 0;
    }
    *(undefined8 **)(this + 0x98) = puVar6;
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar6 + 0x54) = *(undefined4 *)(this + 0x18);
      lVar1 = CBiquadsFilterSoundEffect::Initialize
                        (*(CBiquadsFilterSoundEffect **)(this + 0x98),pIVar3);
      return lVar1;
    }
  }
  return -0x7ff8fff2;
}

