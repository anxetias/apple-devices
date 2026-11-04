// name: FUN_1001e5d7b
// address: 1001e5d7b

undefined8 FUN_1001e5d7b(long param_1,undefined2 *param_2,uint param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_1c [2];
  
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf2c8(uVar2);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bf252(uVar2);
      }
    }
    else {
      if (1 < param_3) {
        uVar2 = FUN_1001e5ca8(param_1,param_2 + 1,param_3,local_1c);
        *param_2 = local_1c[0];
        return uVar2;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006bf1dc(uVar2);
      }
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

