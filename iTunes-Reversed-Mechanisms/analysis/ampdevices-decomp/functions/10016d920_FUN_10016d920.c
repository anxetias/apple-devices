// name: FUN_10016d920
// address: 10016d920

void FUN_10016d920(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8) + lVar1;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

