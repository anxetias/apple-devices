// name: FUN_1002e76f4
// address: 1002e76f4

undefined4 * FUN_1002e76f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1001a8c1c(param_1 + 6,param_2 + 6);
  FUN_1001a8c1c(param_1 + 8,param_2 + 8);
  FUN_1001a8c1c(param_1 + 10,param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  return param_1;
}

