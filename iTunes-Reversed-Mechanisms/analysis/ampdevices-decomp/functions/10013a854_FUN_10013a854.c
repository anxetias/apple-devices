// name: FUN_10013a854
// address: 10013a854

void FUN_10013a854(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (plVar1 == (long *)(param_1 + 0x10)) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010013a87d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

