// name: FUN_10049be6c
// address: 10049be6c

void FUN_10049be6c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10049be6c(*param_1);
    FUN_10049be6c(param_1[1]);
    FUN_1001b7a50(param_1 + 4);
    operator_delete(param_1);
    return;
  }
  return;
}

