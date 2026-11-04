// name: FUN_10015fe19
// address: 10015fe19

void FUN_10015fe19(long *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[2];
  if (iVar1 != 0) {
    if (param_2 != '\0') {
      FUN_10015fe49(param_1,0,8 - iVar1);
      return;
    }
    if (iVar1 != 8) {
      *param_1 = *param_1 + 1;
      *(undefined4 *)(param_1 + 2) = 0;
    }
  }
  return;
}

