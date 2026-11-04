// name: FUN_10040ec88
// address: 10040ec88

void FUN_10040ec88(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_100156250(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

