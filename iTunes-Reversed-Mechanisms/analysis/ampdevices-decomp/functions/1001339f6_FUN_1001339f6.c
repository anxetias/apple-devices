// name: FUN_1001339f6
// address: 1001339f6

void FUN_1001339f6(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_100154828(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

