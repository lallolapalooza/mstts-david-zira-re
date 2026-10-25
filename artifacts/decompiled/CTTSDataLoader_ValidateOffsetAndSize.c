
/* public: static long __cdecl CTTSDataLoader::ValidateOffsetAndSize(unsigned __int64,unsigned
   __int64,unsigned __int64) */

long __cdecl
CTTSDataLoader::ValidateOffsetAndSize(__uint64 param_1,__uint64 param_2,__uint64 param_3)

{
  long lVar1;
  
  if (param_1 + param_2 < param_1) {
    return -0x7ff8fdea;
  }
  lVar1 = 0;
  if (param_3 < param_1 + param_2) {
    lVar1 = -0x7ffb7fe8;
  }
  return lVar1;
}

