// name: FUN_10015005a
// address: 10015005a

void FUN_10015005a(long param_1)

{
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010015006f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x40) + 0x30))();
    return;
  }
  return;
}

