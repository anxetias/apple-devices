// name: FUN_100249f2c
// address: 100249f2c

int * FUN_100249f2c(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    if (*param_1 == 0x73766d64) {
      FUN_10017060f(*(undefined8 *)(param_1 + 2));
    }
    iVar1 = *param_2;
    *param_1 = iVar1;
    if (iVar1 == 0x73766970) {
      param_1[2] = param_2[2];
    }
    else if (iVar1 == 0x73766d64) {
      uVar2 = FUN_1001705fc(*(undefined8 *)(param_2 + 2));
      *(undefined8 *)(param_1 + 2) = uVar2;
    }
    else {
      FUN_1001c62d9(param_1 + 2,8);
    }
  }
  return param_1;
}

