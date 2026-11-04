// name: FUN_10044a830
// address: 10044a830

void FUN_10044a830(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10043dbde(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

