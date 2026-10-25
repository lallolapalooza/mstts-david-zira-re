
/* public: long __cdecl CParameterManager::Query<unsigned long>(enum RUNTIME_PARAMETER,unsigned long
   * __ptr64)const __ptr64 */

long __thiscall
CParameterManager::Query<unsigned_long>
          (CParameterManager *this,RUNTIME_PARAMETER param_1,ulong *param_2)

{
  long lVar1;
  int local_res10 [2];
  ulong *local_res18 [2];
  
  if (param_2 == (ulong *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    local_res18[0] = (ulong *)0x0;
    local_res10[0] = 0;
    lVar1 = Query(this,5,(uchar **)local_res18,local_res10);
    if (lVar1 == 0) {
      if (local_res10[0] == 4) {
        *param_2 = *local_res18[0];
      }
      else {
        lVar1 = -0x7fff0001;
      }
    }
  }
  return lVar1;
}

