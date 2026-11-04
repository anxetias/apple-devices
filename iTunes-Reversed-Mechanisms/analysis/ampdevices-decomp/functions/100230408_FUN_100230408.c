// name: FUN_100230408
// address: 100230408

void FUN_100230408(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_100230408(*param_1);
    FUN_100230408(param_1[1]);
    operator_delete(param_1);
    return;
  }
  return;
}

