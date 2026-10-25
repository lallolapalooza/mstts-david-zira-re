
/* public: long __cdecl CTTSDataBase::LoadDataObjects(unsigned char const * __ptr64,unsigned long)
   __ptr64 */

long __thiscall CTTSDataBase::LoadDataObjects(CTTSDataBase *this,uchar *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulonglong uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  uchar *puStack_10;
  
  lVar1 = 0;
  uVar4 = 0;
  if (param_2 != 0) {
    while( true ) {
      uVar2 = param_2 - (int)uVar4;
      if (uVar2 < 0x29) break;
      local_38 = *(undefined8 *)(param_1 + uVar4);
      uStack_30 = *(undefined8 *)(param_1 + uVar4 + 8);
      local_28 = *(undefined8 *)(param_1 + uVar4 + 0x10);
      uStack_20 = *(undefined8 *)(param_1 + uVar4 + 0x10 + 8);
      puStack_10 = param_1 + uVar4 + 0x28;
      local_18 = *(ulonglong *)(param_1 + uVar4 + 0x20);
      if (uVar2 < (uint)local_18 + 0x28) {
        return -(uint)(uVar2 < (uint)local_18 + 0x28) & 0x8004800f;
      }
      lVar1 = TTS::CAtlArray<TTSDATA_OBJECTINFO,TTS::CElementTraits<TTSDATA_OBJECTINFO>_>::Add
                        ((CAtlArray<TTSDATA_OBJECTINFO,TTS::CElementTraits<TTSDATA_OBJECTINFO>_> *)
                         (this + 8),(TTSDATA_OBJECTINFO *)&local_38);
      if (lVar1 < 0) {
        return lVar1;
      }
      uVar3 = (int)uVar4 + 0x28 + (uint)local_18;
      if (uVar3 == param_2) {
        return lVar1;
      }
      uVar2 = 8 - ((uint)local_18 & 7);
      if ((local_18 & 7) == 0) {
        uVar2 = (uint)local_18 & 7;
      }
      uVar2 = uVar3 + uVar2;
      uVar4 = (ulonglong)uVar2;
      if (param_2 <= uVar2) {
        return lVar1;
      }
    }
    lVar1 = -0x7ffb7ff1;
  }
  return lVar1;
}

