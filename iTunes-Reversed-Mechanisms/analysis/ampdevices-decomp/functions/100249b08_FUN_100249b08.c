// name: FUN_100249b08
// address: 100249b08

void FUN_100249b08(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2];
  while (lVar3 = lVar4, lVar3 != lVar1) {
    param_1[2] = lVar3 + -0x20;
    pvVar2 = *(void **)(lVar3 + -0x18);
    lVar4 = lVar3 + -0x20;
    if (pvVar2 != (void *)0x0) {
      *(void **)(lVar3 + -0x10) = pvVar2;
      operator_delete(pvVar2);
      lVar4 = param_1[2];
    }
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

