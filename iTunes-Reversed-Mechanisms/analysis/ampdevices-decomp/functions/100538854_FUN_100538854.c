// name: FUN_100538854
// address: 100538854

void FUN_100538854(void)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_1005cea50();
  (**(code **)(*plVar1 + 0x38))(plVar1,0);
  plVar1 = (long *)FUN_1005cea50();
                    /* WARNING: Could not recover jumptable at 0x000100538874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x58))(plVar1);
  return;
}

