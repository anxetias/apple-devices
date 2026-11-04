// name: FUN_1001087d8
// address: 1001087d8

ulong FUN_1001087d8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  size_t sVar6;
  ulong extraout_RDX;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  
  if ((*(long **)(param_1 + 0x20) != *(long **)(param_1 + 0x18)) &&
     (*(int *)(**(long **)(param_1 + 0x18) + 0x30) != *(int *)(param_2 + 0x20))) {
    return 0x6e746170;
  }
  uVar2 = FUN_100108b56(param_1,param_2);
  puVar13 = *(undefined8 **)(param_1 + 0x20);
  if (puVar13 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar13 = uVar2;
    puVar13 = puVar13 + 1;
  }
  else {
    plVar9 = (long *)(param_1 + 0x18);
    lVar12 = (long)puVar13 - *plVar9 >> 3;
    uVar10 = lVar12 + 1;
    uVar7 = (uint)(uVar10 >> 0x3d);
    if (uVar10 >> 0x3d != 0) {
      FUN_10010957c();
      goto LAB_1001089f7;
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x28) - *plVar9;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      auVar14 = ZEXT816(0);
    }
    else {
      auVar14 = FUN_100249b6c(param_1 + 0x28);
    }
    lVar5 = auVar14._0_8_;
    puVar1 = (undefined8 *)(lVar5 + lVar12 * 8);
    *puVar1 = uVar2;
    puVar13 = (undefined8 *)(lVar5 + lVar12 * 8 + 8);
    sVar6 = *(long *)(param_1 + 0x20) - (long)*(void **)(param_1 + 0x18);
    pvVar11 = (void *)((long)puVar1 - sVar6);
    _memcpy(pvVar11,*(void **)(param_1 + 0x18),sVar6);
    pvVar3 = *(void **)(param_1 + 0x18);
    *(void **)(param_1 + 0x18) = pvVar11;
    *(undefined8 **)(param_1 + 0x20) = puVar13;
    *(long *)(param_1 + 0x28) = lVar5 + auVar14._8_8_ * 8;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  *(undefined8 **)(param_1 + 0x20) = puVar13;
  pvVar3 = operator_new__((ulong)(*(int *)(param_2 + 0x20) * 2 - 1) << 2);
  puVar13 = *(undefined8 **)(param_1 + 0x68);
  if (puVar13 < *(undefined8 **)(param_1 + 0x70)) {
    *puVar13 = pvVar3;
    puVar13 = puVar13 + 1;
  }
  else {
    plVar9 = (long *)(param_1 + 0x60);
    lVar12 = (long)puVar13 - *plVar9 >> 3;
    uVar10 = lVar12 + 1;
    uVar7 = (uint)(uVar10 >> 0x3d);
    if (uVar10 >> 0x3d != 0) {
LAB_1001089f7:
      FUN_10010958c();
      *plVar9 = (long)plVar9;
      plVar9[1] = (long)plVar9;
      plVar9[2] = 0;
      plVar9[3] = 0;
      plVar9[4] = 0;
      plVar9[5] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0;
      plVar9[0xd] = 0;
      plVar9[0xe] = 0;
      uVar10 = (ulong)uVar7;
      if ((int)extraout_RDX != 0) {
        uVar4 = (ulong)uVar7;
        uVar8 = extraout_RDX & 0xffffffff;
        do {
          uVar10 = uVar8;
          uVar8 = uVar4 % uVar10;
          uVar4 = uVar10;
        } while ((int)uVar8 != 0);
      }
      uVar8 = (extraout_RDX & 0xffffffff) / uVar10;
      *(int *)(plVar9 + 6) = (int)uVar8;
      uVar10 = uVar7 / uVar10;
      *(int *)((long)plVar9 + 0x34) = (int)uVar10;
      *(int *)(plVar9 + 7) = (int)(uVar10 / uVar8);
      *(int *)((long)plVar9 + 0x3c) = (int)(uVar10 % uVar8);
      *(undefined8 *)((long)plVar9 + 0x4c) = 0;
      *(undefined4 *)((long)plVar9 + 0x54) = 0;
      return uVar10 / uVar8;
    }
    uVar4 = (long)*(undefined8 **)(param_1 + 0x70) - *plVar9;
    uVar8 = (long)uVar4 >> 2;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      auVar14 = ZEXT816(0);
    }
    else {
      auVar14 = FUN_100249b6c(param_1 + 0x70);
    }
    lVar5 = auVar14._0_8_;
    puVar1 = (undefined8 *)(lVar5 + lVar12 * 8);
    *puVar1 = pvVar3;
    puVar13 = (undefined8 *)(lVar5 + lVar12 * 8 + 8);
    sVar6 = *(long *)(param_1 + 0x68) - (long)*(void **)(param_1 + 0x60);
    pvVar11 = (void *)((long)puVar1 - sVar6);
    _memcpy(pvVar11,*(void **)(param_1 + 0x60),sVar6);
    pvVar3 = *(void **)(param_1 + 0x60);
    *(void **)(param_1 + 0x60) = pvVar11;
    *(undefined8 **)(param_1 + 0x68) = puVar13;
    *(long *)(param_1 + 0x70) = lVar5 + auVar14._8_8_ * 8;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  *(undefined8 **)(param_1 + 0x68) = puVar13;
  ___bzero(puVar13[-1],(ulong)(*(int *)(param_2 + 0x20) * 2 - 1) << 2);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x20);
  return 0;
}

