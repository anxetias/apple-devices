// name: FUN_100137820
// address: 100137820

void FUN_100137820(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_100135e68((long)pvVar1 + 0x10);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

