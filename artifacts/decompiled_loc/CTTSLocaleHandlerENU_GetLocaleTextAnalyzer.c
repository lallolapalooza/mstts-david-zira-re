
/* public: virtual long __cdecl CTTSLocaleHandlerENU::GetLocaleTextAnalyzer(struct
   ILocaleTextAnalyzer * __ptr64 * __ptr64) __ptr64 */

long __thiscall
CTTSLocaleHandlerENU::GetLocaleTextAnalyzer
          (CTTSLocaleHandlerENU *this,ILocaleTextAnalyzer **param_1)

{
  uint uVar1;
  CLocaleTextAnalyzer *this_00;
  
  if (param_1 == (ILocaleTextAnalyzer **)0x0) {
    uVar1 = 0x80070057;
  }
  else {
    this_00 = operator_new(0xb8,&std::nothrow);
    if (this_00 == (CLocaleTextAnalyzer *)0x0) {
      this_00 = (CLocaleTextAnalyzer *)0x0;
    }
    else {
      CLocaleTextAnalyzer::CLocaleTextAnalyzer(this_00);
      *(undefined ***)this_00 = CLocaleTextAnalyzerENU::_vftable_;
      *(undefined8 *)(this_00 + 0x80) = 0;
      *(undefined8 *)(this_00 + 0x88) = 0;
      *(undefined8 *)(this_00 + 0x90) = 0;
      *(undefined8 *)(this_00 + 0xa0) = 0;
      *(undefined8 *)(this_00 + 0xa8) = 0;
      *(undefined8 *)(this_00 + 0xb0) = 0;
    }
    *param_1 = (ILocaleTextAnalyzer *)this_00;
    uVar1 = ~-(uint)(this_00 != (CLocaleTextAnalyzer *)0x0) & 0x8007000e;
  }
  return uVar1;
}

