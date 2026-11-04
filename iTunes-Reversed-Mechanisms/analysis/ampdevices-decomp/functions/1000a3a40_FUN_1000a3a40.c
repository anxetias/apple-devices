// name: FUN_1000a3a40
// address: 1000a3a40

void FUN_1000a3a40(long *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  iVar1 = ((uVar2 & 0x6576eb06) * -2 + uVar2 + 0x6576eb06 ^ 0x69864061) * 0x2b3eb91b +
          (int)param_1[5] +
          (uint)((*(int *)(param_1[3] + 4) + -0x41927043) * (*(int *)(*param_1 + 4) + -0x41927043)
                == 0);
                    /* WARNING: Could not recover jumptable at 0x0001000a3b41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ec920 + (long)iVar1 * 4) + 0x1000a3b0d))
            (uVar2,iVar1,(code *)((long)*(int *)(&DAT_1006ec920 + (long)iVar1 * 4) + 0x1000a3b0d));
  return;
}

