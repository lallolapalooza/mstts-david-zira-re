
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual long __cdecl CParameterManager::LoadData(unsigned char const * __ptr64,unsigned
   __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CParameterManager::LoadData
          (CParameterManager *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  CAtlArray<CParameterManager::PARAMETERINDEX,TTS::CElementTraits<CParameterManager::PARAMETERINDEX>_>
  *this_00;
  int iVar1;
  long lVar2;
  ulonglong uVar3;
  longlong lVar4;
  __uint64 _Var5;
  __uint64 *p_Var6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint *local_res10;
  ulonglong local_res18;
  undefined1 auStackY_a8 [32];
  __uint64 local_78;
  uint *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie ^ (ulonglong)auStackY_a8;
  if ((param_1 == (uchar *)0x0) || (param_3 == (__uint64 *)0x0)) {
    lVar2 = -0x7ff8ffa9;
  }
  else {
    local_78 = 0;
    local_48 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    lVar2 = CTTSDataLoader::LoadFontSectionHeaderEx
                      (param_1,param_2,&local_78,(VOICE_FONT_SECTION_HEADER_EX *)&local_68,
                       0x54504542,
                       &`public:_static_struct__GUID_const&___ptr64___cdecl_CParameterManager::_GetFormatTag(void)'
                        ::__l2::guidFormat);
    if (-1 < lVar2) {
      local_res10 = (uint *)(param_1 + local_78);
      p_Var6 = &local_res18;
      local_res18 = param_2 - local_78;
      local_78 = local_78 & 0xffffffff00000000;
      lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)&local_78,(uchar **)&local_res10,p_Var6);
      iVar1 = (int)local_78;
      _Var5 = (__uint64)(int)local_78;
      if ((int)local_78 < 0) {
        lVar2 = -0x7ffb7fe8;
      }
      else if (-1 < lVar2) {
        this_00 = (CAtlArray<CParameterManager::PARAMETERINDEX,TTS::CElementTraits<CParameterManager::PARAMETERINDEX>_>
                   *)(this + 0x20);
        lVar2 = TTS::
                CAtlArray<CParameterManager::PARAMETERINDEX,TTS::CElementTraits<CParameterManager::PARAMETERINDEX>_>
                ::SetCount(this_00,_Var5,(int)p_Var6);
        if (-1 < lVar2) {
          iVar10 = 0;
          iVar11 = 0;
          uVar9 = 0x80048018;
          lVar8 = -0x7ffb7fe8;
          local_70 = local_res10 + _Var5 * 3;
          uVar3 = local_res18;
          if (0 < iVar1) {
            lVar4 = 0;
            puVar12 = local_res10;
            do {
              lVar8 = (long)uVar9;
              if (lVar2 < 0) break;
              puVar7 = (uint *)0x0;
              local_78 = 0;
              lVar2 = ULongLongMult(0xc,1,&local_78);
              lVar8 = (long)uVar9;
              puVar13 = puVar12;
              if (lVar2 < 0) {
LAB_180113f01:
                if ((((puVar7 == (uint *)0x0) || (0x1f < *puVar7)) || ((int)puVar7[1] < 0)) ||
                   ((int)puVar7[2] < 1)) goto LAB_180113f4b;
                if (-1 < lVar2) {
                  *(uint *)(lVar4 + *(longlong *)this_00) = *puVar7;
                  *(longlong *)(*(longlong *)this_00 + 8 + lVar4) =
                       (longlong)(int)puVar7[1] + (longlong)local_70;
                  *(uint *)(*(longlong *)this_00 + 0x10 + lVar4) = puVar7[2];
                  iVar10 = iVar10 + puVar7[2];
                }
              }
              else {
                if (local_78 <= uVar3) {
                  puVar13 = (uint *)((longlong)puVar12 + local_78);
                  uVar3 = uVar3 - local_78;
                  puVar7 = puVar12;
                  goto LAB_180113f01;
                }
LAB_180113f4b:
                lVar2 = lVar8;
              }
              iVar11 = iVar11 + 1;
              lVar4 = lVar4 + 0x18;
              puVar12 = puVar13;
            } while (iVar11 < iVar1);
          }
          if ((longlong)iVar10 != uVar3) {
            lVar2 = lVar8;
          }
        }
      }
    }
  }
  return lVar2;
}

