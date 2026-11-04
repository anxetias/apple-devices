// name: FUN_100134af8
// address: 100134af8

void FUN_100134af8(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_100415982(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

