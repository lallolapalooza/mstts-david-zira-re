
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CEngineAdapterSAPI::Speak(unsigned long,struct _GUID const & __ptr64,struct
   tWAVEFORMATEX const * __ptr64,struct SPVTEXTFRAG const * __ptr64,struct ISpTTSEngineSite *
   __ptr64) __ptr64 */

long __thiscall
CEngineAdapterSAPI::Speak
          (CEngineAdapterSAPI *this,ulong param_1,_GUID *param_2,tWAVEFORMATEX *param_3,
          SPVTEXTFRAG *param_4,ISpTTSEngineSite *param_5)

{
  ushort uVar1;
  long lVar2;
  longlong lVar3;
  IPOSTable *pIVar4;
  TTSTEXTFRAGMENT *pTVar5;
  TTSTEXTFRAGMENT *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  lVar3 = *(longlong *)param_2 + -0x11d23d137ceef9f9;
  if (lVar3 == 0) {
    lVar3 = *(longlong *)param_2->Data4 + 0x698c86b03fff1862;
  }
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)param_2 + -0x4ff5527fc31adbae;
  if (lVar3 == 0) {
    lVar3 = *(longlong *)param_2->Data4 + -0xcf71fb62bf630a2;
  }
  if ((((lVar3 != 0) || (param_3 == (tWAVEFORMATEX *)0x0)) || (param_4 == (SPVTEXTFRAG *)0x0)) ||
     ((param_5 == (ISpTTSEngineSite *)0x0 || ((param_1 & 0xfffffe00) != 0)))) {
    return -0x7ff8ffa9;
  }
  *(ISpTTSEngineSite **)(this + 0x18) = param_5;
  local_58 = (TTSTEXTFRAGMENT *)0x0;
  uVar1 = (**(code **)(**(longlong **)this + 0x28))();
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 10;
  if (*(longlong **)this == (longlong *)0x0) {
    pIVar4 = (IPOSTable *)0x0;
LAB_1800638cc:
    lVar3 = (**(code **)(**(longlong **)this + 0x88))();
    if (lVar3 != 0) {
      lVar2 = -0x7fff0001;
      pTVar5 = (TTSTEXTFRAGMENT *)0x0;
      goto LAB_18006395c;
    }
  }
  else {
    pIVar4 = (IPOSTable *)(**(code **)(**(longlong **)this + 0x50))();
    if (pIVar4 == (IPOSTable *)0x0) goto LAB_1800638cc;
  }
  lVar2 = CEngineAdapterHelper::BuildTTSTextFragsFromSAPI
                    (param_4,&local_58,uVar1,*(ITTSPhoneConverter **)(this + 8),pIVar4,
                     (CAtlList<unsigned_short_const*___ptr64,TTS::CElementTraits<unsigned_short_const*___ptr64>_>
                      *)&local_50);
  if ((lVar2 < 0) ||
     (lVar2 = UpdateCustomLexicon(this,(CAtlList<unsigned_short_const*___ptr64,TTS::CElementTraits<unsigned_short_const*___ptr64>_>
                                        *)&local_50), pTVar5 = local_58, lVar2 < 0)) {
    pTVar5 = local_58;
  }
  else if (local_58 != (TTSTEXTFRAGMENT *)0x0) {
    lVar2 = (**(code **)(**(longlong **)this + 0x20))
                      (*(longlong **)this,param_1,param_3,local_58,this + 0x10);
  }
LAB_18006395c:
  CEngineAdapterHelper::FreeTTSTextFrags(pTVar5);
  TTS::CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_>::RemoveAll
            ((CAtlList<TTS_CUSTOM_LEXICON_INDEX,TTS::CElementTraits<TTS_CUSTOM_LEXICON_INDEX>_> *)
             &local_50);
  return lVar2;
}

