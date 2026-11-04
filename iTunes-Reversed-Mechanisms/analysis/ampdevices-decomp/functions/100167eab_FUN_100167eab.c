// name: FUN_100167eab
// address: 100167eab

undefined4 FUN_100167eab(undefined4 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_14 = param_1;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006753a6(uVar3);
    }
  }
  else {
    if (param_3 != 0) {
      lVar2 = _CFDictionaryGetValue();
      if (lVar2 == 0) {
        return local_14;
      }
      FUN_1001652da(local_14,lVar2,&local_18);
      return local_18;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100675330(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return local_14;
}

