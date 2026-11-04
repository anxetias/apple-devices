// name: FUN_100108a72
// address: 100108a72

void FUN_100108a72(long param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  pvVar1 = *(void **)(param_1 + 0x60);
  if (*(void **)(param_1 + 0x68) != pvVar1) {
    uVar2 = 0;
    do {
      FUN_100108afc(param_1,uVar2);
      uVar2 = (ulong)((int)uVar2 + 1);
      pvVar1 = *(void **)(param_1 + 0x60);
    } while (uVar2 < (ulong)(*(long *)(param_1 + 0x68) - (long)pvVar1 >> 3));
  }
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 != param_1) {
    do {
      if (*(void **)(lVar3 + 0x38) != (void *)0x0) {
        operator_delete__(*(void **)(lVar3 + 0x38));
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != param_1);
    pvVar1 = *(void **)(param_1 + 0x60);
  }
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x68) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    *(void **)(param_1 + 0x20) = pvVar1;
    operator_delete(pvVar1);
  }
  FUN_1005090da(param_1);
  return;
}

