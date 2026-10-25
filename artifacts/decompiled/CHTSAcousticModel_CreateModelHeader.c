
/* public: virtual long __cdecl CHTSAcousticModel::CreateModelHeader(void) __ptr64 */

long __thiscall CHTSAcousticModel::CreateModelHeader(CHTSAcousticModel *this)

{
  CHTSAcousticModelHeader *this_00;
  
  this_00 = operator_new(0x80,&std::nothrow);
  if (this_00 == (CHTSAcousticModelHeader *)0x0) {
    this_00 = (CHTSAcousticModelHeader *)0x0;
  }
  else {
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined ***)this_00 = CHTSAcousticModelHeader::_vftable_;
    CHTSAcousticModelHeader::Reset(this_00);
  }
  *(CHTSAcousticModelHeader **)(this + 8) = this_00;
  return ~-(uint)(this_00 != (CHTSAcousticModelHeader *)0x0) & 0x8007000e;
}

