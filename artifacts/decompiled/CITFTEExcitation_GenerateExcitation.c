
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: long __cdecl CITFTEExcitationGeneratorImpl<float>::GenerateExcitation(class
   CMemoryMatrix<float> const & __ptr64,class CMemoryMatrix<float> const & __ptr64,class
   CMemoryMatrix<float> const & __ptr64,class CMemoryMatrix<float> const & __ptr64,class
   CMemoryMatrix<float> const & __ptr64,class CMemoryArray<int> const & __ptr64,float *
   __ptr64,unsigned long,unsigned long,unsigned long) __ptr64 */

long __thiscall
CITFTEExcitationGeneratorImpl<float>::GenerateExcitation
          (CITFTEExcitationGeneratorImpl<float> *this,CMemoryMatrix<float> *param_1,
          CMemoryMatrix<float> *param_2,CMemoryMatrix<float> *param_3,CMemoryMatrix<float> *param_4,
          CMemoryMatrix<float> *param_5,CMemoryArray<int> *param_6,float *param_7,ulong param_8,
          ulong param_9,ulong param_10)

{
  short sVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStackY_8f8 [32];
  float local_848 [512];
  ulonglong local_48;
  
  local_48 = __security_cookie ^ (ulonglong)auStackY_8f8;
  if (((param_7 == (float *)0x0) || (param_8 == 0)) || (param_9 == 0)) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    iVar2 = *(int *)(this + 0x107c);
    uVar4 = (uint)*(short *)(*(longlong *)(this + 0x1088) + 0xb0);
    uVar6 = (param_9 - iVar2) / uVar4;
    uVar7 = (param_9 - iVar2) % uVar4;
    uVar5 = uVar6 + 1;
    if (uVar7 == 0) {
      uVar5 = uVar6;
    }
    lVar3 = LazyInitialize(this,param_10);
    if ((-1 < lVar3) && (lVar3 = SafeZeroMemory(local_848,4,0x200), -1 < lVar3)) {
      uVar6 = *(int *)(this + 0x107c) * param_10;
      if ((0 < *(int *)(this + 0x107c)) && (uVar6 <= param_8)) {
        memcpy(param_7,*(void **)(this + 0x1080),(ulonglong)uVar6 << 2);
      }
      *(undefined4 *)(this + 0x107c) = 0;
      uVar6 = 0;
      sVar1 = *(short *)(*(longlong *)(this + 0x1088) + 0xba);
      while( true ) {
        while( true ) {
          if (((uVar5 <= uVar6) ||
              (lVar3 = PrepareSynthesisParameters
                                 (this,*(TFTE_FRAMES **)(this + 0x1048),*(TFTE **)(this + 0x1068),
                                  *(TFTE **)(this + 0x1058),uVar4 * uVar6 + iVar2,param_1,param_2,
                                  param_3,param_4,param_5,param_6), lVar3 < 0)) ||
             (lVar3 = CITFTE::SynthesisTFTE
                                (*(CITFTE **)(this + 0x1088),local_848,
                                 *(TFTE_FRAMES **)(this + 0x1048),*(TFTE **)(this + 0x1068),
                                 *(TFTE **)(this + 0x1058)), lVar3 < 0)) goto LAB_18010e538;
          *(undefined8 *)(this + 0x1048) = *(undefined8 *)(*(longlong *)(this + 0x1048) + 0xdc10);
          iVar8 = (int)sVar1;
          if ((uVar6 != uVar5 - 1) || (uVar7 == 0)) break;
          if (param_8 < (uVar7 + iVar2) * param_10 + iVar8 * uVar6) goto LAB_18010e52a;
          memcpy(param_7 + (ulonglong)(param_10 * iVar2) + (ulonglong)(iVar8 * uVar6),local_848,
                 (ulonglong)uVar7 * (ulonglong)param_10 * 4);
          memcpy(*(void **)(this + 0x1080),local_848 + param_10 * uVar7,
                 (ulonglong)(uVar4 - uVar7) * (ulonglong)param_10 * 4);
          uVar6 = uVar6 + 1;
          *(uint *)(this + 0x107c) = uVar4 - uVar7;
        }
        if (param_8 < (uVar6 + 1) * iVar8 + param_10 * iVar2) break;
        memcpy(param_7 + (ulonglong)(iVar8 * uVar6) + (ulonglong)(param_10 * iVar2),local_848,
               (longlong)sVar1 << 2);
        uVar6 = uVar6 + 1;
      }
LAB_18010e52a:
      lVar3 = -0x7fff0001;
    }
  }
LAB_18010e538:
  return lVar3;
}

