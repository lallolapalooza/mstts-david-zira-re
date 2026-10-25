
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl CTTSEngine::PrepareForSpeaking(class TTS::CAtlArray<struct ITTSHandler *
   __ptr64,class TTS::CElementTraits<struct ITTSHandler * __ptr64> > * __ptr64 * __ptr64,class
   CTTSOutput * __ptr64 * __ptr64,class CTTSString,enum EMOTIONML_CATEGORY) __ptr64 */

long __thiscall
CTTSEngine::PrepareForSpeaking
          (CTTSEngine *this,longlong *param_1,longlong *param_2,CTTSString *param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  CTTSEngine *pCVar3;
  long lVar4;
  CTTSString local_68 [32];
  CTTSString local_48 [32];
  
  lVar4 = 0;
  *param_2 = 0;
  iVar1 = operator==(param_4,(ushort *)L"general");
  if ((iVar1 == 0) || (param_5 != 1)) {
    uVar2 = CTTSString::CTTSString(local_68,param_4);
    pCVar3 = CTtsExtraModuleContainer<CTTSEngine>::GetExtraModule
                       ((CTtsExtraModuleContainer<CTTSEngine> *)(this + 8),
                        *(undefined2 *)(this + 0x418),uVar2,param_5);
    if ((pCVar3 == (CTTSEngine *)0x0) || (*(int *)(pCVar3 + 0x6a0) == 0)) {
      uVar2 = CTTSString::CTTSString(local_48,(ushort *)L"general");
      pCVar3 = CTtsExtraModuleContainer<CTTSEngine>::GetExtraModule
                         ((CTtsExtraModuleContainer<CTTSEngine> *)(this + 8),
                          *(undefined2 *)(this + 0x418),uVar2,1);
      if (pCVar3 == (CTTSEngine *)0x0) {
        lVar4 = -0x7fff0001;
        goto LAB_180094a01;
      }
    }
    *param_1 = (longlong)(pCVar3 + 0x1a8);
    *param_2 = (longlong)(pCVar3 + 0x250);
    uVar2 = (**(code **)(*(longlong *)this + 0x60))(this);
    *(undefined8 *)(pCVar3 + 0x448) = uVar2;
  }
  else {
    *param_2 = (longlong)(this + 0x250);
    *param_1 = (longlong)(this + 0x1a8);
  }
LAB_180094a01:
  CTTSString::~CTTSString(param_4);
  return lVar4;
}

