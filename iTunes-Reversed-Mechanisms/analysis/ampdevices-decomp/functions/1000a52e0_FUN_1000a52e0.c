// name: FUN_1000a52e0
// address: 1000a52e0

undefined8 FUN_1000a52e0(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar6 = (uint)&local_50;
  uVar1 = (uVar6 & 0x6864da20) * -2 + uVar6 + 0xe864da27 ^ 0xd384748a;
  uVar2 = uVar1 * 0x22116dab;
  local_44 = uVar2 ^ 0x7b1aeb70;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar2 + 0x9843015);
  local_50 = (undefined1 *)(CONCAT44(uVar2,uVar1 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000);
  FUN_1000ac960(&local_50);
  switch((int)(local_48 + -0x2d14f212) < 0x20d3fc6b) {
  case false:
    iVar4 = (uint)(0x20d3fc6a < (int)(local_48 + -0x2d14f212)) * 0x71cc5447;
    iVar5 = iVar4 + -0x71cc543d;
    local_44 = ((uVar6 & 0x2535ed20) * -2 + uVar6 + 0x2535ed26 ^ 0x28bab17f) * 0x3df53769;
    local_48 = iVar4 + 0x8e33abc1U ^ local_44;
    local_44 = local_44 + 0x46905349;
    local_50 = local_d8;
    (*(code *)((&PTR_DAT_10082ee00)[iVar5] + -2))(&local_50);
    local_50 = (undefined1 *)
               (((ulong)(&stack0x45949bc7daef6b8f + ((ulong)&local_50 & 0x45949bc7daef6bdf) * -2) ^
                0x1eadeb0d4db3b15d) * -0x295bb3 + 0x3d8c459344aa9757);
    local_48 = (int)((ulong)(&stack0x45949bc7daef6b8f + ((ulong)&local_50 & 0x45949bc7daef6bdf) * -2
                            ) ^ 0x1eadeb0d4db3b15d) * 0x295bb3 + iVar5 + -0x6d95cfd4;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x0001000aacd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(switchD_1000a53b7::caseD_0 +
              (int)(&switchD_1000a53b7::switchdataD_1006f3a80)
                   [(int)((uint)(local_44 == 0x3a3402de) + iVar5)]))
                      (switchD_1000a53b7::caseD_0 +
                       (int)(&switchD_1000a53b7::switchdataD_1006f3a80)
                            [(int)((uint)(local_44 == 0x3a3402de) + iVar5)],
                       (long)(int)(&switchD_1000a53b7::switchdataD_1006f3a80)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar5)],0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0xffff5a5f;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

