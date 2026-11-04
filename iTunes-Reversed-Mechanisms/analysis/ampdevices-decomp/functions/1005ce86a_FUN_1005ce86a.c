// name: FUN_1005ce86a
// address: 1005ce86a

undefined8 FUN_1005ce86a(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  size_t sVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  
  param_1[1] = *param_1;
  lVar2 = FUN_100166844(param_2,param_3);
  if ((lVar2 == 0) || (lVar3 = FUN_10017076e(lVar2), lVar3 < 1)) {
    uVar4 = 0;
  }
  else {
    lVar11 = 0;
    do {
      uVar4 = FUN_10016516d(lVar2,lVar11);
      puVar13 = (undefined8 *)param_1[1];
      if (puVar13 < (undefined8 *)param_1[2]) {
        *puVar13 = uVar4;
        puVar13 = puVar13 + 1;
      }
      else {
        pvVar9 = (void *)*param_1;
        sVar8 = (long)puVar13 - (long)pvVar9;
        lVar12 = (long)sVar8 >> 3;
        uVar1 = lVar12 + 1;
        if (0x1fffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_100283ee2(param_1);
        }
        uVar7 = param_1[2] - (long)pvVar9;
        uVar5 = (long)uVar7 >> 2;
        if (uVar5 <= uVar1) {
          uVar5 = uVar1;
        }
        if (0x7ffffffffffffff7 < uVar7) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 == 0) {
          auVar15 = ZEXT816(0);
          lVar10 = lVar12;
        }
        else {
          auVar15 = FUN_100249b6c(param_1 + 2,uVar5);
          pvVar9 = (void *)*param_1;
          sVar8 = param_1[1] - (long)pvVar9;
          lVar10 = (long)sVar8 >> 3;
        }
        lVar6 = auVar15._0_8_;
        puVar14 = (undefined8 *)(lVar6 + lVar12 * 8);
        *puVar14 = uVar4;
        puVar13 = (undefined8 *)(lVar6 + lVar12 * 8 + 8);
        puVar14 = puVar14 + -lVar10;
        _memcpy(puVar14,pvVar9,sVar8);
        pvVar9 = (void *)*param_1;
        *param_1 = (long)puVar14;
        param_1[1] = (long)puVar13;
        param_1[2] = lVar6 + auVar15._8_8_ * 8;
        if (pvVar9 != (void *)0x0) {
          operator_delete(pvVar9);
        }
      }
      param_1[1] = (long)puVar13;
      lVar11 = lVar11 + 1;
    } while (lVar3 != lVar11);
    uVar4 = 1;
  }
  return uVar4;
}

