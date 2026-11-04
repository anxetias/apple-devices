// name: FUN_1002c0d86
// address: 1002c0d86

void FUN_1002c0d86(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)param_1[2]) {
    *puVar9 = param_2;
    puVar9 = puVar9 + 1;
  }
  else {
    pvVar6 = (void *)*param_1;
    sVar5 = (long)puVar9 - (long)pvVar6;
    lVar8 = (long)sVar5 >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_100283ee2(param_1);
    }
    uVar4 = param_1[2] - (long)pvVar6;
    uVar2 = (long)uVar4 >> 2;
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      auVar11 = ZEXT816(0);
      lVar7 = lVar8;
    }
    else {
      auVar11 = FUN_100249b6c(param_1 + 2,uVar2);
      pvVar6 = (void *)*param_1;
      sVar5 = param_1[1] - (long)pvVar6;
      lVar7 = (long)sVar5 >> 3;
    }
    lVar3 = auVar11._0_8_;
    puVar10 = (undefined8 *)(lVar3 + lVar8 * 8);
    *puVar10 = param_2;
    puVar9 = (undefined8 *)(lVar3 + lVar8 * 8 + 8);
    puVar10 = puVar10 + -lVar7;
    _memcpy(puVar10,pvVar6,sVar5);
    pvVar6 = (void *)*param_1;
    *param_1 = (long)puVar10;
    param_1[1] = (long)puVar9;
    param_1[2] = lVar3 + auVar11._8_8_ * 8;
    if (pvVar6 != (void *)0x0) {
      operator_delete(pvVar6);
    }
  }
  param_1[1] = (long)puVar9;
  return;
}

