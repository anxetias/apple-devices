// name: FUN_10009b1b0
// address: 10009b1b0

ulong FUN_10009b1b0(ulong param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  bool bVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0f43c81b952ad8c7 + ((ulong)&local_50 & 0xf43c81b952ad917) * -2) ^
          0x1c2cac498a5854e) * 0x76ff3f0;
  iVar5 = (int)((ulong)(&stack0x0f43c81b952ad8c7 + ((ulong)&local_50 & 0xf43c81b952ad917) * -2) ^
               0x1c2cac498a5854e) * 0x36854379;
  iVar6 = (int)lVar2;
  local_44 = iVar5 + iVar6 + 0xd0dd0b92;
  local_48 = iVar6 + iVar5 ^ 8;
  cVar1 = (char)lVar2;
  cVar4 = (char)((uint)(cVar1 * -0x45) >> 8) + cVar1;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((0xa9 < (byte)(cVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xb) ^ 0xb9U) %
                            0x56) >> 4 | 0xfd) + 0x65) - 0x58] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x68ef8262c92d7be8 + ((ulong)&local_50 & 0x68ef8262c92d7c38) * -2) ^
              0x33d6f2a85e71a6ba) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x68ef8262c92d7be8 + ((ulong)&local_50 & 0x68ef8262c92d7c38) * -2)
                  ^ 0x33d6f2a85e71a6ba) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * 0x2814695b + (uint)bVar7 * 4 + 5;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3dacdfff4dae9fd7) + (param_1 & 0x3dacdfff4dae9fd7) * 2 +
                ((ulong)(&stack0x13ccc9ed2d53dcd5 + ((ulong)&local_50 & 0x13ccc9ed2d53dd25) * -2) ^
                0x48f5b927ba0f07a7) * -0x295bb3 + -0x209a6c09040881);
    local_48 = (int)((ulong)(&stack0x13ccc9ed2d53dcd5 + ((ulong)&local_50 & 0x13ccc9ed2d53dd25) * -2
                            ) ^ 0x48f5b927ba0f07a7) * 0x295bb3 + iVar6 + -0x6d95cfd3;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ed550 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x1000baf01);
                    /* WARNING: Could not recover jumptable at 0x0001000bafb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ed550 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006ed550 + (ulong)(bVar7 + 5) * 4) + 0x10009b2fd,
                    (long)*(int *)(&DAT_1006ed550 + (ulong)(bVar7 + 5) * 4),0);
}

