// name: FUN_100014c30
// address: 100014c30

void FUN_100014c30(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  uVar1 = (uVar2 & 0x6905dfba | ~(uVar2 | 0x6905dfba)) ^ 0x4f9aa3f4;
                    /* WARNING: Could not recover jumptable at 0x000100014c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&UINT_1006d12b0)
                        [(int)(param_1[1] + uVar1 * -0x65773fe7 +
                              (uint)(*param_1 + uVar1 * -0x65773fe7 + 0xafb4daf7 < 0x46))] +
            0x100014c62))
            (uVar2,(code *)((long)(int)(&UINT_1006d12b0)
                                       [(int)(param_1[1] + uVar1 * -0x65773fe7 +
                                             (uint)(*param_1 + uVar1 * -0x65773fe7 + 0xafb4daf7 <
                                                   0x46))] + 0x100014c62));
  return;
}

