// name: FUN_1005f3520
// address: 1005f3520

void FUN_1005f3520(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    param_3 = *plVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + param_3 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005f3544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined4 *)(param_1 + 0x20),param_3,UNRECOVERED_JUMPTABLE);
  return;
}

