// name: FUN_1001336e6
// address: 1001336e6

long FUN_1001336e6(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar5 * -0x5555555555555555 + 1;
  if (uVar2 < 0x555555555555556) {
    plVar1 = param_1 + 2;
    lVar4 = *plVar1 - *param_1 >> 4;
    uVar3 = lVar4 * 0x5555555555555556;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = 0x555555555555555;
    if ((ulong)(lVar4 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      auVar6 = ZEXT816(0);
    }
    else {
      auVar6 = FUN_100284d30(plVar1);
    }
    lVar5 = lVar5 * 0x10 + auVar6._0_8_;
    FUN_1003da7e0(lVar5,param_2);
    lVar4 = (*param_1 - param_1[1]) + lVar5;
    FUN_10013381d(plVar1,*param_1,param_1[1],lVar4);
    *param_1 = lVar4;
    param_1[1] = lVar5 + 0x30;
    param_1[2] = auVar6._8_8_ * 0x30 + auVar6._0_8_;
    FUN_100133904();
    return lVar5 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

