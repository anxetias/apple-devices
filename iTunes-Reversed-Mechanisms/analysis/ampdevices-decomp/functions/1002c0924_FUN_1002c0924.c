// name: FUN_1002c0924
// address: 1002c0924

void FUN_1002c0924(long param_1)

{
  void *pvVar1;
  
  FUN_1002a41f4(param_1 + 0x228,*(undefined8 *)(param_1 + 0x230));
  pvVar1 = *(void **)(param_1 + 0x210);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x218) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

