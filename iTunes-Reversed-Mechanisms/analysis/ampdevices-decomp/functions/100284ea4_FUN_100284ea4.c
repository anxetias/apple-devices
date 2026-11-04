// name: FUN_100284ea4
// address: 100284ea4

void FUN_100284ea4(undefined8 *param_1)

{
  FUN_100284ecc(param_1,param_1[1]);
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    return;
  }
  return;
}

