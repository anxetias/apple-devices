// name: FUN_100238c4e
// address: 100238c4e

undefined4 * FUN_100238c4e(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    *param_3 = *param_1;
    FUN_100238d72(param_3 + 2,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4));
    uVar1 = param_1[7];
    uVar2 = param_1[8];
    uVar3 = param_1[9];
    param_3[6] = param_1[6];
    param_3[7] = uVar1;
    param_3[8] = uVar2;
    param_3[9] = uVar3;
    *(undefined1 *)(param_3 + 10) = *(undefined1 *)(param_1 + 10);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}

