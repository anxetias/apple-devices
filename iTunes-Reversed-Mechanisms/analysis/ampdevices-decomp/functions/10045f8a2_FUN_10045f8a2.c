// name: FUN_10045f8a2
// address: 10045f8a2

void FUN_10045f8a2(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 < 0x3e0f83e0f83e10) {
    auVar2 = FUN_10022a8da(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = auVar2._8_8_ * 0x420 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10022a8ca(param_1);
}

