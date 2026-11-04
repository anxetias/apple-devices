// name: FUN_1001710c1
// address: 1001710c1

void FUN_1001710c1(long param_1,long param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067a88e(uVar2);
    }
  }
  else {
    if (param_3 == 0 || param_2 != 0) {
      _CFDataAppendBytes();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067a818(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

