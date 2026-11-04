// name: FUN_10062693a
// address: 10062693a

void FUN_10062693a(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_100205d70((long)pvVar1 + 0x18);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

