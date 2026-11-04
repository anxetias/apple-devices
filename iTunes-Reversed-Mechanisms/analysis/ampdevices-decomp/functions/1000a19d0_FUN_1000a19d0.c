// name: FUN_1000a19d0
// address: 1000a19d0

ulong FUN_1000a19d0(ulong param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar2 = (uint)&local_50;
  local_48 = (uVar2 + (uVar2 & 0x4b757508) * -2 + 0xcb75750a ^ 0xc6fa2953) * 0x3df53769;
  local_44 = local_48 + 0x4faa6e31;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)(PTR_LAB_100053fa1_1_10082ee50 + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6d5eed8c35e53698 + ((ulong)&local_50 & 0x6d5eed8c35e536e8) * -2) ^
              0x36679d46a2b9ec6a) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x6d5eed8c35e53698 + ((ulong)&local_50 & 0x6d5eed8c35e536e8) * -2)
                  ^ 0x36679d46a2b9ec6a) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * -0x3daa8528 + (uint)bVar4 * 2;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbddc5f9b56ae97de) + (param_1 & 0x3ddc5f9b56ae97de) * 2 +
                ((ulong)(&stack0x57b60bbef17f69f8 + ((ulong)&local_50 & 0x57b60bbef17f6a48) * -2) ^
                0xc8f7b746623b0ca) * -0x295bb3 + 0x7fafe5f7edfbff78);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x57b60bbef17f69f8 + ((ulong)&local_50 & 0x57b60bbef17f6a48) * -2
                            ) ^ 0xc8f7b746623b0ca) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_1000a1b68::switchdataD_1006f2840)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar3)] + 0x1000be919);
                    /* WARNING: Could not recover jumptable at 0x0001000be9d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_1000a1b68::switchdataD_1006f2840)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar3)],0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_1000a1b68::switchdataD_1006f2840)[bVar4] + 0x1000a1b44,
                    (long)(int)(&switchD_1000a1b68::switchdataD_1006f2840)[bVar4],0);
}

