// name: FUN_1002edf16
// address: 1002edf16

void FUN_1002edf16(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 8))();
  }
  pvVar3 = *(void **)(param_1 + 0x88);
  if (pvVar3 != (void *)0x0) {
    FUN_1002842e4(pvVar3);
    operator_delete(pvVar3);
  }
  lVar2 = *(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    lVar2 = lVar2 >> 3;
    lVar4 = 0;
    do {
      plVar5 = *(long **)(*(long *)(param_1 + 0x98) + lVar4 * 8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      lVar4 = lVar4 + 1;
    } while (lVar2 + (ulong)(lVar2 == 0) != lVar4);
  }
  if (*(char *)(param_1 + 0xb9) == '\x01') {
    pvVar3 = *(void **)(param_1 + 0x90);
    plVar5 = *(long **)((long)pvVar3 + 0x10);
    if (plVar5 != (long *)0x0) {
      do {
        if ((long *)plVar5[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar5[3] + 8))();
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
      pvVar3 = *(void **)(param_1 + 0x90);
      if (pvVar3 == (void *)0x0) goto LAB_1002edfd7;
    }
    FUN_1002842e4(pvVar3);
    operator_delete(pvVar3);
  }
LAB_1002edfd7:
  pvVar3 = *(void **)(param_1 + 0x10);
  if (pvVar3 != (void *)0x0) {
    FUN_1002842e4(pvVar3);
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x18);
  if (pvVar3 != (void *)0x0) {
    FUN_1002842e4(pvVar3);
    operator_delete(pvVar3);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar1;
    if (pvVar3 != (void *)0x0) {
      puVar1[1] = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(puVar1);
  }
  pvVar3 = *(void **)(param_1 + 0x98);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0xa0) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(param_1 + 0x70);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x78) = pvVar3;
    operator_delete(pvVar3);
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x58));
  }
  pvVar3 = *(void **)(param_1 + 0x40);
  if (pvVar3 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}

