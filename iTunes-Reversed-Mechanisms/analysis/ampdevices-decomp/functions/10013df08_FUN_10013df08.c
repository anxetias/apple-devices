// name: FUN_10013df08
// address: 10013df08

void FUN_10013df08(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_10013e43e(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

