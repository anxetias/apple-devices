// name: FUN_10020e3d6
// address: 10020e3d6

long FUN_10020e3d6(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  param_1 = param_1 + 8;
  lVar4 = param_1;
  if (lVar3 != 0) {
    do {
      uVar1 = FUN_1001b9c66(lVar3 + 0x20,param_2);
      if (-1 < (int)uVar1) {
        lVar4 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + (ulong)(uVar1 >> 0x1f) * 8);
    } while (lVar3 != 0);
    if ((lVar4 != param_1) && (iVar2 = FUN_1001b9c66(param_2,lVar4 + 0x20), -1 < iVar2)) {
      return lVar4;
    }
  }
  return param_1;
}

