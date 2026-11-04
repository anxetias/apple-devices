// name: FUN_100130a1c
// address: 100130a1c

void FUN_100130a1c(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_100130a4c(param_1,param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

