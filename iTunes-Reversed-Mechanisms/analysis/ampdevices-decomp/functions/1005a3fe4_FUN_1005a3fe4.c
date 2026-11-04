// name: FUN_1005a3fe4
// address: 1005a3fe4

void FUN_1005a3fe4(long param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x15a0) != '\0') {
    cVar1 = FUN_100537ef0(0);
    if (cVar1 != '\0') {
      (**(code **)(**(long **)(param_1 + 0x1598) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001005a401e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1590) + 0x10))();
  return;
}

