// name: FUN_1001bd8dc
// address: 1001bd8dc

long FUN_1001bd8dc(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  long *local_28;
  
  lVar6 = param_1[1] - *param_1 >> 4;
  uVar1 = lVar6 + 1;
  if (uVar1 >> 0x3c == 0) {
    local_28 = param_1 + 2;
    uVar3 = *local_28 - *param_1;
    uVar5 = (long)uVar3 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar3) {
      uVar5 = 0xfffffffffffffff;
    }
    if (uVar5 == 0) {
      auVar7 = ZEXT816(0);
    }
    else {
      auVar7 = FUN_100149f7a();
    }
    local_48 = auVar7._0_8_;
    lVar6 = lVar6 * 0x10;
    local_40 = local_48 + lVar6;
    local_30 = auVar7._8_8_ * 0x10 + local_48;
    lVar2 = *param_2;
    *(long *)(local_48 + lVar6) = lVar2;
    lVar4 = param_2[1];
    *(long *)(local_48 + 8 + lVar6) = lVar4;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      lVar4 = *(long *)(local_40 + 8);
    }
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    local_38 = local_40 + 0x10;
    FUN_10013e9c2(param_1);
    lVar6 = param_1[1];
    FUN_1001dea7c(&local_48);
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001dea6c(param_1);
}

