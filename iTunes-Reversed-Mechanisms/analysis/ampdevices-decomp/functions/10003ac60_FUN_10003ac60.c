// name: FUN_10003ac60
// address: 10003ac60

ulong FUN_10003ac60(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
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
  uVar3 = (uint)&local_50;
  uVar3 = (uVar3 & 0xaf2e998) * -2 + uVar3 + 0x8af2e99d;
  bVar1 = (char)uVar3 * '_';
  local_44 = (uVar3 ^ 0x877db5c4) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x9b1cbc5f;
  bVar2 = bVar1 + 0x69;
  if (bVar1 < 0x97) {
    bVar2 = bVar1;
  }
  uVar3 = (uint)((byte)(bVar2 * 'l' + 0xf) >> 2 & 7 | 8) * -0x1b & 0xffff;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(((byte)(((char)(uVar3 >> 8) >> 1) + (char)(uVar3 >> 0xf)) >> 1 & 0x7c) +
                           0xb4 | 0x1d) - 0xb3)] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x0f05f97b0ec51d0a + ((ulong)&local_50 & 0xf05f97b0ec51d5a) * -2) ^
                  0x543c89b19999c7d8) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0f05f97b0ec51d0a + ((ulong)&local_50 & 0xf05f97b0ec51d5a) * -2) ^
              0x543c89b19999c7d8) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * -0x10f26b16 + 0x10f26b1e;
    local_50 = (undefined1 *)
               (((ulong)param_1 * 2 & 0x1e9fd6efc) + ((ulong)param_1 ^ 0x7d8e7fdff4feb77e) +
                ((ulong)(&stack0x754ba1b8d9196131 + ((ulong)&local_50 & 0x754ba1b8d9196181) * -2) ^
                0x2e72d1724e45bb03) * -0x295bb3 + -0x40023a4cb0542028);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x754ba1b8d9196131 + ((ulong)&local_50 & 0x754ba1b8d9196181) * -2
                            ) ^ 0x2e72d1724e45bb03) * 0x295bb3 + iVar5 + -0x6d95cfd2;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d4ba0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x100032f59);
                    /* WARNING: Could not recover jumptable at 0x000100033028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d4ba0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

