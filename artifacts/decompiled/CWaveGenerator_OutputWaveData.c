
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CWaveGenerator::OutputWaveData(class CTTSSegmentList * __ptr64,struct
   __POSITION * __ptr64,struct __POSITION * __ptr64,short * __ptr64,unsigned long,enum SPEECH_STATE
   * __ptr64,class CTTSUtterance * __ptr64) __ptr64 */

long __thiscall
CWaveGenerator::OutputWaveData
          (CWaveGenerator *this,CTTSSegmentList *param_1,__POSITION *param_2,__POSITION *param_3,
          short *param_4,ulong param_5,SPEECH_STATE *param_6,CTTSUtterance *param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  CTTSUtterance *pCVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  float fVar12;
  uint local_res18;
  
  lVar8 = 0;
  local_res18 = 0;
  uVar11 = 0;
  uVar9 = 0;
  iVar1 = *(int *)(param_7 + 0xa0);
  lVar3 = *(longlong *)(param_3 + 0x10);
  pCVar6 = param_7;
  while( true ) {
    param_7._4_4_ = (undefined4)((ulonglong)pCVar6 >> 0x20);
    uVar10 = (ulong)param_1;
    if (param_2 == (__POSITION *)0x0) {
      return lVar8;
    }
    if (lVar8 < 0) {
      return lVar8;
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    param_2 = *(__POSITION **)param_2;
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (param_5 < uVar9 + *(int *)(lVar4 + 0x3c)) {
      return -0x7fff0001;
    }
    if (param_6 == (SPEECH_STATE *)0x0) break;
    if (*(longlong **)(*(longlong *)(this + 0x88) + 0x10) == (longlong *)0x0) {
      iVar7 = -0x7fff0001;
      goto LAB_18006d9f7;
    }
    param_7._0_4_ = 0;
    param_1 = (CTTSSegmentList *)&param_7;
    iVar7 = (**(code **)(**(longlong **)(*(longlong *)(this + 0x88) + 0x10) + 0x10))();
    uVar10 = (ulong)param_1;
    pCVar6 = (CTTSUtterance *)CONCAT44(param_7._4_4_,(uint)param_7);
    if (iVar7 < 0) goto LAB_18006d9f7;
    *param_6 = (uint)(((uint)param_7 & 3) != 0);
    pCVar6 = (CTTSUtterance *)CONCAT44(param_7._4_4_,(uint)param_7);
    if (*param_6 == 1) goto LAB_18006d9f7;
    lVar8 = CTTSOutput::CheckVolumeChange(*(CTTSOutput **)(this + 0x88));
    if (lVar8 < 0) {
      return lVar8;
    }
    if (*(int *)(lVar5 + 0xb0) != 2) {
      uVar10 = *(ulong *)(lVar4 + 0x3c);
      if (*(int *)(lVar5 + 0xb0) == 1) {
        if (*(longlong *)(param_2 + 0x10) == 0) {
          return -0x7fff0001;
        }
        uVar10 = uVar10 + *(int *)(*(longlong *)(param_2 + 0x10) + 0x3c);
      }
      if (iVar1 == 0) {
        param_1 = (CTTSSegmentList *)(*(longlong *)(lVar5 + 8) + 0x250);
        lVar8 = CTTSOutput::WriteEvent
                          (*(CTTSOutput **)(this + 0x88),(CTTSEventManager *)param_1,
                           *(CTTSPhone **)(lVar5 + 0x10),uVar10);
        if (lVar8 < 0) {
          return lVar8;
        }
      }
    }
    if ((*(int *)(lVar4 + 0x3c) != 0) && (param_4 != (short *)0x0)) {
      fVar12 = (float)**(int **)(lVar5 + 0x38);
      if ((param_4 + uVar9 != (short *)0x0) &&
         ((fVar12 != 100.0 || (*(int *)(*(longlong *)(this + 0x88) + 0x30) != 100)))) {
        fVar12 = CTTSOutput::ConvertToExpScale
                           ((((float)*(int *)(*(longlong *)(this + 0x88) + 0x30) * fVar12) / 100.0)
                            / 100.0,fVar12);
        param_1 = (CTTSSegmentList *)(ulonglong)*(uint *)(lVar4 + 0x3c);
        CTTSOutput::ScaleVolume(param_4 + uVar9,*(uint *)(lVar4 + 0x3c),fVar12);
      }
    }
    if ((*(ulong *)(lVar4 + 0x3c) != 0) && (param_4 != (short *)0x0)) {
      param_1 = (CTTSSegmentList *)(param_4 + uVar9);
      lVar8 = CSpsVocoder::ProcessSoundEffect
                        (*(CSpsVocoder **)(this + 0x150),(short *)param_1,*(ulong *)(lVar4 + 0x3c));
    }
    if (-1 < lVar8) {
      uVar2 = *(uint *)(lVar4 + 0x3c);
      uVar9 = uVar9 + uVar2;
      *(longlong *)(*(longlong *)(this + 0x88) + 0x78) =
           *(longlong *)(*(longlong *)(this + 0x88) + 0x78) + (ulonglong)uVar2;
      uVar11 = uVar11 + uVar2;
      if (uVar11 != 0) {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        if (lVar5 != 0) {
          param_1 = (CTTSSegmentList *)(param_4 + local_res18);
          lVar8 = ProcessBackgroundAudio
                            (this,(short *)param_1,uVar11,*(ulong *)(lVar5 + 0x270),
                             *(ulong *)(lVar5 + 0x274),*param_6);
        }
        if (-1 < lVar8) {
          if (iVar1 == 0) {
            param_1 = (CTTSSegmentList *)(param_4 + local_res18);
            lVar8 = CTTSOutput::WriteWave(*(CTTSOutput **)(this + 0x88),(uchar *)param_1,uVar11 * 2)
            ;
            if (lVar8 < 0) {
              return lVar8;
            }
          }
          local_res18 = local_res18 + uVar11;
          uVar11 = 0;
        }
      }
      if (lVar4 == lVar3) {
        return lVar8;
      }
    }
    pCVar6 = (CTTSUtterance *)CONCAT44(param_7._4_4_,(uint)param_7);
  }
  iVar7 = -0x7ff8ffa9;
LAB_18006d9f7:
  param_7 = pCVar6;
  CTTSOutput::SetCurrStateDone(*(CTTSOutput **)(this + 0x88),uVar10);
  return iVar7;
}

