// name: FUN_10061ca04
// address: 10061ca04

void FUN_10061ca04(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar1 != (void *)0x0) {
    if (*(char *)(param_1 + 2) == '\x01') {
      FUN_10061ca3d((long)pvVar1 + 0x20);
    }
    operator_delete(pvVar1);
    return;
  }
  return;
}

