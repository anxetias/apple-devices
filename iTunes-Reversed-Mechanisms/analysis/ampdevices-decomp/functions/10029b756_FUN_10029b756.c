// name: FUN_10029b756
// address: 10029b756

void FUN_10029b756(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + -8) != 0) {
      lVar2 = *(long *)(param_1 + -8) * 0x70;
      do {
        pvVar1 = *(void **)(param_1 + -0x58 + lVar2);
        if (pvVar1 != (void *)0x0) {
          operator_delete__(pvVar1);
        }
        lVar2 = lVar2 + -0x70;
      } while (lVar2 != 0);
    }
    operator_delete__((void *)(param_1 + -8));
    return;
  }
  return;
}

