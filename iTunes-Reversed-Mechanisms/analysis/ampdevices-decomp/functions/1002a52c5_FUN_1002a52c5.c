// name: FUN_1002a52c5
// address: 1002a52c5

void FUN_1002a52c5(long *param_1)

{
  do {
    FUN_1002188e4(param_1 + 0x10c);
    FUN_10017060f(param_1[0x10b]);
    param_1[0x10b] = 0;
    param_1 = (long *)*param_1;
  } while (param_1 != (long *)0x0);
  return;
}

