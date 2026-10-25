
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: long __cdecl CTTSEngine::LocalSpeak(unsigned long,struct tWAVEFORMATEX const *
   __ptr64,struct TTSTEXTFRAGMENT const * __ptr64,struct IMSTTSEngineSite * __ptr64) __ptr64 */

long __thiscall
CTTSEngine::LocalSpeak
          (CTTSEngine *this,ulong param_1,tWAVEFORMATEX *param_2,TTSTEXTFRAGMENT *param_3,
          IMSTTSEngineSite *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  _GUID *p_Var5;
  bool bVar6;
  REGHANDLE RegHandle;
  int iVar7;
  uint uVar8;
  long lVar9;
  _GUID *p_Var10;
  ISentenceAnalyzer *pIVar11;
  undefined8 uVar12;
  TypeDescriptor *pTVar13;
  __uint64 _Var14;
  longlong *plVar15;
  longlong lVar16;
  CTTSEngine *pCVar17;
  ulonglong uVar18;
  _GUID *p_Var19;
  CTTSString *this_00;
  uint uVar20;
  uchar auVar21 [8];
  TypeDescriptor *pTVar22;
  void *pvVar23;
  CTTSOutput *this_01;
  uchar auVar24 [8];
  float fVar25;
  undefined1 auStackY_638 [32];
  uint local_5e4;
  uchar local_5e0 [8];
  _GUID local_5d8;
  _GUID local_5c8;
  void *local_5b8;
  ushort *local_5b0;
  EMOTION_RECIPE *local_5a8;
  _GUID local_5a0;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined **local_580;
  void *local_578;
  void *pvStack_570;
  undefined8 local_568;
  undefined **local_560;
  void *local_558;
  void *pvStack_550;
  undefined8 local_548;
  _GUID local_540;
  void *local_530;
  _GUID local_518 [34];
  CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_> local_2f0 [56];
  _GUID local_2b8 [34];
  CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_> local_90 [56];
  ulonglong local_58;
  
  local_58 = __security_cookie ^ (ulonglong)auStackY_638;
  local_5e0 = (uchar  [8])param_4;
  local_5c8.Data4 = (uchar  [8])param_3;
  CTTSTracingHelper::LogEngineInput(param_3);
  pCVar17 = this + 0x370;
  pTVar22 = (TypeDescriptor *)param_2;
  for (p_Var19 = (_GUID *)0x0;
      p_Var10 = (_GUID *)(**(code **)(*(longlong *)pCVar17 + 0x20))(pCVar17), p_Var19 < p_Var10;
      p_Var19 = (_GUID *)((longlong)&p_Var19->Data1 + 1)) {
    uVar12 = (**(code **)(*(longlong *)pCVar17 + 0x28))(pCVar17,p_Var19);
    pTVar22 = (TypeDescriptor *)p_Var19;
    CTTSLogger::TraceMessage(3,(ushort *)L"[TTS] VoiceLookUpPath[%u] = %s",p_Var19,uVar12);
  }
  if (param_3 == (TTSTEXTFRAGMENT *)0x0) {
    return -0x7ff8ffa9;
  }
  uVar20 = 0;
  CTTSString::CTTSString((CTTSString *)&local_540,(ushort *)L"none");
  local_5c8.Data1 = 1;
  local_5b8 = (void *)0x0;
  local_5b0 = (ushort *)0x0;
  uVar8 = 0;
  bVar4 = false;
  fVar25 = 0.0;
  local_5d8.Data4[0] = '\0';
  local_5d8.Data4[1] = '\0';
  local_5d8.Data4[2] = '\0';
  local_5d8.Data4[3] = '\0';
  for (auVar21 = local_5c8.Data4; auVar21 != (uchar  [8])0x0;
      auVar21 = *(uchar (*) [8])((longlong)auVar21 + 0x80)) {
    if ((int)uVar8 < 0) goto LAB_18002847a;
    if ((*(uint *)auVar21 & 0xfffffffb) == 0) {
      if (((_GUID *)((longlong)auVar21 + 0x70))->Data1 < uVar20) {
        uVar8 = 0x80070057;
        goto LAB_18002849d;
      }
      uVar20 = ((_GUID *)((longlong)auVar21 + 0x70))->Data1;
    }
    iVar7 = operator==((CTTSString *)&local_540,(ushort *)L"none");
    if ((iVar7 != 0) && (*(uint *)auVar21 == 8)) {
      pTVar22 = (TypeDescriptor *)&local_540;
      uVar8 = ParseDomainTag(this,*(ushort **)((longlong)auVar21 + 0x68),(CTTSString *)pTVar22);
    }
    pCVar17 = (CTTSEngine *)0x0;
    if (uVar8 != 0x80048019) {
      pCVar17 = (CTTSEngine *)(ulonglong)uVar8;
    }
    uVar8 = (uint)pCVar17;
    if ((int)uVar8 < 0) {
LAB_1800283e5:
      if (-1 < (int)uVar8) goto LAB_1800283e9;
    }
    else {
      if (*(TTSSAYAS **)((longlong)auVar21 + 0x20) != (TTSSAYAS *)0x0) {
        pCVar17 = this;
        uVar8 = MapInterpretAsTag(this,*(TTSSAYAS **)((longlong)auVar21 + 0x20));
        goto LAB_1800283e5;
      }
LAB_1800283e9:
      if (local_5b8 == (void *)0x0) {
        p_Var19 = (_GUID *)((longlong)auVar21 + 0x50);
        lVar2._0_4_ = p_Var19->Data1;
        lVar2._4_2_ = p_Var19->Data2;
        lVar2._6_2_ = p_Var19->Data3;
        if (lVar2 != 0) {
          local_5b8 = *(void **)((longlong)auVar21 + 0x50);
        }
      }
      if (local_5b0 == (ushort *)0x0) {
        p_Var19 = (_GUID *)((longlong)auVar21 + 0x60);
        lVar1._0_4_ = p_Var19->Data1;
        lVar1._4_2_ = p_Var19->Data2;
        lVar1._6_2_ = p_Var19->Data3;
        if (lVar1 != 0) {
          local_5b0 = *(ushort **)((longlong)auVar21 + 0x60);
        }
      }
      if (*(float *)((longlong)auVar21 + 0x58) != 0.0) {
        fVar25 = *(float *)((longlong)auVar21 + 0x58);
      }
      if (*(uint *)((longlong)auVar21 + 0x5c) != 0) {
        local_5d8.Data4._0_4_ = *(uint *)((longlong)auVar21 + 0x5c);
      }
      if (*(uint *)auVar21 == 8) {
        uVar8 = ParseWarmupTag(pCVar17,*(ushort **)((longlong)auVar21 + 0x68));
        if (uVar8 != 0x80048019) {
          bVar4 = true;
          break;
        }
        uVar8 = 0;
      }
    }
  }
  if ((-1 < (int)uVar8) && (bVar4)) {
    WarmUp(this);
LAB_18002849d:
    CTTSString::~CTTSString((CTTSString *)&local_540);
    return uVar8;
  }
LAB_18002847a:
  for (uVar18 = 0; uVar18 < *(ulonglong *)(this + 0x1b0); uVar18 = uVar18 + 1) {
    if (*(longlong *)(*(longlong *)(this + 0x1a8) + uVar18 * 8) == 0) {
      uVar8 = 0x80048011;
      goto LAB_18002849d;
    }
  }
  *(ulong *)(this + 0x450) = param_1;
  *(uchar (*) [8])(this + 0x448) = local_5c8.Data4;
  if ((int)uVar8 < 0) {
    auVar21 = local_5e0;
  }
  else {
    pIVar11 = GetSentenceAnalyzer(this);
    auVar21 = local_5e0;
    pTVar22 = (TypeDescriptor *)local_5e0;
    uVar8 = LoadCustomLexicons(this,*(ITTSPhoneConverter **)(this + 0x88),
                               (IMSTTSEngineSite *)local_5e0,pIVar11);
  }
  pTVar13 = (TypeDescriptor *)local_5c8.Data4;
  CCustomerTextNormalization::CTextFragmentWrapper::CTextFragmentWrapper
            ((CTextFragmentWrapper *)local_2b8);
  if ((-1 < (int)uVar8) &&
     (*(CCustomerTextNormalization **)(this + 0x688) != (CCustomerTextNormalization *)0x0)) {
    pTVar22 = (TypeDescriptor *)local_2b8;
    uVar8 = CCustomerTextNormalization::HandleContextFragment
                      (*(CCustomerTextNormalization **)(this + 0x688),(TTSTEXTFRAGMENT *)pTVar13,
                       (CTextFragmentWrapper *)pTVar22);
    if (-1 < (int)uVar8) {
      *(undefined8 *)(this + 0x448) = local_2b8[0]._0_8_;
    }
  }
  p_Var19 = local_518;
  CCustomerTextNormalization::CTextFragmentWrapper::CTextFragmentWrapper
            ((CTextFragmentWrapper *)p_Var19);
  uVar20 = 1;
  if (-1 < (int)uVar8) {
    if (*(longlong *)(this + 0x668) != 0) {
      p_Var19 = (_GUID *)(this + 0x658);
      pTVar22 = (TypeDescriptor *)local_518;
      uVar8 = ReplaceCustomLexiconAlias
                        ((undefined8 *)p_Var19,*(int **)(this + 0x448),(longlong *)pTVar22);
      if ((int)uVar8 < 0) goto LAB_18002858a;
      *(undefined8 *)(this + 0x448) = local_518[0]._0_8_;
    }
    pTVar22 = (TypeDescriptor *)&local_5c8;
    uVar8 = GetFragListFirstEmotion
                      ((CTTSEngine *)p_Var19,(TTSTEXTFRAGMENT *)local_5c8.Data4,
                       (EMOTIONML_CATEGORY *)pTVar22);
    uVar20 = local_5c8.Data1;
  }
LAB_18002858a:
  local_5a8 = (EMOTION_RECIPE *)0x0;
  if (-1 < (int)uVar8) {
    uVar12 = CTTSString::CTTSString((CTTSString *)&local_5a0,(CTTSString *)&local_540);
    pTVar22 = (TypeDescriptor *)(ulonglong)uVar20;
    local_5a8 = GetEmotionRecipe(this,uVar12);
  }
  local_5e0[0] = '\0';
  local_5e0[1] = '\0';
  local_5e0[2] = '\0';
  local_5e0[3] = '\0';
  local_5e0[4] = '\0';
  local_5e0[5] = '\0';
  local_5e0[6] = '\0';
  local_5e0[7] = '\0';
  local_5d8._0_8_ = (CTTSOutput *)0x0;
  if (-1 < (int)uVar8) {
    pTVar13 = (TypeDescriptor *)
              CTTSString::CTTSString((CTTSString *)&local_5a0,(CTTSString *)&local_540);
    pTVar22 = (TypeDescriptor *)&local_5d8;
    uVar8 = PrepareForSpeaking(this,local_5e0);
    if ((-1 < (int)uVar8) && ((CTTSOutput *)local_5d8._0_8_ == (CTTSOutput *)0x0)) {
      uVar8 = 0x8000ffff;
      this_01 = (CTTSOutput *)local_5d8._0_8_;
      auVar24 = local_5e0;
      goto LAB_180028687;
    }
  }
  this_01 = (CTTSOutput *)local_5d8._0_8_;
  auVar24 = local_5e0;
  p_Var10 = (_GUID *)0x0;
  p_Var19 = p_Var10;
  if (-1 < (int)uVar8) {
    for (; p_Var19 < *(void **)((longlong)auVar24 + 8);
        p_Var19 = (_GUID *)((longlong)&p_Var19->Data1 + 1)) {
      (**(code **)(**(longlong **)(*(longlong *)auVar24 + (longlong)p_Var19 * 8) + 0x10))();
    }
  }
  p_Var19 = p_Var10;
  if (-1 < (int)uVar8) {
    for (; p_Var19 < *(_GUID **)(this + 0x1d0); p_Var19 = (_GUID *)((longlong)&p_Var19->Data1 + 1))
    {
      (**(code **)(**(longlong **)(*(longlong *)(this + 0x1c8) + (longlong)p_Var19 * 8) + 0x10))();
    }
    *(uchar (*) [8])((undefined8)this_01 + 0x10) = auVar21;
    pTVar22 = *(TypeDescriptor **)(this + 0x10);
    if ((_GUID *)pTVar22 != (_GUID *)0x0) {
      do {
        *(uchar (*) [8])(*(longlong *)(*(longlong *)(this + 8) + (longlong)p_Var10 * 8) + 0x260) =
             auVar21;
        p_Var10 = (_GUID *)((longlong)&p_Var10->Data1 + 1);
      } while (p_Var10 < pTVar22);
    }
  }
LAB_180028687:
  local_580 = CTTSString::_vftable_;
  local_578 = (void *)0x0;
  pvStack_570 = (void *)0x0;
  local_568 = 0;
  do {
    pvVar23 = (void *)0x0;
    if ((int)uVar8 < 0) goto LAB_18002894a;
    local_5d8._0_8_ = local_5d8._0_8_ & 0xffffffff00000000;
    uVar8 = (**(code **)(**(longlong **)(this_01 + 0x10) + 0x10))
                      (*(longlong **)(this_01 + 0x10),&local_5d8);
    if ((int)uVar8 < 0) goto LAB_18002894a;
    if (((ulonglong)local_5d8.Data1 & 1) != 0) goto LAB_18002891f;
    local_5e0[0] = '\0';
    local_5e0[1] = '\0';
    local_5e0[2] = '\0';
    local_5e0[3] = '\0';
    local_5e0[4] = '\0';
    local_5e0[5] = '\0';
    local_5e0[6] = '\0';
    local_5e0[7] = '\0';
    uVar8 = CTTSUtterance::CreateInstance((CTTSUtterance **)local_5e0);
    auVar21 = local_5e0;
    if (uVar8 != 0) break;
    CTTSString::operator=((CTTSString *)((longlong)local_5e0 + 0x70),(CTTSString *)&local_540);
    *(void **)((longlong)auVar21 + 0xa8) = local_5b8;
    *(ushort **)((longlong)auVar21 + 0xb0) = local_5b0;
    *(float *)((longlong)auVar21 + 0xb8) = fVar25;
    *(EMOTION_RECIPE **)((longlong)auVar21 + 0xc0) = local_5a8;
    *(undefined4 *)((longlong)auVar21 + 200) = local_5d8.Data4._0_4_;
    uVar8 = CheckLuaEnabled(this,(CTTSUtterance *)auVar21);
    if (((int)uVar8 < 0) ||
       ((*(int *)((longlong)auVar21 + 0x754) != 0 &&
        (uVar8 = SetLspFullOrder(this,(CTTSUtterance *)auVar21), (int)uVar8 < 0))))
    goto LAB_18002894a;
    local_5a0._0_8_ = CTTSString::_vftable_;
    local_5a0.Data4[0] = '\0';
    local_5a0.Data4[1] = '\0';
    local_5a0.Data4[2] = '\0';
    local_5a0.Data4[3] = '\0';
    local_5a0.Data4[4] = '\0';
    local_5a0.Data4[5] = '\0';
    local_5a0.Data4[6] = '\0';
    local_5a0.Data4[7] = '\0';
    uStack_590 = 0;
    local_588 = 0;
    local_5e4 = 0;
    bVar4 = false;
    bVar6 = false;
    if (*(void **)((longlong)auVar24 + 8) != (void *)0x0) {
LAB_18002878d:
      lVar2 = *(longlong *)auVar24;
      local_5c8.Data1 = 0;
      if (((int)uVar8 < 0) ||
         (plVar15 = *(longlong **)(lVar2 + (longlong)pvVar23 * 8),
         uVar8 = (**(code **)(*plVar15 + 8))(plVar15,&local_5c8), (int)uVar8 < 0))
      goto LAB_180028836;
      puVar3 = *(undefined8 **)(this + 0x578);
      if (puVar3 != (undefined8 *)0x0) {
        pTVar22 = (TypeDescriptor *)0x0;
        pTVar13 = (TypeDescriptor *)auVar21;
        uVar8 = (**(code **)*puVar3)(puVar3,local_5c8.Data1);
        if (uVar8 != 1) {
          if ((int)uVar8 < 0) goto LAB_180028836;
          goto LAB_1800287eb;
        }
        uVar8 = 0;
LAB_1800288d9:
        pvVar23 = (void *)((longlong)pvVar23 + 1);
        bVar6 = bVar4;
        if (*(void **)((longlong)auVar24 + 8) <= pvVar23) goto LAB_1800289e2;
        goto LAB_18002878d;
      }
LAB_1800287eb:
      plVar15 = *(longlong **)(lVar2 + (longlong)pvVar23 * 8);
      uVar8 = (**(code **)(*plVar15 + 0x18))(plVar15,auVar21);
      if (((int)uVar8 < 0) || (puVar3 = *(undefined8 **)(this + 0x578), puVar3 == (undefined8 *)0x0)
         ) {
LAB_180028836:
        uVar20 = uVar8;
        if (uVar8 == 0) {
          if (local_5e4 == 0) {
            local_5e4 = ((_GUID *)((longlong)auVar21 + 0xa0))->Data1;
            if (!bVar4) {
              if ((local_5e4 != 0) && ((local_5e4 & 0xc) == 0)) goto LAB_180028862;
              bVar4 = true;
            }
            if (local_5e4 == 0) goto LAB_1800288d9;
          }
LAB_180028862:
          local_5e0 = (uchar  [8])((ulonglong)local_5e0 & 0xffffffff00000000);
          pTVar13 = &class_CTTSMetaDataHandler__RTTI_Type_Descriptor_;
          pTVar22 = &struct_ITTSHandler__RTTI_Type_Descriptor_;
          plVar15 = (longlong *)__RTDynamicCast(*(undefined8 *)(lVar2 + (longlong)pvVar23 * 8),0);
          if (((plVar15 == (longlong *)0x0) ||
              (uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15), -1 < (int)uVar8)) &&
             ((local_5e4 & local_5e0._0_4_) != 0)) {
            pTVar22 = (TypeDescriptor *)&local_5a0;
            pTVar13 = (TypeDescriptor *)auVar21;
            uVar8 = (**(code **)(*plVar15 + 8))(plVar15);
            bVar6 = bVar4;
            if (local_5e4 != 0) goto LAB_1800288d9;
            goto LAB_1800289e2;
          }
          goto LAB_1800288d9;
        }
      }
      else {
        pTVar22 = (TypeDescriptor *)0x1;
        pTVar13 = (TypeDescriptor *)auVar21;
        uVar20 = (**(code **)*puVar3)(puVar3,local_5c8.Data1);
        if (-1 < (int)uVar20) goto LAB_180028836;
      }
      uVar8 = uVar20;
      goto LAB_1800288f4;
    }
LAB_1800289e2:
    if (uVar8 == 0) {
      if (*(int *)(this + 0x6a8) == 0) {
LAB_180028add:
        if (local_5e4 != 0) {
          uVar8 = 0x80048003;
          goto LAB_1800288f4;
        }
      }
      else {
        if (bVar6) {
          uVar8 = ProcessParallelPipelines(this,(CTTSUtterance *)auVar21);
          if (uVar8 != 0) goto LAB_1800288f4;
        }
        if (*(int *)(this + 0x6a8) == 0) goto LAB_180028add;
        if (local_5e4 != 0) {
          uVar18 = 0;
          if (*(longlong *)(this + 0x1d0) != 0) {
            do {
              if (local_5e4 != 0) {
                local_5e0 = (uchar  [8])((ulonglong)local_5e0 & 0xffffffff00000000);
                pTVar13 = &class_CTTSMetaDataHandler__RTTI_Type_Descriptor_;
                pTVar22 = &struct_ITTSHandler__RTTI_Type_Descriptor_;
                plVar15 = (longlong *)
                          __RTDynamicCast(*(undefined8 *)(*(longlong *)(this + 0x1c8) + uVar18 * 8),
                                          0);
                if (plVar15 != (longlong *)0x0) {
                  uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15);
                }
                if ((-1 < (int)uVar8) && ((local_5e4 & local_5e0._0_4_) != 0)) {
                  pTVar22 = (TypeDescriptor *)&local_5a0;
                  pTVar13 = (TypeDescriptor *)auVar21;
                  uVar8 = (**(code **)(*plVar15 + 8))(plVar15);
                  if (local_5e4 == 0) break;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar18 < *(ulonglong *)(this + 0x1d0));
            if (uVar8 != 0) goto LAB_1800288f4;
          }
          goto LAB_180028add;
        }
      }
      uVar8 = CTTSMetaDataHelper::AppendUtteranceMetaData
                        ((CTTSString *)&local_5a0,(CTTSString *)&local_580);
    }
LAB_1800288f4:
    (*(code *)**(undefined8 **)auVar21)(auVar21);
    CTTSString::~CTTSString((CTTSString *)&local_5a0);
  } while (uVar8 == 0);
  if (-1 < (int)uVar8) {
LAB_18002891f:
    _Var14 = CTTSString::Length((CTTSString *)&local_580);
    if ((_Var14 == 0) ||
       (uVar8 = CTTSMetaDataHelper::AppendMetaDataArrayEnd((CTTSString *)&local_580),
       -1 < (int)uVar8)) {
      uVar8 = CTTSOutput::WriteMetaData(this_01,(CTTSString *)&local_580);
    }
  }
LAB_18002894a:
  p_Var10 = (_GUID *)0x0;
  for (p_Var19 = p_Var10;
      (p_Var5 = p_Var10, -1 < (int)uVar8 && (p_Var19 < *(void **)((longlong)auVar24 + 8)));
      p_Var19 = (_GUID *)((longlong)&p_Var19->Data1 + 1)) {
    uVar8 = (**(code **)(**(longlong **)(*(longlong *)auVar24 + (longlong)p_Var19 * 8) + 0x20))();
  }
  for (; (-1 < (int)uVar8 && (p_Var5 < *(_GUID **)(this + 0x1d0)));
      p_Var5 = (_GUID *)((longlong)&p_Var5->Data1 + 1)) {
    uVar8 = (**(code **)(**(longlong **)(*(longlong *)(this + 0x1c8) + (longlong)p_Var5 * 8) + 0x20)
            )();
  }
  pIVar11 = GetSentenceAnalyzer(this);
  pCVar17 = this;
  FreeCustomLexicons(this,pIVar11);
  if (-1 < (int)uVar8) {
    if (*(uint *)(this_01 + 0x68) == 0) {
      pTVar22 = (TypeDescriptor *)p_Var10;
    }
    else {
      pTVar22 = (TypeDescriptor *)
                ((ulonglong)(uint)(*(int *)(this_01 + 0x84) * 1000) /
                (ulonglong)*(uint *)(this_01 + 0x68));
    }
    pCVar17 = (CTTSEngine *)0x3;
    CTTSLogger::TraceMessage(3,(ushort *)L"[TTS] WaveTime = %u");
  }
  auVar21 = local_5c8.Data4;
  local_560 = CTTSString::_vftable_;
  local_558 = (void *)0x0;
  pvStack_550 = (void *)0x0;
  local_548 = 0;
  uVar20 = *(uint *)((longlong)local_5c8.Data4 + 0x74);
  lVar9 = CollectProcessName(pCVar17,(CTTSString *)&local_560);
  if (lVar9 < 0) {
    CTTSString::Clear((CTTSString *)&local_560);
  }
  p_Var19 = (_GUID *)((longlong)auVar21 + 0x80);
  lVar16._0_4_ = p_Var19->Data1;
  lVar16._4_2_ = p_Var19->Data2;
  lVar16._6_2_ = p_Var19->Data3;
  for (; lVar16 != 0; lVar16 = *(longlong *)(lVar16 + 0x80)) {
    uVar20 = uVar20 + *(int *)(lVar16 + 0x74);
  }
  TraceLoggingRegisterEx_EventRegister_EventSetInformation();
  if ((5 < DAT_1801ba048) && (uVar12 = _tlgKeywordOn(), (char)uVar12 != '\0')) {
    local_5e0[0] = (char)uVar8;
    local_5e0[1] = (char)(uVar8 >> 8);
    local_5e0[2] = (char)(uVar8 >> 0x10);
    local_5e0[3] = (char)(uVar8 >> 0x18);
    local_5a8 = (EMOTION_RECIPE *)
                CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_560);
    local_5d8.Data1 = uVar20;
    this_00 = (CTTSString *)(this + 0x3d8);
    local_5b0 = CTTSString::operator_unsigned_short_const____ptr64(this_00);
    local_5b8 = (void *)0x2000000;
    _tlgWriteTemplate<long___cdecl(_tlgProvider_t_const*___ptr64,void_const*___ptr64,_GUID_const*___ptr64,_GUID_const*___ptr64,unsigned_int,_EVENT_DATA_DESCRIPTOR*___ptr64),&long___cdecl__tlgWriteTransfer_EventWriteTransfer(struct__tlgProvider_t_const*___ptr64,void_const*___ptr64,struct__GUID_const*___ptr64,struct__GUID_const*___ptr64,unsigned_int,struct__EVENT_DATA_DESCRIPTOR*___ptr64),_GUID_const*___ptr64,_GUID_const*___ptr64>
    ::
    Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned_short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned_short>,_tlgWrapperByVal<4>_>
              ((_tlgProvider_t *)this_00,&DAT_1801a4d89,(_GUID *)pTVar22,(_GUID *)pTVar13,
               (_tlgWrapperByVal<8> *)&local_5b8,(_tlgWrapSz<unsigned_short> *)&local_5b0,
               (_tlgWrapperByVal<4> *)&local_5d8,(_tlgWrapSz<unsigned_short> *)&local_5a8,
               (_tlgWrapperByVal<4> *)local_5e0);
  }
  RegHandle = DAT_1801ba068;
  DAT_1801ba048 = 0;
  DAT_1801ba068 = 0;
  EventUnregister(RegHandle);
  if ((int)uVar8 < 0) {
    p_Var10 = (_GUID *)(ulonglong)uVar8;
  }
  local_560 = CTTSString::_vftable_;
  if (local_558 != (void *)0x0) {
    operator_delete__(local_558);
    local_558 = (void *)0x0;
  }
  if (pvStack_550 != (void *)0x0) {
    operator_delete__(pvStack_550);
    pvStack_550 = (void *)0x0;
  }
  local_580 = CTTSString::_vftable_;
  if (local_578 != (void *)0x0) {
    operator_delete__(local_578);
    local_578 = (void *)0x0;
  }
  if (pvStack_570 != (void *)0x0) {
    operator_delete__(pvStack_570);
    pvStack_570 = (void *)0x0;
  }
  TTS::CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_>::RemoveAll
            (local_2f0);
  CQuickStringTBase::~CQuickStringTBase((CQuickStringTBase *)local_518[0].Data4);
  TTS::CAtlList<CSetBase_const*___ptr64,TTS::CElementTraits<CSetBase_const*___ptr64>_>::RemoveAll
            (local_90);
  CQuickStringTBase::~CQuickStringTBase((CQuickStringTBase *)local_2b8[0].Data4);
  if (local_540.Data4 != (uchar  [8])0x0) {
    operator_delete__((void *)local_540.Data4);
  }
  if (local_530 != (void *)0x0) {
    operator_delete__(local_530);
  }
  return (long)p_Var10;
}

