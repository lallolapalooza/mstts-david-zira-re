
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CLocaleTextAnalyzerENU::Initialize(struct IMSTTSEngine *
   __ptr64,struct ISentenceAnalyzer const * __ptr64) __ptr64 */

long __thiscall
CLocaleTextAnalyzerENU::Initialize
          (CLocaleTextAnalyzerENU *this,IMSTTSEngine *param_1,ISentenceAnalyzer *param_2)

{
  long lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  CCompoundWordBreaker *this_00;
  IPhoneme *pIVar5;
  __uint64 _Var6;
  
  lVar1 = CLocaleTextAnalyzer::Initialize((CLocaleTextAnalyzer *)this,param_1,param_2);
  if (-1 < lVar1) {
    lVar2 = (**(code **)(**(longlong **)(this + 0x18) + 0x68))();
    *(longlong *)(this + 0xa0) = lVar2;
    if (lVar2 == 0) {
      lVar1 = -0x7ff8ffa9;
    }
    else {
      lVar2 = (**(code **)(*(longlong *)param_2 + 0x50))(param_2);
      *(longlong *)(this + 0x98) = lVar2;
      if (lVar2 == 0) {
        lVar1 = -0x7ffb7fff;
      }
      else {
        plVar3 = (longlong *)(**(code **)(**(longlong **)(this + 0x18) + 0x40))();
        if (plVar3 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x28))(plVar3);
          *(undefined8 *)(this + 0xa8) = uVar4;
        }
        this_00 = operator_new(0x48,&std::nothrow);
        if (this_00 == (CCompoundWordBreaker *)0x0) {
          this_00 = (CCompoundWordBreaker *)0x0;
        }
        else {
          CCompoundWordBreaker::CCompoundWordBreaker(this_00);
          *(undefined4 *)(this_00 + 0x34) = 2;
          *(undefined4 *)(this_00 + 0x38) = 4;
          *(undefined4 *)(this_00 + 0x40) = 4;
          *(undefined ***)this_00 = CCompoundWordBreakerEnUS::_vftable_;
          *(undefined4 *)(this_00 + 0x3c) = 0x10;
          *(undefined4 *)(this_00 + 0x44) = 8;
        }
        *(CCompoundWordBreaker **)(this + 0xb0) = this_00;
        if (this_00 == (CCompoundWordBreaker *)0x0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          pIVar5 = (IPhoneme *)(**(code **)(**(longlong **)(this + 0x18) + 0x50))();
          _Var6 = 0x409;
          lVar1 = CCompoundWordBreaker::Initialize
                            (this_00,0x409,*(ITTSLexicon **)(this + 0xa0),
                             *(ITTSPronouncer **)(this + 0xa8),pIVar5);
          if (-1 < lVar1) {
            pIVar5 = *(IPhoneme **)(this + 0x98);
            lVar1 = CGraphemePhonemeConverter::ValidatePhonemes
                              ((GraphemePairs *)&DAT_1800a6fc0,_Var6,pIVar5);
            if (-1 < lVar1) {
              lVar1 = CGraphemePhonemeConverter::Init
                                ((CGraphemePhonemeConverter *)(this + 0x80),
                                 (GraphemePairs *)&DAT_1800a6fc0,(int)pIVar5);
              if (-1 < lVar1) {
                lVar1 = CLocaleTextAnalyzerEnCA::InitializeExpansionDetector
                                  ((CLocaleTextAnalyzerEnCA *)this);
              }
            }
          }
        }
      }
    }
  }
  return lVar1;
}

