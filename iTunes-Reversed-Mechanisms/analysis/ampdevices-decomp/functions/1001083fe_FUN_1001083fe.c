// name: FUN_1001083fe
// address: 1001083fe

void FUN_1001083fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10082fef8;
  if ((long *)param_1[0x497] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x497] + 8))();
  }
  FUN_1001111d0(param_1);
  operator_delete(param_1);
  return;
}

