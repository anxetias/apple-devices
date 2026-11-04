// name: FUN_100381fef
// address: 100381fef

void FUN_100381fef(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_100381f58();
  iVar2 = FUN_10055f730(*param_5,*param_4,*param_6);
  if (iVar2 < 0) {
    uVar1 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar1;
    iVar2 = FUN_10055f730(*param_4,*param_3,*param_6);
    if (iVar2 < 0) {
      uVar1 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar1;
      iVar2 = FUN_10055f730(*param_3,*param_2,*param_6);
      if (iVar2 < 0) {
        uVar1 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar1;
        iVar2 = FUN_10055f730(*param_2,*param_1,*param_6);
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

