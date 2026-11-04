// name: FUN_1000ee5e0
// address: 1000ee5e0

ulong FUN_1000ee5e0(uint param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
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
  lVar2 = ((ulong)(&stack0x096fa076cf9680b6 + ((ulong)&local_50 & 0x96fa076cf968106) * -2) ^
          0x7eea2a9c219dd5f) * 0x3df53769;
  local_44 = (uint)lVar2;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x4322409c;
  cVar1 = (char)lVar2;
  cVar4 = (char)((uint)(cVar1 * -0x45) >> 8) + cVar1;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((0xa9 < (byte)(cVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xb) ^ 0xb9U) %
                            0x56) >> 4 | 0xfd) + 0x65) - 0x58] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x123845fa459f88b4 + ((ulong)&local_50 & 0x123845fa459f8904) * -2)
                  ^ 0x49013530d2c35386) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x123845fa459f88b4 + ((ulong)&local_50 & 0x123845fa459f8904) * -2) ^
              0x49013530d2c35386) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * 0x54d3fa8d + (uint)bVar6 * 2 + 2;
    local_48 = (int)((ulong)(&stack0x6d6e5272251150ea + ((ulong)&local_50 & 0x6d6e52722511513a) * -2
                            ) ^ 0x365722b8b24d8bb8) * 0x295bb3 + iVar5 + -0x6d95cfce;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfdbf5d97d6afdf56) + (ulong)(param_1 & 0xd6afdf56) * 2 +
                ((ulong)(&stack0x6d6e5272251150ea + ((ulong)&local_50 & 0x6d6e52722511513a) * -2) ^
                0x365722b8b24d8bb8) * -0x295bb3 + 0x3fcce7fb6dfab800);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fb600 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000f8354);
                    /* WARNING: Could not recover jumptable at 0x0001000f840c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006fb600 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006fb600 + (ulong)(bVar6 + 2) * 4) + 0x1000ee71e,
                    (long)*(int *)(&DAT_1006fb600 + (ulong)(bVar6 + 2) * 4),0);
}

