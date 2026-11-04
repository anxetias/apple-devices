// name: FUN_1001c2599
// address: 1001c2599

void FUN_1001c2599(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5f95(uVar2);
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_2 = *param_3;
        *param_3 = param_2;
        return;
      }
      *param_2 = *param_1;
      *param_1 = param_2;
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a5f1f(uVar2);
    }
  }
  FUN_1001782e9(0,1);
  return;
}

