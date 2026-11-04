// name: FUN_10059710a
// address: 10059710a

undefined8 FUN_10059710a(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  FUN_10031baf6(*param_2,&local_60);
  local_30 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  puVar11 = *(undefined8 **)(lVar2 + 0x10);
  if (puVar11 < *(undefined8 **)(lVar2 + 0x18)) {
    puVar11[6] = local_30;
    puVar11[4] = local_40;
    puVar11[5] = uStack_38;
    puVar11[2] = local_50;
    puVar11[3] = uStack_48;
    *puVar11 = local_60;
    puVar11[1] = uStack_58;
    puVar11 = puVar11 + 7;
  }
  else {
    lVar10 = (long)puVar11 - *(long *)(lVar2 + 8) >> 3;
    uVar6 = lVar10 * 0x6db6db6db6db6db7 + 1;
    if (0x492492492492492 < uVar6) {
      FUN_100596e70();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    lVar5 = (long)*(undefined8 **)(lVar2 + 0x18) - *(long *)(lVar2 + 8) >> 3;
    uVar9 = lVar5 * -0x2492492492492492;
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
    }
    uVar9 = 0x492492492492492;
    if ((ulong)(lVar5 * 0x6db6db6db6db6db7) < 0x249249249249249) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      auVar12 = ZEXT816(0);
    }
    else {
      auVar12 = FUN_100596e80();
    }
    lVar5 = auVar12._0_8_;
    lVar10 = lVar10 * 8;
    puVar1 = (undefined8 *)(lVar5 + lVar10);
    puVar11 = puVar1 + 7;
    puVar1[6] = local_30;
    puVar1[4] = local_40;
    puVar1[5] = uStack_38;
    puVar1[2] = local_50;
    puVar1[3] = uStack_48;
    *puVar1 = local_60;
    puVar1[1] = uStack_58;
    sVar7 = *(long *)(lVar2 + 0x10) - (long)*(void **)(lVar2 + 8);
    pvVar8 = (void *)((lVar5 + lVar10) - sVar7);
    _memcpy(pvVar8,*(void **)(lVar2 + 8),sVar7);
    pvVar3 = *(void **)(lVar2 + 8);
    *(void **)(lVar2 + 8) = pvVar8;
    *(undefined8 **)(lVar2 + 0x10) = puVar11;
    *(long *)(lVar2 + 0x18) = auVar12._8_8_ * 0x38 + lVar5;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  *(undefined8 **)(lVar2 + 0x10) = puVar11;
  return 0;
}

