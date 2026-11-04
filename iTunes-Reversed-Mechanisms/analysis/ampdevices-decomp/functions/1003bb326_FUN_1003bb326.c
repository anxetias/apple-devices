// name: FUN_1003bb326
// address: 1003bb326

void FUN_1003bb326(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_1003bb782(param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

