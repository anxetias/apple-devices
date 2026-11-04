// name: FUN_1001bd55c
// address: 1001bd55c

void FUN_1001bd55c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 >> 0x3e == 0) {
    auVar2 = FUN_1001b5f6e(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + auVar2._8_8_ * 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001bd596(param_1);
}

