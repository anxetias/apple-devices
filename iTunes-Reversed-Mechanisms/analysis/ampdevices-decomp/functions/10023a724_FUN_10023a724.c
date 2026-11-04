// name: FUN_10023a724
// address: 10023a724

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_10023a724(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x300) {
    if (param_1 == 0) {
      return 0.0;
    }
    if (param_1 == 0x100) {
      return DAT_1007197c4;
    }
    if (param_1 == 0x200) {
      return DAT_1007197c0;
    }
  }
  else {
    if (param_1 == 0x300) {
      return DAT_1007197bc;
    }
    if (param_1 == 0x400) {
      return DAT_100700b50;
    }
    if (param_1 == 0x3ff) {
      return DAT_100700b20;
    }
  }
  uVar1 = 0x3ff;
  if (param_1 < 0x3ff) {
    uVar1 = param_1;
  }
  return (float)(int)uVar1 / _DAT_1007197c8;
}

