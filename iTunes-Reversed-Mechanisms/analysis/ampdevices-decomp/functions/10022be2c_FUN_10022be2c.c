// name: FUN_10022be2c
// address: 10022be2c

void FUN_10022be2c(long *param_1,ulong param_2)

{
  void *pvVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  size_t sVar6;
  long lVar7;
  void *pvVar8;
  undefined1 auVar9 [16];
  
  lVar7 = param_1[1];
  if ((ulong)((param_1[2] - lVar7 >> 2) * -0x7f01fc07f01fc07f) < param_2) {
    lVar7 = lVar7 - *param_1 >> 2;
    uVar4 = lVar7 * -0x7f01fc07f01fc07f + param_2;
    if (0x7f01fc07f01fc0 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_10022bfc4(param_1);
    }
    lVar3 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar3 * 0x1fc07f01fc07f02;
    if (uVar4 < uVar5) {
      uVar4 = uVar5;
    }
    uVar5 = 0x7f01fc07f01fc0;
    if ((ulong)(lVar3 * -0x7f01fc07f01fc07f) < 0x3f80fe03f80fe0) {
      uVar5 = uVar4;
    }
    if (uVar5 == 0) {
      auVar9 = ZEXT816(0);
    }
    else {
      auVar9 = FUN_10022bfd4(param_1 + 2);
    }
    lVar7 = lVar7 * 4 + auVar9._0_8_;
    uVar4 = param_2 * 0x204 - 0x204;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    lVar3 = (SUB168(auVar2 * ZEXT816(0xfe03f80fe03f80ff),8) & 0xfffffffffffffe00) +
            (uVar4 / 0x204) * 4 + 0x204;
    ___bzero(lVar7,lVar3);
    sVar6 = param_1[1] - *param_1;
    pvVar8 = (void *)(lVar7 - sVar6);
    _memcpy(pvVar8,(void *)*param_1,sVar6);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)pvVar8;
    param_1[1] = lVar3 + lVar7;
    param_1[2] = auVar9._8_8_ * 0x204 + auVar9._0_8_;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      uVar4 = param_2 * 0x204 - 0x204;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar4;
      uVar4 = uVar4 / 0x204;
      uVar5 = SUB168(auVar9 * ZEXT816(0xfe03f80fe03f80ff),8) & 0xfffffffffffffe00;
      ___bzero(lVar7,uVar5 + uVar4 * 4 + 0x204);
      lVar7 = lVar7 + uVar5 + uVar4 * 4 + 0x204;
    }
    param_1[1] = lVar7;
  }
  return;
}

