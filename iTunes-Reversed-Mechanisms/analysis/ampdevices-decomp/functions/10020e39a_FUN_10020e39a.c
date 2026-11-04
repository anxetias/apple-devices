// name: FUN_10020e39a
// address: 10020e39a

void FUN_10020e39a(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10020e39a(param_1,*param_2);
    FUN_10020e39a(param_1,param_2[1]);
    FUN_1001b7a50(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}

