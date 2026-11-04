// name: FUN_1002edc34
// address: 1002edc34

void FUN_1002edc34(long param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    lVar1 = lVar1 >> 3;
    lVar3 = 0;
    do {
      plVar4 = *(long **)(*(long *)(param_1 + 0x40) + lVar3 * 8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 8))();
      }
      lVar3 = lVar3 + 1;
    } while (lVar1 + (ulong)(lVar1 == 0) != lVar3);
  }
  pvVar2 = *(void **)(param_1 + 0x38);
  if (pvVar2 != (void *)0x0) {
    plVar4 = *(long **)((long)pvVar2 + 0x10);
    if (plVar4 != (long *)0x0) {
      do {
        if ((long *)plVar4[3] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[3] + 8))();
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
      pvVar2 = *(void **)(param_1 + 0x38);
      if (pvVar2 == (void *)0x0) goto LAB_1002edcb7;
    }
    FUN_1002842e4(pvVar2);
    operator_delete(pvVar2);
  }
LAB_1002edcb7:
  pvVar2 = *(void **)(param_1 + 0x40);
  if (pvVar2 != (void *)0x0) {
    *(void **)(param_1 + 0x48) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

