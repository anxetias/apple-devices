// name: FUN_10022c13c
// address: 10022c13c

void FUN_10022c13c(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 < 0x7f01fc07f01fc1) {
    auVar2 = FUN_10022bfd4(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = auVar2._8_8_ * 0x204 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10022bfc4(param_1);
}

