// name: FUN_1000847e0
// address: 1000847e0

void FUN_1000847e0(int *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (((uint)param_1 & 0x2291a8ad) * -2 + (uint)param_1 + 0xa291a8ad ^ 0x7bc6e7c9) * 0x34a356b1
  ;
  uVar1 = *(int *)(*(long *)(param_1 + 2) + 4) + 0xbe6d8fbd;
  uVar4 = -uVar1;
  if ((int)uVar4 < 0) {
    uVar4 = uVar1;
  }
  uVar2 = (ulong)((uVar3 ^ param_1[4]) + 0xe64a39ea);
                    /* WARNING: Could not recover jumptable at 0x000100084869. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e0cd0 +
                           (long)(int)((uint)(uVar2 <= (ulong)uVar4 * 4 &&
                                             (ulong)uVar4 * 4 - uVar2 != 0) + *param_1 + uVar3) * 4)
            + 0x100084839))();
  return;
}

