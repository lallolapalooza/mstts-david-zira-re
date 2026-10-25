
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CTextProcessor::ParseSentence(struct ITTSUtterance * __ptr64,int) __ptr64
    */

long __thiscall
CTextProcessor::ParseSentence(CTextProcessor *this,ITTSUtterance *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  CTTSUtterance *pCVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint local_res18 [2];
  CSentenceBase *local_res20;
  undefined8 *local_58;
  ulonglong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  
  local_res20 = (CSentenceBase *)0x0;
  bVar2 = false;
LAB_1800633a5:
  if ((param_2 == 0) || (bVar2)) {
    plVar9 = *(longlong **)(this + 0x18);
    pcVar7 = *(code **)(*plVar9 + 0x18);
  }
  else {
    plVar9 = *(longlong **)(this + 0x18);
    bVar2 = true;
    pcVar7 = *(code **)(*plVar9 + 0x28);
  }
  uVar6 = (*pcVar7)(plVar9,&local_res20);
  if ((int)uVar6 < 0) goto LAB_180063793;
  if (uVar6 == 1) goto LAB_18006378f;
  lVar8 = 0;
  if (((param_1 != (ITTSUtterance *)0x0) &&
      (lVar8 = __RTDynamicCast(param_1,0,&struct_ITTSUtterance__RTTI_Type_Descriptor_,
                               &class_CTTSUtterance__RTTI_Type_Descriptor_,0), lVar8 != 0)) &&
     (local_res20 != (CSentenceBase *)0x0)) {
    plVar9 = (longlong *)(**(code **)(*(longlong *)local_res20 + 0xb8))(local_res20);
    *(longlong **)(lVar8 + 0x98) = plVar9;
    iVar4 = 1;
    if (((plVar9 != (longlong *)0x0) && (*plVar9 != 0)) &&
       ((piVar1 = *(int **)(*plVar9 + 0x10), piVar1 != (int *)0x0 && (iVar4 = *piVar1, iVar4 == 0)))
       ) {
      iVar4 = 1;
    }
    (**(code **)(*(longlong *)local_res20 + 200))(local_res20,iVar4);
  }
  uVar6 = (**(code **)(**(longlong **)(this + 0x20) + 0x10))
                    (*(longlong **)(this + 0x20),local_res20,param_2);
  if ((int)uVar6 < 0) goto LAB_18006378f;
  local_58 = (undefined8 *)0x0;
  local_res18[0] = (**(code **)(*(longlong *)local_res20 + 0x28))(local_res20,&local_58);
  if (-1 < (int)local_res18[0]) {
    if ((local_58 != (undefined8 *)0x0) && (local_58[2] != 0)) {
      lVar11 = (**(code **)(**(longlong **)(this + 0x18) + 0x38))();
      local_50 = 0;
      lStack_48 = 0;
      uVar6 = (**(code **)(*(longlong *)local_res20 + 0x18))(local_res20,&local_50);
      local_res18[0] = uVar6;
      if ((((int)uVar6 < 0) || (lVar11 == 0)) ||
         ((local_50 != 0 &&
          ((lStack_48 != lVar11 ||
           (uVar3 = (**(code **)(**(longlong **)(this + 0x18) + 0x48))(),
           local_50 < (ulonglong)uVar3 * 2 + *(longlong *)(lVar11 + 0x68))))))) goto LAB_1800635c4;
      lVar11 = local_58[1];
      goto LAB_180063573;
    }
    if (bVar2) goto LAB_18006372a;
  }
  if (local_res20 != (CSentenceBase *)0x0) {
    (*(code *)**(undefined8 **)local_res20)(local_res20,1);
    local_res20 = (CSentenceBase *)0x0;
  }
  goto LAB_1800633a5;
LAB_18006372a:
  pCVar12 = DynamicCastAssert<CTTSUtterance*___ptr64,ITTSUtterance*___ptr64>
                      (param_1,(long *)local_res18,-0x7fff0001);
  lVar8 = __RTDynamicCast(local_res20,0,&class_CSentenceBase__RTTI_Type_Descriptor_,
                          &class_CTTSSentence__RTTI_Type_Descriptor_,0);
  if (pCVar12 == (CTTSUtterance *)0x0) {
    uVar6 = local_res18[0];
  }
  else {
    uVar13 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))();
    *(undefined8 *)(lVar8 + 0x2d8) = uVar13;
    uVar6 = CTTSUtterance::SetSentence(pCVar12,local_res20);
  }
  goto LAB_18006378f;
  while( true ) {
    plVar9 = *(longlong **)(lVar11 + 0x10);
    lVar11 = *(longlong *)(lVar11 + 8);
    iVar4 = (**(code **)(*plVar9 + 0x270))(plVar9);
    if ((iVar4 == 0) && (lVar10 = (**(code **)(*plVar9 + 0x90))(plVar9), lVar10 != 0)) break;
LAB_180063573:
    if (lVar11 == 0) goto LAB_1800635c4;
  }
  uVar6 = (**(code **)(*plVar9 + 0x280))(plVar9);
  local_res18[0] = uVar6;
LAB_1800635c4:
  local_40 = 0;
  lStack_38 = 0;
  if (-1 < (int)uVar6) {
    uVar6 = (**(code **)(*(longlong *)local_res20 + 8))(local_res20,&local_40);
    local_res18[0] = uVar6;
  }
  lVar11 = (**(code **)(**(longlong **)(this + 0x18) + 0x40))();
  lVar10 = (**(code **)(**(longlong **)(this + 0x10) + 0x60))();
  if ((int)uVar6 < 0) goto LAB_180063793;
  if (lVar11 != 0) {
    if (lStack_38 == lVar11) {
      if (local_40 == *(longlong *)(lVar11 + 0x68)) {
LAB_180063630:
        puVar14 = (undefined8 *)*local_58;
        do {
          if (puVar14 == (undefined8 *)0x0) goto LAB_180063687;
          plVar9 = (longlong *)puVar14[2];
          puVar14 = (undefined8 *)*puVar14;
          iVar4 = (**(code **)(*plVar9 + 0x270))(plVar9);
        } while ((iVar4 != 0) || (lVar11 = (**(code **)(*plVar9 + 0x90))(plVar9), lVar11 == 0));
        uVar6 = (**(code **)(*plVar9 + 0x288))(plVar9);
        local_res18[0] = uVar6;
      }
    }
    else if (lStack_38 == lVar10) goto LAB_180063630;
  }
LAB_180063687:
  if ((int)uVar6 < 0) goto LAB_180063793;
  pCVar12 = DynamicCastAssert<CTTSUtterance*___ptr64,ITTSUtterance*___ptr64>
                      (param_1,(long *)local_res18,-0x7fff0001);
  lVar11 = __RTDynamicCast(local_res20,0,&class_CSentenceBase__RTTI_Type_Descriptor_,
                           &class_CTTSSentence__RTTI_Type_Descriptor_,0);
  if (pCVar12 == (CTTSUtterance *)0x0) {
    uVar6 = local_res18[0];
  }
  else {
    uVar13 = (**(code **)(**(longlong **)(this + 0x10) + 0x50))();
    *(undefined8 *)(lVar11 + 0x2d8) = uVar13;
    uVar6 = CTTSUtterance::SetSentence(pCVar12,local_res20);
  }
  if ((int)uVar6 < 0) goto LAB_180063793;
  plVar9 = *(longlong **)(lVar8 + 0xe0);
  uVar5 = 0;
  if (plVar9 != (longlong *)0x0) {
    uVar5 = (**(code **)(*plVar9 + 0xd0))();
  }
  uVar6 = (uint)(plVar9 == (longlong *)0x0);
  *(undefined4 *)(pCVar12 + 0xa0) = uVar5;
LAB_18006378f:
  if (-1 < (int)uVar6) {
    return uVar6;
  }
LAB_180063793:
  if (local_res20 != (CSentenceBase *)0x0) {
    (*(code *)**(undefined8 **)local_res20)(local_res20,1);
  }
  return uVar6;
}

