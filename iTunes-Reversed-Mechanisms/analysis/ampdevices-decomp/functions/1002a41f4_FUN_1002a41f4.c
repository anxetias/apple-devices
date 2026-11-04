// name: FUN_1002a41f4
// address: 1002a41f4

void FUN_1002a41f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002a41f4(param_1,*param_2);
    FUN_1002a41f4(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}

