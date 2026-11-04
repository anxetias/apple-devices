// name: FUN_100655079
// address: 100655079

void FUN_100655079(long param_1,undefined4 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  cVar2 = FUN_1005044f5(param_2);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010065509c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,(int)cVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

