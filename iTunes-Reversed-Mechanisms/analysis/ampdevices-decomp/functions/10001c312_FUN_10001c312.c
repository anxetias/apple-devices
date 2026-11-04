// name: FUN_10001c312
// address: 10001c312

void FUN_10001c312(undefined8 param_1)

{
  int in_EAX;
  uint unaff_EBX;
  long in_R11;
  
                    /* WARNING: Could not recover jumptable at 0x00010001c355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_10001c305 +
            *(int *)(in_R11 + (long)(int)((unaff_EBX - 0x8b82c6) +
                                         (uint)(in_EAX < (int)(((unaff_EBX ^ 0x8b830f) * 0x29 ^
                                                               0x5aed975c) +
                                                              (unaff_EBX - 0x8b82c5 | 3)))) * 4)))
            (param_1,&DAT_10001c305 +
                     *(int *)(in_R11 + (long)(int)((unaff_EBX - 0x8b82c6) +
                                                  (uint)(in_EAX < (int)(((unaff_EBX ^ 0x8b830f) *
                                                                         0x29 ^ 0x5aed975c) +
                                                                       (unaff_EBX - 0x8b82c5 | 3))))
                                       * 4));
  return;
}

