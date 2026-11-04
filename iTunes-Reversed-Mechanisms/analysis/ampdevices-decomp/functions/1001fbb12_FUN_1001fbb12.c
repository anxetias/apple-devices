// name: FUN_1001fbb12
// address: 1001fbb12

undefined8 FUN_1001fbb12(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006cccc5(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    *param_3 = 0;
    uVar2 = FUN_1001f7ceb();
    if ((int)uVar2 == 0) {
      uVar2 = FUN_1001fb86d(param_1,param_3);
      return uVar2;
    }
  }
  return uVar2;
}

