// name: FUN_1004659a2
// address: 1004659a2

void FUN_1004659a2(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_1004117b4(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

