// name: FUN_10021833c
// address: 10021833c

void FUN_10021833c(long param_1,undefined8 *param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x000100218360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2,param_3,UNRECOVERED_JUMPTABLE);
  return;
}

