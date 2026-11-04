// name: FUN_1002bb9ea
// address: 1002bb9ea

undefined4 * FUN_1002bb9ea(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1001b7a5c(param_1 + 4,param_2 + 4);
  FUN_1001b7a5c(param_1 + 8,param_2 + 8);
  param_1[0x10] = param_2[0x10];
  uVar4 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar4;
  return param_1;
}

