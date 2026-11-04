// name: FUN_1003b882b
// address: 1003b882b

void FUN_1003b882b(char param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c7598;
  while (lVar2 = lVar1, lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 8);
    if ((param_1 != '\0') ||
       ((*(int *)(lVar2 + 0x68) + *(int *)(lVar2 + 100) + *(int *)(lVar2 + 0x6c) == 0 &&
        ((*(byte *)(lVar2 + 0x58) & 4) == 0)))) {
      FUN_1003b8523();
    }
  }
  return;
}

