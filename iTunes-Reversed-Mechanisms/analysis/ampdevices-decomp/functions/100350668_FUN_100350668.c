// name: FUN_100350668
// address: 100350668

void FUN_100350668(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_100350668(*param_1);
    FUN_100350668(param_1[1]);
    FUN_1001b7a50(param_1 + 4);
    operator_delete(param_1);
    return;
  }
  return;
}

