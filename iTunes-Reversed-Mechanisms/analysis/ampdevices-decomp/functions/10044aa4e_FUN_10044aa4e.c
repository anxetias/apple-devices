// name: FUN_10044aa4e
// address: 10044aa4e

void FUN_10044aa4e(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010044aa5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x78))();
    return;
  }
  return;
}

