// name: FUN_1001335b8
// address: 1001335b8

void FUN_1001335b8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 < 0x555555555555556) {
    auVar2 = FUN_100284d30(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = auVar2._8_8_ * 0x30 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012c430(param_1);
}

