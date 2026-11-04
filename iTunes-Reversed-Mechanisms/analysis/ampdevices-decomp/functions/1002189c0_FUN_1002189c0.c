// name: FUN_1002189c0
// address: 1002189c0

void FUN_1002189c0(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002189d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x150))();
    return;
  }
  return;
}

