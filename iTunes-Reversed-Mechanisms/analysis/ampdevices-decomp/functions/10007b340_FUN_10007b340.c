// name: FUN_10007b340
// address: 10007b340

void FUN_10007b340(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (((uint)param_1 & 0x1d1c9032) * -2 + (uint)param_1 + 0x9d1c9032 ^ 0x533fd7e7) * 0x4516280f
  ;
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = (*(code *)((&PTR_DAT_10082ee00)[iVar1 + iVar2 + 0xe3] + -3))
                    ((&PTR_DAT_10082ee00)[iVar2 + iVar1 + 0x53] + -5,5);
                    /* WARNING: Could not recover jumptable at 0x00010007b3d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e5180 + (long)(int)((uint)(lVar3 == 0) + iVar1 + iVar2) * 4) +
            0x10007b3a6))();
  return;
}

