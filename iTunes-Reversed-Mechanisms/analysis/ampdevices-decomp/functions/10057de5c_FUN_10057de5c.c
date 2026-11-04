// name: FUN_10057de5c
// address: 10057de5c

void FUN_10057de5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_10086a8a0;
  puVar3 = (undefined8 *)param_1[0x20];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = (void *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x1b];
  if (pvVar2 != (void *)0x0) {
    param_1[0x1c] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x18];
  if (pvVar2 != (void *)0x0) {
    param_1[0x19] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x15];
  if (pvVar2 != (void *)0x0) {
    param_1[0x16] = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = (void *)param_1[0x12];
  if (pvVar2 != (void *)0x0) {
    param_1[0x13] = pvVar2;
    operator_delete(pvVar2);
  }
  puVar3 = (undefined8 *)param_1[0xf];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = (void *)param_1[0xd];
  param_1[0xd] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  FUN_100205d70(param_1 + 0xb);
  FUN_100205d70(param_1 + 9);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

