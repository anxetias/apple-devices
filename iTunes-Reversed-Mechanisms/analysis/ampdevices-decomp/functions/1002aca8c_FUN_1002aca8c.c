// name: FUN_1002aca8c
// address: 1002aca8c

bool FUN_1002aca8c(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 0) {
    return false;
  }
  if ((*(long *)(lVar1 + 0x10) != 0) && (*(long *)(*(long *)(param_1 + 0x10) + 0x38) != 0)) {
    if (*(int *)(param_1 + 0x3c) == 0x53485244) {
      iVar3 = FUN_1004744bf(lVar1,0);
      return iVar3 == 0x400000;
    }
    if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
      cVar2 = FUN_10047eee6();
      return cVar2 == '\x19';
    }
  }
  return false;
}

