// name: FUN_1001725a7
// address: 1001725a7

undefined8 FUN_1001725a7(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ccf8(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067cc82(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = _CFPreferencesSynchronize();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067cc0c(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

