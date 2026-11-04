// name: FUN_100464fa6
// address: 100464fa6

void FUN_100464fa6(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_100464fdf((long)pvVar1 + 0x10);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

