// name: FUN_1000998f0
// address: 1000998f0

void FUN_1000998f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)param_1;
  uVar1 = (uVar3 & 0x3d13837a) * -2 + uVar3 + 0x3d13837a ^ 0xe444cc1e;
  uVar2 = *(int *)(param_1 + 0x18) + uVar1 * 0x34a356b1 + 0x86db61c1;
                    /* WARNING: Could not recover jumptable at 0x00010009995b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f46d0 +
                           (long)(int)((*(int *)(param_1 + 8) + uVar1 * -0x34a356b1 + 1) -
                                      (uint)(uVar2 < 0x101)) * 4) + 0x10009992e))
            (uVar3,0xc91f8a0,CONCAT31((int3)(uVar2 >> 8),uVar2 < 0x101),0);
  return;
}

