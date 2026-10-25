
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CVocoder::Process(struct ITTSUtterance * __ptr64) __ptr64 */

long __thiscall CVocoder::Process(CVocoder *this,ITTSUtterance *param_1)

{
  CTTSEventManager *pCVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long lVar5;
  uint uVar6;
  int iVar7;
  CTTSUtterance *pCVar8;
  ITTSDomainHandler *pIVar9;
  longlong lVar10;
  short *_Dst;
  uint *puVar11;
  ulonglong uVar12;
  CTTSAcousticSpace *pCVar13;
  uint uVar14;
  ulonglong uVar15;
  __uint64 _Size;
  uint uVar16;
  uint uVar17;
  __uint64 local_res18;
  
  local_res18 = local_res18 & 0xffffffff00000000;
  pCVar8 = DynamicCastAssert<CTTSUtterance*___ptr64,ITTSUtterance*___ptr64>
                     (param_1,(long *)&local_res18,-0x7ff8ffa9);
  if (pCVar8 == (CTTSUtterance *)0x0) {
    return (long)local_res18;
  }
  if (*(CTTSDomainHandlerList **)(*(longlong *)(this + 8) + 0x2f0) != (CTTSDomainHandlerList *)0x0)
  {
    local_res18 = 0;
    pIVar9 = CTTSDomainHandlerList::GetDomainHandler
                       (*(CTTSDomainHandlerList **)(*(longlong *)(this + 8) + 0x2f0),
                        *(TTS_DOMAIN *)(pCVar8 + 0x70),&local_res18);
    if ((pIVar9 != (ITTSDomainHandler *)0x0) &&
       (lVar10 = (**(code **)(*(longlong *)pIVar9 + 0x10))(pIVar9), lVar10 != 0)) {
      *(undefined4 *)(*(longlong *)(this + 0x90) + 8) = *(undefined4 *)(lVar10 + 0x2c);
      *(undefined4 *)(*(longlong *)(this + 0x98) + 0x50) = *(undefined4 *)(lVar10 + 0x30);
    }
  }
  lVar5 = InitializeKeyboardEchoSetting(this,pCVar8);
  pCVar1 = (CTTSEventManager *)(pCVar8 + 0x110);
  pCVar13 = (CTTSAcousticSpace *)
            (pCVar8 + (ulonglong)(-(uint)(*(int *)(pCVar8 + 0x180) != 0) & 0x148) + 0x188);
  if (-1 < lVar5) {
    lVar5 = CTTSOutput::WriteEvent(*(CTTSOutput **)(this + 0x60),pCVar1,(CTTSPhone *)0x0,0);
  }
  if (lVar5 < 0) {
    return lVar5;
  }
  uVar17 = *(uint *)(pCVar13 + 0x98);
  uVar12 = (ulonglong)uVar17;
  if (uVar17 == 0) {
    return lVar5;
  }
  puVar11 = *(uint **)(pCVar13 + 8);
  if (puVar11 == (uint *)0x0) {
    return lVar5;
  }
  uVar15 = (ulonglong)*puVar11;
  _Dst = (short *)0x0;
  uVar16 = 0;
  uVar14 = 0;
  if (*puVar11 != 0) {
    lVar10 = *(longlong *)(puVar11 + 2);
    uVar2 = puVar11[1];
    do {
      puVar11 = (uint *)0x0;
      if (lVar10 != 0) {
        puVar11 = (uint *)(lVar10 + (ulonglong)(uVar2 * uVar14) * 4);
      }
      uVar6 = CTTSMath::Sum<unsigned_int>(puVar11,uVar2);
      uVar17 = (uint)uVar12;
      if (uVar16 < uVar6) {
        uVar16 = uVar6;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < (uint)uVar15);
  }
  if (*(int *)(this + 0x70) != 0) {
    uVar16 = uVar17;
  }
  uVar17 = uVar16 * *(int *)(this + 0x1c);
  if (lVar5 < 0) goto LAB_18004e1c4;
  uVar12 = 2;
  uVar15 = (ulonglong)uVar17;
  iVar7 = CNewArrayHelper::IsGoodForIntegerOverflow(2,(ulonglong)uVar17);
  if (iVar7 == 0) {
LAB_18004e18b:
    lVar5 = -0x7ff8fff2;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar12 & 0xffffffff;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar15;
    _Size = SUB168(auVar3 * auVar4,0);
    if (SUB168(auVar3 * auVar4,8) != 0) {
      _Size = uVar12 - 3;
    }
    _Dst = operator_new__(_Size,&std::nothrow);
    if (_Dst == (short *)0x0) {
      _Dst = (short *)0x0;
    }
    else {
      memset(_Dst,0,_Size);
    }
    if (_Dst == (short *)0x0) goto LAB_18004e18b;
  }
  if (-1 < lVar5) {
    if (*(int *)(this + 0x6c) == 0) {
      lVar5 = Synthesize<float>(this,pCVar13,pCVar1,*(ulong *)(this + 0x1c),_Dst,uVar17,uVar16);
    }
    else {
      lVar5 = Synthesize<int>(this,pCVar13,pCVar1,*(ulong *)(this + 0x1c),_Dst,uVar17,uVar16);
    }
  }
LAB_18004e1c4:
  operator_delete__(_Dst);
  return lVar5;
}

