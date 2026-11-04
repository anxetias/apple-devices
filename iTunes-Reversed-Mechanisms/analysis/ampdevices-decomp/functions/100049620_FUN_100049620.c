// name: FUN_100049620
// address: 100049620

ulong FUN_100049620(uint param_1)

{
  byte bVar1;
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
  lVar2 = ((ulong)(&stack0x0975347fd404d5ce + ((ulong)&local_50 & 0x975347fd404d61e) * -2) ^
          0x7f436a0d98b8a47) * 0x3df53769;
  local_48 = (uint)lVar2;
  local_44 = local_48 + 0xdc6e06f2;
  local_48 = local_48 ^ 8;
  bVar1 = (char)lVar2 >> 5 | 3;
  cVar4 = (char)((uint)((char)bVar1 * -0x77) >> 8) + bVar1;
  cVar4 = bVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar4 * cVar4 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0ddfff606e2b0319 + ((ulong)&local_50 & 0xddfff606e2b0369) * -2) ^
              0x56e68faaf977d9eb) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x0ddfff606e2b0319 + ((ulong)&local_50 & 0xddfff606e2b0369) * -2) ^
                  0x56e68faaf977d9eb) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  switch(bVar6) {
  case true:
    iVar5 = (uint)!bVar6 * -0x60eb46d2 + (uint)bVar6 * 4;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x3dee75df6eabb7de) + (ulong)(param_1 & 0x6eabb7de) * 2 +
                ((ulong)(&stack0x436cb833888137c5 + ((ulong)&local_50 & 0x436cb83388813815) * -2) ^
                0x1855c8f91fdde297) * -0x295bb3 + -0x62304c2a012088);
    local_48 = (int)((ulong)(&stack0x436cb833888137c5 + ((ulong)&local_50 & 0x436cb83388813815) * -2
                            ) ^ 0x1855c8f91fdde297) * 0x295bb3 + iVar5 + -0x6d95cfce;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_100049780::switchdataD_1006dacd0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar5)] + 0x100057d60);
                    /* WARNING: Could not recover jumptable at 0x000100057e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_100049780::switchdataD_1006dacd0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar5)],0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_100049780::switchdataD_1006dacd0)[bVar6] + 0x10004975c,
                    (long)(int)(&switchD_100049780::switchdataD_1006dacd0)[bVar6],0);
}

