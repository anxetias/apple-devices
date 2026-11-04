// name: FUN_100137278
// address: 100137278

void FUN_100137278(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_1001372a8(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

