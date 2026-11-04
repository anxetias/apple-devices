// name: FUN_10032b596
// address: 10032b596

void FUN_10032b596(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010032b5a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    return;
  }
  return;
}

