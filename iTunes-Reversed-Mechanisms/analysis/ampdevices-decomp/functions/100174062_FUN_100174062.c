// name: FUN_100174062
// address: 100174062

undefined8 FUN_100174062(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fb10(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = _CFStringCreateArrayBySeparatingStrings();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fa9a(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

