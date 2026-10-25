
/* private: long __cdecl CHTSAcousticModel::BuildHMMStream(unsigned long,class CHMMStream *
   __ptr64)const __ptr64 */

long __thiscall
CHTSAcousticModel::BuildHMMStream(CHTSAcousticModel *this,ulong param_1,CHMMStream *param_2)

{
  uchar *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uchar *puVar4;
  long lVar5;
  CHMMGaussMixture *this_00;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint local_res10;
  uchar *local_res18;
  ulonglong local_res20;
  __uint64 local_58;
  ulonglong local_50;
  
  local_res18 = (uchar *)((ulonglong)param_1 + *(longlong *)(this + 0x20));
  local_res20 = (ulonglong)(*(int *)(this + 0x28) - param_1);
  uVar2 = *(uint *)(param_2 + 0x28);
  if (param_1 < *(uint *)(this + 0x28)) {
    lVar5 = TTS::
            CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>::
            SetCount((CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_>
                      *)(param_2 + 8),(ulonglong)*(uint *)(*(longlong *)(this + 8) + 0x44),
                     (int)param_2);
    uVar8 = 0;
    while (local_res10 = (uint)uVar8, -1 < lVar5) {
      while( true ) {
        if (*(ulonglong *)(param_2 + 0x10) <= uVar8) {
          return lVar5;
        }
        local_50 = uVar8;
        this_00 = operator_new(0x38,&std::nothrow);
        uVar8 = 0;
        if (this_00 == (CHMMGaussMixture *)0x0) {
          lVar5 = -0x7ff8fff2;
          goto LAB_18000d7b9;
        }
        *(undefined8 *)(this_00 + 8) = 1;
        *(undefined ***)this_00 = CHMMGaussMixture::_vftable_;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(undefined8 *)(this_00 + 0x18) = 0;
        *(undefined8 *)(this_00 + 0x20) = 0;
        *(undefined8 *)(this_00 + 0x28) = 0;
        *(undefined8 *)(this_00 + 0x30) = 0;
        if ((lVar5 < 0) ||
           (lVar5 = CMemoryLoadHelper::LoadValue<float>
                              ((float *)(this_00 + 0xc),&local_res18,&local_res20), lVar5 < 0))
        goto LAB_18000d69a;
        local_58 = uVar8;
        lVar5 = ULongLongMult((ulonglong)((int)uVar8 + 4),CONCAT44(0,uVar2),&local_58);
        puVar4 = local_res18;
        if (lVar5 < 0) goto LAB_18000d69a;
        if (local_res20 < local_58) {
          lVar5 = -0x7fff0001;
          goto LAB_18000d69a;
        }
        uVar8 = local_res20 - local_58;
        puVar1 = local_res18 + local_58;
        local_res18 = puVar1;
        local_res20 = uVar8;
        puVar6 = operator_new(0x10,&std::nothrow);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = uVar2;
          *puVar6 = 1;
          *(uchar **)(puVar6 + 2) = puVar4;
        }
        *(undefined4 **)(this_00 + 0x18) = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          lVar5 = -0x7ff8fff2;
          goto LAB_18000d69a;
        }
        local_58 = 0;
        *(undefined4 *)(this_00 + 0x10) = 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = CONCAT44(0,uVar2);
        uVar7 = SUB168(auVar3 * ZEXT816(4),0);
        if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
          lVar5 = -0x7ff8fdea;
          goto LAB_18000d69a;
        }
        if (uVar8 < uVar7) {
          lVar5 = -0x7fff0001;
          goto LAB_18000d69a;
        }
        local_res20 = uVar8 - uVar7;
        local_res18 = puVar1 + uVar7;
        puVar6 = operator_new(0x10,&std::nothrow);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = uVar2;
          *puVar6 = 1;
          *(uchar **)(puVar6 + 2) = puVar1;
        }
        *(undefined4 **)(this_00 + 0x20) = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          lVar5 = -0x7ff8fff2;
          goto LAB_18000d69a;
        }
        *(undefined4 *)(this_00 + 0x10) = 1;
        if (*(ulonglong *)(param_2 + 0x10) <= local_50) break;
        lVar5 = 0;
        *(CHMMGaussMixture **)(*(longlong *)(param_2 + 8) + local_50 * 8) = this_00;
        local_res10 = local_res10 + 1;
        uVar8 = (ulonglong)local_res10;
      }
      lVar5 = -0x7ff8ffa9;
LAB_18000d69a:
      CHMMGaussMixture::Release(this_00);
LAB_18000d7b9:
      uVar8 = (ulonglong)(local_res10 + 1);
    }
  }
  else {
    lVar5 = -0x7ffb7fe8;
  }
  CTTSArrayHelper<CHMMGaussMixture>::ClearByRelease
            ((CAtlArray<CHMMGaussMixture*___ptr64,TTS::CElementTraits<CHMMGaussMixture*___ptr64>_> *
             )(param_2 + 8));
  *(undefined4 *)(param_2 + 0x28) = 0;
  return lVar5;
}

