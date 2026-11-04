// name: FUN_10022bda0
// address: 10022bda0

void FUN_10022bda0(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 < 0x1555555555555556) {
    auVar2 = FUN_10022bc38(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + auVar2._8_8_ * 0xc;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10022bc28(param_1);
}

