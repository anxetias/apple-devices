// name: FUN_1001e1abc
// address: 1001e1abc

void FUN_1001e1abc(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 / 0xe10 + (param_1 / 0x15180) * -0x18;
  if ((param_3 & 1) == 0) {
    uVar1 = param_1 / 0xe10;
  }
  uVar2 = -(param_3 & 1) & param_1 / 0x15180;
  if ((param_3 & 2) != 0) {
    FUN_1001e279d(param_2,uVar2,uVar1);
    return;
  }
  FUN_1001e2862(param_2,uVar2,uVar1,
                (uint)(0x1d < param_1 % 0x3c & (byte)((param_3 & 2) >> 1)) +
                param_1 / 0x3c + (param_1 / 0xe10) * -0x3c);
  return;
}

