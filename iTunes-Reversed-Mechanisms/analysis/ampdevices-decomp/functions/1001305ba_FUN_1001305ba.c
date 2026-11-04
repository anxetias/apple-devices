// name: FUN_1001305ba
// address: 1001305ba

long FUN_1001305ba(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar2 = lVar5 * 0x6db6db6db6db6db7 + 1;
  if (uVar2 < 0x492492492492493) {
    plVar1 = param_1 + 2;
    lVar4 = *plVar1 - *param_1 >> 3;
    uVar3 = lVar4 * -0x2492492492492492;
    if (uVar2 < uVar3) {
      uVar2 = uVar3;
    }
    uVar3 = 0x492492492492492;
    if ((ulong)(lVar4 * 0x6db6db6db6db6db7) < 0x249249249249249) {
      uVar3 = uVar2;
    }
    if (uVar3 == 0) {
      auVar6 = ZEXT816(0);
    }
    else {
      auVar6 = FUN_100130740(plVar1);
    }
    lVar5 = lVar5 * 8 + auVar6._0_8_;
    FUN_1001306e9(lVar5,param_2);
    lVar4 = (*param_1 - param_1[1]) + lVar5;
    FUN_100130771(plVar1,*param_1,param_1[1],lVar4);
    *param_1 = lVar4;
    param_1[1] = lVar5 + 0x38;
    param_1[2] = auVar6._8_8_ * 0x38 + auVar6._0_8_;
    FUN_10013084a();
    return lVar5 + 0x38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

