// name: FUN_100283c28
// address: 100283c28

long FUN_100283c28(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  
  lVar8 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar8 + 1;
  if (uVar1 >> 0x3a != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_100283ee2(param_1);
  }
  uVar4 = param_1[2] - *param_1;
  uVar6 = (long)uVar4 >> 5;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  if (0x7fffffffffffffbf < uVar4) {
    uVar6 = 0x3ffffffffffffff;
  }
  if (uVar6 == 0) {
    auVar10 = ZEXT816(0);
  }
  else {
    auVar10 = FUN_100283ef2();
  }
  lVar9 = lVar8 * 0x40 + auVar10._0_8_;
  FUN_100283dc3(lVar9,param_2);
  lVar8 = *param_1;
  lVar3 = param_1[1];
  lVar7 = lVar9 - (lVar3 - lVar8);
  if (lVar3 != lVar8) {
    lVar5 = 0;
    do {
      FUN_100283dc3(lVar5 + lVar7,lVar8 + lVar5);
      lVar2 = lVar8 + lVar5;
      lVar5 = lVar5 + 0x40;
    } while (lVar2 + 0x40 != lVar3);
    do {
      FUN_10027cb46(lVar8);
      lVar8 = lVar8 + 0x40;
    } while (lVar8 != lVar3);
  }
  *param_1 = lVar7;
  param_1[1] = lVar9 + 0x40;
  param_1[2] = auVar10._8_8_ * 0x40 + auVar10._0_8_;
  FUN_100283f20();
  return lVar9 + 0x40;
}

