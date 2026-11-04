// name: FUN_1001c85c0
// address: 1001c85c0

void FUN_1001c85c0(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 0x10));
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1 + -1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001c85ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*param_2,*param_3,*param_4,*param_5,UNRECOVERED_JUMPTABLE);
  return;
}

