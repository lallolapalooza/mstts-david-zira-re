
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* private: long __cdecl CSentenceAnalyzer::DoTextNormalization(void) __ptr64 */

long __thiscall CSentenceAnalyzer::DoTextNormalization(CSentenceAnalyzer *this)

{
  CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> *this_00;
  CTTSWord *pCVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined2 uVar4;
  long lVar5;
  longlong lVar6;
  undefined8 uVar7;
  __POSITION *p_Var8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  CTTSWord *local_res10;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 *local_a8 [2];
  longlong local_98;
  CTTSString local_70 [72];
  
  lVar5 = DoAcronymExpansion(this);
  if ((lVar5 < 0) || (*(longlong *)(this + 0x4e0) == 0)) {
    return lVar5;
  }
  local_138 = (undefined8 *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 10;
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 10;
  this_00 = (CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> *)
            (this + 0x420);
  puVar11 = *(undefined8 **)this_00;
  while (puVar11 != (undefined8 *)0x0) {
    pCVar1 = (CTTSWord *)puVar11[2];
    puVar11 = (undefined8 *)*puVar11;
    local_res10 = pCVar1;
    if (pCVar1 != (CTTSWord *)0x0) {
      lVar6 = (**(code **)(*(longlong *)pCVar1 + 0xc0))(pCVar1);
      if (lVar6 == 0) {
        p_Var8 = TTS::CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>::AddTail
                           ((CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_> *)
                            &local_138,&local_res10);
        if (p_Var8 == (__POSITION *)0x0) {
          lVar5 = -0x7ff8fff2;
          goto LAB_1800191f5;
        }
      }
      else {
        uVar7 = (**(code **)(*(longlong *)pCVar1 + 0x80))(pCVar1);
        local_108 = (undefined8 *)0x0;
        uStack_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_e0 = 10;
        lVar5 = (**(code **)(**(longlong **)(this + 0x4e0) + 0x18))
                          (*(longlong **)(this + 0x4e0),uVar7,lVar6,&local_108);
        if (lVar5 == 1) {
          p_Var8 = TTS::CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>::AddTail
                             ((CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_> *
                              )&local_138,&local_res10);
          if (p_Var8 == (__POSITION *)0x0) {
            lVar5 = -0x7ff8fff2;
          }
        }
        else if (lVar5 == 0) {
          CTTSWordList::CTTSWordList((CTTSWordList *)local_a8);
          lVar5 = AddNormalizedWordsToList
                            (this,(CTTSWordList *)local_a8,pCVar1,
                             (CAtlList<unsigned_short_const*___ptr64,TTS::CElementTraits<unsigned_short_const*___ptr64>_>
                              *)&local_108);
          if (-1 < lVar5) {
            if ((local_98 == 1) && (local_a8[0] != (undefined8 *)0x0)) {
              plVar2 = (longlong *)local_a8[0][2];
              pcVar3 = *(code **)(*plVar2 + 0xe8);
              uVar7 = *(undefined8 *)(this + 0x530);
              uVar4 = (**(code **)(*(longlong *)pCVar1 + 0xf0))(pCVar1);
              (*pcVar3)(plVar2,uVar4,uVar7);
            }
            puVar10 = *(undefined8 **)(this + 0x4c0);
            if ((puVar10 == (undefined8 *)0x0) ||
               (lVar5 = (**(code **)*puVar10)(puVar10,local_a8,0,0), -1 < lVar5)) {
              puVar10 = local_a8[0];
              do {
                if (puVar10 == (undefined8 *)0x0) {
                  TTS::
                  CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>
                  ::RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>
                               *)local_a8);
                  p_Var8 = TTS::CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>
                           ::AddTail((CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>
                                      *)&local_d8,&local_res10);
                  lVar5 = 0;
                  if (p_Var8 == (__POSITION *)0x0) {
                    lVar5 = -0x7ff8fff2;
                  }
                  goto LAB_1800190f4;
                }
                puVar9 = (undefined8 *)*puVar10;
                p_Var8 = TTS::CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>::
                         AddTail((CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>
                                  *)&local_138,(CTTSWord **)(puVar10 + 2));
                puVar10 = puVar9;
              } while (p_Var8 != (__POSITION *)0x0);
              lVar5 = -0x7ff8fff2;
            }
          }
LAB_1800190f4:
          CTTSString::~CTTSString(local_70);
          puVar10 = local_a8[0];
          while (puVar10 != (undefined8 *)0x0) {
            plVar2 = puVar10 + 2;
            puVar10 = (undefined8 *)*puVar10;
            if (*plVar2 != 0) {
              puVar9 = (undefined8 *)(*plVar2 + 8);
              (**(code **)*puVar9)(puVar9,1);
            }
          }
          TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::
          RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>
                     *)local_a8);
          TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::
          RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>
                     *)local_a8);
        }
        puVar10 = local_108;
        while (puVar10 != (undefined8 *)0x0) {
          puVar9 = puVar10 + 2;
          puVar10 = (undefined8 *)*puVar10;
          if ((void *)*puVar9 != (void *)0x0) {
            operator_delete__((void *)*puVar9);
          }
        }
        TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::
        RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>
                   *)&local_108);
      }
    }
    if (lVar5 < 0) goto LAB_1800191f5;
  }
  TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::RemoveAll
            (this_00);
  puVar11 = local_d8;
  while (puVar11 != (undefined8 *)0x0) {
    plVar2 = puVar11 + 2;
    puVar11 = (undefined8 *)*puVar11;
    if (*plVar2 != 0) {
      puVar10 = (undefined8 *)(*plVar2 + 8);
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  puVar11 = local_138;
  do {
    lVar5 = 0;
    if (puVar11 == (undefined8 *)0x0) {
LAB_1800191f5:
      TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::
      RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> *
                )&local_d8);
      TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::
      RemoveAll((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> *
                )&local_138);
      return lVar5;
    }
    pCVar1 = (CTTSWord *)puVar11[2];
    puVar11 = (undefined8 *)*puVar11;
    local_res10 = pCVar1;
    if ((pCVar1 == (CTTSWord *)0x0) ||
       (p_Var8 = TTS::CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_>::AddTail
                           ((CAtlList<CTTSWord*___ptr64,TTS::CElementTraits<CTTSWord*___ptr64>_> *)
                            this_00,&local_res10), p_Var8 == (__POSITION *)0x0)) {
      lVar5 = -0x7ff8fff2;
      goto LAB_1800191f5;
    }
    *(CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> **)
     (pCVar1 + 0x28) = this_00;
    *(__POSITION **)(pCVar1 + 0x30) = p_Var8;
  } while( true );
}

