// name: FUN_1000e36a0
// address: 1000e36a0

ulong FUN_1000e36a0(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
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
  uVar1 = (uint)&local_50;
  uVar1 = (uVar1 & 0x39a9bf48) * -2 + uVar1 + 0xb9a9bf4f ^ 0xb426e316;
  local_48 = uVar1 * 0x3df53769 ^ 8;
  local_44 = uVar1 * 0x3df53769 + 0x90b732ae;
  bVar3 = (char)uVar1 * '~';
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
             (((ulong)(&stack0x44d3b0009929c421 + ((ulong)&local_50 & 0x44d3b0009929c471) * -2) ^
              0x1feac0ca0e751ef3) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x44d3b0009929c421 + ((ulong)&local_50 & 0x44d3b0009929c471) * -2)
                  ^ 0x1feac0ca0e751ef3) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar5 = (uint)(local_44 == 0x3a3402de) * 0x2f5c5801 + -0x2f5c5801;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7fdedd9f7fbe9f5e) + (ulong)(param_1 & 0x7fbe9f5e) * 2 +
                ((ulong)(&stack0x7a36903c37ff91e0 + ((ulong)&local_50 & 0x7a36903c37ff9230) * -2) ^
                0x210fe0f6a0a348b2) * -0x295bb3 + -0x4252980c3b140808);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x7a36903c37ff91e0 + ((ulong)&local_50 & 0x7a36903c37ff9230) * -2
                            ) ^ 0x210fe0f6a0a348b2) * 0x295bb3 + iVar5 + -0x6d95cfca;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ff3d0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) +
                 0x1000f130e);
                    /* WARNING: Could not recover jumptable at 0x0001000f13cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006ff3d0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

