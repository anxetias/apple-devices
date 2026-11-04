// name: FUN_10016f6ba
// address: 10016f6ba

void FUN_10016f6ba(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  size_t sVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  void *local_58;
  long lStack_50;
  long local_48;
  void *pvStack_40;
  long *local_38;
  
  if ((ulong)param_1[4] < 0xaa) {
    uVar14 = param_1[2] - param_1[1];
    plVar1 = param_1 + 3;
    lVar5 = param_1[3];
    uVar6 = lVar5 - *param_1;
    if (uVar6 <= uVar14) {
      lVar10 = 1;
      if (lVar5 != *param_1) {
        lVar10 = (long)uVar6 >> 2;
      }
      local_38 = plVar1;
      auVar16 = FUN_100249b6c(plVar1,lVar10);
      local_58 = auVar16._0_8_;
      lStack_50 = uVar14 + (long)local_58;
      pvStack_40 = (void *)((long)local_58 + auVar16._8_8_ * 8);
      local_48 = lStack_50;
      operator_new(0xff0);
      FUN_10016fc00(&local_58);
      lVar5 = param_1[2];
      lVar10 = -7 - lVar5;
      while (lVar4 = param_1[1], lVar5 != lVar4) {
        lVar5 = lVar5 + -8;
        lVar10 = lVar10 + 8;
        FUN_10016fd0c(&local_58,lVar5);
      }
      pvVar2 = (void *)*param_1;
      *param_1 = (long)local_58;
      param_1[1] = lStack_50;
      lVar8 = param_1[2];
      lVar9 = param_1[2];
      lVar3 = param_1[3];
      param_1[2] = local_48;
      param_1[3] = (long)pvStack_40;
      local_48 = lVar9;
      if (lVar5 != lVar8) {
        local_48 = (-(lVar10 + lVar8) & 0xfffffffffffffff8U) + lVar8;
      }
      if (pvVar2 == (void *)0x0) {
        return;
      }
      local_58 = pvVar2;
      lStack_50 = lVar4;
      pvStack_40 = (void *)lVar3;
      operator_delete(pvVar2);
      return;
    }
    if (lVar5 != param_1[2]) {
      local_58 = operator_new(0xff0);
      FUN_10016f9ea(param_1);
      return;
    }
    local_58 = operator_new(0xff0);
    FUN_10016faf6(param_1);
    puVar13 = (undefined8 *)param_1[2];
    uVar11 = *(undefined8 *)param_1[1];
    puVar7 = (undefined8 *)param_1[1] + 1;
    param_1[1] = (long)puVar7;
    if (puVar13 != (undefined8 *)param_1[3]) goto LAB_10016f91e;
    puVar15 = (undefined8 *)*param_1;
    lVar5 = (long)puVar7 - (long)puVar15;
    if (puVar7 < puVar15 || lVar5 == 0) {
      uVar6 = 1;
      if (puVar13 != puVar15) {
        uVar6 = (long)puVar13 - (long)puVar15 >> 2;
      }
      auVar16 = FUN_100249b6c(plVar1,uVar6);
      lVar4 = auVar16._0_8_;
      puVar7 = (undefined8 *)(lVar4 + (uVar6 & 0xfffffffffffffffc) * 2);
      lVar5 = lVar4 + auVar16._8_8_ * 8;
      lVar10 = param_1[1];
      lVar8 = param_1[2] - lVar10;
      puVar13 = puVar7;
      if (lVar8 != 0) {
        puVar13 = (undefined8 *)(lVar8 + (long)puVar7);
        lVar9 = 0;
        do {
          *(undefined8 *)((long)puVar7 + lVar9) = *(undefined8 *)(lVar10 + lVar9);
          lVar9 = lVar9 + 8;
        } while (lVar8 != lVar9);
      }
      goto LAB_10016f8cf;
    }
  }
  else {
    param_1[4] = param_1[4] - 0xaa;
    puVar13 = (undefined8 *)param_1[2];
    uVar11 = *(undefined8 *)param_1[1];
    puVar7 = (undefined8 *)param_1[1] + 1;
    param_1[1] = (long)puVar7;
    if (puVar13 != (undefined8 *)param_1[3]) goto LAB_10016f91e;
    puVar15 = (undefined8 *)*param_1;
    lVar5 = (long)puVar7 - (long)puVar15;
    if (puVar7 < puVar15 || lVar5 == 0) {
      uVar6 = 1;
      if (puVar13 != puVar15) {
        uVar6 = (long)puVar13 - (long)puVar15 >> 2;
      }
      auVar16 = FUN_100249b6c(param_1 + 3,uVar6);
      lVar4 = auVar16._0_8_;
      puVar7 = (undefined8 *)(lVar4 + (uVar6 & 0xfffffffffffffffc) * 2);
      lVar5 = lVar4 + auVar16._8_8_ * 8;
      lVar10 = param_1[1];
      lVar8 = param_1[2] - lVar10;
      puVar13 = puVar7;
      if (lVar8 != 0) {
        lVar9 = 0;
        do {
          *(undefined8 *)((long)puVar7 + lVar9) = *(undefined8 *)(lVar10 + lVar9);
          lVar9 = lVar9 + 8;
          puVar13 = (undefined8 *)(lVar8 + (long)puVar7);
        } while (lVar8 != lVar9);
      }
LAB_10016f8cf:
      pvVar2 = (void *)*param_1;
      *param_1 = lVar4;
      param_1[1] = (long)puVar7;
      param_1[2] = (long)puVar13;
      param_1[3] = lVar5;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
        puVar13 = (undefined8 *)param_1[2];
      }
      goto LAB_10016f91e;
    }
  }
  lVar5 = ((lVar5 >> 3) - ((lVar5 >> 3) + 1 >> 0x3f)) + 1 >> 1;
  puVar15 = puVar7 + -lVar5;
  sVar12 = (long)puVar13 - (long)puVar7;
  if (sVar12 != 0) {
    _memmove(puVar15,puVar7,sVar12);
    puVar7 = (undefined8 *)param_1[1];
  }
  puVar13 = (undefined8 *)(sVar12 + (long)puVar15);
  param_1[2] = (long)puVar13;
  param_1[1] = (long)(puVar7 + -lVar5);
LAB_10016f91e:
  *puVar13 = uVar11;
  param_1[2] = param_1[2] + 8;
  return;
}

