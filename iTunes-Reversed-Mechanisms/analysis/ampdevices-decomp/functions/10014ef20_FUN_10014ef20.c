// name: FUN_10014ef20
// address: 10014ef20

void FUN_10014ef20(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_100153e6a(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

