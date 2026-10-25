
/* protected: long __cdecl CHTSAcousticModelHeader::ParseExtensionHeader(unsigned char const *
   __ptr64,unsigned __int64) __ptr64 */

long __thiscall
CHTSAcousticModelHeader::ParseExtensionHeader
          (CHTSAcousticModelHeader *this,uchar *param_1,__uint64 param_2)

{
  long lVar1;
  CHTSCustomizationSetting *local_res10 [2];
  __uint64 local_res20;
  uchar *local_18 [2];
  
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    lVar1 = 0;
  }
  else {
    local_res10[0] = (CHTSCustomizationSetting *)((ulonglong)local_res10[0] & 0xffffffff00000000);
    local_res20 = param_2;
    local_18[0] = param_1;
    lVar1 = CMemoryLoadHelper::LoadValue<unsigned_long>((ulong *)local_res10,local_18,&local_res20);
    if (-1 < lVar1) {
      if ((int)local_res10[0] == 1) {
        local_res10[0] = operator_new(0x28,&std::nothrow);
        if (local_res10[0] != (CHTSCustomizationSetting *)0x0) {
          *(undefined8 *)local_res10[0] = 0;
          *(undefined8 *)(local_res10[0] + 8) = 0;
          *(undefined8 *)(local_res10[0] + 0x10) = 0;
          *(undefined4 *)(local_res10[0] + 0x18) = 0;
          *(undefined4 *)(local_res10[0] + 0x20) = 0;
          *(undefined4 *)(local_res10[0] + 0x24) = 0;
        }
        *(CHTSCustomizationSetting **)(this + 0x78) = local_res10[0];
        if (local_res10[0] == (CHTSCustomizationSetting *)0x0) {
          lVar1 = -0x7ff8fff2;
        }
        else {
          lVar1 = CHTSCustomizationSetting::Initialize(local_res10[0],local_18[0],local_res20);
          if (-1 < lVar1) {
            CTTSTracingHelper::LogCustomizationSetting(*(CHTSCustomizationSetting **)(this + 0x78));
          }
        }
      }
      else {
        lVar1 = -0x7ffb7fe8;
      }
    }
  }
  return lVar1;
}

