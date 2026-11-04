// name: FUN_1002a8ddc
// address: 1002a8ddc

void FUN_1002a8ddc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002a8ddc(param_1,*param_2);
    FUN_1002a8ddc(param_1,param_2[1]);
    FUN_1002a41f4(param_2 + 7,param_2[8]);
    operator_delete(param_2);
    return;
  }
  return;
}

