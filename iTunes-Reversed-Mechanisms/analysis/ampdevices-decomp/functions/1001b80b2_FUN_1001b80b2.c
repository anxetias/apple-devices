// name: FUN_1001b80b2
// address: 1001b80b2

undefined8 * FUN_1001b80b2(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_2 != param_1) {
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
    }
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return param_1;
}

