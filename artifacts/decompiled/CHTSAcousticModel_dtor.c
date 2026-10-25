
/* public: virtual void * __ptr64 __cdecl CHTSAcousticModel::`vector deleting destructor'(unsigned
   int) __ptr64 */

void * __thiscall
CHTSAcousticModel::_vector_deleting_destructor_(CHTSAcousticModel *this,uint param_1)

{
  CHTSAcousticModel *pCVar1;
  
  if ((param_1 & 2) == 0) {
    ~CHTSAcousticModel(this);
    if ((param_1 & 1) != 0) {
      operator_delete__(this);
    }
  }
  else {
    pCVar1 = this + -8;
    _eh_vector_destructor_iterator_(this,0x60,*(__uint64 *)pCVar1,~CHTSAcousticModel);
    if ((param_1 & 1) != 0) {
      operator_delete__(pCVar1,*(__uint64 *)pCVar1 * 0x60 + 8);
    }
    this = pCVar1;
  }
  return this;
}

