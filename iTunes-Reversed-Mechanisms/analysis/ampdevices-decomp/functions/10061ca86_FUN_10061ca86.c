// name: FUN_10061ca86
// address: 10061ca86

void FUN_10061ca86(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10061ca86(*param_1);
    FUN_10061ca86(param_1[1]);
    FUN_10061ca3d(param_1 + 4);
    operator_delete(param_1);
    return;
  }
  return;
}

