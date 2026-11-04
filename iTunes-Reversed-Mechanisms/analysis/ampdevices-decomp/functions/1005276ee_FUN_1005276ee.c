// name: FUN_1005276ee
// address: 1005276ee

void FUN_1005276ee(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_1008685f8;
  plVar1 = (long *)param_1[6];
  if (plVar1 == param_1 + 2) {
    lVar2 = 0x20;
  }
  else {
    lVar2 = 0x28;
    if (plVar1 == (long *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100527721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + lVar2))();
  return;
}

