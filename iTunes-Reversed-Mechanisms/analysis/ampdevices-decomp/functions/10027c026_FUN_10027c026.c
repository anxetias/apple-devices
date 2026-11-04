// name: FUN_10027c026
// address: 10027c026

void FUN_10027c026(long *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)(param_1 + 1);
  if (param_3 != 0) {
    param_3 = param_3 << 4;
    do {
      FUN_10027c08c(param_1,param_1 + 1,param_2,param_2);
      param_2 = param_2 + 0x10;
      param_3 = param_3 + -0x10;
    } while (param_3 != 0);
  }
  return;
}

