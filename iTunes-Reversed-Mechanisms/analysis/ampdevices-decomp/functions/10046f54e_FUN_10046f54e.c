// name: FUN_10046f54e
// address: 10046f54e

void FUN_10046f54e(void)

{
  int *piVar1;
  
  piVar1 = (int *)_CMBaseObjectGetDerivedStorage();
  if (((piVar1 != (int *)0x0) && (*piVar1 == 0x62797473)) && (*(long **)(piVar1 + 2) != (long *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00010046f571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(piVar1 + 2) + 8))();
    return;
  }
  return;
}

