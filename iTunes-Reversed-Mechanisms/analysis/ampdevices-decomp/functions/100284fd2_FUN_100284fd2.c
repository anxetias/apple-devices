// name: FUN_100284fd2
// address: 100284fd2

void FUN_100284fd2(long *param_1)

{
  if (*param_1 != 0) {
    FUN_100285006();
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

