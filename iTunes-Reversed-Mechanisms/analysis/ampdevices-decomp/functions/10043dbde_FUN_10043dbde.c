// name: FUN_10043dbde
// address: 10043dbde

void FUN_10043dbde(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = param_1 + 3;
  FUN_1001e9de0(puVar1);
  param_1[1] = *param_1;
  FUN_1001e9eb9(puVar1);
  FUN_1001e9d75(puVar1);
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    param_1[1] = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

