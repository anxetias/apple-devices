// name: FUN_1001494e4
// address: 1001494e4

void FUN_1001494e4(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_100139d12(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

