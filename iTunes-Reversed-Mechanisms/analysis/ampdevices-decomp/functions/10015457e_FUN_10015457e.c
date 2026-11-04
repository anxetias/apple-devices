// name: FUN_10015457e
// address: 10015457e

void FUN_10015457e(undefined8 param_1,void *param_2)

{
  if (param_2 != (void *)0x0) {
    FUN_1001a8fac((long)param_2 + 0x18);
    FUN_1001a85d4((long)param_2 + 8);
    FUN_1001accd4(param_2);
    operator_delete(param_2);
    return;
  }
  return;
}

