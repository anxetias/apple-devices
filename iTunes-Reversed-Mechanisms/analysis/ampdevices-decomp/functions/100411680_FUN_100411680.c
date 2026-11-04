// name: FUN_100411680
// address: 100411680

void FUN_100411680(long *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  lVar6 = param_1[1];
  if ((ulong)(param_1[2] - lVar6 >> 3) < param_2) {
    lVar6 = lVar6 - *param_1 >> 3;
    uVar1 = lVar6 + param_2;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10032d71e(param_1);
    }
    uVar3 = param_1[2] - *param_1;
    uVar5 = (long)uVar3 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar3) {
      uVar5 = 0x1fffffffffffffff;
    }
    if (uVar5 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_100249b6c(param_1 + 2);
    }
    lVar6 = auVar8._0_8_ + lVar6 * 8;
    ___bzero(lVar6,param_2 * 8);
    sVar4 = param_1[1] - *param_1;
    pvVar7 = (void *)(lVar6 - sVar4);
    _memcpy(pvVar7,(void *)*param_1,sVar4);
    pvVar2 = (void *)*param_1;
    *param_1 = (long)pvVar7;
    param_1[1] = lVar6 + param_2 * 8;
    param_1[2] = auVar8._0_8_ + auVar8._8_8_ * 8;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      ___bzero(lVar6,param_2 * 8);
      lVar6 = lVar6 + param_2 * 8;
    }
    param_1[1] = lVar6;
  }
  return;
}

