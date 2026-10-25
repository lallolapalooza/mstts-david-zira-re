
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CTTSDataLoader::LoadFromMemory(unsigned char const *
   __ptr64,unsigned __int64) __ptr64 */

long __thiscall CTTSDataLoader::LoadFromMemory(CTTSDataLoader *this,uchar *param_1,__uint64 param_2)

{
  int iVar1;
  
  if (*(int *)(this + 8) == 0) {
    iVar1 = (**(code **)(*(longlong *)this + 0x30))();
    if (-1 < iVar1) {
      *(undefined4 *)(this + 8) = 1;
    }
  }
  else {
    iVar1 = -0x7ffb7ffe;
  }
  return iVar1;
}

