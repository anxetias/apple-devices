// name: FUN_10017339b
// address: 10017339b

void FUN_10017339b(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e82a(uVar2);
    }
  }
  else if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e7b4(uVar2);
    }
  }
  else {
    if (param_3 != 0) {
      _CFReadStreamUnscheduleFromRunLoop();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067e73e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

