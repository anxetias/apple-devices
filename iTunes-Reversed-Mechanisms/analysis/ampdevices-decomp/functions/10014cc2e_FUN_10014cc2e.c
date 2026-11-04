// name: FUN_10014cc2e
// address: 10014cc2e

void FUN_10014cc2e(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_10014ca88(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

