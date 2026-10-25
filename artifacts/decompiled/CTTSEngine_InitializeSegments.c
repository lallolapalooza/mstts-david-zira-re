
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: long __cdecl CTTSEngine::InitializeSegments(void) __ptr64 */

long __thiscall CTTSEngine::InitializeSegments(CTTSEngine *this)

{
  CTTSSetting *this_00;
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  longlong lVar6;
  CTTSDomainConfig *this_01;
  ushort *puVar7;
  uint uVar8;
  CTTSSetting *pCVar9;
  CTTSDomainConfig **ppCVar10;
  uint uVar11;
  short sVar12;
  undefined1 auStack_538 [32];
  wchar_t *local_518;
  uint local_510;
  undefined4 local_508;
  CTTSDomainConfig *local_4f8;
  uint local_4f0 [2];
  wchar_t *local_4e8;
  int local_4e0;
  ushort *local_4d8;
  ushort *local_4d0;
  CTTSDomainConfig *local_4c8;
  ushort *local_4c0;
  undefined **local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  CTTSString local_498 [32];
  CTTSString local_478 [32];
  ushort local_458 [264];
  ushort local_248 [264];
  ulonglong local_38;
  
  local_38 = __security_cookie ^ (ulonglong)auStack_538;
  memset(local_458,0,0x208);
  local_4d0 = (ushort *)0x0;
  local_4e8 = (wchar_t *)0x0;
  local_4d8 = (ushort *)0x0;
  local_4f0[0] = 0;
  iVar5 = *(int *)(this + 0x4a0);
  this_00 = (CTTSSetting *)(this + 0x588);
  local_4e0 = iVar5;
  iVar3 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00,L"Segments",L"Number",&local_4e8);
  if (iVar3 == 0) {
    if ((local_4e8 == (wchar_t *)0x0) ||
       (iVar2 = swscanf_s(local_4e8,L"%d",(int *)local_4f0), iVar2 != 1)) {
      iVar3 = -0x7fff0001;
      goto LAB_18009367c;
    }
    if (local_4f0[0] == 0) goto LAB_180093292;
    *(undefined4 *)(this + 0x4a0) = 1;
    uVar11 = 0;
  }
  else {
LAB_180093292:
    uVar11 = 0;
    if (iVar3 < 0) goto LAB_18009367c;
  }
  do {
    this_01 = (CTTSDomainConfig *)0x0;
    if (local_4f0[0] <= uVar11) break;
    local_518 = L"Language";
    local_510 = uVar11;
    iVar3 = StringCchPrintfW(local_458,0x104,(ushort *)L"%s.%s%d",L"Segments");
    if (-1 < iVar3) {
      iVar3 = CTTSSetting::GetPropertyStringInternal(this_00,local_458,(ushort **)&local_4e8);
    }
    sVar12 = *(short *)(this + 0x418);
    local_4f8 = (CTTSDomainConfig *)CONCAT62(local_4f8._2_6_,sVar12);
    if (-1 < iVar3) {
      if (local_4e8 != (wchar_t *)0x0) {
        iVar3 = CTTSLanguageHelper::LocaleNameToLangID((ushort *)local_4e8,(ushort *)&local_4f8);
        sVar12 = (short)local_4f8;
        if (iVar3 < 0) goto LAB_180093351;
      }
      local_518 = L"Domain";
      local_510 = uVar11;
      iVar3 = StringCchPrintfW(local_458,0x104,(ushort *)L"%s.%s%d",L"Segments");
    }
LAB_180093351:
    CTTSString::CTTSString(local_498,(ushort *)L"none");
    if (-1 < iVar3) {
      lVar4 = CTTSSetting::GetPropertyStringInternal(this_00,local_458,&local_4d8);
      if (lVar4 == 1) {
        CTTSString::operator=(local_498,(ushort *)L"general");
        iVar3 = 1;
      }
      else {
        iVar3 = CTTSDomainConfig::GetLowerCaseDomainName(local_4d8,local_498);
      }
    }
    iVar5 = 1;
    local_4f8 = (CTTSDomainConfig *)CONCAT44(local_4f8._4_4_,1);
    if (-1 < iVar3) {
      memset(local_248,0,0x208);
      local_518 = L"Emotion";
      local_510 = uVar11;
      iVar3 = StringCchPrintfW(local_248,0x104,(ushort *)L"%s.%s%d",L"Segments");
      if (-1 < iVar3) {
        iVar3 = CTTSSetting::GetPropertyStringInternal(this_00,local_248,&local_4d0);
      }
      if (iVar3 == 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (local_4d0[lVar6] != 0);
        if (lVar6 != 0) {
          local_4c8 = (CTTSDomainConfig *)0xffffffffffffffff;
          do {
            local_4c8 = local_4c8 + 1;
          } while (local_4d0[(longlong)local_4c8] != 0);
          iVar5 = CTTSEmotionConfig::EmotionCategoryNameToEnum
                            (local_4d0,(__uint64 *)&local_4c8,(EMOTIONML_CATEGORY *)&local_4f8);
          if (iVar5 == 0) {
            iVar3 = -0x7ffb7fe4;
          }
          iVar5 = (int)local_4f8;
        }
      }
    }
    local_4b8 = CTTSString::_vftable_;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_4a0 = 0;
    local_4c0 = (ushort *)0x0;
    if (-1 < iVar3) {
      local_518 = L"SeparateRUSPrefix";
      local_510 = uVar11;
      iVar3 = StringCchPrintfW(local_458,0x104,(ushort *)L"%s.%s%d",L"Segments");
      if (((-1 < iVar3) &&
          (iVar3 = CTTSSetting::GetPropertyStringInternal(this_00,local_458,&local_4c0), -1 < iVar3)
          ) && ((local_4c0 == (ushort *)0x0 ||
                (iVar3 = CTTSString::Append2HR((CTTSString *)&local_4b8,local_4c0,(ushort *)L"\\"),
                -1 < iVar3)))) {
        puVar7 = (ushort *)(**(code **)(*(longlong *)this + 0xa8))(this);
        iVar3 = CTTSString::AppendHR((CTTSString *)&local_4b8,puVar7);
        if (((-1 < iVar3) &&
            ((local_4d8 == (ushort *)0x0 ||
             (iVar3 = CTTSString::Append2HR((CTTSString *)&local_4b8,(ushort *)L".",local_4d8),
             -1 < iVar3)))) &&
           ((local_4d0 == (ushort *)0x0 ||
            (iVar3 = CTTSString::Append2HR((CTTSString *)&local_4b8,(ushort *)L".",local_4d0),
            -1 < iVar3)))) {
          iVar2 = operator!=(local_498,(ushort *)L"general");
          if (((iVar2 != 0) || (iVar5 != 1)) &&
             (sVar1 = (**(code **)(*(longlong *)this + 0x28))(this), sVar12 == sVar1)) {
            uVar8 = 0x801825d8;
            local_4c8 = operator_new(0x100,&std::nothrow);
            if (local_4c8 == (CTTSDomainConfig *)0x0) {
LAB_180093605:
              iVar3 = -0x7ff8fff2;
            }
            else {
              this_01 = (CTTSDomainConfig *)CTTSDomainConfig::CTTSDomainConfig(local_4c8);
              local_4f8 = this_01;
              if (this_01 == (CTTSDomainConfig *)0x0) goto LAB_180093605;
              pCVar9 = this_00;
              iVar3 = CTTSDomainConfig::Initialize(this_01,this_00,uVar11,(ushort *)L"Segments");
              uVar8 = (uint)pCVar9;
              if (-1 < iVar3) {
                ppCVar10 = &local_4f8;
                iVar3 = CTTSDomainHandlerList::AddDomainHandle
                                  (*(CTTSDomainHandlerList **)(this + 0x580),ppCVar10,
                                   (IMSTTSEngine *)this);
                uVar8 = (uint)ppCVar10;
                this_01 = local_4f8;
              }
            }
            if (this_01 != (CTTSDomainConfig *)0x0) {
              CTTSDomainConfig::_scalar_deleting_destructor_(this_01,uVar8);
            }
          }
          if (-1 < iVar3) {
            uVar8 = *(uint *)(this + 0x4a0);
            CTTSString::CTTSString(local_478,local_498);
            puVar7 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_4b8);
            local_508 = 0;
            local_518 = (wchar_t *)CONCAT44(local_518._4_4_,iVar5);
            local_510 = uVar8;
            iVar3 = CreateExtraEngine(this,puVar7,sVar12);
          }
        }
      }
    }
    CTTSString::~CTTSString((CTTSString *)&local_4b8);
    CTTSString::~CTTSString(local_498);
    uVar11 = uVar11 + 1;
  } while (-1 < iVar3);
  iVar5 = local_4e0;
LAB_18009367c:
  if (iVar5 != 0) {
    *(int *)(this + 0x4a0) = iVar5;
  }
  return iVar3;
}

