// name: FUN_10028483e
// address: 10028483e

long FUN_10028483e(long *param_1,undefined8 param_2)

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
  uVar6 = lVar9 * -0x3333333333333333 + 1;
  if (0x333333333333333 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_100283ee2();
  }
  lVar4 = param_1[2] - *param_1 >> 4;
  uVar2 = lVar4 * -0x6666666666666666;
  if (uVar6 < uVar2) {
    uVar6 = uVar2;
  }
  if (0x199999999999998 < (ulong)(lVar4 * -0x3333333333333333)) {
    uVar6 = 0x333333333333333;
  }
  if (uVar6 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    if (0x333333333333333 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_1001082d0();
    }
    pvVar3 = operator_new(uVar6 * 0x50);
  }
  pvVar5 = (void *)(lVar9 * 0x10 + (long)pvVar3);
  FUN_100284a15(pvVar5,param_2);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  lVar7 = (long)pvVar5 - (lVar4 - lVar9);
  if (lVar4 != lVar9) {
    lVar8 = 0;
    do {
      FUN_100284a15(lVar7 + lVar8,lVar9 + lVar8);
      lVar1 = lVar9 + lVar8;
      lVar8 = lVar8 + 0x50;
    } while (lVar1 + 0x50 != lVar4);
    do {
      FUN_10027f826(lVar9);
      lVar9 = lVar9 + 0x50;
    } while (lVar9 != lVar4);
  }
  *param_1 = lVar7;
  param_1[1] = (long)pvVar5 + 0x50;
  param_1[2] = (long)(uVar6 * 0x50 + (long)pvVar3);
  FUN_100284abc();
  return (long)pvVar5 + 0x50;
}

