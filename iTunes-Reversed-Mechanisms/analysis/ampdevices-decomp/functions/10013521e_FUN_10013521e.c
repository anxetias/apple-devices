// name: FUN_10013521e
// address: 10013521e

void FUN_10013521e(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001565ea(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

