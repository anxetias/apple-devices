// name: FUN_1000bb210
// address: 1000bb210

void FUN_1000bb210(int *param_1)

{
  int iVar1;
  
  iVar1 = ((uint)param_1 + ((uint)param_1 & 0xda88e552) * -2 + 0xda88e552 ^ 0xae4d449) * 0x29e509e3;
                    /* WARNING: Could not recover jumptable at 0x0001000bb30a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ec7c0 +
                           (long)(int)((uint)(*(int *)((&PTR_DAT_10082ee00)
                                                       [*param_1 + iVar1 + 0x119] + -3) ==
                                             0x2c78d434) + *param_1 + iVar1) * 4) + 0x1000bb2c0))();
  return;
}

