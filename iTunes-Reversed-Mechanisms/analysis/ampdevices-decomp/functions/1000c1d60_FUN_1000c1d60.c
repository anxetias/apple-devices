// name: FUN_1000c1d60
// address: 1000c1d60

ulong FUN_1000c1d60(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  bool bVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x02b4efe4dff772f6 + ((ulong)&local_50 & 0x2b4efe4dff77346) * -2) ^
                  0xc35ed3bd2782f1f) * 0x3df53769;
  local_44 = local_48 + 0xa5f51829;
  local_48 = local_48 ^ 8;
  cVar1 = (char)((ulong)(&stack0x02b4efe4dff772f6 + ((ulong)&local_50 & 0x2b4efe4dff77346) * -2) ^
                0xc35ed3bd2782f1f);
  uVar5 = cVar1 * 0x2f & 0xffff;
  bVar3 = (cVar1 + (((char)(uVar5 >> 8) >> 3) + (char)(uVar5 >> 0xf)) * -0x2c ^ 0xbbU) * -0x14;
  bVar4 = bVar3 + 0x17;
  if (bVar3 < 0xe9) {
    bVar4 = bVar3;
  }
  bVar4 = ((bVar4 ^ 0xc) & bVar3) + 0x26;
  cVar1 = (char)(((uint)bVar4 + (uint)bVar4 * 4) * 5 >> 8);
  uVar5 = (char)(((byte)((byte)(((byte)(bVar4 - cVar1) >> 1) + cVar1) >> 6 | 0x74) % 0x57) * '(') *
          -0x31 & 0xffff;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((char)(uVar5 >> 8) >> 2) + (char)(uVar5 >> 0xf) | 0x96) - 0x8d] + -2))
            (&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1464398e6f54b397 + ((ulong)&local_50 & 0x1464398e6f54b3e7) * -2) ^
              0x4f5d4944f8086965) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x1464398e6f54b397 + ((ulong)&local_50 & 0x1464398e6f54b3e7) * -2)
                  ^ 0x4f5d4944f8086965) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * -0x65fa867a + (uint)bVar7 * 4 + 2;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7fce7fdfccefbf76) + (param_1 & 0xffce7fdfccefbf76) * 2 +
                ((ulong)(&stack0x589d5a99eb29aeee + ((ulong)&local_50 & 0x589d5a99eb29af3e) * -2) ^
                0x3a42a537c7575bc) * -0x295bb3 + -0x42423a4c88452820);
    local_48 = (int)((ulong)(&stack0x589d5a99eb29aeee + ((ulong)&local_50 & 0x589d5a99eb29af3e) * -2
                            ) ^ 0x3a42a537c7575bc) * 0x295bb3 + iVar6 + -0x6d95cfd0;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006eeb50 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x1000b39a9);
                    /* WARNING: Could not recover jumptable at 0x0001000b3a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006eeb50 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006eeb50 + (ulong)(bVar7 + 2) * 4) + 0x1000c1eee,
                    (long)*(int *)(&DAT_1006eeb50 + (ulong)(bVar7 + 2) * 4),0);
}

