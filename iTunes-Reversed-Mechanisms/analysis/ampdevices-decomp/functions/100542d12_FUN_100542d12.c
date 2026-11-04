// name: FUN_100542d12
// address: 100542d12

void FUN_100542d12(long param_1)

{
  if (*(long **)(param_1 + 0xfc8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100542d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xfc8) + 0x70))();
    return;
  }
  return;
}

