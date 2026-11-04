// name: FUN_10049c8ea
// address: 10049c8ea

void FUN_10049c8ea(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_1001b7a50((long)pvVar1 + 0x20);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

