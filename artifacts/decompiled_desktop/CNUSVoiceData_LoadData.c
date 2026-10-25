
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: virtual long __cdecl CNUSVoiceData::LoadData(unsigned char const * __ptr64,unsigned
   __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CNUSVoiceData::LoadData(CNUSVoiceData *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  uint uVar1;
  uchar *puVar2;
  int iVar3;
  ulonglong _Size;
  ushort *_Dst;
  CTTSFeatureMeta *pCVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  ushort **ppuVar10;
  ulonglong uVar11;
  VOICE_FONT_SECTION_HEADER_EX *pVVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 auStackY_d8 [32];
  undefined4 uVar15;
  undefined4 in_stack_ffffffffffffff4c;
  uint local_a8;
  ulong local_a4;
  ushort *local_a0;
  uint *local_98;
  ushort *local_90;
  uchar *local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie ^ (ulonglong)auStackY_d8;
  if (((param_1 == (uchar *)0x0) || (param_2 == 0)) || (param_3 == (__uint64 *)0x0)) {
    return -0x7ff8ffa9;
  }
  local_a0 = (ushort *)0x0;
  pVVar12 = (VOICE_FONT_SECTION_HEADER_EX *)&local_70;
  local_50 = 0;
  ppuVar10 = &local_a0;
  uVar15 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_98 = (uint *)param_1;
  local_90 = (ushort *)param_2;
  local_88 = param_1;
  iVar3 = CTTSDataLoader::LoadFontSectionHeaderEx
                    (param_1,param_2,(__uint64 *)ppuVar10,pVVar12,0,
                     &`public:_static_struct__GUID_const&___ptr64___cdecl_CNUSVoiceData::_GetFormatTag(void)'
                      ::__l2::guidFormat);
  iVar9 = (int)ppuVar10;
  uVar6 = 0;
  local_a8 = 0;
  uStack_74 = 0;
  local_a4 = 0;
  uStack_78 = 0;
  puVar7 = (uint *)param_1;
  if (-1 < iVar3) {
    param_2 = param_2 - (longlong)local_a0;
    puVar7 = (uint *)(param_1 + (longlong)local_a0);
    iVar3 = 0;
    if (param_2 < (ushort *)0x10) {
      iVar3 = -0x7fff0001;
      local_98 = puVar7;
      local_90 = (ushort *)param_2;
    }
    else {
      local_a4 = *puVar7;
      local_a8 = puVar7[1];
      uStack_78 = puVar7[2];
      uStack_74 = puVar7[3];
      puVar7 = puVar7 + 4;
      param_2 = param_2 + -0x10;
      uVar6 = (ulonglong)local_a4;
      local_98 = puVar7;
      local_90 = (ushort *)param_2;
      local_80 = local_a4;
      uStack_7c = local_a8;
    }
  }
  uVar11 = 0;
  if (iVar3 < 0) {
LAB_18008476a:
    uVar6 = 0;
    if (-1 < iVar3) {
      do {
        if ((uint)uVar11 <= (uint)uVar6) break;
        local_a4 = 0;
        iVar3 = CMemoryLoadHelper::LoadValue<unsigned_long>
                          (&local_a4,(uchar **)&local_98,(__uint64 *)&local_90);
        local_a0 = (ushort *)0x0;
        if ((-1 < iVar3) &&
           (iVar3 = CMemoryLoadHelper::LoadStringW
                              (&local_a0,*(uchar **)(this + 0xf8),(ulonglong)*(uint *)(this + 0x100)
                               ,(ulonglong)local_a4), -1 < iVar3)) {
          pCVar4 = operator_new(0x90,&std::nothrow);
          if (pCVar4 == (CTTSFeatureMeta *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = CTTSFeatureMeta::CTTSFeatureMeta(pCVar4);
          }
          *(undefined8 *)(*(longlong *)(this + 0x58) + uVar6 * 8) = uVar5;
          pCVar4 = *(CTTSFeatureMeta **)(*(longlong *)(this + 0x58) + uVar6 * 8);
          if (pCVar4 == (CTTSFeatureMeta *)0x0) {
            iVar3 = -0x7ff8fff2;
            puVar7 = local_98;
            goto LAB_180084682;
          }
          iVar3 = CTTSFeatureMeta::Parse
                            (pCVar4,local_a0,0,
                             (CAtlArray<SKIP_NODE_CONFIG,TTS::CElementTraits<SKIP_NODE_CONFIG>_> *)
                             0x0);
        }
        uVar6 = (ulonglong)((uint)uVar6 + 1);
      } while (-1 < iVar3);
      param_2 = (__uint64)local_90;
      puVar7 = local_98;
    }
    if (-1 < iVar3) {
      local_a0 = (ushort *)0x0;
      iVar3 = ULongLongMult(0xc,(ulonglong)local_a8,(__uint64 *)&local_a0);
      puVar8 = (uint *)0x0;
      puVar14 = puVar7;
      if (-1 < iVar3) {
        if (param_2 < local_a0) {
          iVar3 = -0x7fff0001;
        }
        else {
          puVar14 = (uint *)((longlong)puVar7 + (longlong)local_a0);
          puVar8 = puVar7;
        }
      }
      goto LAB_180084686;
    }
  }
  else {
    _Size = (ulonglong)uStack_74;
    uVar13 = (ulonglong)uStack_78;
    *(uint *)(this + 0x100) = uStack_74;
    if ((uStack_74 & 1) == 0) {
      uVar11 = uVar6;
      if (uStack_74 != 0) {
        iVar3 = CNewArrayHelper::IsGoodForIntegerOverflow(1,_Size);
        if ((iVar3 == 0) || (_Dst = operator_new__(_Size,&std::nothrow), _Dst == (ushort *)0x0)) {
          _Dst = (ushort *)0x0;
        }
        else {
          memset(_Dst,0,_Size);
        }
        *(ushort **)(this + 0xf8) = _Dst;
        if (_Dst == (ushort *)0x0) {
          iVar3 = -0x7ff8fff2;
          goto LAB_180084680;
        }
        iVar3 = CStringEncryption::EncryptByMask
                          ((ushort *)(param_1 + uVar13),(ulonglong)(*(uint *)(this + 0x100) >> 1),
                           _Dst,(ushort *)pVVar12,CONCAT44(in_stack_ffffffffffffff4c,uVar15));
        iVar9 = (int)_Dst;
        if (iVar3 < 0) goto LAB_18008476a;
        uVar6 = (ulonglong)local_a4;
      }
      iVar3 = TTS::CAtlArray<__int64,TTS::CElementTraits<__int64>_>::SetCount
                        ((CAtlArray<__int64,TTS::CElementTraits<__int64>_> *)(this + 0x58),uVar6,
                         iVar9);
      goto LAB_18008476a;
    }
    iVar3 = -0x7ffb7fe8;
LAB_180084680:
  }
LAB_180084682:
  puVar8 = (uint *)0x0;
  puVar14 = puVar7;
LAB_180084686:
  puVar2 = local_88;
  uVar6 = 0;
  do {
    if (iVar3 < 0) {
      return iVar3;
    }
    if (local_a8 <= (uint)uVar6) {
      if (*(int *)(this + 0x124) != 0) {
        return iVar3;
      }
      if ((*(longlong *)(this + 0x80) == *(longlong *)(this + 0xa0)) &&
         (*(longlong *)(this + 0x80) == *(longlong *)(this + 0xc0))) {
        return iVar3;
      }
      return -0x7ffb7ff1;
    }
    uVar11 = (ulonglong)puVar8[uVar6 * 3 + 2];
    puVar7 = (uint *)(puVar2 + puVar8[uVar6 * 3 + 1]);
    if (puVar7 != puVar14) {
      return -0x7ffb7ff1;
    }
    uVar1 = puVar8[uVar6 * 3];
    if (uVar1 == 0) {
      iVar3 = LoadUnit(this + -0x18,(uchar *)puVar7,uVar11);
LAB_1800848ba:
      if (-1 < iVar3) {
        puVar14 = (uint *)((longlong)puVar14 + uVar11);
      }
    }
    else {
      if (uVar1 == 1) {
        iVar3 = LoadTarget(this + -0x18,(uchar *)puVar7,uVar11);
        goto LAB_1800848ba;
      }
      if (uVar1 == 2) {
        iVar3 = LoadCandidates(this + -0x18,(uchar *)puVar7,uVar11);
        goto LAB_1800848ba;
      }
      if (uVar1 == 3) {
        iVar3 = LoadTrie(this + -0x18,(uchar *)puVar7,uVar11);
        goto LAB_1800848ba;
      }
      if (uVar1 == 4) {
        iVar3 = LoadNuSpsUnit(this + -0x18,(uchar *)puVar7,uVar11);
        *(undefined4 *)(this + 0x124) = 1;
        goto LAB_1800848ba;
      }
      iVar3 = -0x7ffb7ff1;
    }
    uVar6 = (ulonglong)((uint)uVar6 + 1);
  } while( true );
}

