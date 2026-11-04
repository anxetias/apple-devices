// name: FUN_10016d7cc
// address: 10016d7cc

void FUN_10016d7cc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  puVar4 = puVar8;
  if (*(undefined8 **)(param_1 + 0x10) != puVar8) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    lVar6 = (uVar1 % 0xaa) * 0x18 + puVar8[uVar1 / 0xaa];
    uVar3 = uVar1 + *(long *)(param_1 + 0x28);
    lVar5 = (uVar3 % 0xaa) * 0x18 + puVar8[uVar3 / 0xaa];
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (lVar6 != lVar5) {
      plVar7 = puVar8 + uVar1 / 0xaa;
      do {
        FUN_10016f5f2(lVar6 + 0x10);
        FUN_10014d890(lVar6);
        lVar6 = lVar6 + 0x18;
        if (lVar6 - *plVar7 == 0xff0) {
          lVar6 = plVar7[1];
          plVar7 = plVar7 + 1;
        }
      } while (lVar6 != lVar5);
      puVar8 = *(undefined8 **)(param_1 + 8);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  lVar6 = (long)puVar4 - (long)puVar8;
  while (uVar1 = lVar6 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar8);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar8 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar8;
    lVar6 = (long)puVar4 - (long)puVar8;
  }
  if (uVar1 == 1) {
    uVar2 = 0x55;
  }
  else {
    if (uVar1 != 2) goto LAB_10016d905;
    uVar2 = 0xaa;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar2;
LAB_10016d905:
  for (; puVar8 != puVar4; puVar8 = puVar8 + 1) {
    operator_delete((void *)*puVar8);
  }
  FUN_10016d920(param_1);
  return;
}

