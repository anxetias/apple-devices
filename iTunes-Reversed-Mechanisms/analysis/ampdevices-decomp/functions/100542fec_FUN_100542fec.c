// name: FUN_100542fec
// address: 100542fec

void FUN_100542fec(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100542ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x120))();
    return;
  }
  return;
}

