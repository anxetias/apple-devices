// name: FUN_1001b644e
// address: 1001b644e

void FUN_1001b644e(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  size_t sVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined1 auVar13 [16];
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    lVar10 = param_2[1];
    uVar5 = param_2[1];
    *puVar11 = *param_2;
    puVar11[1] = uVar5;
    if (lVar10 != 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar11 = puVar11 + 2;
  }
  else {
    lVar10 = (long)puVar11 - *param_1 >> 4;
    uVar3 = lVar10 + 1;
    if (uVar3 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001b7188(param_1);
    }
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 3;
    if (uVar9 <= uVar3) {
      uVar9 = uVar3;
    }
    if (0x7fffffffffffffef < uVar6) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 == 0) {
      auVar13 = ZEXT816(0);
    }
    else {
      auVar13 = FUN_100149f7a();
    }
    lVar7 = auVar13._0_8_;
    lVar10 = lVar10 * 0x10;
    lVar2 = lVar7 + lVar10;
    lVar4 = param_2[1];
    uVar5 = param_2[1];
    puVar11 = (undefined8 *)(lVar7 + lVar10);
    *puVar11 = *param_2;
    puVar11[1] = uVar5;
    if (lVar4 != 0) {
      LOCK();
      plVar1 = (long *)(lVar4 + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    puVar11 = (undefined8 *)(lVar2 + 0x10);
    sVar8 = param_1[1] - *param_1;
    pvVar12 = (void *)(lVar2 - sVar8);
    _memcpy(pvVar12,(void *)*param_1,sVar8);
    *param_1 = (long)pvVar12;
    param_1[1] = (long)puVar11;
    param_1[2] = auVar13._8_8_ * 0x10 + lVar7;
    FUN_100130928();
  }
  param_1[1] = (long)puVar11;
  return;
}

