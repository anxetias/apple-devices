// name: FUN_10013bfec
// address: 10013bfec

void FUN_10013bfec(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1002730ac(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

