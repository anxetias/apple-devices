// name: FUN_1003babc2
// address: 1003babc2

undefined8 FUN_1003babc2(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  lVar4 = lVar3;
  if (lVar3 != lVar1) {
    do {
      iVar2 = FUN_1001b9c66(lVar4,param_2);
      lVar3 = lVar4;
      if (iVar2 == 0) break;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar1;
    } while (lVar4 != lVar1);
    lVar4 = param_1[1];
  }
  return CONCAT71((int7)((ulong)lVar3 >> 8),lVar3 != lVar4);
}

