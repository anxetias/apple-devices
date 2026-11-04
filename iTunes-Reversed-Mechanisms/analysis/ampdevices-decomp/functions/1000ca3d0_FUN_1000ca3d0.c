// name: FUN_1000ca3d0
// address: 1000ca3d0

undefined8 FUN_1000ca3d0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar5 = (uint)&local_50;
  uVar1 = (uVar5 & 0x201d3bb8) * -2 + uVar5 + 0x201d3bbc ^ 0x1bfd9511;
  uVar2 = uVar1 * 0x22116dab;
  local_50 = (undefined1 *)(CONCAT44(uVar2,uVar1 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000);
  local_44 = uVar2 ^ 0x7b1aeb70;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar2 + 0x9843015);
  FUN_1000ac960(&local_50);
  iVar3 = local_48 + 0x134edfbc;
  switch(iVar3 < 0x6137ce39) {
  case false:
    iVar3 = (uint)(iVar3 < 0x6137ce39) * 0x78210116 + (uint)(0x6137ce38 < iVar3) * -6;
    local_44 = ((uVar5 & 0x2f617bc8) * -2 + uVar5 + 0xaf617bce ^ 0xa2ee2797) * 0x3df53769;
    local_48 = iVar3 + 0xeU ^ local_44;
    local_44 = local_44 + 0xf9c71ae0;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar3 + 0x10] + -2))(&local_50);
    local_48 = (int)((ulong)(&stack0x4ce5f7800b03fa0e + ((ulong)&local_50 & 0x4ce5f7800b03fa5e) * -2
                            ) ^ 0x17dc874a9c5f20dc) * 0x295bb3 + iVar3 + 6 + -0x6d95cfca;
    local_50 = (undefined1 *)
               (((ulong)(&stack0x4ce5f7800b03fa0e + ((ulong)&local_50 & 0x4ce5f7800b03fa5e) * -2) ^
                0x17dc874a9c5f20dc) * -0x295bb3 + 0x3d8c459344aa9759);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x0001000c36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(switchD_1000ca49d::caseD_0 +
              *(int *)(&DAT_1006ee230 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 6) * 4)
              ))(switchD_1000ca49d::caseD_0 +
                 *(int *)(&DAT_1006ee230 +
                         (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 6) * 4),
                 (long)*(int *)(&DAT_1006ee230 +
                               (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 6) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5a5e;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

