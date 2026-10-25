
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CHTSModelSetManager::ParseIniSetting(struct ITTSEngineSetting *
   __ptr64) __ptr64 */

long __thiscall
CHTSModelSetManager::ParseIniSetting(CHTSModelSetManager *this,ITTSEngineSetting *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  CHTSVoiceData *pCVar5;
  ushort *puVar6;
  ushort *puVar7;
  CHTSVoiceData *pCVar8;
  long lVar9;
  CShareable *pCVar10;
  ushort **ppuVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_308 [32];
  uint local_2e8;
  CHTSVoiceData *local_2d8;
  uint local_2d0 [2];
  ushort *local_2c8;
  __uint64 local_2c0;
  wchar_t *local_2b8;
  ushort *local_2b0;
  undefined **local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  CTTSString local_288 [32];
  CTTSString local_268 [32];
  ushort local_248 [264];
  ulonglong local_38;
  
  local_38 = __security_cookie ^ (ulonglong)auStack_308;
  if (param_1 == (ITTSEngineSetting *)0x0) {
    return -0x7ff8ffa9;
  }
  local_2d0[0] = 0;
  local_2b8 = (wchar_t *)0x0;
  uVar13 = (**(code **)(*(longlong *)param_1 + 0x28))
                     (param_1,L"ExtendAcousticModel",L"Number",&local_2b8);
  pCVar10 = (CShareable *)(ulonglong)uVar13;
  if (uVar13 == 0) {
    if ((local_2b8 == (wchar_t *)0x0) ||
       (iVar1 = swscanf_s(local_2b8,L"%d",(int *)local_2d0), iVar1 != 1)) {
      pCVar10 = (CShareable *)0x8004801c;
      goto LAB_1800b018d;
    }
  }
  else if ((uVar13 != 1) && ((int)uVar13 < 0)) goto LAB_1800b018d;
  local_2c8 = (ushort *)0x0;
  uVar13 = (**(code **)(*(longlong *)param_1 + 0x28))
                     (param_1,L"ExtendAcousticModel",L"EnableEmotionSpsInRus",&local_2c8);
  if (uVar13 == 0) {
    pCVar10 = (CShareable *)0x0;
    if ((local_2c8 != (ushort *)0x0) && (iVar1 = _o__wcsicmp(), iVar1 == 0)) {
      *(undefined4 *)(this + 0x50) = 1;
    }
  }
  else {
    pCVar10 = (CShareable *)(ulonglong)uVar13;
    if (uVar13 == 1) {
      pCVar10 = (CShareable *)0x0;
    }
  }
LAB_1800b018d:
  lVar9 = (long)pCVar10;
  memset(local_248,0,0x208);
  uVar13 = 0;
  if (local_2d0[0] != 0) {
    do {
      pCVar8 = (CHTSVoiceData *)0x0;
      if ((int)pCVar10 < 0) {
        return (int)pCVar10;
      }
      local_2c8 = (ushort *)0x0;
      local_2e8 = uVar13;
      uVar2 = StringCchPrintfW(local_248,0x104,(ushort *)L"%s%d",L"APM");
      if (((int)uVar2 < 0) ||
         ((uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))
                             (param_1,L"ExtendAcousticModel",local_248,&local_2c8), uVar2 != 1 &&
          (local_2c8 != (ushort *)0x0)))) {
        pCVar10 = (CShareable *)(ulonglong)uVar2;
        CTTSString::CTTSString(local_288,(ushort *)L"general");
        if (-1 < (int)uVar2) {
          local_2e8 = uVar13;
          uVar2 = StringCchPrintfW(local_248,0x104,(ushort *)L"%s%d",L"Domain");
          pCVar10 = (CShareable *)(ulonglong)uVar2;
          if (-1 < (int)uVar2) {
            local_2d8 = (CHTSVoiceData *)0x0;
            uVar2 = (**(code **)(*(longlong *)param_1 + 0x28))
                              (param_1,L"ExtendAcousticModel",local_248,&local_2d8);
            pCVar10 = (CShareable *)(ulonglong)uVar2;
            if ((-1 < (int)uVar2) && (local_2d8 != (CHTSVoiceData *)0x0)) {
              uVar2 = CTTSDomainConfig::GetLowerCaseDomainName((ushort *)local_2d8,local_288);
              pCVar10 = (CShareable *)(ulonglong)uVar2;
            }
          }
        }
        local_2d8 = (CHTSVoiceData *)CONCAT44(local_2d8._4_4_,1);
        if (-1 < (int)pCVar10) {
          local_2e8 = uVar13;
          uVar2 = StringCchPrintfW(local_248,0x104,(ushort *)L"%s%d",L"Emotion");
          pCVar10 = (CShareable *)(ulonglong)uVar2;
          if (-1 < (int)uVar2) {
            local_2b0 = (ushort *)0x0;
            ppuVar11 = &local_2b0;
            uVar3 = (**(code **)(*(longlong *)param_1 + 0x28))
                              (param_1,L"ExtendAcousticModel",local_248);
            pCVar10 = (CShareable *)(uVar3 & 0xffffffff);
            if (-1 < (int)uVar3) {
              uVar12 = 1;
              if (local_2b0 != (ushort *)0x0) {
                local_2c0 = 0xffffffffffffffff;
                do {
                  local_2c0 = local_2c0 + 1;
                } while (local_2b0[local_2c0] != 0);
                iVar1 = CTTSEmotionConfig::EmotionCategoryNameToEnum
                                  (local_2b0,&local_2c0,(EMOTIONML_CATEGORY *)&local_2d8);
                if (iVar1 == 0) {
                  pCVar10 = (CShareable *)0x8004801c;
                  goto LAB_1800b041c;
                }
                uVar12 = local_2d8._0_4_;
              }
              uVar4 = CTTSString::CTTSString((CTTSString *)&local_2a8,local_288);
              pCVar5 = GetVoiceDataByEmotionAndDomain(this,uVar12,uVar4);
              if (pCVar5 == (CHTSVoiceData *)0x0) {
                local_2d8 = (CHTSVoiceData *)0x0;
                local_2a8 = CTTSString::_vftable_;
                local_2a0 = 0;
                uStack_298 = 0;
                local_290 = 0;
                CTTSString::Clear((CTTSString *)&local_2a8);
                puVar6 = CTTSString::operator_unsigned_short_const____ptr64
                                   ((CTTSString *)(this + 0x30));
                puVar7 = local_2c8;
                uVar2 = CTTSString::Append2HR((CTTSString *)&local_2a8,puVar6,local_2c8);
                iVar1 = (int)puVar7;
                pCVar10 = (CShareable *)(ulonglong)uVar2;
                if (-1 < (int)uVar2) {
                  puVar7 = CTTSString::operator_unsigned_short_const____ptr64
                                     ((CTTSString *)&local_2a8);
                  uVar2 = CTTSSharedDataLoader::LoadSharedData<CHTSVoiceData>
                                    (puVar7,(CSharedPtr<CHTSVoiceData> *)&local_2d8,iVar1,ppuVar11);
                  pCVar8 = local_2d8;
                  pCVar10 = (CShareable *)(ulonglong)uVar2;
                  if (-1 < (int)uVar2) {
                    uVar2 = VerifyVoiceData(this,local_2d8);
                    pCVar10 = (CShareable *)(ulonglong)uVar2;
                    if (-1 < (int)uVar2) {
                      uVar4 = CTTSString::CTTSString(local_268,local_288);
                      uVar2 = AddVoiceDataByEmotionAndDomain(this,pCVar8,uVar12,uVar4);
                      pCVar10 = (CShareable *)(ulonglong)uVar2;
                      if (uVar2 == 1) {
                        pCVar10 = (CShareable *)0x8004801c;
                      }
                    }
                  }
                }
                CTTSString::~CTTSString((CTTSString *)&local_2a8);
                ReleaseSharedObject((CShareable *)pCVar8);
              }
            }
          }
        }
LAB_1800b041c:
        CTTSString::~CTTSString(local_288);
      }
      else {
        pCVar10 = (CShareable *)pCVar8;
      }
      lVar9 = (long)pCVar10;
      uVar13 = uVar13 + 1;
    } while (uVar13 < local_2d0[0]);
  }
  return lVar9;
}

