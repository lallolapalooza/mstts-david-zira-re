
/* protected: virtual long __cdecl CHTSVoiceData::LoadData(unsigned char const * __ptr64,unsigned
   __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CHTSVoiceData::LoadData(CHTSVoiceData *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  CHTSVoiceData *this_00;
  longlong lVar1;
  long lVar2;
  ulonglong local_res10;
  uchar *local_28 [2];
  
  if ((param_1 == (uchar *)0x0) || (param_3 == (__uint64 *)0x0)) {
    return -0x7ff8ffa9;
  }
  this_00 = this + -0x18;
  local_res10 = param_2;
  local_28[0] = param_1;
  lVar2 = LoadVoiceDataHeader(this_00,local_28,&local_res10);
  if (-1 < lVar2) {
    *param_3 = param_2 - local_res10;
    lVar2 = ValidateFileHeader(this_00,param_2);
    if (-1 < lVar2) {
      lVar1 = *(longlong *)(this + 0x20);
      if (*(int *)(lVar1 + 0x38) != 0) {
        *(uchar **)(this + 0x78) = param_1 + *(uint *)(lVar1 + 0x34);
      }
      lVar2 = CForestQuestionSet::LoadData
                        ((CForestQuestionSet *)(this + 0x28),param_1 + *(uint *)(lVar1 + 0x2c),
                         *(ulong *)(lVar1 + 0x30),param_1 + *(uint *)(lVar1 + 0x1c),
                         *(ulong *)(lVar1 + 0x20));
      if (-1 < lVar2) {
        local_28[0] = param_1 + *(uint *)(*(longlong *)(this + 0x20) + 0x24);
        local_res10 = (ulonglong)*(uint *)(*(longlong *)(this + 0x20) + 0x28);
        lVar2 = LoadAcousticModels(this_00,local_28,&local_res10);
        if (-1 < lVar2) {
          *param_3 = *param_3 + (*(uint *)(*(longlong *)(this + 0x20) + 0x28) - local_res10);
          if (*param_3 <= param_2) {
            return lVar2;
          }
          lVar2 = -0x7fff0001;
        }
      }
    }
  }
  Reset(this_00);
  return lVar2;
}

