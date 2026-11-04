// name: FUN_1000c6a20
// address: 1000c6a20

void FUN_1000c6a20(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  iVar1 = *(int *)(param_1 + 8) +
          ((uVar2 & 0x44665de8) * -2 + uVar2 + 0xc4665de8 ^ 0xb5893ff1) * -0x540651b;
                    /* WARNING: Could not recover jumptable at 0x0001000c6a91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006ea640 +
                           (long)(int)((uint)(*(int *)(*(long *)(param_1 + 0x10) + 4) == 0x41927043)
                                      + iVar1) * 4) + 0x1000c6a67))
            (uVar2,0,iVar1,
             (code *)((long)*(int *)(&DAT_1006ea640 +
                                    (long)(int)((uint)(*(int *)(*(long *)(param_1 + 0x10) + 4) ==
                                                      0x41927043) + iVar1) * 4) + 0x1000c6a67));
  return;
}

