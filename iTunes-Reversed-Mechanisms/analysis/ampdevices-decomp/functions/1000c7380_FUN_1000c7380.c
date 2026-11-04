// name: FUN_1000c7380
// address: 1000c7380

void FUN_1000c7380(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  
  uVar1 = (((uint)param_1 & 0x72f98fee) * -2 + (uint)param_1 + 0x72f98fee ^ 0xa295bef5) * 0x29e509e3
  ;
  uVar2 = uVar1 ^ *(uint *)(param_1 + 0x10);
  uVar4 = uVar2 & 0x3f000000 ^ 0x21000000;
  uVar4 = (uVar4 - (uVar4 * 2 & 0x12000000)) + 0x9491db4 ^ 0x6fbf14;
  bVar3 = uVar4 - (uVar4 * 2 & 0xe054100) == 0x292161a0 || (~uVar2 & 0x30000000) == 0;
                    /* WARNING: Could not recover jumptable at 0x0001000c7452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ea8d0 +
                           (long)(int)(*(int *)(param_1 + 0x14) + uVar1 + (uint)bVar3) * 4) +
            0x1000c742f))
            ((code *)((long)*(int *)(&DAT_1006ea8d0 +
                                    (long)(int)(*(int *)(param_1 + 0x14) + uVar1 + (uint)bVar3) * 4)
                     + 0x1000c742f),bVar3,0xc5cb5962);
  return;
}

