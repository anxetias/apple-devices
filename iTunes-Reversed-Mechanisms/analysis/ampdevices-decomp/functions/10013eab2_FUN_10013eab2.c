// name: FUN_10013eab2
// address: 10013eab2

void FUN_10013eab2(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 >> 0x3c == 0) {
    auVar2 = FUN_100149f7a(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = auVar2._8_8_ * 0x10 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001dea6c(param_1);
}

