// name: FUN_1000ebc20
// address: 1000ebc20

ulong FUN_1000ebc20(uint param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar2 = ((ulong)(&stack0x0a2329671420fcbb + ((ulong)&local_50 & 0xa2329671420fd0b) * -2) ^
          0x4a22bb819afa152) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0x303fbace;
  local_48 = local_48 ^ 8;
  uVar1 = (char)((byte)lVar2 & 0x9e) * -7;
  bVar4 = (char)(((char)((uVar1 & 0xffff) >> 0xf) + (char)(uVar1 >> 9) + 0xa1U ^ 0x85) + 0x6a) >> 7;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)((bVar4 * bVar4 & bVar4 | 0x2e) + 0x7b) - 0xa0)] + -2)
  )(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x095171d3adc1bac8 + ((ulong)&local_50 & 0x95171d3adc1bb18) * -2) ^
              0x526801193a9d619a) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x095171d3adc1bac8 + ((ulong)&local_50 & 0x95171d3adc1bb18) * -2) ^
                  0x526801193a9d619a) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * -0x48b75ed5 + (uint)bVar6 * -2 + 6;
    local_48 = (int)((ulong)(&stack0x4e6a0f97c1e82da0 + ((ulong)&local_50 & 0x4e6a0f97c1e82df0) * -2
                            ) ^ 0x15537f5d56b4f772) * 0x295bb3 + iVar5 + -0x6d95cfce;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7d9cc59ffeafb7fe) + (ulong)(param_1 & 0xfeafb7fe) * 2 +
                ((ulong)(&stack0x4e6a0f97c1e82da0 + ((ulong)&local_50 & 0x4e6a0f97c1e82df0) * -2) ^
                0x15537f5d56b4f772) * -0x295bb3 + -0x4010800cba0520a8);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar6 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f6000 + (long)(int)((uint)bVar6 + iVar5) * 4) +
                 0x1000ece4a);
                    /* WARNING: Could not recover jumptable at 0x0001000ecef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f6000 + (long)(int)((uint)bVar6 + iVar5) * 4),
                       UNRECOVERED_JUMPTABLE,bVar6,0,!bVar6);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f6000 + (ulong)(bVar6 + 6) * 4) + 0x1000ebd51,
                    (long)*(int *)(&DAT_1006f6000 + (ulong)(bVar6 + 6) * 4),0);
}

