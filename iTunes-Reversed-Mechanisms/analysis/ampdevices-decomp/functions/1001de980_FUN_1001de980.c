// name: FUN_1001de980
// address: 1001de980

long FUN_1001de980(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long *local_28;
  
  lVar4 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar4 + 1;
  if (uVar1 >> 0x3c == 0) {
    local_28 = param_1 + 2;
    uVar2 = *local_28 - *param_1;
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
    local_48 = auVar5._0_8_;
    local_40 = lVar4 * 0x10 + local_48;
    local_30 = auVar5._8_8_ * 0x10 + local_48;
    local_38 = local_40;
    FUN_1001b7a88(local_40,param_2);
    local_38 = local_38 + 0x10;
    FUN_10013e9c2(param_1);
    lVar4 = param_1[1];
    FUN_1001dea7c(&local_48);
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001dea6c(param_1);
}

