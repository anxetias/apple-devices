// name: FUN_1000bfd00
// address: 1000bfd00

ulong FUN_1000bfd00(ulong param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar5 = ((ulong)(&stack0x0da0000c7bea0836 + ((ulong)&local_50 & 0xda0000c7bea0886) * -2) ^
          0x32102d3766554df) * 0x3389a247;
  iVar2 = (int)((ulong)(&stack0x0da0000c7bea0836 + ((ulong)&local_50 & 0xda0000c7bea0886) * -2) ^
               0x32102d3766554df) * 0xa6b9522;
  iVar6 = (int)lVar5;
  local_44 = iVar2 + iVar6 + 0xcd05e2d1;
  local_48 = iVar6 + iVar2 ^ 8;
  bVar4 = (byte)lVar5;
  bVar1 = (char)bVar4 >> 6;
  bVar4 = (bVar4 ^ bVar1) * '\x02' ^ bVar1 | 100;
  bVar4 = (char)((uint)(int)(short)((char)bVar4 * 0x51) >> 0xd) - ((char)bVar4 >> 7);
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)bVar4 >> 7 & bVar4 ^ 7) + 0x48) - 0x45)] + -2)
  )(&local_50);
  local_48 = (int)((ulong)(&stack0x603678b900cfd288 + ((ulong)&local_50 & 0x603678b900cfd2d8) * -2)
                  ^ 0x3b0f08739793085a) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x603678b900cfd288 + ((ulong)&local_50 & 0x603678b900cfd2d8) * -2) ^
              0x3b0f08739793085a) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * -0x701e372e + (uint)bVar7 * -5 + 9;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbf9c5dff65febfd6) + (param_1 & 0x3f9c5dff65febfd6) * 2 +
                ((ulong)(&stack0x1759417e7a545c3b + ((ulong)&local_50 & 0x1759417e7a545c8b) * -2) ^
                0x4c6031b4ed088609) * -0x295bb3 + 0x7defe793deabd780);
    local_48 = (int)((ulong)(&stack0x1759417e7a545c3b + ((ulong)&local_50 & 0x1759417e7a545c8b) * -2
                            ) ^ 0x4c6031b4ed088609) * 0x295bb3 + iVar6 + -0x6d95cfce;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar7 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f2110 + (long)(int)((uint)bVar7 + iVar6) * 4) +
                 0x1000a3264);
                    /* WARNING: Could not recover jumptable at 0x0001000a3318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f2110 + (long)(int)((uint)bVar7 + iVar6) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar7,!bVar7);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

