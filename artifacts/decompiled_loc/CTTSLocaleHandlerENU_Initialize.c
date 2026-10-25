
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CTTSLocaleHandlerENU::Initialize(struct IMSTTSEngine * __ptr64)
   __ptr64 */

long __thiscall CTTSLocaleHandlerENU::Initialize(CTTSLocaleHandlerENU *this,IMSTTSEngine *param_1)

{
  longlong *plVar1;
  CCustomFeatureDataEnglish *pCVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  CTTSLocaleHandlerENU *pCVar6;
  
  lVar3 = CTTSLocaleHandler::Initialize((CTTSLocaleHandler *)this,param_1);
  if (lVar3 < 0) {
    return lVar3;
  }
  if (param_1 == (IMSTTSEngine *)0x0) {
    return lVar3;
  }
  pCVar6 = this + 0x38;
  iVar4 = CCustomFeatureDataEnglish::CreateInstance((CCustomFeatureDataEnglish **)pCVar6);
  if (-1 < iVar4) {
    iVar4 = (*(code *)**(undefined8 **)*(CCustomFeatureDataEnglish **)pCVar6)
                      (*(CCustomFeatureDataEnglish **)pCVar6,param_1);
    if (iVar4 < 0) {
      pCVar2 = *(CCustomFeatureDataEnglish **)pCVar6;
      if (pCVar2 == (CCustomFeatureDataEnglish *)0x0) goto LAB_1800198d1;
      (**(code **)(*(longlong *)pCVar2 + 0x10))(pCVar2,1);
LAB_1800198c6:
      *(CCustomFeatureDataEnglish **)pCVar6 = (CCustomFeatureDataEnglish *)0x0;
      goto LAB_1800198d1;
    }
    *(undefined ***)(*(CCustomFeatureDataEnglish **)pCVar6 + 0x10) = &PTR_PTR_1800a86c0;
    puVar5 = operator_new(0x10,&std::nothrow);
    if (puVar5 == (undefined8 *)0x0) {
      iVar4 = -0x7ff8fff2;
      goto LAB_1800198d1;
    }
    puVar5[1] = *(CCustomFeatureDataEnglish **)pCVar6;
    pCVar6 = this + 0x28;
    *puVar5 = CCustomFeatureExtractorEnglish::_vftable_;
    *(undefined8 **)(this + 0x40) = puVar5;
    iVar4 = CTTSSequenceHandler::CreateInstance((ITTSCompositeHandler **)pCVar6);
    if (-1 < iVar4) {
      iVar4 = (*(code *)**(undefined8 **)*(ITTSCompositeHandler **)pCVar6)
                        (*(ITTSCompositeHandler **)pCVar6,param_1);
      if (iVar4 < 0) {
        if (*(ITTSCompositeHandler **)pCVar6 == (ITTSCompositeHandler *)0x0) goto LAB_1800198d1;
        (**(code **)(*(longlong *)*(ITTSCompositeHandler **)pCVar6 + 0x28))();
        goto LAB_1800198c6;
      }
      iVar4 = CListItemBoundaryToneTaggerEnglish::CreateInstance((ITTSHandler **)(this + 0x30));
      if (-1 < iVar4) {
        iVar4 = (**(code **)**(undefined8 **)(this + 0x30))(*(undefined8 **)(this + 0x30),param_1);
      }
    }
  }
  if (-1 < iVar4) {
    lVar3 = (**(code **)(**(longlong **)(this + 0x28) + 0x30))
                      (*(longlong **)(this + 0x28),*(undefined8 *)(this + 0x30));
    return lVar3;
  }
LAB_1800198d1:
  plVar1 = *(longlong **)(this + 0x30);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
    *(longlong *)(this + 0x30) = 0;
  }
  return iVar4;
}

