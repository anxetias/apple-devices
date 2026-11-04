// name: FUN_10013c368
// address: 10013c368

void FUN_10013c368(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001a85d4((long)pvVar1 + 0x1a0);
    FUN_10013ed3c(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

