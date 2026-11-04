// name: FUN_100456e9e
// address: 100456e9e

void FUN_100456e9e(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100456eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return;
  }
  return;
}

