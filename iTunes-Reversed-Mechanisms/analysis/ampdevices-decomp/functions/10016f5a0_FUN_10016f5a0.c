// name: FUN_10016f5a0
// address: 10016f5a0

void FUN_10016f5a0(long *param_1,ulong param_2)

{
  void *pvVar1;
  
  if (-1 < (long)param_2) {
    pvVar1 = operator_new(param_2);
    *param_1 = (long)pvVar1;
    param_1[1] = (long)pvVar1;
    param_1[2] = (long)pvVar1 + param_2;
    return;
  }
  FUN_1001bd5a8();
  if (*param_1 != 0) {
    _CFRelease();
  }
  return;
}

