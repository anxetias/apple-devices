// name: FUN_1001042c0
// address: 1001042c0

void FUN_1001042c0(long param_1)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c) +
          (((uint)param_1 & 0x4ce167b8) * -2 + (uint)param_1 + 0x4ce167b8 ^ 0x4011ccdf) *
          -0x2b3eb91b;
  uVar1 = *(ulong *)(param_1 + 0x20);
  rdtsc();
                    /* WARNING: Could not recover jumptable at 0x000100104415. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f6cf0 +
                           (long)(int)(iVar2 + (uint)(*(ulong *)(param_1 + 0x18) < uVar1)) * 4) +
            0x1001043b6))
            ((&PTR_DAT_10082ee00)[iVar2] + -0xe,uVar1,&PTR_DAT_10082ee00,
             (code *)((long)*(int *)(&DAT_1006f6cf0 +
                                    (long)(int)(iVar2 + (uint)(*(ulong *)(param_1 + 0x18) < uVar1))
                                    * 4) + 0x1001043b6),uVar1);
  return;
}

