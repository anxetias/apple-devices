// name: FUN_100197fda
// address: 100197fda

void FUN_100197fda(long *param_1)

{
  long *plVar1;
  
  LOCK();
  plVar1 = param_1 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)*plVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = 0xc4653600;
                    /* WARNING: Could not recover jumptable at 0x000100197fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}

