// name: FUN_1001720fd
// address: 1001720fd

undefined8 FUN_1001720fd(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c2d4(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFNumberCompare();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067c25e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

