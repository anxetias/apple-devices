// name: FUN_10028581a
// address: 10028581a

void FUN_10028581a(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_1002842e4((long)pvVar1 + 0x28);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

