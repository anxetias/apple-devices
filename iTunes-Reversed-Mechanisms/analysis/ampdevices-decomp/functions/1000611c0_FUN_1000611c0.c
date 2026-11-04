// name: FUN_1000611c0
// address: 1000611c0

ulong FUN_1000611c0(ulong param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar2 = (uint)&local_50;
  local_44 = ((uVar2 & 0x7d8a3490) * -2 + uVar2 + 0x7d8a3492 ^ 0x700568cb) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x1a32531e;
  uVar2 = (char)local_48 * -0x4d & 0xffff;
  bVar1 = ((byte)((char)(((char)(uVar2 >> 8) >> 5) + (char)(uVar2 >> 0xf)) >> 5 ^ 0x1bU) % 0x53 &
          0xc) << 4 | 0x27;
  uVar2 = (char)bVar1 * 0x6f & 0xffff;
  bVar1 = bVar1 + (((char)(uVar2 >> 8) >> 4) + (char)(uVar2 >> 0xf)) * -0x25;
  bVar1 = bVar1 + (char)((uint)bVar1 * 0x4f >> 0xd) * -0x68;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((((byte)(((char)(bVar1 + (char)((uint)bVar1 * 0xb9 >> 0xe) * -0x59 + 'o') >> 4)
                             + 0x3bU) >> 1 | 0x4f) + 0x4f & 0x66) - 0xe) - 0xe] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x563226eeab6de449 + ((ulong)&local_50 & 0x563226eeab6de499) * -2)
                  ^ 0xd0b56243c313e1b) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x563226eeab6de449 + ((ulong)&local_50 & 0x563226eeab6de499) * -2) ^
              0xd0b56243c313e1b) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * 0x716b3ac9 + (uint)bVar5 * 2 + 3;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbfdfd5fbeffafffe) + (param_1 & 0x3fdfd5fbeffafffe) * 2 +
                ((ulong)(&stack0x50337c89f507acba + ((ulong)&local_50 & 0x50337c89f507ad0a) * -2) ^
                0xb0a0c43625b7788) * -0x295bb3 + 0x7dac6f9754af9758);
    local_48 = (int)((ulong)(&stack0x50337c89f507acba + ((ulong)&local_50 & 0x50337c89f507ad0a) * -2
                            ) ^ 0xb0a0c43625b7788) * 0x295bb3 + iVar4 + -0x6d95cfcf;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e5850 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x10008e4ae);
                    /* WARNING: Could not recover jumptable at 0x00010008e571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e5850 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006e5850 + (ulong)(bVar5 + 3) * 4) + 0x10006132d,
                    (long)*(int *)(&DAT_1006e5850 + (ulong)(bVar5 + 3) * 4),0);
}

