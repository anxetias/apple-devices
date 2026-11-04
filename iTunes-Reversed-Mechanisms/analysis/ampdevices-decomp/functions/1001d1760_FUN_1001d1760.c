// name: FUN_1001d1760
// address: 1001d1760

undefined8 FUN_1001d1760(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b188a(uVar2);
    }
  }
  else {
    if ((param_2 & 0xff1) != 0) {
      uVar2 = FUN_1001d15e2();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b1814(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

