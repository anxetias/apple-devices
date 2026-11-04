// name: FUN_1004100a0
// address: 1004100a0

void FUN_1004100a0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001b7a50(param_1 + 0x70);
  FUN_1001b7a50(param_1 + 0x48);
  FUN_1001b7a50(param_1 + 0x30);
  FUN_1001b7a50(param_1 + 0x18);
  FUN_1001b7a50(param_1);
  return;
}

