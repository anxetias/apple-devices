// name: FUN_10027cb46
// address: 10027cb46

void FUN_10027cb46(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001ab006(param_1 + 0x10);
  return;
}

