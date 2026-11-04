// name: FUN_100283f60
// address: 100283f60

void FUN_100283f60(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 >> 0x3a == 0) {
    auVar2 = FUN_100283ef2(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = auVar2._8_8_ * 0x40 + lVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100283ee2(param_1);
}

