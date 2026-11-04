// name: FUN_1000f5aa0
// address: 1000f5aa0

ulong FUN_1000f5aa0(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x4d387428) * -2 + uVar1 + 0xcd38742c ^ 0xc0b72875;
  local_44 = uVar1 * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 - 0xeb0d90;
  bVar3 = (char)uVar1 * '_';
  bVar4 = bVar3 + 0x69;
  if (bVar3 < 0x97) {
    bVar4 = bVar3;
  }
  uVar1 = (uint)((byte)(bVar4 * 'l' + 0xf) >> 2 & 7 | 8) * -0x1b & 0xffff;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((char)(uVar1 >> 8) >> 1) + (char)(uVar1 >> 0xf)) >> 1 & 0x7c) +
                           0xb4 | 0x1d) - 0xb3)] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x4ce7b37165bd4ed7 + ((ulong)&local_50 & 0x4ce7b37165bd4f27) * -2) ^
              0x17dec3bbf2e195a5) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x4ce7b37165bd4ed7 + ((ulong)&local_50 & 0x4ce7b37165bd4f27) * -2)
                  ^ 0x17dec3bbf2e195a5) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * -0x4c246457 + (uint)bVar6 * -5 + 7;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xfdbfdd976eaef7f6) + (param_1 & 0xfdbfdd976eaef7f6) * 2 +
                ((ulong)(&stack0x78e1cf7f09add5ca + ((ulong)&local_50 & 0x78e1cf7f09add61a) * -2) ^
                0x23d8bfb59ef10c98) * -0x295bb3 + 0x3fcc67fbd5fb9f60);
    local_48 = (int)((ulong)(&stack0x78e1cf7f09add5ca + ((ulong)&local_50 & 0x78e1cf7f09add61a) * -2
                            ) ^ 0x23d8bfb59ef10c98) * 0x295bb3 + iVar5 + -0x6d95cfcc;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fbab0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000f1ffe);
                    /* WARNING: Could not recover jumptable at 0x0001000f20b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006fbab0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

