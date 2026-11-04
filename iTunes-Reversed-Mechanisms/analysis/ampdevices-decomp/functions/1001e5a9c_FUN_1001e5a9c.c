// name: FUN_1001e5a9c
// address: 1001e5a9c

undefined8 FUN_1001e5a9c(long param_1,ulong param_2,long param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bee2c(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      if (param_2 < param_4) {
        param_4 = param_2;
      }
      FUN_1001c631b(param_1,param_3,param_4);
      return 0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bedb6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

