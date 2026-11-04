// name: FUN_1001be06a
// address: 1001be06a

void FUN_1001be06a(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_1001bdf16(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

