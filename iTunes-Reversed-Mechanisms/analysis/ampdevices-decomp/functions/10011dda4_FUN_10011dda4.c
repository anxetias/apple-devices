// name: FUN_10011dda4
// address: 10011dda4

void FUN_10011dda4(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  *param_1 = &PTR_FUN_100835eb0;
  if ((void *)param_1[0xe] != (void *)0x0) {
    operator_delete((void *)param_1[0xe]);
  }
  lVar6 = -5;
  do {
    if ((void *)param_1[lVar6 + 0xe] != (void *)0x0) {
      operator_delete((void *)param_1[lVar6 + 0xe]);
    }
    if ((void *)param_1[lVar6 + 0x14] != (void *)0x0) {
      operator_delete((void *)param_1[lVar6 + 0x14]);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete((void *)param_1[0x16]);
  }
  uVar7 = 0;
  do {
    if ((0x5500UL >> (uVar7 & 0x3f) & 1) == 0) {
      plVar1 = (long *)(param_1[0x1825] + uVar7 * 0x10);
      bVar4 = *(byte *)(param_1[0x1825] + 8 + uVar7 * 0x10);
      if (bVar4 != 0) {
        lVar6 = 0;
        uVar9 = 0;
        do {
          lVar2 = *plVar1;
          uVar5 = *(uint *)(lVar2 + 0x30 + uVar9 * 0x38);
          if (uVar5 != 0) {
            uVar8 = 0;
            do {
              pvVar3 = *(void **)(lVar2 + lVar6 + uVar8 * 8);
              if (pvVar3 != (void *)0x0) {
                operator_delete__(pvVar3);
                uVar5 = *(uint *)(uVar9 * 0x38 + lVar2 + 0x30);
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar5);
            bVar4 = *(byte *)(plVar1 + 1);
          }
          uVar9 = uVar9 + 1;
          lVar6 = lVar6 + 0x38;
        } while (uVar9 < bVar4);
      }
      if ((void *)*plVar1 != (void *)0x0) {
        operator_delete__((void *)*plVar1);
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x10);
  if ((void *)param_1[0x1825] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1825]);
  }
  if ((void *)param_1[0x1827] != (void *)0x0) {
    operator_delete((void *)param_1[0x1827]);
    return;
  }
  return;
}

