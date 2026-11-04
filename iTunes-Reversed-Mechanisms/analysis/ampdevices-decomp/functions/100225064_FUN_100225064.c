// name: FUN_100225064
// address: 100225064

void FUN_100225064(undefined8 *param_1)

{
  void *pvVar1;
  
  FUN_10017060f(*param_1);
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    param_1[2] = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

