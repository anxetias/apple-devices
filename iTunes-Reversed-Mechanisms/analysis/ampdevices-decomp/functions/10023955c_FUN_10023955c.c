// name: FUN_10023955c
// address: 10023955c

void FUN_10023955c(long param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_1002188e4(param_1 + 8);
    }
    uVar1 = *(uint *)(param_1 + 0x84);
    if (uVar1 != 0) {
      plVar2 = (long *)(param_1 + 0xa0);
      uVar3 = 0;
      do {
        if (*plVar2 != 0) {
          FUN_1001c64c1();
          uVar1 = *(uint *)(param_1 + 0x84);
        }
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 0x1c;
      } while (uVar3 < uVar1);
    }
    FUN_1001c64c1(param_1);
    return;
  }
  return;
}

