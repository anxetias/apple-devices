// name: FUN_1001d0405
// address: 1001d0405

undefined8
FUN_1001d0405(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b08d6(uVar2);
    }
  }
  else {
    if ((param_3 & 0xff1) != 0) {
      uVar2 = FUN_1001d027d();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0860(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

