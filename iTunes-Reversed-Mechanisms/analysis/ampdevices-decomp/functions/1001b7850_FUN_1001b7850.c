// name: FUN_1001b7850
// address: 1001b7850

void FUN_1001b7850(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001b7850(param_1,*param_2);
    FUN_1001b7850(param_1,param_2[1]);
    FUN_100205d70(param_2 + 4);
    operator_delete(param_2);
    return;
  }
  return;
}

