// name: FUN_1002e7c72
// address: 1002e7c72

void FUN_1002e7c72(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_1001ab006((long)pvVar1 + 0x98);
    FUN_1001ab006((long)pvVar1 + 0x80);
    FUN_1001ab006((long)pvVar1 + 0x78);
    FUN_1001ab006((long)pvVar1 + 0x70);
    operator_delete(pvVar1);
    return;
  }
  return;
}

