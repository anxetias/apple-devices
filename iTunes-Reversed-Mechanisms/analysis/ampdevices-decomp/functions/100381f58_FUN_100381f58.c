// name: FUN_100381f58
// address: 100381f58

void FUN_100381f58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_100381cd8();
  iVar2 = FUN_10055f730(*param_4,*param_3,*param_5);
  if (iVar2 < 0) {
    uVar1 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar1;
    iVar2 = FUN_10055f730(*param_3,*param_2,*param_5);
    if (iVar2 < 0) {
      uVar1 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar1;
      iVar2 = FUN_10055f730(*param_2,*param_1,*param_5);
      if (iVar2 < 0) {
        uVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar1;
      }
    }
  }
  return;
}

