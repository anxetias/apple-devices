// name: FUN_100147e82
// address: 100147e82

void FUN_100147e82(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_100147eb4();
    operator_delete(*(void **)*param_1);
    return;
  }
  return;
}

