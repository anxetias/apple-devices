// name: FUN_10065132d
// address: 10065132d

void FUN_10065132d(long param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  
  cVar1 = FUN_1004f517b(param_2,*(undefined8 *)(param_1 + 0x20));
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100651356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long *)(param_1 + 0x28),(int)cVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

