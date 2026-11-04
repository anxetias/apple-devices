// name: FUN_10008cde0
// address: 10008cde0

void FUN_10008cde0(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (((uint)param_1 & 0x5d8050f0) * -2 + (uint)param_1 + 0x5d8050f0 ^ 0x93a31725) * 0x4516280f
  ;
  iVar1 = *param_1;
  lVar2 = *(long *)(param_1 + 2);
  (*(code *)((&PTR_DAT_10082ee00)[iVar1 + iVar3 + 0xb2] + -3))
            ((&PTR_DAT_10082ee00)[iVar3 + iVar1 + 0xd5] + -2,FUN_1000b32a0);
                    /* WARNING: Could not recover jumptable at 0x00010008ce8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e3d50 + (long)(int)((uint)(lVar2 == 0) + iVar1 + iVar3) * 4) +
            0x10008ce4a))();
  return;
}

