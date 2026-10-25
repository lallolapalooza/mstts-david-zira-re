
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CLocaleTextAnalyzerENU::GetMorphLexicon(struct ITTSLexicon * __ptr64
   * __ptr64) __ptr64 */

long __thiscall
CLocaleTextAnalyzerENU::GetMorphLexicon(CLocaleTextAnalyzerENU *this,ITTSLexicon **param_1)

{
  CEnMorph *pCVar1;
  long lVar2;
  IAttributeLexicon *pIVar3;
  IPhoneme *pIVar4;
  IPOSTable *pIVar5;
  CEnMorph *local_res8;
  
  if (*(longlong **)(this + 0x18) == (longlong *)0x0) {
    lVar2 = -0x7ffb7fff;
  }
  else {
    pIVar3 = (IAttributeLexicon *)(**(code **)(**(longlong **)(this + 0x18) + 0x70))();
    pIVar4 = (IPhoneme *)(**(code **)(**(longlong **)(this + 0x18) + 0x50))();
    pIVar5 = (IPOSTable *)(**(code **)(**(longlong **)(this + 0x18) + 0x48))();
    if ((((param_1 == (ITTSLexicon **)0x0) || (pIVar3 == (IAttributeLexicon *)0x0)) ||
        (pIVar4 == (IPhoneme *)0x0)) || (pIVar5 == (IPOSTable *)0x0)) {
      lVar2 = -0x7ff8ffa9;
    }
    else {
      local_res8 = (CEnMorph *)0x0;
      lVar2 = CEnMorph::CreateInstance(&local_res8);
      pCVar1 = local_res8;
      if (-1 < lVar2) {
        lVar2 = CEnMorph::Initialize
                          (local_res8,pIVar3,pIVar4,pIVar5,(ENPHM_MORPH_DATA *)&DAT_1800a8630,
                           (SUFFIXPRON_INFO *)&DAT_1800a7430,0x409,(ILocaleTextAnalyzer *)this);
        if (lVar2 < 0) {
          if (pCVar1 != (CEnMorph *)0x0) {
            (**(code **)(*(longlong *)pCVar1 + 0x10))(pCVar1);
          }
        }
        else {
          *param_1 = (ITTSLexicon *)pCVar1;
        }
      }
    }
  }
  return lVar2;
}

