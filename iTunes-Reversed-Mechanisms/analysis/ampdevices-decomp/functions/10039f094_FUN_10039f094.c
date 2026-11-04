// name: FUN_10039f094
// address: 10039f094

void FUN_10039f094(long param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010039f0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (plVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             UNRECOVERED_JUMPTABLE);
  return;
}

