// name: FUN_100464fdf
// address: 100464fdf

void FUN_100464fdf(long param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1001b7a50(param_1);
  return;
}

