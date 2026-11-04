// name: FUN_100547e8e
// address: 100547e8e

void FUN_100547e8e(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x80);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)(param_1 + 0x88);
    if (pvVar2 != pvVar1) {
      *(ulong *)(param_1 + 0x88) =
           ((long)pvVar1 + (3 - (long)pvVar2) & 0xfffffffffffffffcU) + (long)pvVar2;
    }
    operator_delete(pvVar1);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  return;
}

