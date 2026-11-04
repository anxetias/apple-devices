// name: FUN_1005cde7e
// address: 1005cde7e

void FUN_1005cde7e(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (param_2 < 0x69506f64) {
    if (param_2 == 0x69506164) {
      uVar2 = 0x10d2;
    }
    else {
      uVar2 = 0x10d1;
      if (param_2 != 0x6950686e) {
        return;
      }
    }
  }
  else {
    if ((param_2 != 0x69506f64) && (param_2 != 0x69506f74)) {
      return;
    }
    uVar1 = param_5 | 4;
    if (2 < (int)param_3 + 0xef33ffdcU) {
      uVar1 = param_5;
    }
    if (param_2 == 0x69506f64) {
      param_5 = uVar1;
    }
    uVar2 = 0x10d0;
  }
  FUN_1004c5c38(*param_1,uVar2,param_3,0,param_4,0,0,param_5);
  return;
}

