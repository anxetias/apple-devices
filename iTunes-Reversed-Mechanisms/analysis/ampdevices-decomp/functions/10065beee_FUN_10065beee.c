// name: FUN_10065beee
// address: 10065beee

void FUN_10065beee(long param_1,undefined4 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = FUN_10039e077(param_2,1,0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010065bf18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,uVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

