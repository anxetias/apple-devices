// name: FUN_100138f90
// address: 100138f90

void FUN_100138f90(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_100138fc0(pvVar1,0);
    operator_delete(pvVar1);
    return;
  }
  return;
}

