// name: FUN_100465008
// address: 100465008

void FUN_100465008(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_100465038(param_1[2]);
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

