// name: FUN_1001ac702
// address: 1001ac702

long FUN_1001ac702(long *param_1,undefined8 param_2,undefined8 param_3)

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
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar4 + 1;
  if (uVar1 >> 0x3c == 0) {
    local_30 = param_1 + 2;
    uVar2 = *local_30 - *param_1;
    uVar3 = (long)uVar2 >> 3;
    if (uVar3 <= uVar1) {
      uVar3 = uVar1;
    }
    if (0x7fffffffffffffef < uVar2) {
      uVar3 = 0xfffffffffffffff;
    }
    if (uVar3 == 0) {
      auVar5 = ZEXT816(0);
    }
    else {
      auVar5 = FUN_100149f7a();
    }
    local_50 = auVar5._0_8_;
    local_48 = lVar4 * 0x10 + local_50;
    local_38 = auVar5._8_8_ * 0x10 + local_50;
    local_40 = local_48;
    FUN_1001ac7f8(local_48,param_2,param_3);
    local_40 = local_40 + 0x10;
    FUN_10014bf2c(param_1);
    lVar4 = param_1[1];
    FUN_10014c0d8(&local_50);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

