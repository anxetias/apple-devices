// name: FUN_1001b8172
// address: 1001b8172

undefined8 * FUN_1001b8172(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_2 != param_1) {
    pvVar2 = (void *)*param_1;
    pvVar3 = (void *)*param_2;
    if (pvVar2 != pvVar3) {
      if (pvVar2 != (void *)0x0) {
        LOCK();
        piVar1 = (int *)((long)pvVar2 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          *(undefined4 *)((long)pvVar2 + 8) = 0xc4653600;
          operator_delete(pvVar2);
        }
        pvVar3 = (void *)*param_2;
      }
      *param_1 = pvVar3;
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
    }
    pvVar2 = (void *)param_1[1];
    pvVar3 = (void *)param_2[1];
    if (pvVar2 != pvVar3) {
      if (pvVar2 != (void *)0x0) {
        LOCK();
        piVar1 = (int *)((long)pvVar2 + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          *(undefined4 *)((long)pvVar2 + 8) = 0xc4653600;
          operator_delete(pvVar2);
        }
        pvVar3 = (void *)param_2[1];
      }
      param_1[1] = pvVar3;
      if (pvVar3 != (void *)0x0) {
        LOCK();
        *(int *)((long)pvVar3 + 8) = *(int *)((long)pvVar3 + 8) + 1;
        UNLOCK();
      }
    }
  }
  return param_1;
}

