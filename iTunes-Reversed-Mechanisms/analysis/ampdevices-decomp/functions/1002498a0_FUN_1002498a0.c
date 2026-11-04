// name: FUN_1002498a0
// address: 1002498a0

void FUN_1002498a0(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = *param_1;
  for (lVar3 = param_1[1]; lVar3 != lVar1; lVar3 = lVar3 + -0x20) {
    pvVar2 = *(void **)(lVar3 + -0x18);
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x10) = pvVar2;
      operator_delete(pvVar2);
    }
  }
  param_1[1] = lVar1;
  return;
}

