// name: FUN_10061cae4
// address: 10061cae4

void FUN_10061cae4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10013413e(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

