// name: FUN_1005311b6
// address: 1005311b6

void FUN_1005311b6(undefined8 param_1)

{
  if (DAT_1008c7810 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005311d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_1008c7810 + 0x18))(DAT_1008c7810,param_1);
    return;
  }
  return;
}

