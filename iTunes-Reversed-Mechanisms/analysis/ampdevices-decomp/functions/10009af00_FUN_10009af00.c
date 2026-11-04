// name: FUN_10009af00
// address: 10009af00

void FUN_10009af00(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  
  uVar1 = (uint)param_1;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006f1a70 +
                              (long)(int)((uint)(*(long *)(param_1 + 2) == 0) +
                                         ((uVar1 & 0x6b483aa) * -2 + uVar1 + 0x86b483aa ^ 0x203dea7)
                                         * 0xd90c139 + *param_1) * 4) + 0x10009af36);
                    /* WARNING: Could not recover jumptable at 0x00010009af64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (uVar1,UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006f1a70 +
                           (long)(int)((uint)(*(long *)(param_1 + 2) == 0) +
                                      ((uVar1 & 0x6b483aa) * -2 + uVar1 + 0x86b483aa ^ 0x203dea7) *
                                      0xd90c139 + *param_1) * 4),*(long *)(param_1 + 2) != 0);
  return;
}

