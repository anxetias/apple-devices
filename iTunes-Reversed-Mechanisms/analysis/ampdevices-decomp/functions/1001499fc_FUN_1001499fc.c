// name: FUN_1001499fc
// address: 1001499fc

void FUN_1001499fc(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10013a100(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

