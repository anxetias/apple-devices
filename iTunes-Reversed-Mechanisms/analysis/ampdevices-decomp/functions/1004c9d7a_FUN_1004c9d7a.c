// name: FUN_1004c9d7a
// address: 1004c9d7a

void FUN_1004c9d7a(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004c9d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return;
  }
  return;
}

