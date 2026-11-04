// name: FUN_1001731d8
// address: 1001731d8

undefined8 FUN_1001731d8(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e404(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = _CFReadStreamCopyProperty();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e38e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

