// name: FUN_1002cd170
// address: 1002cd170

void FUN_1002cd170(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002cd170(param_1,*param_2);
    FUN_1002cd170(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      operator_delete((void *)param_2[7]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}

