// name: FUN_1000586f0
// address: 1000586f0

void FUN_1000586f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((uint)param_1 & 0x5c09f4e5) * -2 + (uint)param_1 + 0x5c09f4e5 ^ 0x50f95f82;
  uVar2 = uVar1 * 0x2b3eb91b ^ *param_1;
  rdtsc();
                    /* WARNING: Could not recover jumptable at 0x0001000587de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006d60d0 +
                           (long)(int)(param_1[1] + uVar1 * -0x2b3eb91b +
                                      (uint)(uVar2 == 0x35a29dc3)) * 4) + 0x1000587b2))
            (uVar2,((ulong)&stack0x59a8cfc89c0d838a % 5) * 0x10,
             (code *)((long)*(int *)(&DAT_1006d60d0 +
                                    (long)(int)(param_1[1] + uVar1 * -0x2b3eb91b +
                                               (uint)(uVar2 == 0x35a29dc3)) * 4) + 0x1000587b2));
  return;
}

