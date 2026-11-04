// name: FUN_1000913f0
// address: 1000913f0

void FUN_1000913f0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long unaff_R12;
  bool bVar5;
  undefined1 auStack_d8 [136];
  long lStack_50;
  int iStack_48;
  int iStack_44;
  undefined1 *puStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  rdtsc();
  bVar5 = *(int *)(param_2 + 4) == *(int *)(param_1 + 0x18);
  iVar2 = (uint)bVar5 * 0xbf + (uint)!bVar5 * -5;
  iVar3 = iVar2 + 9;
  switch(bVar5) {
  case true:
    uVar1 = *(int *)(param_2 + 4) + 0xf0f1c3e9;
    bVar5 = ((ulong)uVar1 ^ 0xdfcf5ff5ffceffed) + (ulong)(uVar1 & 0xffceffed) * 2 ==
            -0x2030a00a00310013;
    iVar2 = iVar3 + (uint)bVar5;
                    /* WARNING: Could not recover jumptable at 0x000100090352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_1006e7d60 + (long)iVar2 * 4) + 0x1000902e0))
              (iVar2,param_2,0x671d3a5,(uint)bVar5 * 9 + (uint)!bVar5 * 2 + iVar3);
    return;
  }
  iVar2 = *(int *)(&DAT_1006e7d60 + (long)(iVar2 + 10) * 4);
  switch(bVar5) {
  case true:
    lStack_50 = ((ulong)&stack0x7eb0097ec33e4df8 ^ 0x258979b4549e6c4a) * -0x295bb3 +
                -0x2131207a241ecaa;
    puStack_40 = auStack_d8;
    iStack_48 = (int)((ulong)&stack0x7eb0097ec33e4df8 ^ 0x258979b4549e6c4a) * 0x295bb3 +
                iVar2 + 0x93910 + -0x6d95cfce;
    FUN_1000a30e0(&DAT_1006e7d60);
    bVar5 = iStack_44 == 0x3a3402de;
    lVar4 = (long)*(int *)(unaff_R12 + (long)(int)((uint)bVar5 + iVar2 + 0x93910) * 4);
                    /* WARNING: Could not recover jumptable at 0x00010009860d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_100098543 + lVar4))(lVar4,&DAT_100098543 + lVar4,bVar5,0,!bVar5);
    return;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

