// name: FUN_100137f5c
// address: 100137f5c

void FUN_100137f5c(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001b7a50((long)pvVar1 + 0x1a0);
    FUN_10013ed3c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

