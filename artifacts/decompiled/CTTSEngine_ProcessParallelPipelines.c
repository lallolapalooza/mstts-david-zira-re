
/* public: long __cdecl CTTSEngine::ProcessParallelPipelines(class CTTSUtterance * __ptr64) __ptr64
    */

long __thiscall CTTSEngine::ProcessParallelPipelines(CTTSEngine *this,CTTSUtterance *param_1)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  undefined8 *lpParameter;
  HANDLE pvVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  code *in_R8;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  HANDLE *lpHandles;
  longlong lVar11;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  undefined4 local_60;
  HANDLE *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  uVar2 = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xd8));
  InitializeConditionVariable((PCONDITION_VARIABLE)(param_1 + 0xd0));
  lpHandles = (HANDLE *)0x0;
  local_58 = (HANDLE *)0x0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  plVar7 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  uVar10 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uVar9 = 0;
  uVar8 = 0;
  if (*(longlong *)(this + 0x1d0) == 0) {
LAB_180094baf:
    uVar1 = (uint)local_50;
    uVar10 = local_50 & 0xffffffff;
    DVar3 = WaitForMultipleObjects((uint)local_50,lpHandles,1,0xffffffff);
    uVar2 = -(uint)(DVar3 != 0) & 0x8000ffff;
    uVar6 = 0;
    if (uVar1 == 0) goto LAB_180094c36;
    plVar5 = plVar7;
    do {
      if ((int)uVar2 < 0) break;
      uVar2 = *(uint *)(*plVar5 + 0x10);
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar6 < uVar1);
  }
  else {
    do {
      if ((int)uVar2 < 0) goto LAB_180094baa;
      lVar11 = *(longlong *)(this + 0x1c8);
      uVar2 = TTS::CAtlArray<void*___ptr64,TTS::CElementTraits<void*___ptr64>_>::SetCount
                        ((CAtlArray<void*___ptr64,TTS::CElementTraits<void*___ptr64>_> *)&local_58,
                         local_50 + 1,(int)in_R8);
      lpHandles = local_58;
      if (-1 < (int)uVar2) {
        uVar10 = uVar10 + 1;
        if (uVar10 == 0) {
          if (plVar7 != (longlong *)0x0) {
            operator_delete__(plVar7);
            plVar7 = (longlong *)0x0;
            local_78 = (longlong *)0x0;
          }
          uVar10 = 0;
          local_68 = 0;
LAB_180094b03:
          uVar2 = 0;
        }
        else {
          if (uVar10 <= local_68) goto LAB_180094b03;
          uVar2 = TTS::
                  CAtlArray<CAcousticProsodyTagger*___ptr64,TTS::CElementTraits<CAcousticProsodyTagger*___ptr64>_>
                  ::GrowBuffer((CAtlArray<CAcousticProsodyTagger*___ptr64,TTS::CElementTraits<CAcousticProsodyTagger*___ptr64>_>
                                *)&local_78,uVar10);
          plVar7 = local_78;
          if ((int)uVar2 < 0) {
            uVar10 = local_70;
            goto LAB_180094b8e;
          }
        }
        local_70 = uVar10;
        lpParameter = operator_new(0x18,&std::nothrow);
        if (lpParameter == (undefined8 *)0x0) {
          uVar2 = 0x8007000e;
        }
        else {
          plVar7[uVar9] = (longlong)lpParameter;
          *lpParameter = *(undefined8 *)(lVar11 + uVar8 * 8);
          lpParameter[1] = param_1;
          in_R8 = ProcessThreadProc;
          pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,ProcessThreadProc,lpParameter,0,
                                (LPDWORD)0x0);
          lpHandles[uVar9] = pvVar4;
        }
      }
LAB_180094b8e:
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)((int)uVar9 + 1);
    } while (uVar8 < *(ulonglong *)(this + 0x1d0));
    if (-1 < (int)uVar2) goto LAB_180094baf;
LAB_180094baa:
    uVar10 = local_50 & 0xffffffff;
  }
  if ((int)uVar10 != 0) {
    lVar11 = (longlong)lpHandles - (longlong)plVar7;
    do {
      pvVar4 = *(HANDLE *)((longlong)plVar7 + lVar11);
      if (pvVar4 != (HANDLE)0xffffffffffffffff) {
        CloseHandle(pvVar4);
        *(undefined8 *)((longlong)plVar7 + lVar11) = 0xffffffffffffffff;
      }
      if ((void *)*plVar7 != (void *)0x0) {
        operator_delete__((void *)*plVar7);
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_180094c36:
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_78);
  TTS::CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>::
  ~CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_>
            ((CAtlArray<EMOTION_RECIPE,TTS::CElementTraits<EMOTION_RECIPE>_> *)&local_58);
  return uVar2;
}

