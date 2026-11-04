// name: FUN_100107b86
// address: 100107b86

void FUN_100107b86(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[1];
    if (pvVar2 != pvVar1) {
      param_1[1] = ((long)pvVar1 + (3 - (long)pvVar2) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

