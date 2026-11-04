// name: FUN_10045488e
// address: 10045488e

void FUN_10045488e(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_100453b6a((long)pvVar1 + 0x20);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

