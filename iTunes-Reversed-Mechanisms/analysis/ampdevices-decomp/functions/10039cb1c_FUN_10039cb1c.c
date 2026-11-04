// name: FUN_10039cb1c
// address: 10039cb1c

void FUN_10039cb1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_100856230;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x40))();
  }
  param_1[1] = 0;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 0x40))();
  }
  param_1[2] = 0;
  FUN_1001c672e(param_1 + 0xe1);
  FUN_10039ca2e(param_1 + 0xd5);
  FUN_10026340c(param_1 + 0xd2);
  return;
}

