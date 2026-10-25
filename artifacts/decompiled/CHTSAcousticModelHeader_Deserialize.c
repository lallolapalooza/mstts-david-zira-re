
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: virtual long __cdecl CHTSAcousticModelHeader::Deserialize(unsigned char const *
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CHTSAcousticModelHeader::Deserialize
          (CHTSAcousticModelHeader *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  uint uVar1;
  long lVar2;
  CHMMDynamicWindowSet *this_00;
  ulonglong uVar3;
  uchar *puVar4;
  __uint64 _Var5;
  CHTSAcousticModelHeader *pCVar6;
  ulonglong uVar7;
  uchar *puVar8;
  __uint64 local_res10;
  __uint64 local_38;
  uchar *local_30;
  
  if ((param_1 == (uchar *)0x0) || (param_3 == (__uint64 *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_38 = param_2;
  local_30 = param_1;
  lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>((ulong *)(this + 8),&local_30,&local_38);
  if ((((lVar2 < 0) ||
       (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                          ((ulong *)(this + 0xc),&local_30,&local_38), lVar2 < 0)) ||
      (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                         ((ulong *)(this + 0x10),&local_30,&local_38), lVar2 < 0)) ||
     ((lVar2 = CMemoryLoadHelper::LoadValue<HMM_DIST_TYPE>
                         ((HMM_DIST_TYPE *)(this + 0x14),&local_30,&local_38), lVar2 < 0 ||
      (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                         ((ulong *)(this + 0x18),&local_30,&local_38), lVar2 < 0))))
  goto LAB_1800359f2;
  pCVar6 = this + 0x1c;
  lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>((ulong *)pCVar6,&local_30,&local_38);
  if (lVar2 < 0) goto LAB_1800359f2;
  local_res10 = 0;
  uVar7 = 4;
  lVar2 = ULongLongMult(4,(ulonglong)*(uint *)pCVar6,&local_res10);
  if ((-1 < lVar2) && (local_res10 <= local_38)) {
    *(uchar **)(this + 0x20) = local_30;
    uVar3 = (ulonglong)*(uint *)pCVar6 * 4;
    if (uVar3 <= local_38 - local_res10) {
      local_30 = local_30 + uVar3 + local_res10;
      local_38 = (local_38 - local_res10) + (ulonglong)*(uint *)pCVar6 * -4;
      lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                        ((ulong *)(this + 0x28),&local_30,&local_38);
      if ((((lVar2 < 0) ||
           (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                              ((ulong *)(this + 0x2c),&local_30,&local_38), lVar2 < 0)) ||
          (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                             ((ulong *)(this + 0x30),&local_30,&local_38), lVar2 < 0)) ||
         (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                            ((ulong *)(this + 0x34),&local_30,&local_38), lVar2 < 0))
      goto LAB_1800359f2;
      local_res10 = local_res10 & 0xffffffff00000000;
      lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>((ulong *)&local_res10,&local_30,&local_38)
      ;
      if (lVar2 < 0) goto LAB_1800359f2;
      if ((int)local_res10 != 0) {
        puVar8 = local_30 + -4;
        _Var5 = local_38 + uVar7;
        this_00 = operator_new((ulonglong)((int)uVar7 + 0x1c),&std::nothrow);
        if (this_00 != (CHMMDynamicWindowSet *)0x0) {
          *(undefined4 *)(this_00 + 8) = 0;
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(undefined4 *)(this_00 + 0x18) = 0;
          *(undefined ***)this_00 = CHMMDynamicWindowSet::_vftable_;
        }
        *(CHMMDynamicWindowSet **)(this + 0x38) = this_00;
        if (this_00 == (CHMMDynamicWindowSet *)0x0) {
          lVar2 = -0x7ff8fff2;
          local_res10 = 0;
          goto LAB_1800359f2;
        }
        local_res10 = 0;
        lVar2 = CHMMDynamicWindowSet::Deserialize(this_00,puVar8,_Var5,&local_res10);
        if (lVar2 < 0) goto LAB_1800359f2;
        uVar7 = 4;
        local_38 = _Var5 - local_res10;
        local_30 = puVar8 + local_res10;
      }
      lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                        ((ulong *)(this + 0x4c),&local_30,&local_38);
      if (((((lVar2 < 0) ||
            (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                               ((ulong *)(this + 0x50),&local_30,&local_38), lVar2 < 0)) ||
           ((lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)(this + 0x54),&local_30,&local_38),
            lVar2 < 0 ||
            ((lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)(this + 0x58),&local_30,&local_38),
             lVar2 < 0 ||
             (lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)(this + 0x5c),&local_30,&local_38),
             lVar2 < 0)))))) ||
          (lVar2 = CMemoryLoadHelper::LoadValue<unsigned_long>
                             ((ulong *)(this + 0x60),&local_30,&local_38), lVar2 < 0)) ||
         (lVar2 = CMemoryLoadHelper::LoadValue<int>((int *)(this + 100),&local_30,&local_38),
         lVar2 < 0)) goto LAB_1800359f2;
      if (uVar7 <= local_38) {
        puVar8 = local_30 + uVar7;
        *(undefined4 *)(this + 0x68) = *(undefined4 *)local_30;
        if (uVar7 <= local_38 - uVar7) {
          uVar3 = (local_38 - uVar7) - uVar7;
          puVar4 = puVar8 + uVar7;
          *(undefined4 *)(this + 0x6c) = *(undefined4 *)puVar8;
          if (uVar7 <= uVar3) {
            uVar3 = uVar3 - uVar7;
            *(undefined4 *)(this + 0x70) = *(undefined4 *)puVar4;
            if (uVar7 <= uVar3) {
              uVar1 = *(uint *)(puVar4 + uVar7);
              uVar3 = uVar3 - uVar7;
              puVar8 = (uchar *)((longlong)(puVar4 + uVar7) + uVar7);
              *(uint *)(this + 0x48) = uVar1;
              lVar2 = 0;
              if (uVar1 == 0) {
LAB_180035a30:
                *param_3 = param_2 - uVar3;
                return lVar2;
              }
              uVar7 = (ulonglong)uVar1;
              if (uVar7 <= uVar3) {
                *(uchar **)(this + 0x40) = puVar8;
                uVar3 = uVar3 - uVar7;
                lVar2 = ParseExtensionHeader(this,puVar8,uVar7);
                if (lVar2 < 0) goto LAB_1800359f2;
                goto LAB_180035a30;
              }
              goto LAB_1800359e6;
            }
          }
        }
      }
      lVar2 = -0x7fff0001;
      goto LAB_1800359f2;
    }
  }
LAB_1800359e6:
  lVar2 = -0x7ffb7fe8;
LAB_1800359f2:
  (**(code **)(*(longlong *)this + 0x10))(this);
  return lVar2;
}

