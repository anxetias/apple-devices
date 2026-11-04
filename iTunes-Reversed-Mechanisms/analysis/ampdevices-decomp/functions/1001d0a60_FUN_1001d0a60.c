// name: FUN_1001d0a60
// address: 1001d0a60

int FUN_1001d0a60(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001cf1e5();
  if (iVar2 == 0) {
    do {
      if (*(int *)(param_1 + 0x10) == 0) {
        return 0;
      }
      iVar2 = FUN_1001d0942(param_1,0);
    } while (iVar2 == 0);
    if (iVar2 != -0x80) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b0f28(iVar2,uVar3);
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b0ebc(iVar2,uVar3);
    }
  }
  return iVar2;
}

