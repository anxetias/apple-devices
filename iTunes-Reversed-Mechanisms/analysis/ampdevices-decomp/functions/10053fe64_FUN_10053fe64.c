// name: FUN_10053fe64
// address: 10053fe64

void FUN_10053fe64(long *param_1,uint param_2)

{
  (**(code **)(*param_1 + 0x80))();
  (**(code **)(*param_1 + 0x98))(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1);
  if ((param_2 >> 10 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010053fea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

