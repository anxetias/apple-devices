// name: FUN_100171340
// address: 100171340

void FUN_100171340(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067acb4(uVar2);
    }
  }
  else {
    if (param_2 != 0) {
      _CFDateFormatterSetFormat();
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_10067ac3e(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

