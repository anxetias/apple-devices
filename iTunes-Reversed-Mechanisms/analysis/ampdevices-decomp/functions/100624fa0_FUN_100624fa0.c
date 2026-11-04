// name: FUN_100624fa0
// address: 100624fa0

void FUN_100624fa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_100871130;
  puVar3 = (undefined8 *)param_1[0xb];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    FUN_100205d70(puVar3 + 3);
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = (void *)param_1[9];
  param_1[9] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar3 = (undefined8 *)param_1[6];
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    FUN_1001b7a50(puVar3 + 2);
    operator_delete(puVar3);
    puVar3 = puVar1;
  }
  pvVar2 = (void *)param_1[4];
  param_1[4] = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

