
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CHTSAcousticModel::BuildHMMState(class CHTSOffsetLeafNode const *
   __ptr64,class CHMMState * __ptr64)const __ptr64 */

long __thiscall
CHTSAcousticModel::BuildHMMState
          (CHTSAcousticModel *this,CHTSOffsetLeafNode *param_1,CHMMState *param_2)

{
  CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_> *this_00;
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  long lVar4;
  CHMMStream *pCVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  CHMMStream *pCVar10;
  
  if ((param_1 == (CHTSOffsetLeafNode *)0x0) || (param_2 == (CHMMState *)0x0)) {
    return -0x7ff8ffa9;
  }
  this_00 = (CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_> *)
            (param_2 + 8);
  lVar2 = *(longlong *)param_1;
  uVar1 = *(uint *)(*(longlong *)(this + 8) + 0x14);
  uVar7 = (ulonglong)uVar1;
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 8);
  pCVar10 = (CHMMStream *)param_2;
  if (uVar1 == 0) {
    if (*(void **)this_00 != (void *)0x0) {
      operator_delete__(*(void **)this_00);
      *(undefined8 *)this_00 = 0;
    }
    *(undefined8 *)(param_2 + 0x18) = 0;
    lVar4 = 0;
    uVar7 = 0;
  }
  else if (*(ulonglong *)(param_2 + 0x18) < uVar7) {
    lVar4 = TTS::CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_>::
            GrowBuffer(this_00,uVar7);
    if (lVar4 < 0) goto LAB_18000d531;
  }
  else {
    lVar4 = 0;
  }
  uVar8 = 0;
  *(ulonglong *)(param_2 + 0x10) = uVar7;
LAB_18000d471:
  do {
    uVar6 = (uint)uVar8;
    if (uVar1 <= uVar6) {
      return lVar4;
    }
    pCVar5 = operator_new(0x30,&std::nothrow);
    if (pCVar5 == (CHMMStream *)0x0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      *(undefined ***)pCVar5 = CHMMStream::_vftable_;
      *(undefined8 *)(pCVar5 + 8) = 0;
      *(undefined8 *)(pCVar5 + 0x10) = 0;
      *(undefined8 *)(pCVar5 + 0x18) = 0;
      *(undefined4 *)(pCVar5 + 0x20) = 0;
      *(undefined4 *)(pCVar5 + 0x28) = 0;
      *(undefined4 *)(pCVar5 + 0x2c) = 0;
      if (-1 < lVar4) {
        *(undefined4 *)(pCVar5 + 0x28) =
             *(undefined4 *)(*(longlong *)(*(longlong *)(this + 8) + 0x18) + uVar8 * 4);
        pCVar10 = pCVar5;
        lVar4 = BuildHMMStream(this,*(ulong *)(lVar2 + uVar8 * 4),pCVar5);
        *(undefined4 *)(pCVar5 + 0x2c) = *(undefined4 *)(lVar2 + uVar8 * 4);
        if (-1 < lVar4) {
          if (uVar8 < *(ulonglong *)(param_2 + 0x10)) {
            lVar4 = 0;
            *(CHMMStream **)(*(longlong *)this_00 + uVar8 * 8) = pCVar5;
            uVar8 = (ulonglong)(uVar6 + 1);
            goto LAB_18000d471;
          }
          lVar4 = -0x7ff8ffa9;
        }
      }
      (*(code *)**(undefined8 **)pCVar5)();
    }
    uVar8 = (ulonglong)(uVar6 + 1);
  } while (-1 < lVar4);
LAB_18000d531:
  iVar9 = (int)pCVar10;
  uVar7 = *(ulonglong *)(param_2 + 0x10);
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      lVar2 = *(longlong *)this_00;
      puVar3 = *(undefined8 **)(lVar2 + uVar8 * 8);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)();
      }
      iVar9 = (int)pCVar10;
      *(undefined8 *)(lVar2 + uVar8 * 8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  TTS::CAtlArray<CHMMStream*___ptr64,TTS::CElementTraits<CHMMStream*___ptr64>_>::SetCount
            (this_00,0,iVar9);
  return lVar4;
}

