// name: FUN_1000fb9a0
// address: 1000fb9a0

ulong FUN_1000fb9a0(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  byte bVar3;
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
  local_48 = (int)((ulong)(&stack0x08a1eada7589b05d + ((ulong)&local_50 & 0x8a1eada7589b0ad) * -2) ^
                  0x620e8057806ecf4) * 0x3df53769;
  local_44 = local_48 + 0x1463739f;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)((ulong)(&stack0x08a1eada7589b05d + ((ulong)&local_50 & 0x8a1eada7589b0ad) * -2) ^
                0x620e8057806ecf4);
  bVar3 = (char)bVar1 >> 6;
  bVar1 = (bVar1 ^ bVar3) * '\x02' ^ bVar3 | 100;
  bVar1 = (char)((uint)(int)(short)((char)bVar1 * 0x51) >> 0xd) - ((char)bVar1 >> 7);
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)bVar1 >> 7 & bVar1 ^ 7) + 0x48) - 0x45)] + -2)
  )(&local_50);
  local_48 = (int)((ulong)(&stack0x7d393a3fba2f87e0 + ((ulong)&local_50 & 0x7d393a3fba2f8830) * -2)
                  ^ 0x26004af52d7352b2) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7d393a3fba2f87e0 + ((ulong)&local_50 & 0x7d393a3fba2f8830) * -2) ^
              0x26004af52d7352b2) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar4 = (uint)(local_44 == 0x3a3402de) * 0x6de6e98e + -0x6de6e986;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xfdcf4df3d5bff75f) + (param_1 & 0xfdcf4df3d5bff75f) * 2 +
                ((ulong)(&stack0x11e5f09b7ea3174b + ((ulong)&local_50 & 0x11e5f09b7ea3179b) * -2) ^
                0x4adc8051e9ffcd19) * -0x295bb3 + 0x3fbcf79f6eea9ff7);
    local_48 = (int)((ulong)(&stack0x11e5f09b7ea3174b + ((ulong)&local_50 & 0x11e5f09b7ea3179b) * -2
                            ) ^ 0x4adc8051e9ffcd19) * 0x295bb3 + iVar4 + -0x6d95cfd2;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fbdc0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar4) * 4) +
                 0x1000ec9be);
                    /* WARNING: Could not recover jumptable at 0x0001000eca78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006fbdc0 +
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

