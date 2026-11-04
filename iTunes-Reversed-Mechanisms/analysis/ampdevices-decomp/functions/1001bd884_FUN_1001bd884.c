// name: FUN_1001bd884
// address: 1001bd884

void FUN_1001bd884(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar3 = (void *)param_1[1];
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar3 = (void *)((long)pvVar3 + -0x10);
        FUN_1001b811c(pvVar3);
      } while (pvVar3 != pvVar1);
      pvVar2 = (void *)*param_1;
    }
    param_1[1] = (long)pvVar1;
    operator_delete(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

