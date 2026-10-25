
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CTTSDataLoader::LoadFile(unsigned short const * __ptr64,int,void *
   __ptr64) __ptr64 */

long __thiscall
CTTSDataLoader::LoadFile(CTTSDataLoader *this,ushort *param_1,int param_2,void *param_3)

{
  long lVar1;
  DWORD DVar2;
  HANDLE hFile;
  CAtlFileMappingBase *this_00;
  uint uVar3;
  __uint64 _Var4;
  __uint64 _Var5;
  undefined8 local_res8;
  ulong in_stack_ffffffffffffffd8;
  ulong uVar6;
  ulong uVar7;
  _SECURITY_ATTRIBUTES *in_stack_ffffffffffffffe8;
  void *in_stack_fffffffffffffff0;
  
  if (*(int *)(this + 8) != 0) {
    return -0x7ffb7ffe;
  }
  if (param_1 == (ushort *)0x0) {
    return -0x7ff8ffa9;
  }
  if (param_2 == 0) {
    local_res8 = 0;
    lVar1 = TTS::CAtlFile::Create
                      ((CAtlFile *)&local_res8,param_1,0,(ulong)param_3,in_stack_ffffffffffffffd8,1,
                       in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0);
    if (-1 < lVar1) {
      lVar1 = (**(code **)(*(longlong *)this + 0x28))(this,&local_res8);
    }
    TTS::CHandle::~CHandle((CHandle *)&local_res8);
  }
  else {
    uVar7 = 0x10000080;
    uVar6 = 3;
    _Var5 = 0;
    uVar3 = 0x80000000;
    _Var4 = 1;
    hFile = CreateFileW((LPCWSTR)param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000080,
                        (HANDLE)0x0);
    if ((hFile == (HANDLE)0xffffffffffffffff) && (lVar1 = ATL::AtlHresultFromLastError(), lVar1 < 0)
       ) {
      return lVar1;
    }
    DVar2 = GetFileType(hFile);
    if (DVar2 == 1) {
      if (*(CAtlFileMapping<unsigned_char> **)(this + 0x10) != (CAtlFileMapping<unsigned_char> *)0x0
         ) {
        TTS::CAtlFileMapping<unsigned_char>::_scalar_deleting_destructor_
                  (*(CAtlFileMapping<unsigned_char> **)(this + 0x10),uVar3);
        *(undefined8 *)(this + 0x10) = 0;
      }
      this_00 = operator_new(0x28,&std::nothrow);
      if (this_00 == (CAtlFileMappingBase *)0x0) {
        *(undefined8 *)(this + 0x10) = 0;
        lVar1 = -0x7ff8fff2;
      }
      else {
        *(undefined8 *)this_00 = 0;
        *(undefined8 *)(this_00 + 0x10) = 0;
        *(CAtlFileMappingBase **)(this + 0x10) = this_00;
        lVar1 = TTS::CAtlFileMappingBase::MapFile(this_00,hFile,_Var4,_Var5,uVar6,uVar7);
        if (-1 < lVar1) {
          local_res8 = 0;
          lVar1 = (**(code **)(*(longlong *)this + 0x30))
                            (this,**(undefined8 **)(this + 0x10),(*(undefined8 **)(this + 0x10))[1],
                             &local_res8);
        }
      }
    }
    else {
      lVar1 = -0x7ff8ffa9;
    }
    if (hFile != (HANDLE)0xffffffffffffffff) {
      CloseHandle(hFile);
    }
  }
  if (-1 < lVar1) {
    *(undefined4 *)(this + 8) = 1;
  }
  return lVar1;
}

