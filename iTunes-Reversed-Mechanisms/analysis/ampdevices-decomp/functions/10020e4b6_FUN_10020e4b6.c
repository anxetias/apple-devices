// name: FUN_10020e4b6
// address: 10020e4b6

void FUN_10020e4b6(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_1001ad344(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}

