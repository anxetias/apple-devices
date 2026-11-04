// name: FUN_10022ace4
// address: 10022ace4

void FUN_10022ace4(long param_1)

{
  void *pvVar1;
  
  FUN_1001b7a50(param_1 + 0x4c0);
  pvVar1 = *(void **)(param_1 + 0x4a8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x4b0) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001a85d4(param_1 + 0x78);
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x58) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x38) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

