// name: FUN_100381130
// address: 100381130

void FUN_100381130(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_100351240(*param_2,*param_1,*param_4);
  iVar3 = FUN_100351240(*param_3,*param_2,*param_4);
  if (iVar2 < 0) {
    uVar1 = *param_1;
    if (iVar3 < 0) {
      *param_1 = *param_3;
      *param_3 = uVar1;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar1;
      iVar2 = FUN_100351240(*param_3,uVar1,*param_4);
      if (iVar2 < 0) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
      }
    }
  }
  else if (iVar3 < 0) {
    uVar1 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar1;
    iVar2 = FUN_100351240(*param_2,*param_1,*param_4);
    if (iVar2 < 0) {
      uVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar1;
    }
  }
  return;
}

