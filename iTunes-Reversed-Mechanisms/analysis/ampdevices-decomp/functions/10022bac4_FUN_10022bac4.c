// name: FUN_10022bac4
// address: 10022bac4

void FUN_10022bac4(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  lVar6 = param_1[1];
  if ((ulong)((param_1[2] - lVar6 >> 2) * -0x5555555555555555) < param_2) {
    lVar6 = lVar6 - *param_1 >> 2;
    uVar3 = lVar6 * -0x5555555555555555 + param_2;
    if (0x1555555555555555 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_10022bc28(param_1);
    }
    lVar2 = param_1[2] - *param_1 >> 2;
    uVar5 = lVar2 * 0x5555555555555556;
    if (uVar3 < uVar5) {
      uVar3 = uVar5;
    }
    uVar5 = 0x1555555555555555;
    if ((ulong)(lVar2 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
      uVar5 = uVar3;
    }
    if (uVar5 == 0) {
      auVar8 = ZEXT816(0);
    }
    else {
      auVar8 = FUN_10022bc38(param_1 + 2);
    }
    lVar6 = auVar8._0_8_ + lVar6 * 4;
    uVar3 = (param_2 * 0xc - 0xc) / 0xc;
    ___bzero(lVar6,uVar3 * 0xc + 0xc);
    sVar4 = param_1[1] - *param_1;
    pvVar7 = (void *)(lVar6 - sVar4);
    _memcpy(pvVar7,(void *)*param_1,sVar4);
    pvVar1 = (void *)*param_1;
    *param_1 = (long)pvVar7;
    param_1[1] = lVar6 + uVar3 * 0xc + 0xc;
    param_1[2] = auVar8._0_8_ + auVar8._8_8_ * 0xc;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
      return;
    }
  }
  else {
    if (param_2 != 0) {
      uVar3 = (param_2 * 0xc - 0xc) / 0xc;
      ___bzero(lVar6,uVar3 * 0xc + 0xc);
      lVar6 = lVar6 + uVar3 * 0xc + 0xc;
    }
    param_1[1] = lVar6;
  }
  return;
}

