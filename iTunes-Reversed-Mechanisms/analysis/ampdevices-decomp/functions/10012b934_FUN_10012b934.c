// name: FUN_10012b934
// address: 10012b934

void FUN_10012b934(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_100205d70(param_1 + 6);
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
                    /* WARNING: Could not recover jumptable at 0x00010012b96e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

