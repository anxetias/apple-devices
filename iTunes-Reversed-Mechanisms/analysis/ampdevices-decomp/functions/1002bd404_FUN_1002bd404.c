// name: FUN_1002bd404
// address: 1002bd404

bool FUN_1002bd404(long param_1)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  cVar2 = FUN_10047669e(lVar1);
  if ((((cVar2 == '\0') && ((*(uint *)(lVar1 + 0xc2) & 0x18000008) == 0)) &&
      ((*(char *)(param_1 + 0x45) == '\n' || (*(char *)(param_1 + 0x45) == '\0')))) &&
     (cVar2 = FUN_1002b7515(param_1), cVar2 == '\0')) {
    return *(int *)(param_1 + 0x3c) == 0x4d46494c || *(int *)(param_1 + 0x3c) == 0x46494c45;
  }
  return false;
}

