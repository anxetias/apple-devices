// name: FUN_10058e678
// address: 10058e678

void FUN_10058e678(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10058d950(pvVar1);
    operator_delete(pvVar1);
    return;
  }
  return;
}

