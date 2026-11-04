// name: FUN_1001e5811
// address: 1001e5811

undefined8 FUN_1001e5811(long param_1,long param_2,undefined2 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 local_1c [2];
  
  if (param_3 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bea06(uVar2);
    }
  }
  else {
    *param_3 = 0;
    if (param_2 == 0) {
      return 0;
    }
    if (param_1 != 0) {
      uVar2 = FUN_1001e7237(param_1,param_2,param_3 + 1,0xff,local_1c);
      *param_3 = local_1c[0];
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006be990(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

