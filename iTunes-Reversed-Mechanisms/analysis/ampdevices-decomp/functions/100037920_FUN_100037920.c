// name: FUN_100037920
// address: 100037920

void FUN_100037920(long param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)param_1;
  iVar1 = ((uVar2 & 0x7c424cd9) * -2 + uVar2 + 0xfc424cd9 ^ 0x5c8e0ae3) * 0x66d92ebf;
  bVar3 = iVar1 + *(int *)(param_1 + 0xc) + 0x50248f41U < 0x80000001;
  UNRECOVERED_JUMPTABLE =
       (code *)((long)*(int *)(&DAT_1006d4b90 +
                              (long)(int)(*(int *)(param_1 + 8) + iVar1 + (uint)!bVar3) * 4) +
               0x100037969);
                    /* WARNING: Could not recover jumptable at 0x00010003799e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (uVar2,bVar3 * '\x03',UNRECOVERED_JUMPTABLE,
             (long)*(int *)(&DAT_1006d4b90 +
                           (long)(int)(*(int *)(param_1 + 8) + iVar1 + (uint)!bVar3) * 4),
             *(int *)(param_1 + 0xc) + iVar1);
  return;
}

