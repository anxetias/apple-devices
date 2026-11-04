// name: FUN_100107bc8
// address: 100107bc8

void FUN_100107bc8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_10082fe60;
  FUN_100119256(param_1 + 9);
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    if ((void *)param_1[8] != pvVar1) {
      param_1[8] = pvVar1;
    }
    operator_delete(pvVar1);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    pvVar2 = (void *)param_1[6];
    if (pvVar2 != pvVar1) {
      param_1[6] = ((long)pvVar1 + (3 - (long)pvVar2) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return;
}

