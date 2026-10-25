
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* protected: long __cdecl CHTSVoiceData::LoadVoiceDataHeader(unsigned char const * __ptr64 *
   __ptr64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CHTSVoiceData::LoadVoiceDataHeader(CHTSVoiceData *this,uchar **param_1,__uint64 *param_2)

{
  int iVar1;
  __uint64 local_res20;
  
  if ((param_1 == (uchar **)0x0) || (param_2 == (__uint64 *)0x0)) {
    iVar1 = -0x7ff8ffa9;
  }
  else {
    iVar1 = (**(code **)(*(longlong *)this + 0x18))();
    if (-1 < iVar1) {
      *param_1 = *param_1;
      *param_2 = *param_2;
      local_res20 = 0;
      iVar1 = ULongLongMult(0x40,1,&local_res20);
      if (-1 < iVar1) {
        if (*param_2 < local_res20) {
          iVar1 = -0x7fff0001;
        }
        else {
          *(uchar **)(this + 0x38) = *param_1;
          *param_1 = *param_1 + local_res20;
          *param_2 = *param_2 - local_res20;
        }
      }
    }
  }
  return iVar1;
}

