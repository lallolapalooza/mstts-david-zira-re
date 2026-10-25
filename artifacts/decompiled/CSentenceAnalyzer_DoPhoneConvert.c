
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CSentenceAnalyzer::DoPhoneConvert(struct ITTSPhoneConverter const *
   __ptr64,unsigned short) __ptr64 */

long __thiscall
CSentenceAnalyzer::DoPhoneConvert
          (CSentenceAnalyzer *this,ITTSPhoneConverter *param_1,ushort param_2)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if (param_1 == (ITTSPhoneConverter *)0x0) {
    lVar4 = -0x7ff8ffa9;
  }
  else {
    puVar6 = *(undefined8 **)(this + 0x420);
    lVar4 = 0;
    do {
      if (puVar6 == (undefined8 *)0x0) break;
      plVar1 = (longlong *)puVar6[2];
      puVar6 = (undefined8 *)*puVar6;
      if ((((param_2 == 0) || (uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1), uVar2 == param_2)) &&
          (plVar1 != (longlong *)0x0)) &&
         ((lVar5 = (**(code **)(*plVar1 + 0x90))(plVar1), lVar5 != 0 &&
          (iVar3 = (**(code **)(*plVar1 + 0x58))(plVar1), iVar3 == 0)))) {
        lVar4 = (**(code **)(*(longlong *)param_1 + 0x30))(param_1,plVar1);
      }
    } while (-1 < lVar4);
  }
  return lVar4;
}

