// name: FUN_1001792b6
// address: 1001792b6

void FUN_1001792b6(long *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 local_29;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar3 != puVar1) {
    do {
      FUN_100179314(&local_29,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  FUN_10015a092(param_1 + 4);
  pvVar2 = (void *)*param_1;
  if (pvVar2 != (void *)0x0) {
    param_1[1] = (long)pvVar2;
    operator_delete(pvVar2);
  }
  return;
}

