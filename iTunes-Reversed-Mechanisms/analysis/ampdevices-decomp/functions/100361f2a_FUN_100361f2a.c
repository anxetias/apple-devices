// name: FUN_100361f2a
// address: 100361f2a

void FUN_100361f2a(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_1001b7a50((long)pvVar1 + 0x28);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

