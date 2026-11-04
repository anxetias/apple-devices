// name: FUN_100411650
// address: 100411650

void FUN_100411650(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] - *param_1 >> 3;
  if (param_2 >= uVar1 && param_2 - uVar1 != 0) {
    FUN_100411680(param_1,param_2 - uVar1);
    return;
  }
  if (param_2 < uVar1) {
    param_1[1] = *param_1 + param_2 * 8;
  }
  return;
}

