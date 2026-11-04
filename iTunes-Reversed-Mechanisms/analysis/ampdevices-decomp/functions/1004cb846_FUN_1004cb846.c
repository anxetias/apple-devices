// name: FUN_1004cb846
// address: 1004cb846

void FUN_1004cb846(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004cb857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x150))();
    return;
  }
  return;
}

