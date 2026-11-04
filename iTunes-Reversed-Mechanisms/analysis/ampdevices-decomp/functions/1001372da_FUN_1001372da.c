// name: FUN_1001372da
// address: 1001372da

void FUN_1001372da(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_10013730a(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

