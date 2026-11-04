// name: FUN_100107a0a
// address: 100107a0a

void FUN_100107a0a(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[1] != pvVar1) {
      param_1[1] = pvVar1;
    }
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

