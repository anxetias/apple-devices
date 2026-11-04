// name: FUN_1000dcbd0
// address: 1000dcbd0

void FUN_1000dcbd0(long param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = (uint)param_1 + ((uint)param_1 & 0x23fb87a) * -2 + 0x23fb87a ^ 0xf035b767;
  bVar2 = *(int *)(param_1 + 0x10) + uVar1 * -0x54361bb5 == 0x2e95057f;
                    /* WARNING: Could not recover jumptable at 0x0001000dcc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f52a0 +
                           (long)(int)(*(int *)(param_1 + 0xc) + uVar1 * -0x54361bb5 + (uint)bVar2)
                           * 4) + 0x1000dcc13))
            (param_1,bVar2,
             (code *)((long)*(int *)(&DAT_1006f52a0 +
                                    (long)(int)(*(int *)(param_1 + 0xc) + uVar1 * -0x54361bb5 +
                                               (uint)bVar2) * 4) + 0x1000dcc13));
  return;
}

