// name: FUN_1000b9850
// address: 1000b9850

ulong FUN_1000b9850(uint param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar4 = ((ulong)(&stack0x044069dbe5c92247 + ((ulong)&local_50 & 0x44069dbe5c92297) * -2) ^
          0xac16b04e8467ece) * 0x3df53769;
  local_48 = (uint)lVar4;
  local_44 = local_48 + 0x1c5f456d;
  local_48 = local_48 ^ 8;
  uVar2 = (char)lVar4 * -0x4d & 0xffff;
  bVar1 = ((byte)((char)(((char)(uVar2 >> 8) >> 5) + (char)(uVar2 >> 0xf)) >> 5 ^ 0x1bU) % 0x53 &
          0xc) << 4 | 0x27;
  uVar2 = (char)bVar1 * 0x6f & 0xffff;
  bVar1 = bVar1 + (((char)(uVar2 >> 8) >> 4) + (char)(uVar2 >> 0xf)) * -0x25;
  bVar1 = bVar1 + (char)((uint)bVar1 * 0x4f >> 0xd) * -0x68;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((((byte)(((char)(bVar1 + (char)((uint)bVar1 * 0xb9 >> 0xe) * -0x59 + 'o') >> 4)
                             + 0x3bU) >> 1 | 0x4f) + 0x4f & 0x66) - 0xe) - 0xe] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x49a1796ca0fc78f9 + ((ulong)&local_50 & 0x49a1796ca0fc7949) * -2)
                  ^ 0x129809a637a0a3cb) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x49a1796ca0fc78f9 + ((ulong)&local_50 & 0x49a1796ca0fc7949) * -2) ^
              0x129809a637a0a3cb) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * -0x677a44d5 + 0x677a44db;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7daeeddb65af977f) + (ulong)(param_1 & 0x65af977f) * 2 +
                ((ulong)(&stack0x143459d469d4bbe2 + ((ulong)&local_50 & 0x143459d469d4bc32) * -2) ^
                0x4f0d291efe8866b0) * -0x295bb3 + -0x4022a84821050029);
    local_48 = (int)((ulong)(&stack0x143459d469d4bbe2 + ((ulong)&local_50 & 0x143459d469d4bc32) * -2
                            ) ^ 0x4f0d291efe8866b0) * 0x295bb3 + iVar5 + -0x6d95cfd0;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ee0d0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000a6abf);
                    /* WARNING: Could not recover jumptable at 0x0001000a6b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ee0d0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

