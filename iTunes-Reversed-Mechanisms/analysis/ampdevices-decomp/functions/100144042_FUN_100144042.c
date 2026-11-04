// name: FUN_100144042
// address: 100144042

void FUN_100144042(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_10013df36(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

