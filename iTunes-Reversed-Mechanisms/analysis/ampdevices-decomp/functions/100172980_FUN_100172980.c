// name: FUN_100172980
// address: 100172980

void FUN_100172980(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067d3e2(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067d36c(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      _CFRunLoopRemoveSource();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067d2f6(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

