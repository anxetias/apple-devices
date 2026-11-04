// name: FUN_1001b7a88
// address: 1001b7a88

void FUN_1001b7a88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}

