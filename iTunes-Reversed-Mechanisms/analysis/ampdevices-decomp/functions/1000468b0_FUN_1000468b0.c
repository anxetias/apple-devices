// name: FUN_1000468b0
// address: 1000468b0

undefined8 FUN_1000468b0(void)

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
  uVar1 = (uVar5 & 0x1173ef10) * -2 + uVar5 + 0x1173ef13 ^ 0x2a9341be;
  uVar2 = uVar1 * 0x22116dab;
  local_44 = uVar2 ^ 0x7b1aeb70;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar2 + 0x9843015);
  local_50 = (undefined1 *)(CONCAT44(uVar2,uVar1 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000);
  FUN_1000ac960(&local_50);
  iVar3 = local_48 + -0x1a4ee085;
  switch(iVar3 < 0x339a0df8) {
  case false:
    iVar3 = (uint)(iVar3 < 0x339a0df8) * 0xe9adbbd + (uint)(0x339a0df7 < iVar3) * -8;
    local_44 = ((uVar5 & 0x3a574578) * -2 + uVar5 + 0x3a57457c ^ 0x37d81925) * 0x3df53769;
    local_48 = iVar3 + 0x10U ^ local_44;
    local_44 = local_44 + 0x3e6a777e;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar3 + 0x12] + -2))(&local_50);
    local_50 = (undefined1 *)
               (((ulong)(&stack0x5f6606082fc26afd + ((ulong)&local_50 & 0x5f6606082fc26b4d) * -2) ^
                0x45f76c2b89eb1cf) * -0x295bb3 + 0x3d8c459344aa9758);
    local_48 = (int)((ulong)(&stack0x5f6606082fc26afd + ((ulong)&local_50 & 0x5f6606082fc26b4d) * -2
                            ) ^ 0x45f76c2b89eb1cf) * 0x295bb3 + iVar3 + 10 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x00010004fd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(switchD_100046977::caseD_0 +
              *(int *)(&DAT_1006d7a20 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 10) * 4
                      )))(switchD_100046977::caseD_0 +
                          *(int *)(&DAT_1006d7a20 +
                                  (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 10) * 4),
                          (long)*(int *)(&DAT_1006d7a20 +
                                        (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3 + 10) * 4
                                        ),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5a5f;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

