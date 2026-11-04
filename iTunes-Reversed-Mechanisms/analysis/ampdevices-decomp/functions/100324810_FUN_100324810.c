// name: FUN_100324810
// address: 100324810

void FUN_100324810(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = param_2;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_1001b7a50((long)pvVar1 + 0x28);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

