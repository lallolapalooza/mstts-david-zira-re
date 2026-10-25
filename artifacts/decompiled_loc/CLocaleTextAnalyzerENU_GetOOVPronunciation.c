
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CLocaleTextAnalyzerENU::GetOOVPronunciation(struct ITTSWord *
   __ptr64,unsigned short * __ptr64,unsigned long) __ptr64 */

long __thiscall
CLocaleTextAnalyzerENU::GetOOVPronunciation
          (CLocaleTextAnalyzerENU *this,ITTSWord *param_1,ushort *param_2,ulong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  ushort *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar14;
  ulonglong uVar13;
  undefined8 uVar15;
  undefined8 in_stack_fffffffffffffef8;
  ushort *puVar16;
  undefined4 uVar17;
  undefined **local_e8;
  ushort *local_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined ***local_c8;
  undefined **local_c0;
  ushort *local_b8;
  void *local_b0;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined ***local_70;
  CTTSString local_68 [32];
  CTTSString local_48 [32];
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffef8 >> 0x20);
  if (*(longlong *)(this + 0x18) == 0) {
    return -0x7ffb7fff;
  }
  if (*(longlong *)(this + 0xa8) == 0) {
    return -0x7fff0001;
  }
  lVar11 = *(longlong *)(this + 0xa0);
  if ((((lVar11 == 0) || (param_1 == (ITTSWord *)0x0)) || (param_2 == (ushort *)0x0)) ||
     (param_3 == 0)) {
    lVar7 = -0x7ff8ffa9;
  }
  else {
    pwVar8 = (wchar_t *)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
    lVar9 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    if (((lVar9 == 0) || (pwVar8 == (wchar_t *)0x0)) ||
       ((iVar6 = wcscmp(pwVar8,L"sp:email"), iVar6 != 0 &&
        ((iVar6 = wcscmp(pwVar8,L"sp:webUrl"), iVar6 != 0 &&
         (iVar6 = wcscmp(pwVar8,L"sp:filePath"), iVar6 != 0)))))) {
      lVar7 = 1;
    }
    else {
      uVar5 = (**(code **)(*(longlong *)param_1 + 0x38))(param_1);
      local_e8 = CEmailWordBreaker::_vftable_;
      local_e0 = (ushort *)CONCAT62(local_e0._2_6_,uVar5);
      lStack_d8 = lVar11;
      puVar10 = (ushort *)(**(code **)(*(longlong *)param_1 + 0x80))(param_1);
      lVar7 = CEmailWordBreaker::GetEmailTokenPronunciation
                        ((CEmailWordBreaker *)&local_e8,puVar10,param_2,param_3);
    }
  }
  puVar10 = (ushort *)(**(code **)(*(longlong *)param_1 + 0x80))(param_1);
  (**(code **)(*(longlong *)param_1 + 0xe0))(param_1,&local_c0);
  if (lVar7 == 1) {
    lVar11 = (**(code **)(*(longlong *)param_1 + 0xc0))();
    if (lVar11 != 0) {
      pwVar8 = (wchar_t *)(**(code **)(*(longlong *)param_1 + 0xc0))(param_1);
      iVar6 = wcscmp(pwVar8,L"sp:mixedAcronymWord");
      if (iVar6 == 0) {
        plVar2 = *(longlong **)(this + 0xa8);
        pcVar3 = *(code **)(*plVar2 + 8);
        uVar12 = CTTSString::CTTSString((CTTSString *)&local_e8,(CTTSString *)&local_c0);
        puVar16 = param_2;
        lVar7 = (*pcVar3)(plVar2,puVar10,5,uVar12,param_2,param_3,0);
        uVar17 = (undefined4)((ulonglong)puVar16 >> 0x20);
        if (lVar7 != 1) goto LAB_18000a618;
      }
    }
    puVar16 = local_b8;
    plVar2 = *(longlong **)(this + 0xb0);
    local_c8 = &local_e8;
    local_e8 = CTTSString::_vftable_;
    local_e0 = (ushort *)0x0;
    lStack_d8 = 0;
    local_d0 = 0;
    if ((local_b8 != (ushort *)0x0) && (*local_b8 != 0)) {
      uVar13 = 0xffffffffffffffff;
      do {
        uVar14 = uVar13;
        uVar13 = uVar14 + 1;
      } while (local_b8[uVar13] != 0);
      if ((uVar13 != 0) &&
         ((uVar14 = uVar14 + 2, uVar14 < uVar13 ||
          (((uVar14 != 0 &&
            (lVar7 = CTTSString::EnsureBuffer((CTTSString *)&local_e8,uVar14,false), lVar7 < 0)) ||
           (lVar7 = StringCchCopyW(local_e0,uVar14,puVar16), lVar7 < 0)))))) {
        CTTSString::ClearBuffer((CTTSString *)&local_e8);
      }
    }
    local_70 = &local_e8;
    uVar12 = (**(code **)(*(longlong *)param_1 + 0x80))(param_1);
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 10;
    lVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,uVar12);
    if (lVar7 == 0) {
      pcVar3 = *(code **)(*plVar2 + 0x10);
      uVar15 = CTTSString::CTTSString(local_48,(CTTSString *)&local_e8);
      lVar7 = (*pcVar3)(plVar2,uVar12,uVar15,&local_a0);
      if (((lVar7 == 0) && (lVar7 = (**(code **)(*plVar2 + 8))(plVar2,&local_a0), lVar7 == 0)) &&
         (lVar7 = (**(code **)(*plVar2 + 0x18))(plVar2,&local_a0), lVar7 == 0)) {
        pcVar3 = *(code **)(*plVar2 + 0x28);
        uVar12 = CTTSString::CTTSString(local_68,(CTTSString *)&local_e8);
        lVar7 = (*pcVar3)(plVar2,&local_a0,uVar12,param_2,CONCAT44(uVar17,param_3));
      }
    }
    puVar4 = local_a0;
    if (-1 < lVar7) {
      while (puVar4 != (undefined8 *)0x0) {
        puVar1 = puVar4 + 2;
        puVar4 = (undefined8 *)*puVar4;
        if ((void *)*puVar1 != (void *)0x0) {
          operator_delete__((void *)*puVar1);
        }
      }
    }
    TTS::CAtlList<unsigned_short_const*___ptr64,TTS::CElementTraits<unsigned_short_const*___ptr64>_>
    ::RemoveAll((CAtlList<unsigned_short_const*___ptr64,TTS::CElementTraits<unsigned_short_const*___ptr64>_>
                 *)&local_a0);
    CTTSString::~CTTSString((CTTSString *)&local_e8);
    if ((lVar7 == 1) && (puVar10 != (ushort *)0x0)) {
      uVar13 = 0xffffffffffffffff;
      do {
        uVar13 = uVar13 + 1;
      } while (puVar10[uVar13] != 0);
      if ((uVar13 < 5) && (iVar6 = CLocaleTextAnalyzerEnCA::IsUpperString(puVar10), iVar6 != 0)) {
        plVar2 = *(longlong **)(this + 0xa8);
        pcVar3 = *(code **)(*plVar2 + 8);
        uVar12 = CTTSString::CTTSString(local_68,(CTTSString *)&local_c0);
        lVar7 = (*pcVar3)(plVar2,puVar10,3,uVar12,param_2,param_3,0);
      }
    }
  }
LAB_18000a618:
  local_c0 = CTTSString::_vftable_;
  if (local_b8 != (ushort *)0x0) {
    operator_delete__(local_b8);
    local_b8 = (ushort *)0x0;
  }
  if (local_b0 != (void *)0x0) {
    operator_delete__(local_b0);
  }
  return lVar7;
}

