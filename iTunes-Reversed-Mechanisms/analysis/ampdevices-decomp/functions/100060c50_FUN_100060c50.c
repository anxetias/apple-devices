// name: FUN_100060c50
// address: 100060c50

void FUN_100060c50(long *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (((uint)param_1 & 0x7c5e55f0) * -2 + (uint)param_1 + 0x7c5e55f0 ^ 0x71d109a9) * 0x3df53769
  ;
  iVar2 = *(int *)((long)param_1 + 0x24) + uVar1;
                    /* WARNING: Could not recover jumptable at 0x000100060ce5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e2f20 +
                           (long)(int)(iVar2 + (uint)(0x13 < (uVar1 ^ *(uint *)(param_1 + 2)) +
                                                             0xf0d33d45 &&
                                                     (*param_1 != 0 &&
                                                     (param_1[1] != 0 && param_1[3] != 0)))) * 4) +
            0x100060cc1))
            (*param_1,iVar2,
             (code *)((long)*(int *)(&DAT_1006e2f20 +
                                    (long)(int)(iVar2 + (uint)(0x13 < (uVar1 ^ *(uint *)(param_1 + 2
                                                                                        )) +
                                                                      0xf0d33d45 &&
                                                              (*param_1 != 0 &&
                                                              (param_1[1] != 0 && param_1[3] != 0)))
                                               ) * 4) + 0x100060cc1));
  return;
}

