// name: FUN_1003808c4
// address: 1003808c4

void FUN_1003808c4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100855b20;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

