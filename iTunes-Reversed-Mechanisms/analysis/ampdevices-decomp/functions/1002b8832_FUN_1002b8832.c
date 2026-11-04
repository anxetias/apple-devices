// name: FUN_1002b8832
// address: 1002b8832

void FUN_1002b8832(long *param_1)

{
  long *plVar1;
  
  LOCK();
  plVar1 = param_1 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xc4653600;
                    /* WARNING: Could not recover jumptable at 0x0001002b8847. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}

