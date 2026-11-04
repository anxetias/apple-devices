// name: FUN_1002e7582
// address: 1002e7582

void FUN_1002e7582(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_1001ab006((long)pvVar1 + 0x90);
    FUN_1001ab006((long)pvVar1 + 0x78);
    FUN_1001ab006((long)pvVar1 + 0x70);
    FUN_1001ab006((long)pvVar1 + 0x68);
    operator_delete(pvVar1);
    return;
  }
  return;
}

