// name: FUN_1002ecb18
// address: 1002ecb18

void FUN_1002ecb18(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001002ecb29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}

