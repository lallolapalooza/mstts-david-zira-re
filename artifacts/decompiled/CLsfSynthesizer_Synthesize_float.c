
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* public: long __cdecl CLsfSynthesizerImpl<float,float>::Synthesize<float,float,float>(class
   CMemoryMatrix<float> const & __ptr64,class CMemoryMatrix<float> const & __ptr64,float const *
   __ptr64,short * __ptr64,unsigned long,unsigned long,int,float,float * __ptr64,class
   CMemoryMatrix<float> const * __ptr64,class CMemoryMatrix<float> const * __ptr64,unsigned long)
   __ptr64 */

long __thiscall
CLsfSynthesizerImpl<float,float>::Synthesize<float,float,float>
          (CLsfSynthesizerImpl<float,float> *this,CMemoryMatrix<float> *param_1,
          CMemoryMatrix<float> *param_2,float *param_3,short *param_4,ulong param_5,ulong param_6,
          int param_7,float param_8,float *param_9,CMemoryMatrix<float> *param_10,
          CMemoryMatrix<float> *param_11,ulong param_12)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  CMemoryArray<short> *this_00;
  void *_Src;
  bool bVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  TypeDescriptor *this_01;
  CLsfSynthesizerImpl<float,float> *pCVar11;
  CMemoryMatrix<float> *pCVar12;
  ulonglong uVar13;
  size_t sVar14;
  ulonglong uVar15;
  uint uVar16;
  float *pfVar17;
  CLsfSynthesizerImpl<float,float> *pCVar18;
  short *psVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStackY_b08 [32];
  float *local_aa0;
  long local_a98;
  uint local_a90;
  CLsfSynthesizerImpl<float,float> *local_a88;
  uint local_a78;
  short *local_a70;
  float local_a48 [40];
  float local_9a8 [440];
  float local_2c8 [80];
  float local_188 [40];
  ulonglong local_e8;
  
  local_e8 = __security_cookie ^ (ulonglong)auStackY_b08;
  local_a70 = param_4;
  if ((((param_3 == (float *)0x0) || (param_4 == (short *)0x0)) || (param_5 == 0)) || (param_6 == 0)
     ) {
    return -0x7ff8ffa9;
  }
  local_a78 = *(uint *)param_1;
  uVar3 = *(uint *)(param_1 + 4);
  uVar15 = (ulonglong)uVar3;
  pCVar12 = param_1;
  if (param_7 != 0) {
    local_a78 = param_5 / param_6;
    pCVar12 = (CMemoryMatrix<float> *)((ulonglong)param_5 % (ulonglong)param_6);
  }
  lVar6 = 0;
  if (0x1b8 < param_6 + uVar3) {
    return -0x7ff8ffa9;
  }
  pCVar18 = this + 0x18;
  this_00 = *(CMemoryArray<short> **)pCVar18;
  if (this_00 == (CMemoryArray<short> *)0x0) {
LAB_18006b739:
    lVar6 = CMemoryArray<float>::CreateInstance((CMemoryArray<float> **)pCVar18,uVar3 + 1);
    if (lVar6 < 0) goto LAB_18006b794;
  }
  else if (*(uint *)(this_00 + 4) < uVar3) {
    CMemoryArray<short>::_scalar_deleting_destructor_(this_00,(uint)pCVar12);
    *(CMemoryArray<float> **)pCVar18 = (CMemoryArray<float> *)0x0;
    goto LAB_18006b739;
  }
  sVar14 = uVar15 * 4;
  _Src = *(void **)(*(CMemoryArray<float> **)pCVar18 + 8);
  if (param_9 == (float *)0x0) {
    memcpy(local_9a8,_Src,sVar14);
  }
  else {
    memcpy(local_a48,_Src,sVar14);
    local_a48[uVar15 + 0x27] = *(float *)(sVar14 + (longlong)_Src);
  }
LAB_18006b794:
  local_aa0 = local_188;
  if (uVar3 < 0x29) {
    if (-1 < lVar6) {
      uVar20 = 0;
      local_a98 = lVar6;
      local_a88 = (CLsfSynthesizerImpl<float,float> *)param_3;
      for (iVar7 = 0; (uVar20 < local_a78 && (iVar7 + param_6 <= param_5)); iVar7 = iVar7 + param_6)
      {
        if ((CLsfSynthesizerImpl<float,float> *)(param_3 + param_5) <
            local_a88 + (ulonglong)param_6 * 4) {
          return -0x7fff0001;
        }
        if (param_7 == 0) {
          pCVar18 = (CLsfSynthesizerImpl<float,float> *)0x0;
          pCVar11 = *(CLsfSynthesizerImpl<float,float> **)(param_2 + 8);
          if (pCVar11 != (CLsfSynthesizerImpl<float,float> *)0x0) {
            pCVar18 = pCVar11 + (ulonglong)(uVar20 * *(int *)(param_2 + 4)) * 4;
          }
          fVar24 = GetExponentGain(pCVar11,*(float *)pCVar18);
        }
        else {
          fVar24 = 1.0;
        }
        pfVar8 = (float *)0x0;
        if (*(longlong *)(param_1 + 8) != 0) {
          pfVar8 = (float *)(*(longlong *)(param_1 + 8) +
                            (ulonglong)(uVar20 * *(int *)(param_1 + 4)) * 4);
        }
        if (*(int *)(this + 0x10) == 0) {
          if (((pfVar8 == (float *)0x0) || (local_aa0 == (float *)0x0)) || (uVar3 == 0))
          goto LAB_18006befd;
          pfVar17 = local_2c8;
          uVar13 = uVar15;
          do {
            dVar25 = (double)*(float *)(((longlong)pfVar8 - (longlong)local_2c8) + (longlong)pfVar17
                                       ) * 3.141592653589793;
            dVar25 = (double)_o_cos(dVar25 + dVar25);
            *pfVar17 = (float)dVar25;
            pfVar17 = pfVar17 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          lVar6 = CLineSpectralPair::FastLSPToLPC<float>(local_2c8,local_aa0,uVar3);
          local_a98 = lVar6;
          if (lVar6 < 0) {
            return lVar6;
          }
        }
        else {
          local_aa0 = pfVar8;
        }
        uVar22 = 0;
        fVar28 = 1.0;
        if ((param_9 != (float *)0x0) && (uVar3 != 0)) {
          pfVar8 = param_9;
          uVar13 = uVar15;
          do {
            pfVar17 = (float *)(((longlong)local_aa0 - (longlong)param_9) + (longlong)pfVar8);
            fVar26 = *pfVar8;
            pfVar8 = pfVar8 + 1;
            fVar28 = fVar28 + *pfVar17 * fVar26;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
LAB_18006b965:
        uVar22 = uVar22 + 1;
        if (param_9 != (float *)0x0) goto LAB_18006bb23;
LAB_18006b971:
        uVar13 = 0;
        while( true ) {
          uVar16 = (uint)uVar13;
          if (param_6 <= uVar16) break;
          uVar23 = uVar16 + uVar3;
          if (param_9 == (float *)0x0) {
LAB_18006ba66:
            this_01 = (TypeDescriptor *)0x0;
            fVar27 = fVar24 * *(float *)(local_a88 + uVar13 * 4);
            if (uVar3 != 0) {
              pfVar8 = local_aa0;
              do {
                iVar9 = (int)this_01;
                uVar10 = iVar9 + 1;
                this_01 = (TypeDescriptor *)(ulonglong)uVar10;
                fVar26 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                fVar27 = fVar27 - local_9a8[(uVar23 - iVar9) - 1] * fVar26;
              } while (uVar10 < uVar3);
            }
          }
          else {
            this_01 = &float__RTTI_Type_Descriptor_;
            bVar4 = type_info::operator==
                              ((type_info *)&float__RTTI_Type_Descriptor_,
                               (type_info *)&float__RTTI_Type_Descriptor_);
            fVar26 = local_a48[0];
            if (!bVar4) goto LAB_18006ba66;
            local_a48[0] = param_8 * local_a48[0] + local_9a8[uVar23 - 1];
            fVar27 = fVar24 * *(float *)(local_a88 + uVar13 * 4) - local_a48[0] * *local_aa0;
            if (uVar3 < 2) {
              fVar27 = fVar27 / fVar28;
              if (uVar3 != 0) goto LAB_18006ba35;
            }
            else {
              pfVar17 = local_a48;
              pfVar8 = local_a48;
              uVar21 = (ulonglong)(uVar3 - 1);
              do {
                pfVar17 = pfVar17 + 1;
                fVar1 = *pfVar17;
                fVar2 = *pfVar8;
                pfVar8 = pfVar8 + 1;
                fVar26 = (fVar1 - fVar2) * param_8 + fVar26;
                *pfVar17 = fVar26;
                fVar27 = fVar27 - fVar26 * *(float *)((longlong)local_aa0 +
                                                      (4 - (longlong)(local_a48 + 1)) +
                                                     (longlong)pfVar17);
                uVar21 = uVar21 - 1;
                fVar26 = fVar1;
              } while (uVar21 != 0);
              fVar27 = fVar27 / fVar28;
LAB_18006ba35:
              this_01 = (TypeDescriptor *)((longlong)param_9 - (longlong)local_a48);
              pfVar8 = local_a48;
              uVar21 = uVar15;
              do {
                *pfVar8 = fVar27 * *(float *)((longlong)&this_01->pVFTable + (longlong)pfVar8) +
                          *pfVar8;
                pfVar8 = pfVar8 + 1;
                uVar21 = uVar21 - 1;
              } while (uVar21 != 0);
            }
          }
          local_9a8[uVar23] = fVar27;
          if ((uVar22 < 5) && ((31000.0 < fVar27 || (fVar27 < -31000.0)))) goto LAB_18006bae6;
          sVar5 = GetValidSampleValue((CLsfSynthesizerImpl<float,float> *)this_01,fVar27);
          local_a70[uVar13] = sVar5;
          uVar13 = (ulonglong)(uVar16 + 1);
        }
        if (param_10 == (CMemoryMatrix<float> *)0x0) goto LAB_18006be95;
        if ((*(longlong *)(param_10 + 8) == 0) ||
           (*(float *)(*(longlong *)(param_10 + 8) +
                      (ulonglong)(uVar20 * *(int *)(param_10 + 4)) * 4) <= 0.0)) goto LAB_18006be95;
        bVar4 = type_info::operator==
                          ((type_info *)&float__RTTI_Type_Descriptor_,
                           (type_info *)&float__RTTI_Type_Descriptor_);
        if (!bVar4) goto LAB_18006be95;
        uVar22 = param_6 * 2;
        if ((((param_11 != (CMemoryMatrix<float> *)0x0) && (*(longlong *)(param_11 + 8) != 0)) &&
            (param_12 != 0)) &&
           (fVar26 = *(float *)(*(longlong *)(param_11 + 8) +
                               (ulonglong)(uVar20 * *(int *)(param_11 + 4)) * 4), 3.0 < fVar26)) {
          uVar22 = (int)(longlong)((float)param_12 / fVar26) * 3;
          if (uVar22 < param_6) {
            uVar22 = param_6;
          }
          if (399 < uVar22) {
            uVar22 = 400;
          }
        }
        uVar16 = param_5 - iVar7;
        if (uVar22 < param_5 - iVar7) {
          uVar16 = uVar22;
        }
        if (param_6 < uVar16) {
          uVar22 = param_6 + uVar3;
          uVar13 = (ulonglong)(uVar16 - param_6);
          pCVar18 = local_a88 + (ulonglong)param_6 * 4;
          pCVar11 = local_a88;
          do {
            if (param_9 == (float *)0x0) {
              fVar26 = GenerateLpc(pCVar11,fVar24,*(float *)pCVar18,local_9a8,local_aa0,uVar22,uVar3
                                  );
            }
            else {
              fVar26 = GenerateLpc(pCVar11,fVar24,*(float *)pCVar18,local_9a8,local_aa0,uVar22,uVar3
                                   ,local_a48,param_8,fVar28,param_9);
            }
            local_9a8[uVar22] = fVar26;
            pCVar18 = pCVar18 + 4;
            uVar22 = uVar22 + 1;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
          lVar6 = local_a98;
        }
        fVar26 = 0.0;
        if (uVar3 < uVar3 + uVar16) {
          pfVar8 = local_9a8 + uVar15;
          uVar13 = (ulonglong)((uVar3 + uVar16) - uVar3);
          do {
            fVar27 = *pfVar8;
            if (fVar27 <= 0.0) {
              fVar27 = -fVar27;
            }
            pfVar8 = pfVar8 + 1;
            fVar26 = fVar26 + fVar27;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        pCVar11 = *(CLsfSynthesizerImpl<float,float> **)(param_10 + 8);
        local_a90 = 0;
        pCVar18 = (CLsfSynthesizerImpl<float,float> *)0x0;
        if (pCVar11 != (CLsfSynthesizerImpl<float,float> *)0x0) {
          pCVar18 = pCVar11 + (ulonglong)(uVar20 * *(int *)(param_10 + 4)) * 4;
        }
        dVar25 = (double)exp((double)*(float *)pCVar18);
        fVar26 = (float)(dVar25 / (double)(fVar26 / (float)uVar16));
        if (3.0 <= fVar26) goto LAB_18006be95;
        do {
          uVar13 = (ulonglong)uVar16;
          if ((fVar26 <= 1.01) && (0.99 <= fVar26)) break;
          fVar24 = fVar24 * fVar26;
          fVar26 = 0.0;
          if (uVar16 != 0) {
            pCVar18 = local_a88;
            uVar22 = uVar3;
            do {
              if (param_9 == (float *)0x0) {
                fVar27 = GenerateLpc(pCVar11,fVar24,*(float *)pCVar18,local_9a8,local_aa0,uVar22,
                                     uVar3);
              }
              else {
                fVar27 = GenerateLpc(pCVar11,fVar24,*(float *)pCVar18,local_9a8,local_aa0,uVar22,
                                     uVar3,local_a48,param_8,fVar28,param_9);
              }
              local_9a8[uVar22] = fVar27;
              if (fVar27 <= 0.0) {
                fVar27 = -fVar27;
              }
              uVar22 = uVar22 + 1;
              fVar26 = fVar26 + fVar27;
              pCVar18 = pCVar18 + 4;
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          pCVar11 = *(CLsfSynthesizerImpl<float,float> **)(param_10 + 8);
          pCVar18 = (CLsfSynthesizerImpl<float,float> *)0x0;
          if (pCVar11 != (CLsfSynthesizerImpl<float,float> *)0x0) {
            pCVar18 = pCVar11 + (ulonglong)(uVar20 * *(int *)(param_10 + 4)) * 4;
          }
          dVar25 = (double)exp((double)*(float *)pCVar18);
          local_a90 = local_a90 + 1;
          fVar26 = (float)(dVar25 / (double)(fVar26 / (float)uVar16));
        } while (local_a90 < 10);
        uVar22 = 0;
        lVar6 = local_a98;
        if (param_6 != 0) {
          psVar19 = local_a70;
          do {
            sVar5 = GetValidSampleValue(pCVar11,local_9a8[uVar22 + uVar3]);
            uVar22 = uVar22 + 1;
            *psVar19 = sVar5;
            psVar19 = psVar19 + 1;
          } while (uVar22 < param_6);
        }
LAB_18006be95:
        uVar13 = (ulonglong)param_6;
        memmove(local_9a8,local_9a8 + uVar13,uVar15 << 2);
        uVar20 = uVar20 + 1;
        local_a88 = local_a88 + uVar13 * 4;
        local_a70 = local_a70 + uVar13;
      }
      if (-1 < lVar6) {
        sVar14 = uVar15 * 4;
        if (param_9 == (float *)0x0) {
          memcpy(*(void **)(*(longlong *)(this + 0x18) + 8),local_9a8,sVar14);
        }
        else {
          memcpy(*(void **)(*(longlong *)(this + 0x18) + 8),local_a48,sVar14);
          *(float *)(sVar14 + *(longlong *)(*(longlong *)(this + 0x18) + 8)) =
               local_a48[uVar15 + 0x27];
        }
      }
    }
  }
  else {
LAB_18006befd:
    lVar6 = -0x7ff8ffa9;
  }
  return lVar6;
LAB_18006bae6:
  EnlargeLpcUnitCircle((CLsfSynthesizerImpl<float,float> *)this_01,local_aa0,uVar3);
  if (param_9 == (float *)0x0) goto LAB_18006b965;
  memcpy(local_a48,*(void **)(*(longlong *)(this + 0x18) + 8),uVar15 << 2);
  uVar22 = uVar22 + 1;
LAB_18006bb23:
  memcpy(*(void **)(*(longlong *)(this + 0x18) + 8),local_a48,uVar15 << 2);
  goto LAB_18006b971;
}

