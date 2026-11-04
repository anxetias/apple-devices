// name: FUN_1001e4d4c
// address: 1001e4d4c

long FUN_1001e4d4c(ushort *param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  long local_30;
  
  if (param_3 < 2) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006be31a(uVar3);
    }
  }
  else if (param_2 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006be47c(uVar3);
    }
  }
  else {
    *param_2 = 0;
    if (param_1 != (ushort *)0x0) {
      local_30 = 0;
      uVar2 = *param_1;
      if (0xff < uVar2) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006be390(uVar3);
        }
        FUN_1001782e9(0,0);
        uVar2 = *param_1;
      }
      FUN_1001e7247(param_1 + 1,uVar2,param_2,param_3 - 1,&local_30);
      param_2[local_30] = 0;
      return local_30;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006be406(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

