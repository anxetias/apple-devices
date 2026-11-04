// name: FUN_100540d46
// address: 100540d46

void FUN_100540d46(long *param_1,undefined4 param_2)

{
  long *plVar1;
  int iVar2;
  
  iVar2 = *(int *)((long)param_1 + 0xfdc) + -1;
  *(int *)((long)param_1 + 0xfdc) = iVar2;
  if ((*(char *)((long)param_1 + 0xfd9) == '\x01') &&
     (plVar1 = (long *)param_1[0x1f9], plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
    iVar2 = *(int *)((long)param_1 + 0xfdc);
  }
  if (0 < iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100540da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x238))(param_1,param_2);
  return;
}

