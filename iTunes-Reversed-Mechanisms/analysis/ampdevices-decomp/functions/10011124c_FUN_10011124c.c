// name: FUN_10011124c
// address: 10011124c

void FUN_10011124c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100835988;
  if ((long *)param_1[0x488] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x488] + 8))();
    param_1[0x488] = 0;
  }
  FUN_10010bd58(param_1);
  operator_delete(param_1);
  return;
}

