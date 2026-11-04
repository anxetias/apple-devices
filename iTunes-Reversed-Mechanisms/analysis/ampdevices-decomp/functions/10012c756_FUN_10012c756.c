// name: FUN_10012c756
// address: 10012c756

void FUN_10012c756(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001a8fac(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

