// name: FUN_1002c0bbc
// address: 1002c0bbc

void FUN_1002c0bbc(undefined8 *param_1)

{
  void *pvVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      param_1[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

