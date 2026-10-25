
/* public: long __cdecl CParameterManager::Query<enum UNIT_SELECTION_BASE_UNIT>(enum
   RUNTIME_PARAMETER,enum UNIT_SELECTION_BASE_UNIT * __ptr64)const __ptr64 */

long __thiscall
CParameterManager::Query<UNIT_SELECTION_BASE_UNIT>
          (CParameterManager *this,RUNTIME_PARAMETER param_1,UNIT_SELECTION_BASE_UNIT *param_2)

{
  long lVar1;
  int local_res10 [2];
  UNIT_SELECTION_BASE_UNIT *local_res18 [2];
  
  if (param_2 == (UNIT_SELECTION_BASE_UNIT *)0x0) {
    lVar1 = -0x7ff8ffa9;
  }
  else {
    local_res18[0] = (UNIT_SELECTION_BASE_UNIT *)0x0;
    local_res10[0] = 0;
    lVar1 = Query(this,0x1f,(uchar **)local_res18,local_res10);
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

