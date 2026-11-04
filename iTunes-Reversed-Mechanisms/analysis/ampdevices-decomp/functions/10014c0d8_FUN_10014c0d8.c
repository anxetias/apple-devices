// name: FUN_10014c0d8
// address: 10014c0d8

void FUN_10014c0d8(undefined8 *param_1)

{
  FUN_10014c100(param_1,param_1[1]);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

