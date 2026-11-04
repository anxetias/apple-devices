// name: FUN_100130352
// address: 100130352

undefined8 * FUN_100130352(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  
  puVar12 = (undefined8 *)param_1[1];
  if (puVar12 < (undefined8 *)param_1[2]) {
    lVar11 = param_2[1];
    uVar5 = param_2[1];
    *puVar12 = *param_2;
    puVar12[1] = uVar5;
    if (lVar11 != 0) {
      LOCK();
      plVar1 = (long *)(lVar11 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar12 = puVar12 + 2;
  }
  else {
    lVar11 = (long)puVar12 - *param_1 >> 4;
    uVar2 = lVar11 + 1;
    if (uVar2 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012c430(param_1);
    }
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      auVar13 = ZEXT816(0);
    }
    else {
      auVar13 = FUN_1001308fa();
    }
    lVar7 = auVar13._0_8_;
    lVar11 = lVar11 * 0x10;
    lVar3 = lVar7 + lVar11;
    lVar4 = param_2[1];
    uVar5 = param_2[1];
    puVar12 = (undefined8 *)(lVar7 + lVar11);
    *puVar12 = *param_2;
    puVar12[1] = uVar5;
    if (lVar4 != 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar12 = (undefined8 *)(lVar3 + 0x10);
    sVar8 = param_1[1] - *param_1;
    pvVar10 = (void *)(lVar3 - sVar8);
    _memcpy(pvVar10,(void *)*param_1,sVar8);
    *param_1 = (long)pvVar10;
    param_1[1] = (long)puVar12;
    param_1[2] = auVar13._8_8_ * 0x10 + lVar7;
    FUN_100130928();
  }
  param_1[1] = (long)puVar12;
  return puVar12 + -2;
}

