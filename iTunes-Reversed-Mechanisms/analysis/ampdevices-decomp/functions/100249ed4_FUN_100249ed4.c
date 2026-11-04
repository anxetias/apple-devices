// name: FUN_100249ed4
// address: 100249ed4

void FUN_100249ed4(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 == 0x73766970) {
    param_1[2] = param_2[2];
  }
  else {
    if (iVar1 != 0x73766d64) {
      FUN_1001c62d9(param_1 + 2,8);
      return;
    }
    uVar2 = FUN_1001705fc(*(undefined8 *)(param_2 + 2));
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  return;
}

