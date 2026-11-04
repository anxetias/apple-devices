// name: FUN_10049f2a8
// address: 10049f2a8

void FUN_10049f2a8(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010049f2b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x290))();
    return;
  }
  return;
}

