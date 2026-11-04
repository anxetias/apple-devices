// name: FUN_1001b06f8
// address: 1001b06f8

long FUN_1001b06f8(int param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = DAT_1008c5290;
  if ((DAT_1008c5258 == 0) || (lVar2 = DAT_1008c5258, *(int *)(DAT_1008c5258 + 0x18) != param_1)) {
    for (; lVar2 = DAT_1008c5268, lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      if (*(int *)(lVar1 + 0x18) == param_1) {
        return lVar1;
      }
    }
    for (; lVar1 = DAT_1008c52b8, lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      if (*(int *)(lVar2 + 0x18) == param_1) {
        return lVar2;
      }
    }
    for (; lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      if (*(int *)(lVar1 + 0x18) == param_1) {
        return lVar1;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}

