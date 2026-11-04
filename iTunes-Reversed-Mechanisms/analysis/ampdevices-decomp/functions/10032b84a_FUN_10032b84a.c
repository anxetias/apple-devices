// name: FUN_10032b84a
// address: 10032b84a

void FUN_10032b84a(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010032b85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    return;
  }
  return;
}

