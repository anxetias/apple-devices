// name: FUN_10008e240
// address: 10008e240

undefined8 FUN_10008e240(void)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar3 = (uint)&local_50;
  uVar1 = (uVar3 & 0x2132610) * -2 + uVar3 + 0x82132615 ^ 0xb9f388b8;
  local_44 = uVar1 * 0x22116dab;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,local_44 + 0x9843015);
  local_50 = (undefined1 *)
             (CONCAT44(local_44,uVar1 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000);
  local_44 = local_44 ^ 0x7b1aeb70;
  FUN_1000ac960(&local_50);
  switch((int)(local_48 + 0x1f4a8575) < 0x6d3373f2) {
  case false:
    iVar4 = (uint)(0x6d3373f1 < (int)(local_48 + 0x1f4a8575)) * 0x3fcc24b2;
    local_48 = ((uVar3 & 0x7b772498) * -2 + uVar3 + 0x7b77249f ^ 0x76f878c6) * 0x3df53769;
    local_44 = local_48 + 0x9852863c;
    local_48 = local_48 ^ iVar4 + 0xc033db56U;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar4 + -0x3fcc24a8] + -2))(&local_50);
    local_50 = (undefined1 *)
               (((ulong)(&stack0x619d08f57c58da37 + ((ulong)&local_50 & 0x619d08f57c58da87) * -2) ^
                0x3aa4783feb040005) * -0x295bb3 + 0x3d8c459344aa9758);
    local_48 = (int)((ulong)(&stack0x619d08f57c58da37 + ((ulong)&local_50 & 0x619d08f57c58da87) * -2
                            ) ^ 0x3aa4783feb040005) * 0x295bb3 + iVar4 + -0x3fcc24ae + -0x6d95cfce;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x000100060494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(switchD_10008e316::caseD_0 +
              *(int *)(&DAT_1006e0ed0 +
                      (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4 + -0x3fcc24ae) * 4)))
                      (switchD_10008e316::caseD_0 +
                       *(int *)(&DAT_1006e0ed0 +
                               (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4 + -0x3fcc24ae) * 4
                               ),
                       (long)*(int *)(&DAT_1006e0ed0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) +
                                                iVar4 + -0x3fcc24ae) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5a5f;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

