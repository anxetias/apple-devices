// name: FUN_1001783fe
// address: 1001783fe

void FUN_1001783fe(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[4];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100178423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

