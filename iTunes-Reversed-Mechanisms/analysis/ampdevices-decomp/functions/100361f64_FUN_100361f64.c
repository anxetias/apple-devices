// name: FUN_100361f64
// address: 100361f64

void FUN_100361f64(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_100361f64(*param_1);
    FUN_100361f64(param_1[1]);
    FUN_1001b7a50(param_1 + 5);
    operator_delete(param_1);
    return;
  }
  return;
}

