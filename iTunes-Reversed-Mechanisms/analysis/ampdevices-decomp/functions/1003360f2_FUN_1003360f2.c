// name: FUN_1003360f2
// address: 1003360f2

void FUN_1003360f2(long param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0x47f) {
    if (2 < param_2 - 0x455U) {
      if (param_2 == -0xa639) {
        uVar1 = 0xd;
        goto LAB_100336157;
      }
      if (param_2 != -0x22) goto LAB_100336143;
    }
    uVar1 = 0xe;
  }
  else {
    uVar1 = 7;
    if (param_2 - 0x47fU < 3) goto LAB_100336157;
    if (param_2 == 0x48a) {
      uVar1 = 0x14;
      goto LAB_100336157;
    }
LAB_100336143:
    uVar1 = 2;
    if (*(char *)(param_1 + 0x6abd) == '\0') {
      uVar1 = 8;
    }
  }
LAB_100336157:
  FUN_100333742(param_1,uVar1);
  return;
}

