
/* protected: long __cdecl CHTSVoiceData::ValidateFileHeader(unsigned __int64)const __ptr64 */

long __thiscall CHTSVoiceData::ValidateFileHeader(CHTSVoiceData *this,__uint64 param_1)

{
  long lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(this + 0x38);
  if ((*(short *)(lVar2 + 8) == 0) ||
     (((*(int *)(lVar2 + 0x10) != 16000 && (*(int *)(lVar2 + 0x10) != 8000)) ||
      ((*(int *)(lVar2 + 0x14) - 8U & 0xfffffff7) != 0)))) {
    return -0x7ffb7fe8;
  }
  lVar1 = CTTSDataLoader::ValidateOffsetAndSize
                    ((ulonglong)*(uint *)(lVar2 + 0x1c),(ulonglong)*(uint *)(lVar2 + 0x20),param_1);
  if (-1 < lVar1) {
    lVar1 = CTTSDataLoader::ValidateOffsetAndSize
                      ((ulonglong)*(uint *)(lVar2 + 0x24),(ulonglong)*(uint *)(lVar2 + 0x28),param_1
                      );
    if (-1 < lVar1) {
      lVar1 = CTTSDataLoader::ValidateOffsetAndSize
                        ((ulonglong)*(uint *)(lVar2 + 0x2c),(ulonglong)*(uint *)(lVar2 + 0x30),
                         param_1);
      if (-1 < lVar1) {
        lVar1 = CTTSDataLoader::ValidateOffsetAndSize
                          ((ulonglong)*(uint *)(lVar2 + 0x34),(ulonglong)*(uint *)(lVar2 + 0x38),
                           param_1);
      }
    }
  }
  return lVar1;
}

