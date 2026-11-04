// name: FUN_1001679fe
// address: 1001679fe

undefined8 FUN_1001679fe(long param_1,long param_2,undefined8 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100674f7e(uVar3);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100674f08(uVar3);
      }
    }
    else {
      if (param_2 != 0) {
        lVar2 = _CFDictionaryGetValue();
        if (lVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_100164e20(lVar2,param_3);
        return uVar3;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100674e92(uVar3);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

