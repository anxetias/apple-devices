// name: FUN_100173568
// address: 100173568

undefined8 FUN_100173568(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067eb64(uVar2);
    }
  }
  else {
    if (param_4 != -1) {
      uVar2 = _CFStringCreateWithBytesNoCopy();
      return uVar2;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067eaee(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

