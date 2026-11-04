// name: FUN_10032484e
// address: 10032484e

void FUN_10032484e(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10032484e(param_1,*param_2);
    FUN_10032484e(param_1,param_2[1]);
    FUN_1001b7a50(param_2 + 5);
    operator_delete(param_2);
    return;
  }
  return;
}

