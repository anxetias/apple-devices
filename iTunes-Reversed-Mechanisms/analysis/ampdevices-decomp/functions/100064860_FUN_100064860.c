// name: FUN_100064860
// address: 100064860

ulong FUN_100064860(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  local_48 = (uVar1 + (uVar1 & 0x193c33dd) * -2 + 0x193c33dd ^ 0x14b36f84) * 0x3df53769;
  local_44 = local_48 + 0xb16e52dd;
  local_48 = local_48 ^ 8;
  local_50 = local_d8;
  (*(code *)(PTR_LAB_100053fa1_1_10082ee50 + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x4575b5e88c5654c4 + ((ulong)&local_50 & 0x4575b5e88c565514) * -2)
                  ^ 0x1e4cc5221b0a8f96) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x4575b5e88c5654c4 + ((ulong)&local_50 & 0x4575b5e88c565514) * -2) ^
              0x1e4cc5221b0a8f96) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * -0x69fa23e7 + (uint)bVar4 * -9 + 9;
    local_48 = (int)((ulong)(&stack0x4d63932140028b72 + ((ulong)&local_50 & 0x4d63932140028bc2) * -2
                            ) ^ 0x165ae3ebd75e5140) * 0x295bb3 + iVar3 + -0x6d95cfca;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7f8dfdbfecebdf5e) + (param_1 & 0xff8dfdbfecebdf5e) * 2 +
                ((ulong)(&stack0x4d63932140028b72 + ((ulong)&local_50 & 0x4d63932140028bc2) * -2) ^
                0x165ae3ebd75e5140) * -0x295bb3 + -0x4201b82ca8414808);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar4 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e8660 + (long)(int)((uint)bVar4 + iVar3) * 4) +
                 0x100071a24);
                    /* WARNING: Could not recover jumptable at 0x000100071ad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006e8660 + (long)(int)((uint)bVar4 + iVar3) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar4,!bVar4);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

