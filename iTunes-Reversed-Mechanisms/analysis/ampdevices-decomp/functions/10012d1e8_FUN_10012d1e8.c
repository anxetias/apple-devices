// name: FUN_10012d1e8
// address: 10012d1e8

void FUN_10012d1e8(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_100205d70(param_1 + 0x40);
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
                    /* WARNING: Could not recover jumptable at 0x00010012d223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

