// name: FUN_1005b7834
// address: 1005b7834

void FUN_1005b7834(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005b7845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    return;
  }
  return;
}

