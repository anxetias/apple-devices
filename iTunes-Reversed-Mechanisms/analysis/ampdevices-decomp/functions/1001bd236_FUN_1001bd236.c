// name: FUN_1001bd236
// address: 1001bd236

void FUN_1001bd236(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long local_48;
  long local_40;
  undefined8 *local_38;
  long local_30;
  long *local_28;
  
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 < (undefined8 *)param_1[2]) {
    uVar2 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    puVar4 = puVar4 + 2;
    param_1[1] = (long)puVar4;
  }
  else {
    lVar6 = (long)puVar4 - *param_1 >> 4;
    uVar1 = lVar6 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001dea6c(param_1);
    }
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    local_28 = param_1 + 2;
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
    uVar2 = param_2[1];
    puVar4 = (undefined8 *)(local_48 + lVar6);
    local_38 = puVar4 + 2;
    *puVar4 = *param_2;
    puVar4[1] = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_10013e9c2(param_1);
    puVar4 = (undefined8 *)param_1[1];
    FUN_1001dea7c(&local_48);
  }
  param_1[1] = (long)puVar4;
  return;
}

