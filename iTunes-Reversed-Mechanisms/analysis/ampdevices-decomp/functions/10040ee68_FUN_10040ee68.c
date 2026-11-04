// name: FUN_10040ee68
// address: 10040ee68

void FUN_10040ee68(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001561a4(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

