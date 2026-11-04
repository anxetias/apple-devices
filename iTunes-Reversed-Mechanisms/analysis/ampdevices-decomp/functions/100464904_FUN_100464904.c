// name: FUN_100464904
// address: 100464904

void FUN_100464904(long param_1)

{
  void *pvVar1;
  
  FUN_100230408(*(undefined8 *)(param_1 + 0x30));
  pvVar1 = *(void **)(param_1 + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}

