
/* private: long __cdecl CNUSVoiceDataLoader::LoadUnit(unsigned char const * __ptr64,unsigned
   __int64) __ptr64 */

long __thiscall
CNUSVoiceDataLoader::LoadUnit(CNUSVoiceDataLoader *this,uchar *param_1,__uint64 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  __uint64 _Var14;
  uint uVar15;
  ulonglong uVar16;
  __uint64 _Var17;
  uint local_res10;
  uint local_78;
  undefined8 *local_70 [2];
  void *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    uVar4 = 0x80070057;
  }
  else {
    uVar1 = *(uint *)(this + 0x98);
    _Var17 = 0;
    local_res10 = 0;
    uVar4 = 0;
    uVar15 = 0x8000ffff;
    puVar8 = (undefined8 *)(param_2 - 4);
    puVar10 = (uint *)(param_1 + 4);
    if (param_2 < 4) {
      uVar4 = 0x8000ffff;
      puVar10 = (uint *)param_1;
      puVar8 = (undefined8 *)param_2;
    }
    else {
      local_res10 = *(uint *)param_1;
      _Var17 = (__uint64)local_res10;
    }
    if (-1 < (int)uVar4) {
      local_70[0] = (undefined8 *)0x0;
      ppuVar12 = local_70;
      _Var14 = _Var17;
      uVar4 = ULongLongMult(8,_Var17,(__uint64 *)ppuVar12);
      if (-1 < (int)uVar4) {
        if (puVar8 < local_70[0]) {
          uVar4 = uVar15;
        }
        else {
          puVar10 = (uint *)((longlong)puVar10 + (longlong)local_70[0]);
          puVar8 = (undefined8 *)((longlong)puVar8 - (longlong)local_70[0]);
        }
      }
      if (-1 < (int)uVar4) {
        uVar4 = TTS::
                CAtlArray<CNonUniformUnit*___ptr64,TTS::CElementTraits<CNonUniformUnit*___ptr64>_>::
                SetCount((CAtlArray<CNonUniformUnit*___ptr64,TTS::CElementTraits<CNonUniformUnit*___ptr64>_>
                          *)(this + 0xb0),_Var14,(int)ppuVar12);
        uVar16 = 0;
        if (-1 < (int)uVar4) {
          for (; (uint)uVar16 < (uint)_Var17; uVar16 = (ulonglong)((uint)uVar16 + 1)) {
            local_70[0] = operator_new(0x20,&std::nothrow);
            if (local_70[0] == (undefined8 *)0x0) {
              puVar6 = (undefined8 *)0x0;
            }
            else {
              *local_70[0] = 0;
              local_70[0][1] = 0;
              *(undefined4 *)(local_70[0] + 2) = 0;
              local_70[0][3] = 0;
              puVar6 = local_70[0];
            }
            *(undefined8 **)(*(longlong *)(this + 0xb0) + uVar16 * 8) = puVar6;
            puVar6 = *(undefined8 **)(*(longlong *)(this + 0xb0) + uVar16 * 8);
            if (puVar6 == (undefined8 *)0x0) {
              uVar4 = 0x8007000e;
              break;
            }
            if ((int)uVar4 < 0) break;
            if ((CAtlArray<CFeaturePhone,TTS::CElementTraits<CFeaturePhone>_> *)puVar6[3] !=
                (CAtlArray<CFeaturePhone,TTS::CElementTraits<CFeaturePhone>_> *)0x0) {
              TTS::CAtlArray<CFeaturePhone,TTS::CElementTraits<CFeaturePhone>_>::
              _scalar_deleting_destructor_
                        ((CAtlArray<CFeaturePhone,TTS::CElementTraits<CFeaturePhone>_> *)puVar6[3],
                         uVar4);
              puVar6[3] = 0;
            }
            *(uint *)(puVar6 + 2) = uVar1;
            *puVar6 = puVar10;
            puVar6[1] = puVar8;
            local_78 = 0;
            iVar2 = 0;
            if (puVar8 < &DAT_00000004) {
              iVar2 = -0x7fff0001;
              puVar7 = puVar8;
              puVar9 = puVar10;
            }
            else {
              local_78 = *puVar10;
              puVar7 = (undefined8 *)((longlong)puVar8 + -4);
              puVar9 = puVar10 + 1;
            }
            pvVar5 = (void *)0x0;
            local_60 = (void *)0x0;
            local_58 = 0;
            uVar11 = 0;
            local_50 = 0;
            local_48 = 0;
            uVar4 = 0;
            puVar8 = puVar7;
            puVar10 = puVar9;
            if (-1 < iVar2) {
              while( true ) {
                puVar8 = puVar7;
                puVar10 = puVar9;
                if ((local_78 <= uVar4) || (puVar7 < (undefined8 *)0x2)) break;
                uVar13 = (ulonglong)uVar1;
                lVar3 = 0;
                if (uVar13 == 0) {
                  if (pvVar5 != (void *)0x0) {
                    operator_delete__(pvVar5);
                    pvVar5 = (void *)0x0;
                    local_60 = (void *)0x0;
                  }
                  local_58 = 0;
                  uVar11 = 0;
                  local_50 = 0;
                }
                else if (uVar11 < uVar13) {
                  lVar3 = TTS::CAtlArray<TTS_FEATURE_VALUE,TTS::CElementTraits<TTS_FEATURE_VALUE>_>
                          ::GrowBuffer((CAtlArray<TTS_FEATURE_VALUE,TTS::CElementTraits<TTS_FEATURE_VALUE>_>
                                        *)&local_60,uVar13);
                  if (-1 < lVar3) {
                    local_58 = uVar13;
                  }
                  pvVar5 = local_60;
                  uVar11 = local_50;
                }
                else {
                  local_58 = uVar13;
                }
                uVar13 = 0;
                puVar7 = (undefined8 *)((longlong)puVar7 + -2);
                puVar9 = (uint *)((longlong)puVar9 + 2);
                while( true ) {
                  puVar8 = puVar7;
                  puVar10 = puVar9;
                  if ((lVar3 < 0) || (uVar1 <= (uint)uVar13)) break;
                  if (puVar7 < &DAT_00000004) goto LAB_180035e48;
                  uVar15 = *puVar9;
                  *(uint *)((longlong)pvVar5 + uVar13 * 0x10) = uVar15;
                  puVar10 = puVar9 + 1;
                  puVar8 = (undefined8 *)((longlong)puVar7 + -4);
                  if (uVar15 == 2) goto LAB_180035e48;
                  lVar3 = 0;
                  if (puVar8 < &DAT_00000004) {
                    lVar3 = -0x7fff0001;
                  }
                  else {
                    *(uint *)((longlong)pvVar5 + uVar13 * 0x10 + 8) = *puVar10;
                    puVar10 = puVar9 + 2;
                    puVar8 = puVar7 + -1;
                  }
                  uVar13 = (ulonglong)((uint)uVar13 + 1);
                  puVar7 = puVar8;
                  puVar9 = puVar10;
                }
                uVar4 = uVar4 + 1;
                if (lVar3 < 0) break;
              }
LAB_180035e48:
              _Var17 = (__uint64)local_res10;
            }
            TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
            ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
                      ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_60);
            puVar6[1] = puVar6[1] - (longlong)puVar8;
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}

