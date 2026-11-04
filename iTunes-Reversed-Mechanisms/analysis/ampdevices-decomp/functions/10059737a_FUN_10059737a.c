// name: FUN_10059737a
// address: 10059737a

void FUN_10059737a(sqlite3_context *param_1,undefined8 param_2,undefined8 *param_3)

{
  void *pvVar1;
  sqlite3_int64 sVar2;
  
  pvVar1 = _sqlite3_user_data(param_1);
  if (pvVar1 != (void *)0x0) {
    sVar2 = _sqlite3_value_int64((sqlite3_value *)*param_3);
    sVar2 = FUN_100597422(pvVar1,sVar2,1);
    _sqlite3_result_int64(param_1,sVar2);
    return;
  }
  return;
}

