// name: FUN_100173afd
// address: 100173afd

undefined8 FUN_100173afd(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f2c4(uVar2);
    }
  }
  else {
    if (param_3 != -1) {
      uVar2 = _CFStringCreateExternalRepresentation();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067f24e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

