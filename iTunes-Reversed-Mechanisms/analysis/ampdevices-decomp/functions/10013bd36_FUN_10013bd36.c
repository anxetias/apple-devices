// name: FUN_10013bd36
// address: 10013bd36

long FUN_10013bd36(long *param_1,undefined8 param_2,undefined4 *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long *local_30;
  
  lVar4 = param_1[1] - *param_1 >> 6;
  uVar1 = lVar4 + 1;
  if (uVar1 >> 0x3a == 0) {
    local_30 = param_1 + 2;
    uVar2 = *local_30 - *param_1;
    uVar3 = (long)uVar2 >> 5;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffbf < uVar2) {
      uVar3 = 0x3ffffffffffffff;
    }
    if (uVar3 == 0) {
      auVar5 = ZEXT816(0);
    }
    else {
      auVar5 = FUN_100283ef2();
    }
    local_50 = auVar5._0_8_;
    lVar4 = lVar4 * 0x40 + local_50;
    local_38 = auVar5._8_8_ * 0x40 + local_50;
    local_48 = lVar4;
    local_40 = lVar4;
    FUN_10028593a(lVar4,param_2);
    *(undefined4 *)(lVar4 + 0x30) = *param_3;
    local_40 = local_40 + 0x40;
    FUN_10013be2e(param_1);
    lVar4 = param_1[1];
    FUN_10012c54e(&local_50);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

