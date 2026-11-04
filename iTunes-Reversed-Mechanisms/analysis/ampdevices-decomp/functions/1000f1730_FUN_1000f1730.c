// name: FUN_1000f1730
// address: 1000f1730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000f1730(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_R9;
  
  iVar2 = *param_1 +
          (((uint)param_1 & 0x5b0ea5fd) * -2 + (uint)param_1 + 0x5b0ea5fd ^ 0x17d9b943) * -0xca815c1
  ;
  lVar1 = *(long *)(param_1 + 4);
                    /* WARNING: Could not recover jumptable at 0x0001000f17c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f6790 + (long)(int)((uint)(lVar1 == 0) + iVar2) * 4) +
            0x1000f1799))
            (lVar1,(code *)((long)*(int *)(&DAT_1006f6790 +
                                          (long)(int)((uint)(lVar1 == 0) + iVar2) * 4) + 0x1000f1799
                           ),0xffff586c,lVar1 != 0,iVar2,in_R9,param_1);
  return;
}

