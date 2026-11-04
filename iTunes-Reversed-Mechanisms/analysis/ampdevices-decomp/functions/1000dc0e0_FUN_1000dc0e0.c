// name: FUN_1000dc0e0
// address: 1000dc0e0

undefined8 FUN_1000dc0e0(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  ulong local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x63f7098) * -2 + uVar1 + 0x63f7098 ^ 0x3ddfde35;
  uVar2 = uVar1 * 0x22116dab;
  local_44 = uVar2 ^ 0x7b1aeb73;
  local_50 = CONCAT44(uVar2,uVar1 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar2 + 0x984301c);
  FUN_1000ac960(&local_50);
  switch(local_48 + -0x51f7463 < 0x48c97a1a) {
  case false:
    iVar4 = (uint)(0x48c97a19 < local_48 + -0x51f7463) * 0x12e047d5 + -0x12e047cd;
    local_50 = ((ulong)(&stack0x535417f1cfcbbe41 + ((ulong)&local_50 & 0x535417f1cfcbbe91) * -2) ^
               0x86d673b58976413) * -0x295bb3 + 0x3d8c459344aa9757;
    local_48 = (int)((ulong)(&stack0x535417f1cfcbbe41 + ((ulong)&local_50 & 0x535417f1cfcbbe91) * -2
                            ) ^ 0x86d673b58976413) * 0x295bb3 + iVar4 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar5 = local_44 == 0x3a3402de;
                    /* WARNING: Could not recover jumptable at 0x0001000d8814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(switchD_1000dc1b8::caseD_0 +
              *(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar5 + iVar4) * 4)))
                      ((long)*(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar5 + iVar4) * 4),
                       switchD_1000dc1b8::caseD_0 +
                       *(int *)(&DAT_1006f7200 + (long)(int)((uint)bVar5 + iVar4) * 4),0,bVar5,
                       !bVar5);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5a5f;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

