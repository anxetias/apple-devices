// name: FUN_1001b7260
// address: 1001b7260

void FUN_1001b7260(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001b7260(param_1,*param_2);
    FUN_1001b7260(param_1,param_2[1]);
    FUN_100240464();
    FUN_1001b7a50(param_2 + 4);
    operator_delete(param_2);
  }
  return;
}

