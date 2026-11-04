// name: FUN_1001b9294
// address: 1001b9294

long FUN_1001b9294(long *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long local_30;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    plVar1 = (long *)param_1[1];
    if (plVar1 != (long *)0x0) {
      local_30 = 0;
      if (0 < *plVar1) {
        uVar3 = (long)plVar1 + *plVar1 + 0xc;
        uVar4 = (long)plVar1 + 0xc;
        lVar2 = 0;
        do {
          FUN_1001b9463(uVar4,uVar3 - uVar4,&local_30);
          uVar4 = uVar4 + local_30;
          lVar2 = lVar2 + 1;
        } while (uVar4 < uVar3);
        return lVar2;
      }
    }
  }
  else {
    local_30 = 0;
    if (0 < *plVar1) {
      uVar4 = (long)plVar1 + *plVar1 * 2 + 0xc;
      uVar3 = (long)plVar1 + 0xc;
      lVar2 = 0;
      do {
        FUN_1001b9349(uVar3,uVar4,&local_30);
        uVar3 = uVar3 + local_30 * 2;
        lVar2 = lVar2 + 1;
      } while (uVar3 < uVar4);
      return lVar2;
    }
  }
  return 0;
}

