// name: FUN_10016b026
// address: 10016b026

long * FUN_10016b026(long *param_1,long *param_2)

{
  if (*param_1 != 0) {
    _CFRelease();
  }
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  if (param_1[2] != 0) {
    _CFRelease();
  }
  param_1[2] = param_2[2];
  param_2[2] = 0;
  return param_1;
}

