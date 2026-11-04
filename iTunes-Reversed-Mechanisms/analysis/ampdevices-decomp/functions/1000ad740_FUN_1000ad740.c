// name: FUN_1000ad740
// address: 1000ad740

ulong FUN_1000ad740(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  char cVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar5 = (uint)&local_50;
  local_48 = ((uVar5 & 0x7ca6ccb0) * -2 + uVar5 + 0xfca6ccb5 ^ 0xf12990ec) * 0x3df53769;
  local_44 = local_48 + 0x8c974a68;
  local_48 = local_48 ^ 8;
  bVar1 = (char)&local_50 >> 5 | 3;
  cVar3 = (char)((uint)((char)bVar1 * -0x77) >> 8) + bVar1;
  cVar3 = bVar1 + ((cVar3 >> 3) - (cVar3 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar3 * cVar3 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x1ccafd18570bf2ed + ((ulong)&local_50 & 0x1ccafd18570bf33d) * -2)
                  ^ 0x47f38dd2c05729bf) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1ccafd18570bf2ed + ((ulong)&local_50 & 0x1ccafd18570bf33d) * -2) ^
              0x47f38dd2c05729bf) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar4 = (uint)!bVar6 * 0x558491a0 + (uint)bVar6 * -9 + 9;
    local_48 = (int)((ulong)(&stack0x7b985c8b7084afc0 + ((ulong)&local_50 & 0x7b985c8b7084b010) * -2
                            ) ^ 0x20a12c41e7d86a92) * 0x295bb3 + iVar4 + -0x6d95cfca;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfdacdfdfecaebf7e) + (ulong)(param_1 & 0xecaebf7e) * 2 +
                ((ulong)(&stack0x7b985c8b7084afc0 + ((ulong)&local_50 & 0x7b985c8b7084b010) * -2) ^
                0x20a12c41e7d86a92) * -0x295bb3 + 0x3fdf65b357fbd7d8);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006eca10 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000cb772);
                    /* WARNING: Could not recover jumptable at 0x0001000cb82d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006eca10 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

