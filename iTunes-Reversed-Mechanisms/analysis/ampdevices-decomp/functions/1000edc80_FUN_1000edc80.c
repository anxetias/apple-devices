// name: FUN_1000edc80
// address: 1000edc80

ulong FUN_1000edc80(ulong param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int iVar7;
  bool bVar8;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar4 = ((ulong)(&stack0x0e00fd08f82d1936 + ((ulong)&local_50 & 0xe00fd08f82d1986) * -2) ^
          0x81ffd7f5a245df) * 0x3df53769;
  local_48 = (uint)lVar4;
  local_44 = local_48 + 0xe3f9125;
  local_48 = local_48 ^ 8;
  bVar1 = (byte)(((byte)lVar4 & 0x2d ^ 0xc) + 0x4b | 0x6f) % 0x47 + 0x93;
  cVar3 = (char)((uint)bVar1 + (uint)bVar1 * 8 >> 8);
  bVar2 = bVar1 + ((byte)(((byte)(bVar1 - cVar3) >> 1) + cVar3) >> 4) * -0x1f + 0x84;
  uVar6 = (char)(bVar2 ^ 0x32) * 0x56 & 0xffff;
  bVar2 = (char)(uVar6 >> 8) + (char)(uVar6 >> 0xf) ^ bVar2;
  bVar1 = bVar2 + 3;
  if (bVar2 < 0xfd) {
    bVar1 = bVar2;
  }
  bVar1 = 0xd5 < bVar1 | 0x6c;
  cVar3 = (char)((uint)bVar1 + (uint)bVar1 * 8 >> 8);
  cVar3 = bVar1 + ((byte)(((byte)(bVar1 - cVar3) >> 1) + cVar3) >> 4) * -0x1f;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(cVar3 * cVar3) - 0xd7)] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x54bfd90eb970adbe + ((ulong)&local_50 & 0x54bfd90eb970ae0e) * -2) ^
              0xf86a9c42e2c748c) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x54bfd90eb970adbe + ((ulong)&local_50 & 0x54bfd90eb970ae0e) * -2)
                  ^ 0xf86a9c42e2c748c) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar8 = local_44 == 0x3a3402de;
  switch(bVar8) {
  case true:
    iVar7 = (uint)!bVar8 * 0x61d9024d + (uint)bVar8 * 2 + 7;
    local_48 = (int)((ulong)(&stack0x562b03e249b13d93 + ((ulong)&local_50 & 0x562b03e249b13de3) * -2
                            ) ^ 0xd127328deede761) * 0x295bb3 + iVar7 + -0x6d95cfd3;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x3d9fed97d7ba9776) + (param_1 & 0x3d9fed97d7ba9776) * 2 +
                ((ulong)(&stack0x562b03e249b13d93 + ((ulong)&local_50 & 0x562b03e249b13de3) * -2) ^
                0xd127328deede761) * -0x295bb3 + -0x13a80493100020);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f6bb0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4) +
                 0x1000fc272);
                    /* WARNING: Could not recover jumptable at 0x0001000fc328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f6bb0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4),0);
    return uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f6bb0 + (ulong)(bVar8 + 7) * 4) + 0x1000ede16,
                    (long)*(int *)(&DAT_1006f6bb0 + (ulong)(bVar8 + 7) * 4),0);
}

