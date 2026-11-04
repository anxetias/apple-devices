// name: FUN_1001e2019
// address: 1001e2019

int FUN_1001e2019(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bbd37(uVar3);
    }
    FUN_1001782e9(0,0);
    return -1;
  }
  if (1 < param_2) {
    iVar2 = param_2 + 1;
    while ((param_2 = param_2 - 1, 0 < iVar2 + -2 &&
           (cVar1 = *(char *)(param_1 + (ulong)(param_2 & 0x7fffffff)), cVar1 != ' '))) {
      iVar2 = iVar2 + -1;
      if (cVar1 == '.') {
        return iVar2;
      }
    }
  }
  return -1;
}

