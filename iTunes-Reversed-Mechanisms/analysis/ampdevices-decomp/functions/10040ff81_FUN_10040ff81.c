// name: FUN_10040ff81
// address: 10040ff81

void FUN_10040ff81(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_1004104d2(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

