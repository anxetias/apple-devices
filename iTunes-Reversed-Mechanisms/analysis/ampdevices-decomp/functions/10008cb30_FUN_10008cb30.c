// name: FUN_10008cb30
// address: 10008cb30

void FUN_10008cb30(long *param_1)

{
  long lVar1;
  uint uVar2;
  
  uVar2 = (((uint)param_1 & 0x2030b742) * -2 + (uint)param_1 + 0xa030b742 ^ 0xd1dfd55b) * 0x540651b
          ^ *(uint *)(param_1 + 1);
  lVar1 = *param_1;
  (*(code *)((&PTR_DAT_10082ee00)[(int)(uVar2 + 0xb5)] + -3))
            ((&PTR_DAT_10082ee00)[(int)(uVar2 + 0xd8)] + -2,FUN_1000b32a0);
                    /* WARNING: Could not recover jumptable at 0x00010008cbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e34d0 + (long)(int)((lVar1 == 0) + uVar2) * 4) + 0x10008cb92))
            ();
  return;
}

