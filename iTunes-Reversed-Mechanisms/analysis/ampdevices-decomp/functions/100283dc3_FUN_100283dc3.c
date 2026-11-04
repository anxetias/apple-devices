// name: FUN_100283dc3
// address: 100283dc3

undefined8 * FUN_100283dc3(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1001a8c1c(param_1 + 2,param_2 + 2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_100283e44(param_1 + 3,param_2[3],param_2[4],(long)(param_2[4] - param_2[3]) >> 3);
  uVar1 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  return param_1;
}

