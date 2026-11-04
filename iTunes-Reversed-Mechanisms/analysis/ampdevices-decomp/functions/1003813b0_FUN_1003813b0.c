// name: FUN_1003813b0
// address: 1003813b0

void FUN_1003813b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_100381130();
  iVar2 = FUN_100351240(*param_4,*param_3,*param_5);
  if (iVar2 < 0) {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    iVar2 = FUN_100351240(*param_3,*param_2,*param_5);
    if (iVar2 < 0) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      iVar2 = FUN_100351240(*param_2,*param_1,*param_5);
      if (iVar2 < 0) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}

