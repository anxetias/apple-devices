// name: FUN_1002852ba
// address: 1002852ba

void FUN_1002852ba(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1002852ba(*param_1);
    FUN_1002852ba(param_1[1]);
    FUN_100284230();
    operator_delete(param_1);
  }
  return;
}

