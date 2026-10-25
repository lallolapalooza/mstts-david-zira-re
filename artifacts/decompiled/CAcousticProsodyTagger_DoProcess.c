
/* private: long __cdecl CAcousticProsodyTagger::DoProcess(class CTTSUtterance * __ptr64) __ptr64 */

long __thiscall
CAcousticProsodyTagger::DoProcess(CAcousticProsodyTagger *this,CTTSUtterance *param_1)

{
  int iVar1;
  CTTSUtteranceNodeList<CTTSPhone> *pCVar2;
  CTTSUtterance *this_00;
  uint uVar3;
  uint uVar4;
  undefined8 in_R9;
  uint local_res10 [2];
  
  uVar3 = 0;
  local_res10[0] = 0;
  CTTSLogger::TraceMessage
            (3,(ushort *)L"[TTS]Entering: %s\n",L"CAcousticProsodyTagger::Process",in_R9,
             L"CAcousticProsodyTagger::Process",local_res10);
  this_00 = (CTTSUtterance *)(-(ulonglong)(param_1 != (CTTSUtterance *)0x0) & (ulonglong)param_1);
  uVar4 = ~-(uint)(this_00 != (CTTSUtterance *)0x0) & 0x80070057;
  local_res10[0] = uVar4;
  if (this_00 != (CTTSUtterance *)0x0) {
    iVar1 = CHTSModelSetManager::IsFixedFont(*(CHTSModelSetManager **)(this + 0x40));
    *(int *)(this_00 + 0x2c0) = iVar1;
    if (-1 < (int)uVar4) {
      pCVar2 = CTTSUtterance::GetPhoneList(this_00);
      *(CTTSUtteranceNodeList<CTTSPhone> **)
       (this_00 + (ulonglong)(-(uint)(iVar1 != 0) & 0x208) + 0x348) = pCVar2;
      uVar4 = local_res10[0];
      if (-1 < (int)local_res10[0]) {
        local_res10[0] = BuildModels(this,this_00);
        uVar4 = local_res10[0];
        if (-1 < (int)local_res10[0]) {
          local_res10[0] = Predict(this,this_00);
          uVar4 = local_res10[0];
          if (-1 < (int)local_res10[0]) goto LAB_1800a33fe;
        }
      }
    }
  }
  uVar3 = uVar4;
LAB_1800a33fe:
  CTTSLogger::TraceMessage
            (3,(ushort *)L"[TTS]Leaving: %s - hr = 0x%08X",L"CAcousticProsodyTagger::Process");
  return uVar3;
}

