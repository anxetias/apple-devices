// name: FUN_1001704ce
// address: 1001704ce

undefined1  [16] FUN_1001704ce(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    if (param_1 < 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006794bc(uVar2);
      }
      param_1 = 0;
      FUN_1001782e9(0,0);
    }
    if (param_2 < 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_100679532(uVar2);
      }
      param_2 = 0;
      FUN_1001782e9(0,0);
    }
    if (param_3 <= param_1) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006795a8(uVar2);
      }
      param_2 = 0;
      FUN_1001782e9(0,0);
      param_1 = param_3 + -1;
    }
    if (param_3 < param_1 + param_2) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_10067961e(uVar2);
      }
      FUN_1001782e9(0,0);
      param_2 = param_3 - param_1;
    }
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}

