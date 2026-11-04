// name: FUN_1000936b0
// address: 1000936b0

void FUN_1000936b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (((uint)param_1 & 0x1569f694) * -2 + (uint)param_1 + 0x9569f694 ^ 0xae895839) * 0x22116dab
  ;
  iVar1 = *(int *)(param_1 + 8) + uVar3;
  uVar3 = uVar3 ^ *(uint *)(param_1 + 0x24);
  rdtsc();
  uVar2 = 0;
  if (uVar3 < 0x1ddd7b2d) {
    uVar2 = 0x100000000;
  }
  lVar4 = (uVar2 | uVar3) + 0x4f0a2ca709bc5658;
                    /* WARNING: Could not recover jumptable at 0x00010009382e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e1870 +
                           (long)(int)(iVar1 + (uint)(*(ulong *)(param_1 + 0x18) <
                                                     *(long *)(param_1 + 0x10) + 0x861972612eaaf2e1U
                                                     )) * 4) + 0x1000937b5))
            (lVar4,&PTR_DAT_10082ee00,
             (code *)((long)*(int *)(&DAT_1006e1870 +
                                    (long)(int)(iVar1 + (uint)(*(ulong *)(param_1 + 0x18) <
                                                              *(long *)(param_1 + 0x10) +
                                                              0x861972612eaaf2e1U)) * 4) +
                     0x1000937b5),iVar1,
             (lVar4 - (lVar4 * 2 + 0x61eba6b1b0cc5cf6U & 0xe1bc8be5abfb6e9a)) + 0x21d4194bae63e5c8);
  return;
}

