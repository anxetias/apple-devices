// name: FUN_100272bc0
// address: 100272bc0

void FUN_100272bc0(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *local_30;
  char local_28;
  
  FUN_10032f11e(&local_30);
  *param_1 = 0;
  pvVar2 = operator_new(0x50,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar2 != (void *)0x0) {
    FUN_10015a028(pvVar2);
  }
  param_1[1] = pvVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if (local_28 != '\x01') {
    param_1[3] = local_30;
    *(char *)(param_1 + 4) = local_28;
    *(undefined4 *)(param_1 + 5) = param_2;
    return;
  }
  puVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar3 == (undefined8 *)0x0) {
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 5) = param_2;
    if (local_30 == (undefined8 *)0x0) {
      return;
    }
  }
  else {
    puVar3[2] = local_30[2];
    uVar1 = local_30[1];
    *puVar3 = *local_30;
    puVar3[1] = uVar1;
    param_1[3] = puVar3;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 5) = param_2;
  }
  operator_delete(local_30);
  return;
}

