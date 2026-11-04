// name: FUN_100133ea6
// address: 100133ea6

void FUN_100133ea6(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_100133ed6(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

