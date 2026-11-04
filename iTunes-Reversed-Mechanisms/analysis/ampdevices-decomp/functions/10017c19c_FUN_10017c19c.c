// name: FUN_10017c19c
// address: 10017c19c

undefined8 * FUN_10017c19c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[4] = *(undefined8 *)(param_2 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  param_1[2] = *(undefined8 *)(param_2 + 0x78);
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}

