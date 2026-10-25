
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: long __cdecl CTTSPhoneConverter::Convert(unsigned short const * __ptr64,unsigned short
   * __ptr64 * __ptr64,unsigned short const * __ptr64,int)const __ptr64 */

long __thiscall
CTTSPhoneConverter::Convert
          (CTTSPhoneConverter *this,ushort *param_1,ushort **param_2,ushort *param_3,int param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ITextNormMultiResult *pIVar5;
  int iVar6;
  int iVar7;
  __uint64 _Var8;
  ushort *_Dst;
  ushort *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  InputTape *pIVar18;
  ITextNormMultiResult *this_00;
  ITextNormMultiResult *local_res8;
  ushort *local_res10;
  int local_58;
  uint local_54;
  ushort *local_50;
  InputTape *local_48 [2];
  
  plVar1 = *(longlong **)(this + 0x20);
  pIVar18 = (InputTape *)0x0;
  if (plVar1 == (longlong *)0x0) {
    return -0x7ffb7fef;
  }
  if ((param_2 == (ushort **)0x0) || (param_1 == (ushort *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_2 = (ushort *)0x0;
  lVar14 = -1;
  do {
    lVar14 = lVar14 + 1;
  } while (param_1[lVar14] != 0);
  uVar15 = (uint)lVar14;
  if (uVar15 == 0) {
    return -0x7ff8ffa9;
  }
  local_58 = 1;
  local_res8 = (ITextNormMultiResult *)this;
  local_res10 = param_1;
  iVar7 = (**(code **)(*plVar1 + 0x38))(plVar1,param_3,0,&local_58);
  if ((-1 < iVar7) && (local_58 == 0)) {
    return -0x7ffb7fe6;
  }
  local_54 = uVar15 * 2;
  uVar16 = (ulonglong)(local_54 + 1);
  uVar11 = 2;
  iVar6 = CNewArrayHelper::IsGoodForIntegerOverflow(2,(ulonglong)(local_54 + 1));
  if (iVar6 == 0) {
    _Dst = (ushort *)0x0;
LAB_18009dfd8:
    iVar7 = -0x7ff8fff2;
LAB_18009dfe0:
    this_00 = local_res8;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar11 & 0xffffffff;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    _Var8 = SUB168(auVar2 * auVar3,0);
    if (SUB168(auVar2 * auVar3,8) != 0) {
      _Var8 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(_Var8,&std::nothrow);
    if (_Dst == (ushort *)0x0) {
      _Dst = (ushort *)0x0;
    }
    else {
      memset(_Dst,0,_Var8);
    }
    this_00 = local_res8;
    if (_Dst == (ushort *)0x0) goto LAB_18009dfd8;
    local_48[0] = (InputTape *)0x0;
    if (iVar7 < 0) goto LAB_18009dfe0;
    uVar11 = 0;
    if (uVar15 != 0) {
      uVar12 = 0;
      do {
        if (local_res10[uVar11] < 0xefff) {
          uVar10 = local_res10[uVar11] + 0x1000;
        }
        else {
          uVar10 = 0xffff;
        }
        _Dst[uVar12 * 2] = uVar10;
        _Dst[(ulonglong)(uVar12 * 2) + 1] = 0x20;
        uVar10 = (short)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar12 = (uint)uVar10;
      } while (uVar12 < uVar15);
    }
    _Dst[local_54] = 0;
    iVar7 = ITransducer::GetInputTape
                      (*(ITransducer **)(local_res8 + 0x20),_Dst,(uint)(param_4 == 0),local_48,
                       (IAttributeLexicon *)0x0,0);
    pIVar18 = local_48[0];
  }
  local_res8 = (ITextNormMultiResult *)0x0;
  if (-1 < iVar7) {
    iVar7 = CTransducerHelper::CreateTextNormMultiResult(&local_res8);
  }
  pIVar5 = local_res8;
  local_50 = (ushort *)0x0;
  if ((iVar7 < 0) ||
     (iVar7 = DoPhoneConversion((CTTSPhoneConverter *)this_00,pIVar18,param_3,local_res8), iVar7 < 0
     )) {
    if (iVar7 != -0x7ffb7fe7) goto LAB_18009e19b;
    iVar7 = 0;
LAB_18009e172:
    puVar9 = operator_new__(2,&std::nothrow);
    if (puVar9 == (ushort *)0x0) {
      iVar7 = -0x7ff8fff2;
      *param_2 = (ushort *)0x0;
    }
    else {
      *puVar9 = 0;
      *param_2 = puVar9;
    }
    goto LAB_18009e19b;
  }
  iVar7 = (**(code **)(*(longlong *)pIVar5 + 0x18))(pIVar5,&local_50);
  if (iVar7 < 0) goto LAB_18009e19b;
  uVar11 = 0xffffffffffffffff;
  do {
    uVar11 = uVar11 + 1;
  } while (local_50[uVar11] != 0);
  if ((int)uVar11 == 0) goto LAB_18009e172;
  uVar15 = 0;
  lVar14 = 0;
  uVar11 = uVar11 & 0xffffffff;
  lVar17 = 1;
  do {
    if (*(short *)(lVar14 + (longlong)local_50) != 0x20) {
      local_50[uVar15] = *(short *)(lVar14 + (longlong)local_50) - 0x1000;
      uVar15 = uVar15 + 1;
    }
    lVar14 = lVar14 + 2;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  local_50[uVar15] = 0;
  lVar14 = -1;
  do {
    lVar13 = lVar14;
    lVar14 = lVar13 + 1;
  } while (local_50[lVar14] != 0);
  puVar9 = local_50;
  iVar7 = CNewArrayHelper::IsGoodForIntegerOverflow(2,lVar13 + 2);
  if (iVar7 == 0) {
    *param_2 = (ushort *)0x0;
LAB_18009e14e:
    iVar7 = -0x7ff8fff2;
  }
  else {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (puVar9[lVar14] != 0);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = lVar14 + lVar17;
    _Var8 = SUB168(ZEXT816(2) * auVar4,0);
    if (SUB168(ZEXT816(2) * auVar4,8) != 0) {
      _Var8 = 0xffffffffffffffff;
    }
    puVar9 = operator_new__(_Var8,&std::nothrow);
    if (puVar9 == (ushort *)0x0) {
      puVar9 = (ushort *)0x0;
    }
    else {
      memset(puVar9,0,_Var8);
    }
    *param_2 = puVar9;
    lVar14 = -1;
    if (puVar9 == (ushort *)0x0) {
      puVar9 = local_50;
      goto LAB_18009e14e;
    }
    do {
      lVar17 = lVar14;
      lVar14 = lVar17 + 1;
    } while (local_50[lVar14] != 0);
    iVar7 = StringCchCopyW(puVar9,lVar17 + 2,local_50);
    puVar9 = local_50;
  }
  CoTaskMemFree(puVar9);
LAB_18009e19b:
  if (pIVar18 != (InputTape *)0x0) {
    (*(code *)**(undefined8 **)pIVar18)(pIVar18,1);
  }
  if (_Dst != (ushort *)0x0) {
    operator_delete__(_Dst);
  }
  ATL::CComPtrBase<ISpLexicon2>::~CComPtrBase<ISpLexicon2>((CComPtrBase<ISpLexicon2> *)&local_res8);
  return iVar7;
}

