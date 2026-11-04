// name: FUN_1003a1736
// address: 1003a1736

undefined8 FUN_1003a1736(undefined8 param_1,int param_2,uint param_3,short *param_4)

{
  undefined8 uVar1;
  
  if ((param_3 & 1) == 0) {
    FUN_1002d1ccd(param_1,param_2,param_3,param_4);
    if ((param_3 & 2) == 0) {
      return 0;
    }
    if (*param_4 != 0) {
      return 0;
    }
    uVar1 = FUN_1002d1e00(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_2 < 0x12) {
    if (param_2 == 2) {
      FUN_100476e65(param_1,param_4);
      return 0;
    }
    if (param_2 == 3) {
      FUN_1004777d6(param_1,param_4);
      return 0;
    }
    if (param_2 == 4) {
LAB_1003a17ea:
      FUN_100477dec(param_1,param_4);
      return 0;
    }
  }
  else if (param_2 < 0x47) {
    if (param_2 == 0x12) {
      FUN_10047a452(param_1,param_4);
      return 0;
    }
    if (param_2 == 0x3e) {
      FUN_10047e0c8(param_1,param_4);
      return 0;
    }
  }
  else {
    if (param_2 == 0x47) {
      FUN_100478401(param_1,param_4);
      return 0;
    }
    if (param_2 == 0xc2) {
      FUN_100478401(param_1,param_4);
      if (*param_4 != 0) {
        return 0;
      }
      goto LAB_1003a17ea;
    }
  }
  FUN_1002d1ccd(param_1,param_2,param_3,param_4);
  return 0;
}

