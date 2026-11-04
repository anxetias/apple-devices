// name: FUN_1001bd420
// address: 1001bd420

long FUN_1001bd420(long *param_1)

{
  undefined2 *puVar1;
  long lVar2;
  long lVar3;
  ushort *puVar4;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (param_1[1] != 0) {
      FUN_1001b8454(param_1);
      lVar2 = *param_1;
      if (lVar2 != 0) goto LAB_1001bd435;
    }
    if (param_1[1] == 0) {
      puVar4 = &DAT_100711b00;
      puVar1 = &DAT_100711b00;
      goto LAB_1001bd440;
    }
    FUN_1001b8454(param_1);
    lVar2 = *param_1;
    puVar4 = &DAT_100711b00;
    puVar1 = &DAT_100711b00;
    if (lVar2 == 0) goto LAB_1001bd440;
  }
  else {
LAB_1001bd435:
    puVar4 = (ushort *)(lVar2 + 0xc);
  }
  puVar1 = (undefined2 *)(lVar2 + 0xc);
LAB_1001bd440:
  lVar2 = FUN_1001b8378(param_1);
  lVar3 = 0;
  for (; puVar4 != puVar1 + lVar2; puVar4 = puVar4 + 1) {
    lVar3 = lVar3 * 0x1003f + (ulong)*puVar4;
  }
  return lVar3;
}

