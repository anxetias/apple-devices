// name: FUN_100283ea8
// address: 100283ea8

void FUN_100283ea8(long *param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_2 >> 0x3d == 0) {
    auVar2 = FUN_100249b6c(param_1 + 2);
    lVar1 = auVar2._0_8_;
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + auVar2._8_8_ * 8;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100283ee2(param_1);
}

