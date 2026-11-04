// name: FUN_1002c2d4e
// address: 1002c2d4e

long FUN_1002c2d4e(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_1[1] - *param_1 >> 4;
  uVar6 = lVar9 * 0x14c1bacf914c1bad + 1;
  if (0x6eb3e45306eb3e < uVar6) {
    FUN_1002c2cdc();
LAB_1002c2edf:
                    /* WARNING: Subroutine does not return */
    FUN_1001082d0();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar2 = lVar4 * 0x2983759f2298375a;
  if (uVar6 < uVar2) {
    uVar6 = uVar2;
  }
  if (0x3759f22983759e < (ulong)(lVar4 * 0x14c1bacf914c1bad)) {
    uVar6 = 0x6eb3e45306eb3e;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x6eb3e45306eb3e < uVar6) goto LAB_1002c2edf;
    pvVar3 = operator_new(uVar6 * 0x250);
  }
  pvVar5 = (void *)(lVar9 * 0x10 + (long)pvVar3);
  FUN_1002c06a2(pvVar5,param_2);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  lVar7 = (long)pvVar5 - (lVar4 - lVar9);
  if (lVar4 != lVar9) {
    lVar8 = 0;
    do {
      FUN_1002c06a2(lVar7 + lVar8,lVar9 + lVar8);
      lVar1 = lVar9 + lVar8;
      lVar8 = lVar8 + 0x250;
    } while (lVar1 + 0x250 != lVar4);
    do {
      FUN_1002c0924(lVar9);
      lVar9 = lVar9 + 0x250;
    } while (lVar9 != lVar4);
  }
  *param_1 = lVar7;
  param_1[1] = (long)pvVar5 + 0x250;
  param_1[2] = (long)(uVar6 * 0x250 + (long)pvVar3);
  FUN_1002c2f2c();
  return (long)pvVar5 + 0x250;
}

