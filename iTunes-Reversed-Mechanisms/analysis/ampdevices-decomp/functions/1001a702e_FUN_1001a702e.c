// name: FUN_1001a702e
// address: 1001a702e

void FUN_1001a702e(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001a7044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x38));
  return;
}

