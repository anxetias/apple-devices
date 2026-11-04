// name: FUN_10013cf0e
// address: 10013cf0e

void FUN_10013cf0e(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10013ed3c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

