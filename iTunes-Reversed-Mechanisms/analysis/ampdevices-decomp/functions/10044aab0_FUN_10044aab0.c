// name: FUN_10044aab0
// address: 10044aab0

void FUN_10044aab0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044aac1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x50))();
    return;
  }
  return;
}

