// name: FUN_1000da880
// address: 1000da880

ulong FUN_1000da880(uint param_1)

{
  char cVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
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
  uVar3 = (uint)&local_50;
  local_48 = ((uVar3 & 0x5fc6ce78) * -2 + uVar3 + 0xdfc6ce79 ^ 0xd2499220) * 0x3df53769;
  local_44 = local_48 + 0xf7343f18;
  local_48 = local_48 ^ 8;
  cVar1 = (char)local_48;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)((byte)((uint)(byte)(cVar1 + ((char)((uint)(int)(short)(cVar1 * 0x4f) >> 10) -
                                                 (cVar1 >> 7)) * -0xd + 0x89) * 0xbb >> 0xd) | 0x71)
              - 0x69] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x77e358617dd05576 + ((ulong)&local_50 & 0x77e358617dd055c6) * -2) ^
              0x2cda28abea8c8f44) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x77e358617dd05576 + ((ulong)&local_50 & 0x77e358617dd055c6) * -2)
                  ^ 0x2cda28abea8c8f44) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0x2158db9b + (uint)bVar5 * -4 + 4;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xfd8f77dbe7ffb77e) + (ulong)(param_1 & 0xe7ffb77e) * 2 +
                ((ulong)(&stack0x5a7090d1b0f0b616 + ((ulong)&local_50 & 0x5a7090d1b0f0b666) * -2) ^
                0x149e01b27ac6ce4) * -0x295bb3 + 0x3ffccdb75caadfd8);
    local_48 = (int)((ulong)(&stack0x5a7090d1b0f0b616 + ((ulong)&local_50 & 0x5a7090d1b0f0b666) * -2
                            ) ^ 0x149e01b27ac6ce4) * 0x295bb3 + iVar4 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f52d0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000ed64e);
                    /* WARNING: Could not recover jumptable at 0x0001000ed708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f52d0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f52d0 + (ulong)(bVar5 + 4) * 4) + 0x1000da9a4,
                    (long)*(int *)(&DAT_1006f52d0 + (ulong)(bVar5 + 4) * 4),0);
}

