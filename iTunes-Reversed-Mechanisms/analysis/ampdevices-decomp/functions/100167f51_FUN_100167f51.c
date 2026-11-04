// name: FUN_100167f51
// address: 100167f51

undefined8 FUN_100167f51(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100675492(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      lVar2 = _CFDictionaryGetValue();
      if (lVar2 == 0) {
        return local_18;
      }
      FUN_1001654db(local_18,lVar2,&local_20);
      return local_20;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067541c(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return local_18;
}

