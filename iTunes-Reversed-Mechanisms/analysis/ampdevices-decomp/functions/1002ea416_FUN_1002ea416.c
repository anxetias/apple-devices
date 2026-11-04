// name: FUN_1002ea416
// address: 1002ea416

void FUN_1002ea416(undefined8 *param_1)

{
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
  }
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  FUN_10017060f(*param_1);
  FUN_10017060f(param_1[3]);
  FUN_10017060f(param_1[2]);
  return;
}

