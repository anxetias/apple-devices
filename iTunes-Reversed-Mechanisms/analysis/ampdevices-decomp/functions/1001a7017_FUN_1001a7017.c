// name: FUN_1001a7017
// address: 1001a7017

void FUN_1001a7017(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)param_1[8];
  }
                    /* WARNING: Could not recover jumptable at 0x0001001a702c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1[7]);
  return;
}

