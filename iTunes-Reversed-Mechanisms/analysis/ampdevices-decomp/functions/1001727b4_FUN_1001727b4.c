// name: FUN_1001727b4
// address: 1001727b4

undefined4 FUN_1001727b4(undefined8 param_1,long param_2,undefined1 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10067d032(uVar3);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(long *)PTR__kCFRunLoopCommonModes_10082e110 != 0) {
      cVar1 = _CFEqual(param_2);
      if (cVar1 != '\0') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_10067cfbc(uVar3);
        }
        FUN_1001782e9(0,0);
      }
    }
    uVar2 = _CFRunLoopRunInMode(param_1,param_2,param_3);
  }
  return uVar2;
}

