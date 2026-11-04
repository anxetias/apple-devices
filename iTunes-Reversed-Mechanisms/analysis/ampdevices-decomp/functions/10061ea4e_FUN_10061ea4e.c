// name: FUN_10061ea4e
// address: 10061ea4e

void FUN_10061ea4e(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined1 auVar11 [16];
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    *puVar9 = *param_2;
    puVar9 = puVar9 + 1;
  }
  else {
    lVar8 = (long)puVar9 - *param_1 >> 3;
    uVar2 = lVar8 + 1;
    if (uVar2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100382d90(param_1);
    }
    uVar4 = param_1[2] - *param_1;
    uVar7 = (long)uVar4 >> 2;
    if (uVar7 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      auVar11 = ZEXT816(0);
    }
    else {
      auVar11 = FUN_100249b6c(param_1 + 2);
    }
    lVar5 = auVar11._0_8_;
    puVar1 = (undefined8 *)(lVar5 + lVar8 * 8);
    *puVar1 = *param_2;
    puVar9 = (undefined8 *)(lVar5 + lVar8 * 8 + 8);
    sVar6 = param_1[1] - *param_1;
    pvVar10 = (void *)((long)puVar1 - sVar6);
    _memcpy(pvVar10,(void *)*param_1,sVar6);
    pvVar3 = (void *)*param_1;
    *param_1 = (long)pvVar10;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar5 + auVar11._8_8_ * 8;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  param_1[1] = (long)puVar9;
  return;
}

