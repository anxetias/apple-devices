// name: FUN_100107a42
// address: 100107a42

void FUN_100107a42(undefined8 *param_1,ulong param_2,undefined1 param_3)

{
  void *pvVar1;
  undefined1 *puVar2;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[1] != pvVar1) {
      param_1[1] = pvVar1;
    }
    operator_delete(pvVar1);
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (param_2 != 0) {
    puVar2 = operator_new(param_2);
    param_1[1] = puVar2;
    *param_1 = puVar2;
    do {
      *puVar2 = param_3;
      puVar2 = (undefined1 *)(param_1[1] + 1);
      param_1[1] = puVar2;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

