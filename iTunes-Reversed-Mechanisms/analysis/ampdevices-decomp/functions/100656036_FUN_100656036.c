// name: FUN_100656036
// address: 100656036

void FUN_100656036(long param_1,undefined4 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  cVar2 = FUN_100504663(param_2);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100656059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,(int)cVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

