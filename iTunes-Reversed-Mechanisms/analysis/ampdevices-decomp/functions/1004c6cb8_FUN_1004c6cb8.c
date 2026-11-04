// name: FUN_1004c6cb8
// address: 1004c6cb8

void FUN_1004c6cb8(long *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  plVar1 = (long *)*param_1;
  pvVar2 = (void *)*plVar1;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    pvVar4 = (void *)plVar1[1];
    if ((void *)plVar1[1] != pvVar2) {
      do {
        pvVar3 = (void *)((long)pvVar4 + -0x30);
        FUN_1001b7a50((long)pvVar4 + -0x20);
        FUN_1001b7a50(pvVar3);
        pvVar4 = pvVar3;
      } while (pvVar3 != pvVar2);
      pvVar3 = *(void **)*param_1;
    }
    plVar1[1] = (long)pvVar2;
    operator_delete(pvVar3);
    return;
  }
  return;
}

