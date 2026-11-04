// name: FUN_1000c9dc0
// address: 1000c9dc0

void FUN_1000c9dc0(long param_1)

{
  uint uVar1;
  
  uVar1 = (((uint)param_1 & 0x165eff15) * -2 + (uint)param_1 + 0x965eff15 ^ 0xadbe51b8) * 0x22116dab
  ;
                    /* WARNING: Could not recover jumptable at 0x0001000c9f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f1bc0 +
                           (long)(int)((uint)(uVar1 + *(int *)(param_1 + 0x48) == 0x65e164c8 ||
                                             *(long *)(param_1 + 0x10) == 0x7aef05deffe51d42 &&
                                             *(long *)(param_1 + 0x20) == 0) +
                                      (*(uint *)(param_1 + 0x38) ^ uVar1)) * 4) + 0x1000c9ee4))
            (0xc5cb5907,
             (code *)((long)*(int *)(&DAT_1006f1bc0 +
                                    (long)(int)((uint)(uVar1 + *(int *)(param_1 + 0x48) ==
                                                       0x65e164c8 ||
                                                      *(long *)(param_1 + 0x10) ==
                                                      0x7aef05deffe51d42 &&
                                                      *(long *)(param_1 + 0x20) == 0) +
                                               (*(uint *)(param_1 + 0x38) ^ uVar1)) * 4) +
                     0x1000c9ee4));
  return;
}

