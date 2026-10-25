
/* public: virtual void * __ptr64 __cdecl CRNNAuxFeaturizerDataBase::`scalar deleting
   destructor'(unsigned int) __ptr64 */

void * __thiscall
CRNNAuxFeaturizerDataBase::_scalar_deleting_destructor_
          (CRNNAuxFeaturizerDataBase *this,uint param_1)

{
  *(undefined ***)this = _vftable_;
  if ((param_1 & 1) != 0) {
    operator_delete__(this);
  }
  return this;
}

