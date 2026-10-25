
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CTTSEngine::InitializeEngineSetting(void) __ptr64 */

long __thiscall CTTSEngine::InitializeEngineSetting(CTTSEngine *this)

{
  bool bVar1;
  int iVar2;
  ushort *puVar3;
  CTTSString *this_00;
  CTTSEngine *pCVar4;
  int iVar5;
  code *pcVar6;
  CTTSEngine *pCVar7;
  undefined ***pppuVar8;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_58 = CTTSString::_vftable_;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  pCVar4 = this + 0x370;
  pcVar6 = *(code **)(*(longlong *)pCVar4 + 0x30);
  this_00 = (CTTSString *)(this + 0x3b8);
  puVar3 = CTTSString::operator_unsigned_short_const____ptr64(this_00);
  iVar2 = (*pcVar6)(pCVar4,puVar3,L"INI",&local_58);
  if (iVar2 == -0x7ff8fffe) {
    iVar2 = CTTSString::CopyFrom((CTTSString *)&local_58,(ushort *)L" ");
    *(undefined4 *)(this + 0x698) = 0;
  }
  if (-1 < iVar2) {
    pCVar7 = this + 0x588;
    pcVar6 = *(code **)(*(longlong *)pCVar7 + 0x48);
    puVar3 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_58);
    iVar2 = (*pcVar6)(pCVar7,puVar3);
    if (-1 < iVar2) {
      bVar1 = CTTSString::IsEmpty(this_00);
      if (!bVar1) {
        local_38 = CTTSString::_vftable_;
        local_30 = 0;
        uStack_28 = 0;
        local_20 = 0;
        pcVar6 = *(code **)(*(longlong *)pCVar4 + 0x30);
        puVar3 = CTTSString::operator_unsigned_short_const____ptr64(this_00);
        pppuVar8 = &local_38;
        iVar5 = -0x7fe7ab90;
        iVar2 = (*pcVar6)(pCVar4,puVar3);
        if (-1 < iVar2) {
          pCVar4 = this + 0x648;
          puVar3 = CTTSString::operator_unsigned_short_const____ptr64((CTTSString *)&local_38);
          iVar2 = CTTSSharedDataLoader::LoadSharedData<CParameterManager>
                            (puVar3,(CSharedPtr<CParameterManager> *)pCVar4,iVar5,pppuVar8);
        }
        if (iVar2 + 0x7ff8fffeU < 2) {
          iVar2 = 0;
        }
        CTTSString::~CTTSString((CTTSString *)&local_38);
      }
    }
  }
  CTTSString::~CTTSString((CTTSString *)&local_58);
  return iVar2;
}

