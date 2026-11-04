// name: FUN_1001c3393
// address: 1001c3393

long FUN_1001c3393(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 < 0x10000) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6d5f(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  if (DAT_1008a2208 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6de7(uVar2);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = FUN_100166c1b(DAT_1008a2208,param_1);
    if (lVar3 == 0) {
      if (DAT_1008c5380 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = FUN_100166c1b(DAT_1008a2208,DAT_1008c5380 + param_1);
      }
    }
  }
  return lVar3;
}

