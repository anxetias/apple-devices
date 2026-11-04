// name: FUN_10053295a
// address: 10053295a

void FUN_10053295a(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010053296b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x1b8))();
    return;
  }
  return;
}

