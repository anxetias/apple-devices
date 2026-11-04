// name: FUN_1001c48f5
// address: 1001c48f5

undefined8 FUN_1001c48f5(ulong param_1,undefined2 *param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a796c(uVar2);
    }
  }
  else {
    if (param_3 != (undefined2 *)0x0) {
      *param_2 = 0;
      *param_3 = 0;
      uVar2 = FUN_1001c4996(param_1,&cf_idVendor,param_2);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      uVar2 = FUN_1001c4996(param_1 & 0xffffffff,&cf_idProduct,param_3);
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a78f6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

