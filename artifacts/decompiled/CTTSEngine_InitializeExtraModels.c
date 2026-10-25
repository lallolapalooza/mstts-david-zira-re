
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: long __cdecl CTTSEngine::InitializeExtraModels(unsigned short const * __ptr64) __ptr64 */

long __thiscall CTTSEngine::InitializeExtraModels(CTTSEngine *this,ushort *param_1)

{
  CTTSEngine *pCVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  longlong lVar8;
  CTTSDomainConfig *this_00;
  undefined8 uVar9;
  uint uVar10;
  CTTSSetting *pCVar11;
  CTTSDomainConfig **ppCVar12;
  uint uVar13;
  ushort uVar14;
  int iVar15;
  wchar_t *pwVar16;
  bool bVar17;
  undefined1 auStack_958 [32];
  wchar_t *local_938;
  ushort *local_930;
  undefined4 local_928;
  uint local_918 [2];
  CTTSDomainConfig *local_910;
  undefined4 local_908;
  wchar_t *local_900;
  int local_8f8;
  ushort *local_8f0;
  ushort *local_8e8;
  wchar_t *local_8e0;
  CTTSDomainConfig *local_8d8;
  ushort *local_8d0;
  CTTSString local_8c8 [32];
  CTTSString local_8a8 [32];
  ushort local_888 [264];
  ushort local_678 [264];
  ushort local_468 [264];
  ushort local_258 [264];
  ulonglong local_48;
  
  local_48 = __security_cookie ^ (ulonglong)auStack_958;
  local_8e0 = (wchar_t *)param_1;
  memset(local_888,0,0x208);
  local_8d0 = (ushort *)0x0;
  local_8f0 = (ushort *)0x0;
  local_900 = (wchar_t *)0x0;
  local_8e8 = (ushort *)0x0;
  local_918[0] = 0;
  iVar15 = *(int *)(this + 0x4a0);
  pCVar1 = this + 0x588;
  local_8f8 = iVar15;
  iVar6 = (**(code **)(*(longlong *)pCVar1 + 0x28))(pCVar1,L"ExtraModels",L"Number",&local_900);
  if (iVar6 == 0) {
    if ((local_900 == (wchar_t *)0x0) ||
       (iVar4 = swscanf_s(local_900,L"%d",(int *)local_918), iVar4 != 1)) {
      iVar6 = -0x7fff0001;
      goto LAB_180092ac7;
    }
    if (local_918[0] == 0) goto LAB_180092ad8;
    iVar6 = (**(code **)(*(longlong *)pCVar1 + 0x28))(pCVar1,L"ExtraModels",L"ExtraMode",&local_900)
    ;
    pwVar16 = local_900;
    if ((iVar6 != 0) || (local_900 == (wchar_t *)0x0)) goto LAB_180092ac7;
    iVar4 = wcscmp(local_900,L"Addon");
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    else {
      iVar4 = wcscmp(pwVar16,L"Mapping");
      if (iVar4 == 0) {
        uVar5 = 2;
      }
      else {
        iVar4 = wcscmp(pwVar16,L"MixLingual");
        if (iVar4 != 0) goto LAB_180092ac7;
        uVar5 = 3;
      }
    }
    if (local_918[0] == 0) goto LAB_180092ace;
    *(undefined4 *)(this + 0x4a0) = uVar5;
  }
  else {
LAB_180092ac7:
    if (local_918[0] != 0) {
LAB_180092ace:
      iVar6 = -0x7ffb7fe4;
      goto LAB_180092f21;
    }
LAB_180092ad8:
    *(undefined4 *)(this + 0x4a0) = 0;
    if (iVar6 < 0) goto LAB_180092f21;
  }
  uVar13 = 0;
  do {
    uVar14 = 0;
    if (local_918[0] <= uVar13) break;
    local_908 = 0;
    local_930 = (ushort *)CONCAT44(local_930._4_4_,uVar13);
    local_938 = L"Language";
    iVar6 = StringCchPrintfW(local_888,0x104,(ushort *)L"%s.%s%d",L"ExtraModels");
    if ((iVar6 < 0) ||
       (iVar6 = CTTSSetting::GetPropertyStringInternal
                          ((CTTSSetting *)(this + 0x588),local_888,(ushort **)&local_900),
       iVar6 != 1)) {
      local_910 = (CTTSDomainConfig *)((ulonglong)local_910 & 0xffffffffffff0000);
      if (-1 < iVar6) {
        iVar6 = CTTSLanguageHelper::LocaleNameToLangID((ushort *)local_900,(ushort *)&local_910);
        uVar14 = (ushort)local_910;
      }
      pwVar16 = (wchar_t *)0x0;
      if (-1 < iVar6) {
        pwVar16 = (wchar_t *)CTTSLanguageHelper::LangIDToName(uVar14);
        if (pwVar16 == (wchar_t *)0x0) {
          iVar6 = -0x7fff0001;
        }
        else {
          local_930 = (ushort *)CONCAT44(local_930._4_4_,uVar13);
          local_938 = L"Domain";
          iVar6 = StringCchPrintfW(local_888,0x104,(ushort *)L"%s.%s%d",L"ExtraModels");
        }
      }
    }
    else {
      iVar6 = -0x7ffb7fe4;
      pwVar16 = (wchar_t *)0x0;
    }
    CTTSString::CTTSString(local_8c8,(ushort *)L"none");
    if (-1 < iVar6) {
      lVar7 = CTTSSetting::GetPropertyStringInternal
                        ((CTTSSetting *)(this + 0x588),local_888,&local_8e8);
      if (lVar7 == 1) {
        CTTSString::operator=(local_8c8,(ushort *)L"general");
        iVar6 = 1;
      }
      else {
        iVar6 = CTTSDomainConfig::GetLowerCaseDomainName(local_8e8,local_8c8);
      }
    }
    iVar15 = 1;
    local_910 = (CTTSDomainConfig *)CONCAT44(local_910._4_4_,1);
    if (-1 < iVar6) {
      memset(local_468,0,0x208);
      local_930 = (ushort *)CONCAT44(local_930._4_4_,uVar13);
      local_938 = L"Emotion";
      iVar6 = StringCchPrintfW(local_468,0x104,(ushort *)L"%s.%s%d",L"ExtraModels");
      if (-1 < iVar6) {
        iVar6 = CTTSSetting::GetPropertyStringInternal
                          ((CTTSSetting *)(this + 0x588),local_468,&local_8d0);
      }
      bVar17 = iVar6 < 0;
      if (iVar6 == 0) {
        lVar8 = -1;
        do {
          lVar8 = lVar8 + 1;
        } while (local_8d0[lVar8] != 0);
        if (lVar8 != 0) {
          local_8d8 = (CTTSDomainConfig *)0xffffffffffffffff;
          do {
            local_8d8 = local_8d8 + 1;
          } while (local_8d0[(longlong)local_8d8] != 0);
          iVar6 = CTTSEmotionConfig::EmotionCategoryNameToEnum
                            (local_8d0,(__uint64 *)&local_8d8,(EMOTIONML_CATEGORY *)&local_910);
          iVar15 = (int)local_910;
          if (iVar6 == 0) {
            iVar6 = -0x7ffb7fe4;
            bVar17 = true;
            goto LAB_180092cdb;
          }
        }
      }
      else {
LAB_180092cdb:
        if (bVar17) goto LAB_180092d5f;
      }
      memset(local_258,0,0x208);
      local_930 = (ushort *)CONCAT44(local_930._4_4_,uVar13);
      local_938 = L"DataFolder";
      iVar6 = StringCchPrintfW(local_258,0x104,(ushort *)L"%s.%s%d",L"ExtraModels");
      if (((-1 < iVar6) &&
          (iVar6 = CTTSSetting::GetPropertyStringInternal
                             ((CTTSSetting *)(this + 0x588),local_258,&local_8f0), -1 < iVar6)) &&
         (local_8f0 != (ushort *)0x0)) {
        local_908 = 1;
      }
    }
LAB_180092d5f:
    puVar2 = local_8f0;
    memset(local_678,0,0x20a);
    if (-1 < iVar6) {
      iVar6 = operator!=(local_8c8,(ushort *)L"general");
      local_938 = pwVar16;
      if ((iVar6 == 0) && (iVar15 == 1)) {
        iVar6 = StringCchPrintfW(local_678,0x105,(ushort *)L"%s.%s",local_8e0);
      }
      else {
        if (puVar2 == (ushort *)0x0) {
          local_930 = local_8e8;
          iVar6 = StringCchPrintfW(local_678,0x105,(ushort *)L"%s.%s.%s",local_8e0);
        }
        else {
          local_938 = local_8e0;
          iVar6 = StringCchPrintfW(local_678,0x105,(ushort *)L"%s\\%s",puVar2);
        }
        if (iVar6 < 0) goto LAB_180092ef9;
        uVar3 = (**(code **)(*(longlong *)this + 0x28))(this);
        if (uVar14 != uVar3) goto LAB_180092eb7;
        uVar10 = 0x801825d8;
        local_8d8 = operator_new(0x100,&std::nothrow);
        if (local_8d8 == (CTTSDomainConfig *)0x0) {
          this_00 = (CTTSDomainConfig *)0x0;
LAB_180092ea5:
          iVar6 = -0x7ff8fff2;
        }
        else {
          this_00 = (CTTSDomainConfig *)CTTSDomainConfig::CTTSDomainConfig(local_8d8);
          local_910 = this_00;
          if (this_00 == (CTTSDomainConfig *)0x0) goto LAB_180092ea5;
          pCVar11 = (CTTSSetting *)(this + 0x588);
          iVar6 = CTTSDomainConfig::Initialize(this_00,pCVar11,uVar13,(ushort *)L"ExtraModels");
          uVar10 = (uint)pCVar11;
          if (-1 < iVar6) {
            ppCVar12 = &local_910;
            iVar6 = CTTSDomainHandlerList::AddDomainHandle
                              (*(CTTSDomainHandlerList **)(this + 0x580),ppCVar12,
                               (IMSTTSEngine *)this);
            uVar10 = (uint)ppCVar12;
            this_00 = local_910;
          }
        }
        if (this_00 != (CTTSDomainConfig *)0x0) {
          CTTSDomainConfig::_scalar_deleting_destructor_(this_00,uVar10);
        }
      }
LAB_180092eb7:
      if (-1 < iVar6) {
        uVar5 = *(undefined4 *)(this + 0x4a0);
        uVar9 = CTTSString::CTTSString(local_8a8,local_8c8);
        local_928 = local_908;
        local_930 = (ushort *)CONCAT44(local_930._4_4_,uVar5);
        local_938 = (wchar_t *)CONCAT44(local_938._4_4_,iVar15);
        iVar6 = CreateExtraEngine(this,local_678,uVar14,uVar9);
      }
    }
LAB_180092ef9:
    CTTSString::~CTTSString(local_8c8);
    uVar13 = uVar13 + 1;
  } while (-1 < iVar6);
  iVar15 = local_8f8;
LAB_180092f21:
  if (iVar15 != 0) {
    *(int *)(this + 0x4a0) = iVar15;
  }
  return iVar6;
}

