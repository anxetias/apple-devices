// name: FUN_1001df957
// address: 1001df957

bool FUN_1001df957(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  
  if ((param_3 & 2) != 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba479(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba565(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      lVar4 = 0;
      do {
        cVar2 = *(char *)(param_1 + lVar4);
        cVar1 = *(char *)(param_2 + lVar4);
        if ((cVar2 == '\0') || (cVar1 == '\0')) {
          return cVar2 == cVar1;
        }
        cVar5 = cVar1;
        if ((param_3 & 1) != 0) {
          cVar5 = cVar2 + -0x20;
          if (0x19 < (byte)(cVar2 + 0x9fU)) {
            cVar5 = cVar2;
          }
          cVar2 = cVar5;
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
        }
        lVar4 = lVar4 + 1;
      } while (cVar2 == cVar5);
      return false;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006ba4ef(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return false;
}

