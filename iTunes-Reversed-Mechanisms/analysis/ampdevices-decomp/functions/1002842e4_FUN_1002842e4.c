// name: FUN_1002842e4
// address: 1002842e4

void FUN_1002842e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[2];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar2);
  return;
}

