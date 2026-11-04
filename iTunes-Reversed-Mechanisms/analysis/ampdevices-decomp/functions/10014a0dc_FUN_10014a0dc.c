// name: FUN_10014a0dc
// address: 10014a0dc

void FUN_10014a0dc(undefined8 *param_1)

{
  FUN_10014a104(param_1,param_1[1]);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

