// name: FUN_1001b3278
// address: 1001b3278

undefined8 * FUN_1001b3278(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x70))(param_4);
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = uVar1;
  param_3[3] = param_2;
  return param_3;
}

