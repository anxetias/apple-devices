// name: FUN_10017415e
// address: 10017415e

void FUN_10017415e(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fce8(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      _CFStringAppend();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067fc72(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

