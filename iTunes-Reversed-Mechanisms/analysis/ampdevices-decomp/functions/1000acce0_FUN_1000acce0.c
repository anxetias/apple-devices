// name: FUN_1000acce0
// address: 1000acce0

void FUN_1000acce0(long *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*param_1 + 4) + -0x41927043;
  iVar2 = -iVar1;
  if (iVar2 < 0) {
    iVar2 = iVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001000acdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f3970 +
                           (long)(int)((((uint)param_1 & 0x66007f28) * -2 + (uint)param_1 +
                                        0x66007f28 ^ 0x6af0d44f) * 0x2b3eb91b + (int)param_1[1]) * 4
                           ) + 0x1000acd8e))
            ((code *)((long)*(int *)(&DAT_1006f3970 +
                                    (long)(int)((((uint)param_1 & 0x66007f28) * -2 + (uint)param_1 +
                                                 0x66007f28 ^ 0x6af0d44f) * 0x2b3eb91b +
                                               (int)param_1[1]) * 4) + 0x1000acd8e),
             **(undefined4 **)(*param_1 + 8),param_1[2],1,iVar2 << 6,&LAB_1000c3dc4,param_1[2]);
  return;
}

