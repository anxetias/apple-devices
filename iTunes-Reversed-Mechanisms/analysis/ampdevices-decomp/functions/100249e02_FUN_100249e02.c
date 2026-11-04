// name: FUN_100249e02
// address: 100249e02

void FUN_100249e02(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  FUN_1001b7a5c(param_1 + 1,param_2 + 1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar1 = FUN_1001705fc(param_2[9]);
  param_1[9] = uVar1;
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
  FUN_1001dfbb3(param_2 + 5,param_1 + 5,0x20);
  return;
}

