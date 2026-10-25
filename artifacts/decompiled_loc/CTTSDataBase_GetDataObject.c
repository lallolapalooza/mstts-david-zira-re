
/* public: long __cdecl CTTSDataBase::GetDataObject(struct _GUID const & __ptr64,struct
   TTSDATA_OBJECTINFO * __ptr64) __ptr64 */

long __thiscall
CTTSDataBase::GetDataObject(CTTSDataBase *this,_GUID *param_1,TTSDATA_OBJECTINFO *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  
  bVar8 = 0;
  if (param_2 == (TTSDATA_OBJECTINFO *)0x0) {
    uVar9 = 0x80070057;
  }
  else {
    lVar12 = 0;
    for (uVar10 = 0; uVar10 < *(ulonglong *)(this + 0x10); uVar10 = uVar10 + 1) {
      lVar3 = *(longlong *)(this + 8);
      lVar11 = *(longlong *)param_1 - *(longlong *)(lVar12 + lVar3);
      if (lVar11 == 0) {
        lVar11 = *(longlong *)param_1->Data4 - *(longlong *)(lVar12 + 8 + lVar3);
      }
      if (lVar11 == 0) {
        puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x30);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar3 + 0x10 + uVar10 * 0x30);
        uVar5 = *puVar2;
        uVar6 = puVar2[1];
        *(undefined8 *)param_2 = *puVar1;
        *(undefined8 *)(param_2 + 8) = uVar4;
        puVar1 = (undefined8 *)(lVar3 + 0x20 + uVar10 * 0x30);
        uVar4 = *puVar1;
        uVar7 = puVar1[1];
        bVar8 = 1;
        *(undefined8 *)(param_2 + 0x10) = uVar5;
        *(undefined8 *)(param_2 + 0x18) = uVar6;
        *(undefined8 *)(param_2 + 0x20) = uVar4;
        *(undefined8 *)(param_2 + 0x28) = uVar7;
        break;
      }
      lVar12 = lVar12 + 0x30;
    }
    uVar9 = ~-(uint)bVar8 & 0x8004801a;
  }
  return uVar9;
}

