// name: FUN_1002c17e8
// address: 1002c17e8

undefined1 FUN_1002c17e8(long *param_1,long *param_2)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == param_2) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (param_2 != (long *)0x0 && param_1 != (long *)0x0) {
      lVar4 = *param_1;
      lVar1 = param_1[1];
      lVar5 = *param_2;
      if (lVar1 - lVar4 == param_2[1] - lVar5) {
        if (lVar4 == lVar1) {
          uVar2 = 0;
        }
        else {
          do {
            iVar3 = FUN_1001b9c66(lVar4,lVar5);
            if (iVar3 != 0) {
              return 1;
            }
            lVar4 = lVar4 + 0x10;
            lVar5 = lVar5 + 0x10;
            uVar2 = 0;
          } while (lVar4 != lVar1);
        }
      }
      return uVar2;
    }
  }
  return uVar2;
}

