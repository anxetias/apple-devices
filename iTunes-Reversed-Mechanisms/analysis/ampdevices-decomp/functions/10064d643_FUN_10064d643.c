// name: FUN_10064d643
// address: 10064d643

void FUN_10064d643(long param_1,undefined4 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  char cVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  lVar3 = FUN_1004de449(param_2);
  if (lVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_1004e7efc(lVar3);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010064d677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,(int)cVar2,0,UNRECOVERED_JUMPTABLE);
  return;
}

