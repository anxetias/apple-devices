// name: FUN_100382b97
// address: 100382b97

void FUN_100382b97(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_100382b00();
  iVar2 = FUN_10037ae94(*param_5,*param_4,*param_6);
  if (iVar2 < 0) {
    uVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar1;
    iVar2 = FUN_10037ae94(*param_4,*param_3,*param_6);
    if (iVar2 < 0) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      iVar2 = FUN_10037ae94(*param_3,*param_2,*param_6);
      if (iVar2 < 0) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        iVar2 = FUN_10037ae94(*param_2,*param_1,*param_6);
        if (iVar2 < 0) {
          uVar1 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar1;
        }
      }
    }
  }
  return;
}

