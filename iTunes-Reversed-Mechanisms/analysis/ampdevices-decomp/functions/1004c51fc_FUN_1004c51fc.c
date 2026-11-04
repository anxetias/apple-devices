// name: FUN_1004c51fc
// address: 1004c51fc

void FUN_1004c51fc(long param_1)

{
  void *pvVar1;
  undefined1 local_30 [16];
  
  FUN_1001b7eb0(local_30);
  pvVar1 = (void *)FUN_10020e3d6(param_1 + 0x30,local_30);
  FUN_1001b7a50(local_30);
  if (pvVar1 != (void *)(param_1 + 0x38)) {
    FUN_10020e52a(param_1 + 0x30,pvVar1);
    FUN_1001b7a50((long)pvVar1 + 0x20);
    operator_delete(pvVar1);
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

