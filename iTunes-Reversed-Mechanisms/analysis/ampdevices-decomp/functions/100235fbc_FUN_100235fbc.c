// name: FUN_100235fbc
// address: 100235fbc

void FUN_100235fbc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = *param_1;
  if ((ulong)((param_1[2] - lVar1 >> 4) * -0x5555555555555555) < param_2) {
    if (0x555555555555555 < param_2) {
      FUN_1002389ea();
      *(undefined4 *)param_1 = 0;
      FUN_1002188e4(param_1 + 1);
      param_1[3] = 0;
      param_1[4] = 0;
      FUN_100205d70(param_1 + 1);
      return;
    }
    lVar2 = param_1[1];
    auVar3 = FUN_1002389fa(param_2);
    lVar2 = (lVar2 - lVar1) + auVar3._0_8_;
    lVar1 = (*param_1 - param_1[1]) + lVar2;
    FUN_100238a31(param_1 + 2,*param_1,param_1[1],lVar1);
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1[2] = auVar3._8_8_ * 0x30 + auVar3._0_8_;
    FUN_100238b48();
  }
  return;
}

