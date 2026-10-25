
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CTTSLocaleHandler::Initialize(struct IMSTTSEngine * __ptr64) __ptr64
    */

long __thiscall CTTSLocaleHandler::Initialize(CTTSLocaleHandler *this,IMSTTSEngine *param_1)

{
  long lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *(IMSTTSEngine **)(this + 8) = param_1;
  if (param_1 != (IMSTTSEngine *)0x0) {
    plVar2 = (longlong *)
             __RTDynamicCast(param_1,0,&struct_IMSTTSEngine__RTTI_Type_Descriptor_,
                             &class_CTTSEngine__RTTI_Type_Descriptor_,0);
    if (plVar2 == (longlong *)0x0) {
      return -0x7ff8ffa9;
    }
    uVar3 = (**(code **)(*plVar2 + 0xd0))(plVar2);
    *(undefined8 *)(this + 0x10) = uVar3;
  }
  lVar1 = InitBoundaryPronChange(this,param_1);
  if ((-1 < lVar1) && (lVar1 = InitAccentModelForEmphasis(this), -1 < lVar1)) {
    lVar1 = InitDomainTwoPassPrediction(this);
  }
  return lVar1;
}

