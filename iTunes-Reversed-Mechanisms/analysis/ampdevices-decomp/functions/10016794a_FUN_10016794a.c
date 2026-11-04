// name: FUN_10016794a
// address: 10016794a

undefined8 FUN_10016794a(long param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100674e1c(uVar3);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100674da6(uVar3);
      }
    }
    else {
      if (param_2 != 0) {
        lVar2 = _CFDictionaryGetValue();
        if (lVar2 == 0) {
          return 0;
        }
        uVar3 = FUN_1001652da(lVar2,param_3);
        return uVar3;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_100674d30(uVar3);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

