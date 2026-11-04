// name: FUN_1001b811c
// address: 1001b811c

void FUN_1001b811c(undefined8 *param_1)

{
  int *piVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(undefined4 *)((long)pvVar2 + 8) = 0xc4653600;
      operator_delete(pvVar2);
    }
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *(undefined4 *)((long)pvVar2 + 8) = 0xc4653600;
      operator_delete(pvVar2);
    }
    param_1[1] = 0;
  }
  return;
}

