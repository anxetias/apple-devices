// name: FUN_1001a968e
// address: 1001a968e

void FUN_1001a968e(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  
  param_3[1] = param_1;
  param_3[2] = param_2;
  plVar1 = *(long **)(*param_3 + 0x20);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001001a96b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,param_3 + 1,param_3 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

