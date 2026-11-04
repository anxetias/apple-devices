// name: FUN_100054400
// address: 100054400

ulong FUN_100054400(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = ((int)&stack0x089dbaeb6ea8e0d1 + ((uint)&local_50 & 0x6ea8e120) * -2 ^ 0x6327bd78) *
             0x3df53769;
  local_44 = local_48 + 0x88043dfb;
  local_48 = local_48 ^ 8;
  cVar1 = (char)&stack0x089dbaeb6ea8e0d1;
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
             (((ulong)(&stack0x1240976c3ee76abd + ((ulong)&local_50 & 0x1240976c3ee76b0d) * -2) ^
              0x4979e7a6a9bbb18f) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x1240976c3ee76abd + ((ulong)&local_50 & 0x1240976c3ee76b0d) * -2)
                  ^ 0x4979e7a6a9bbb18f) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar6 = (uint)(local_44 == 0x3a3402de) * -0x13a73fdd + 0x13a73fdd;
    local_48 = (int)((ulong)(&stack0x5163024e6b530436 + ((ulong)&local_50 & 0x5163024e6b530486) * -2
                            ) ^ 0xa5a7284fc0fde04) * 0x295bb3 + iVar6 + -0x6d95cfca;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0x7dcdddfbd7ebbf77) + (param_1 & 0xfdcdddfbd7ebbf77) * 2 +
                ((ulong)(&stack0x5163024e6b530436 + ((ulong)&local_50 & 0x5163024e6b530486) * -2) ^
                0xa5a7284fc0fde04) * -0x295bb3 + -0x4041986893412821);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006dab60 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x10002e78c);
                    /* WARNING: Could not recover jumptable at 0x00010002e84d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006dab60 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

