// name: FUN_1002c2cec
// address: 1002c2cec

void FUN_1002c2cec(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  plVar1 = (long *)*param_1;
  pvVar2 = (void *)*plVar1;
  if (pvVar2 != (void *)0x0) {
    pvVar4 = (void *)plVar1[1];
    pvVar3 = pvVar2;
    if (pvVar4 != pvVar2) {
      do {
        pvVar3 = *(void **)((long)pvVar4 + -0x18);
        if (pvVar3 != (void *)0x0) {
          *(void **)((long)pvVar4 + -0x10) = pvVar3;
          operator_delete(pvVar3);
        }
        pvVar4 = (void *)((long)pvVar4 + -0x18);
      } while (pvVar4 != pvVar2);
      pvVar3 = *(void **)*param_1;
    }
    plVar1[1] = (long)pvVar2;
    operator_delete(pvVar3);
    return;
  }
  return;
}

