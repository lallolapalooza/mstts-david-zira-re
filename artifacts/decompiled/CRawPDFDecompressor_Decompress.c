
/* WARNING: Function: _guard_dispatch_icall$thunk$10345483385596137414 replaced with injection:
   guard_dispatch_icall */
/* public: long __cdecl HTS::CRawPDFDecompressor<struct HTS::RAW_PDF<int,int,1> >::Decompress(struct
   HTS::RAW_PDF<int,int,1> const * __ptr64,signed char const * __ptr64 * __ptr64,unsigned char const
   * __ptr64 * __ptr64) __ptr64 */

long __thiscall
HTS::CRawPDFDecompressor<HTS::RAW_PDF<int,int,1>_>::Decompress
          (CRawPDFDecompressor<HTS::RAW_PDF<int,int,1>_> *this,RAW_PDF<int,int,1> *param_1,
          char **param_2,uchar **param_3)

{
  CLwHuffCodec *this_00;
  long lVar1;
  ulonglong uVar2;
  
  this_00 = *(CLwHuffCodec **)(param_1 + 0x10);
  lVar1 = 0;
  if (this_00 == (CLwHuffCodec *)0x0) {
    if (param_2 != (char **)0x0) {
      *param_2 = *(char **)(param_1 + 0x20);
    }
    if (param_3 != (uchar **)0x0) {
      *param_3 = (uchar *)((ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20));
    }
  }
  else {
    lVar1 = TTS::CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_>::SetCount
                      ((CAtlArray<unsigned_char,TTS::CElementTraits<unsigned_char>_> *)this,
                       (ulonglong)(*(int *)(param_1 + 0x18) * 2 - 3),(int)param_2);
    if (-1 < lVar1) {
      lVar1 = (*(code *)**(undefined8 **)this_00)
                        (this_00,*(undefined8 *)(param_1 + 0x20),*(int *)(param_1 + 0x18) * 3);
      uVar2 = 0;
      while( true ) {
        if ((lVar1 < 0) || (*(ulonglong *)(this + 8) <= uVar2)) break;
        lVar1 = CLwHuffCodec::Read(this_00,(uchar *)(*(longlong *)this + uVar2));
        uVar2 = (ulonglong)((int)uVar2 + 1);
      }
      if (uVar2 == *(ulonglong *)(this + 8)) {
        lVar1 = 0;
        if (param_2 != (char **)0x0) {
          *param_2 = *(char **)this;
        }
        if (param_3 != (uchar **)0x0) {
          *param_3 = (uchar *)((ulonglong)*(uint *)(param_1 + 0x18) + *(longlong *)this);
        }
      }
      else if (-1 < lVar1) {
        lVar1 = -0x7fff0001;
      }
    }
  }
  return lVar1;
}

