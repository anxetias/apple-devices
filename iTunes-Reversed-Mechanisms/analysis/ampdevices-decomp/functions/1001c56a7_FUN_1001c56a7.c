// name: FUN_1001c56a7
// address: 1001c56a7

undefined1 FUN_1001c56a7(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a87f2(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      lVar2 = 0;
      do {
        if (*(char *)(param_1 + lVar2) != '\0') {
          return 0;
        }
        lVar2 = lVar2 + 1;
      } while (param_2 != lVar2);
      return 1;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006a877c(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0;
}

