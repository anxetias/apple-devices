// name: FUN_10039dd1e
// address: 10039dd1e

void FUN_10039dd1e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1008562a0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x40))();
  }
  operator_delete(param_1);
  return;
}

