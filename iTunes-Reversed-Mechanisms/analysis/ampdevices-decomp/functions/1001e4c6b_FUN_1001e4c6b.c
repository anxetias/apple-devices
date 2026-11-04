// name: FUN_1001e4c6b
// address: 1001e4c6b

void FUN_1001e4c6b(ushort *param_1,undefined1 *param_2)

{
  undefined1 in_AL;
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 local_28 [8];
  
  if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006be2a2(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (ushort *)0x0) {
      uVar2 = *param_1;
      local_28[0] = in_AL;
      if (0xff < uVar2) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006be1b6(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar2 = *param_1;
      }
      FUN_1001e7247(param_1 + 1,uVar2,param_2 + 1,0xff,local_28);
      *param_2 = local_28[0];
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006be22c(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

