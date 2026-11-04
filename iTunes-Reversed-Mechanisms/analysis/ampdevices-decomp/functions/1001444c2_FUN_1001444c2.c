// name: FUN_1001444c2
// address: 1001444c2

void FUN_1001444c2(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    FUN_100205d70(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

