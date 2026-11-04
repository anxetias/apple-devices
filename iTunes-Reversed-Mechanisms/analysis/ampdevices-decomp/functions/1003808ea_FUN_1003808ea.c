// name: FUN_1003808ea
// address: 1003808ea

void FUN_1003808ea(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_100855b20;
  pvVar1 = (void *)param_1[2];
  if (pvVar1 != (void *)0x0) {
    param_1[3] = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(param_1);
  return;
}

