
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: virtual long __cdecl CNUSVoiceDataLoader::LoadData(unsigned char const *
   __ptr64,unsigned __int64,unsigned __int64 * __ptr64) __ptr64 */

long __thiscall
CNUSVoiceDataLoader::LoadData
          (CNUSVoiceDataLoader *this,uchar *param_1,__uint64 param_2,__uint64 *param_3)

{
  uint uVar1;
  CTTSFeatureMeta *this_00;
  uchar *puVar2;
  int iVar3;
  ulonglong _Size;
  ushort *_Dst;
  undefined8 uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  ushort **ppuVar9;
  ulonglong uVar10;
  VOICE_FONT_SECTION_HEADER_EX *pVVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 auStackY_d8 [32];
  undefined4 uVar14;
  undefined4 in_stack_ffffffffffffff4c;
  uint local_a8;
  ulong local_a4;
  ushort *local_a0;
  uint *local_98;
  ushort *local_90;
  CTTSFeatureMeta *local_88;
  uint uStack_80;
  uint uStack_7c;
  uchar *local_78;
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
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_a0 = (ushort *)0x0;
  uVar14 = 0;
  pVVar11 = (VOICE_FONT_SECTION_HEADER_EX *)&local_70;
  ppuVar9 = &local_a0;
  local_98 = (uint *)param_1;
  local_90 = (ushort *)param_2;
  local_78 = param_1;
  iVar3 = CTTSDataLoader::LoadFontSectionHeaderEx
                    (param_1,param_2,(__uint64 *)ppuVar9,pVVar11,0,(_GUID *)(this + 0x1b0));
  iVar8 = (int)ppuVar9;
  uVar5 = 0;
  local_a4 = 0;
  local_a8 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  puVar6 = (uint *)param_1;
  if (-1 < iVar3) {
    puVar6 = (uint *)(param_1 + (longlong)local_a0);
    param_2 = param_2 - (longlong)local_a0;
    iVar3 = 0;
    if (param_2 < (ushort *)0x10) {
      iVar3 = -0x7fff0001;
      local_98 = puVar6;
      local_90 = (ushort *)param_2;
    }
    else {
      local_a4 = *puVar6;
      local_a8 = puVar6[1];
      local_88 = *(CTTSFeatureMeta **)puVar6;
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      puVar6 = puVar6 + 4;
      param_2 = param_2 + -0x10;
      uVar5 = (ulonglong)local_a4;
      local_98 = puVar6;
      local_90 = (ushort *)param_2;
    }
  }
  uVar10 = 0;
  if (iVar3 < 0) {
LAB_1800eb562:
    uVar5 = 0;
    if (-1 < iVar3) {
      do {
        if ((uint)uVar10 <= (uint)uVar5) break;
        local_a4 = 0;
        iVar3 = CMemoryLoadHelper::LoadValue<unsigned_long>
                          (&local_a4,(uchar **)&local_98,(__uint64 *)&local_90);
        local_a0 = (ushort *)0x0;
        if ((-1 < iVar3) &&
           (iVar3 = CMemoryLoadHelper::LoadStringW
                              (&local_a0,*(uchar **)(this + 0x178),
                               (ulonglong)*(uint *)(this + 0x180),(ulonglong)local_a4), -1 < iVar3))
        {
          local_88 = operator_new(0x100,&std::nothrow);
          if (local_88 == (CTTSFeatureMeta *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = CTTSFeatureMeta::CTTSFeatureMeta(local_88);
          }
          *(undefined8 *)(*(longlong *)(this + 0x78) + uVar5 * 8) = uVar4;
          this_00 = *(CTTSFeatureMeta **)(*(longlong *)(this + 0x78) + uVar5 * 8);
          if (this_00 == (CTTSFeatureMeta *)0x0) {
            iVar3 = -0x7ff8fff2;
            puVar6 = local_98;
            goto LAB_1800eb456;
          }
          iVar3 = CTTSFeatureMeta::Parse
                            (this_00,local_a0,0,
                             (CAtlArray<SKIP_NODE_CONFIG,TTS::CElementTraits<SKIP_NODE_CONFIG>_> *)
                             0x0);
        }
        uVar5 = (ulonglong)((uint)uVar5 + 1);
      } while (-1 < iVar3);
      param_2 = (__uint64)local_90;
      puVar6 = local_98;
    }
    if (-1 < iVar3) {
      local_a0 = (ushort *)0x0;
      iVar3 = ULongLongMult(0xc,(ulonglong)local_a8,(__uint64 *)&local_a0);
      puVar7 = (uint *)0x0;
      puVar13 = puVar6;
      if (-1 < iVar3) {
        if (param_2 < local_a0) {
          iVar3 = -0x7fff0001;
        }
        else {
          puVar13 = (uint *)((longlong)puVar6 + (longlong)local_a0);
          puVar7 = puVar6;
        }
      }
      goto LAB_1800eb45a;
    }
  }
  else {
    uVar12 = (ulonglong)uStack_80;
    _Size = (ulonglong)uStack_7c;
    *(uint *)(this + 0x180) = uStack_7c;
    if ((uStack_7c & 1) == 0) {
      uVar10 = uVar5;
      if (uStack_7c != 0) {
        iVar3 = CNewArrayHelper::IsGoodForIntegerOverflow(1,_Size);
        if ((iVar3 == 0) || (_Dst = operator_new__(_Size,&std::nothrow), _Dst == (ushort *)0x0)) {
          _Dst = (ushort *)0x0;
        }
        else {
          memset(_Dst,0,_Size);
        }
        *(ushort **)(this + 0x178) = _Dst;
        if (_Dst == (ushort *)0x0) {
          iVar3 = -0x7ff8fff2;
          goto LAB_1800eb454;
        }
        iVar3 = CStringEncryption::EncryptByMask
                          ((ushort *)(param_1 + uVar12),(ulonglong)(*(uint *)(this + 0x180) >> 1),
                           _Dst,(ushort *)pVVar11,CONCAT44(in_stack_ffffffffffffff4c,uVar14));
        iVar8 = (int)_Dst;
        if (iVar3 < 0) goto LAB_1800eb562;
        uVar5 = (ulonglong)local_a4;
      }
      iVar3 = TTS::
              CAtlArray<CTTSFeatureMeta*___ptr64,TTS::CElementTraits<CTTSFeatureMeta*___ptr64>_>::
              SetCount((CAtlArray<CTTSFeatureMeta*___ptr64,TTS::CElementTraits<CTTSFeatureMeta*___ptr64>_>
                        *)(this + 0x78),uVar5,iVar8);
      goto LAB_1800eb562;
    }
    iVar3 = -0x7ffb7fe8;
LAB_1800eb454:
  }
LAB_1800eb456:
  puVar7 = (uint *)0x0;
  puVar13 = puVar6;
LAB_1800eb45a:
  puVar2 = local_78;
  uVar5 = 0;
  do {
    if (iVar3 < 0) {
      return iVar3;
    }
    if (local_a8 <= (uint)uVar5) {
      if (*(int *)(this + 0x1a4) != 0) {
        return iVar3;
      }
      if ((*(longlong *)(this + 0xa0) == *(longlong *)(this + 0x100)) &&
         (*(longlong *)(this + 0xa0) == *(longlong *)(this + 0x120))) {
        return iVar3;
      }
      return -0x7ffb7ff1;
    }
    puVar6 = (uint *)(puVar2 + puVar7[uVar5 * 3 + 1]);
    uVar10 = (ulonglong)puVar7[uVar5 * 3 + 2];
    if (puVar6 != puVar13) {
      return -0x7ffb7ff1;
    }
    uVar1 = puVar7[uVar5 * 3];
    if (uVar1 == 0) {
      iVar3 = LoadUnit(this + -0x18,(uchar *)puVar6,uVar10);
LAB_1800eb6fb:
      if (-1 < iVar3) {
        puVar13 = (uint *)((longlong)puVar13 + uVar10);
      }
    }
    else {
      if (uVar1 == 1) {
        iVar3 = LoadTarget(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 2) {
        iVar3 = LoadCandidates(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 3) {
        iVar3 = LoadTrie(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 4) {
        iVar3 = LoadNuSpsUnit(this + -0x18,(uchar *)puVar6,uVar10);
        *(undefined4 *)(this + 0x1a4) = 1;
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 5) {
        iVar3 = LoadBoundary(this + -0x18,(uchar *)puVar6,uVar10);
        *(undefined4 *)(this + 0x1a8) = 1;
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 6) {
        iVar3 = LoadEmotion(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 7) {
        iVar3 = LoadProsody(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      if (uVar1 == 8) {
        iVar3 = LoadTemplates(this + -0x18,(uchar *)puVar6,uVar10);
        goto LAB_1800eb6fb;
      }
      iVar3 = -0x7ffb7ff1;
    }
    uVar5 = (ulonglong)((uint)uVar5 + 1);
  } while( true );
}

