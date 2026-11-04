// name: FUN_1000bbb20
// address: 1000bbb20

ulong FUN_1000bbb20(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_44 = ((int)&stack0x0a276e474b3542dc + ((uint)&local_50 & 0x4b354328) * -2 ^ 0x46ba1f75) *
             0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xe7b2a5cc;
  uVar2 = (char)&stack0x0a276e474b3542dc * -0x4d & 0xffff;
  bVar1 = ((byte)((char)(((char)(uVar2 >> 8) >> 5) + (char)(uVar2 >> 0xf)) >> 5 ^ 0x1bU) % 0x53 &
          0xc) << 4 | 0x27;
  uVar2 = (char)bVar1 * 0x6f & 0xffff;
  bVar1 = bVar1 + (((char)(uVar2 >> 8) >> 4) + (char)(uVar2 >> 0xf)) * -0x25;
  bVar1 = bVar1 + (char)((uint)bVar1 * 0x4f >> 0xd) * -0x68;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((((byte)(((char)(bVar1 + (char)((uint)bVar1 * 0xb9 >> 0xe) * -0x59 + 'o') >> 4)
                             + 0x3bU) >> 1 | 0x4f) + 0x4f & 0x66) - 0xe) - 0xe] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x58d47a024ec30267 + ((ulong)&local_50 & 0x58d47a024ec302b7) * -2) ^
              0x3ed0ac8d99fd835) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x58d47a024ec30267 + ((ulong)&local_50 & 0x58d47a024ec302b7) * -2)
                  ^ 0x3ed0ac8d99fd835) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar4 = (uint)(local_44 == 0x3a3402de) * -0x1128ed3b + 0x1128ed3d;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7fbdf59367fadff6) + (param_1 & 0xffbdf59367fadff6) * 2 +
                ((ulong)(&stack0x7a941493b012fcf0 + ((ulong)&local_50 & 0x7a941493b012fd40) * -2) ^
                0x21ad6459274e27c2) * -0x295bb3 + -0x4231b000235048a0);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x7a941493b012fcf0 + ((ulong)&local_50 & 0x7a941493b012fd40) * -2
                            ) ^ 0x21ad6459274e27c2) * 0x295bb3 + iVar4 + -0x6d95cfcc;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e9ff0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000ab535);
                    /* WARNING: Could not recover jumptable at 0x0001000ab5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e9ff0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

