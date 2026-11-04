// name: FUN_100133f06
// address: 100133f06

void FUN_100133f06(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_100205d70(param_1 + 10);
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
                    /* WARNING: Could not recover jumptable at 0x000100133f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

