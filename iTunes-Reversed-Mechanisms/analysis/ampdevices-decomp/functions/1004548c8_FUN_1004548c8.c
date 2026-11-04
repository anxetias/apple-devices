// name: FUN_1004548c8
// address: 1004548c8

void FUN_1004548c8(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1004548c8(*param_1);
    FUN_1004548c8(param_1[1]);
    FUN_100453b6a(param_1 + 4);
    operator_delete(param_1);
    return;
  }
  return;
}

