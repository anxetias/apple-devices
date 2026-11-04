// name: FUN_1002075bc
// address: 1002075bc

void FUN_1002075bc(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_1002075bc(*param_1);
    FUN_1002075bc(param_1[1]);
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      operator_delete((void *)param_1[6]);
    }
    operator_delete(param_1);
    return;
  }
  return;
}

