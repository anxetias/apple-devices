// name: FUN_1005a56c6
// address: 1005a56c6

void FUN_1005a56c6(long param_1)

{
  char cVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x15a0) != '\0') {
    cVar1 = FUN_100537ef0(0);
    lVar2 = 0x1598;
    if (cVar1 != '\0') goto LAB_1005a56ed;
  }
  lVar2 = 0x1590;
LAB_1005a56ed:
                    /* WARNING: Could not recover jumptable at 0x0001005a56fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + lVar2) + 0x58))();
  return;
}

