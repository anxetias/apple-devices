// name: FUN_1002f0eea
// address: 1002f0eea

void FUN_1002f0eea(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_1008535e8;
  puVar1 = (undefined8 *)param_1[6];
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar4 = (undefined8 *)puVar1[2];
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    operator_delete(puVar4);
    puVar4 = puVar2;
  }
  pvVar3 = (void *)*puVar1;
  *puVar1 = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  operator_delete(puVar1);
  return;
}

