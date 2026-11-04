// name: FUN_1000318e0
// address: 1000318e0

ulong FUN_1000318e0(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  uVar2 = ((ulong)&local_50 & 0x3376e957e3d1f22) * 2;
  local_48 = (((int)&local_50 - (int)uVar2) + 0x7e3d1f22U ^ 0x73b2437b) * 0x3df53769;
  local_44 = local_48 + 0x8dce254b;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)((uVar2 & 0xffffffff) >> 6) & 3;
  bVar1 = ((byte)uVar2 | bVar1) * '\x02' | bVar1 | 100;
  bVar1 = (char)((uint)(int)(short)((char)bVar1 * 0x51) >> 0xd) - ((char)bVar1 >> 7);
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)bVar1 >> 7 & bVar1 ^ 7) + 0x48) - 0x45)] + -2)
  )(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x1b88687dc733fc11 + ((ulong)&local_50 & 0x1b88687dc733fc61) * -2) ^
              0x40b118b7506f26e3) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x1b88687dc733fc11 + ((ulong)&local_50 & 0x1b88687dc733fc61) * -2)
                  ^ 0x40b118b7506f26e3) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  switch(bVar4) {
  case true:
    iVar3 = (uint)!bVar4 * -0x3a014d09 + (uint)bVar4 * -2 + 4;
    local_48 = (int)((ulong)(&stack0x4910188cebb45bfc + ((ulong)&local_50 & 0x4910188cebb45c4c) * -2
                            ) ^ 0x122968467ce886ce) * 0x295bb3 + iVar3 + -0x6d95cfcc;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x3ffecddbeeeab7f7) + (ulong)(param_1 & 0xeeeab7f7) * 2 +
                ((ulong)(&stack0x4910188cebb45bfc + ((ulong)&local_50 & 0x4910188cebb45c4c) * -2) ^
                0x122968467ce886ce) * -0x295bb3 + -0x2728848aa4020a1);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d6ce0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4) +
                 0x100057aa7);
                    /* WARNING: Could not recover jumptable at 0x000100057b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d6ce0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar3) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006d6ce0 + (ulong)(bVar4 + 4) * 4) + 0x100031a03,
                    (long)*(int *)(&DAT_1006d6ce0 + (ulong)(bVar4 + 4) * 4),0);
}

