// name: FUN_10040fed6
// address: 10040fed6

void FUN_10040fed6(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  for (puVar2 = *(undefined8 **)(param_1 + 0x38); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    FUN_10040ff55(puVar2 + 2);
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x10); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    FUN_10040ff81(puVar2 + 2);
  }
  FUN_1002a41f4(param_1 + 0x80,*(undefined8 *)(param_1 + 0x88));
  FUN_1002a41f4(param_1 + 0x68,*(undefined8 *)(param_1 + 0x70));
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_100411784(param_1 + 0x28);
  FUN_100411784(param_1);
  return;
}

