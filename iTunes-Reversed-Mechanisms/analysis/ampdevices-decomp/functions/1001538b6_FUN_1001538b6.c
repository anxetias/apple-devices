// name: FUN_1001538b6
// address: 1001538b6

void FUN_1001538b6(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_100205d70(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

