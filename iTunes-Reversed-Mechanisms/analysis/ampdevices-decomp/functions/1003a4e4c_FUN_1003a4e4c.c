// name: FUN_1003a4e4c
// address: 1003a4e4c

void FUN_1003a4e4c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_100856840;
  plVar1 = (long *)param_1[8];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001003a4e7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

