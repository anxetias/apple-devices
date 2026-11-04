// name: FUN_100052580
// address: 100052580

ulong FUN_100052580(uint param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
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
  uVar4 = (uint)&local_50;
  local_44 = ((uVar4 & 0x200ac810) * -2 + uVar4 + 0x200ac814 ^ 0x2d85944d) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xfe6224ae;
  cVar1 = (char)local_44 * (char)local_44 * '@';
  bVar3 = cVar1 + 0x3b;
  bVar2 = cVar1 + 0x89;
  if (bVar3 < 0xb2) {
    bVar2 = bVar3;
  }
  bVar3 = ((byte)((bVar2 % 0x3b >> 4) + 0x35) >> 1 & 0x19) + 0xba;
  cVar1 = (char)((uint)bVar3 + (uint)bVar3 * 2 >> 8);
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(int)((byte)(bVar3 + ((byte)(((byte)(bVar3 - cVar1) >> 1) + cVar1) >> 6) * -0x7f + 0xd
                          ) - 0x56)] + -2))(&local_50);
  uVar4 = (uVar4 & 0x4c212370) * -2 + uVar4 + 0xcc212373 ^ 0xf7c18dde;
  uVar5 = uVar4 * 0x22116dab;
  local_44 = uVar5 ^ 0x7b1aeb70;
  local_40 = (undefined1 *)CONCAT44(local_40._4_4_,uVar5 + 0x9843010);
  local_50 = (undefined1 *)(CONCAT44(uVar5,uVar4 * -0x22116dab + 0x2b7d1ca9) ^ 0x42f3bc6600000000);
  FUN_1000ac960(&local_50);
  uVar6 = (ulong)(0x6064dcd6 < (int)(local_48 + 0x127bee5a));
  local_50 = (undefined1 *)
             (uVar6 * 2 +
              ((ulong)(&stack0x6f2105ef15cbc2da + ((ulong)&local_50 & 0x6f2105ef15cbc32a) * -2) ^
              0x34187525829719a8) * -0x295bb3 + (uVar6 + 1 ^ 0x3fcee5d3fcebd757) +
             -0x242a040b8413fff);
  local_48 = (int)((ulong)(&stack0x6f2105ef15cbc2da + ((ulong)&local_50 & 0x6f2105ef15cbc32a) * -2)
                  ^ 0x34187525829719a8) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar8 = local_44 == 0x3a3402de;
  switch(bVar8) {
  case true:
    iVar7 = (uint)!bVar8 * 0x2c038b0b + (uint)bVar8 * -4 + 6;
    local_40 = local_d8;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0xbdbd57d377aaf756) + (ulong)(param_1 & 0x77aaf756) * 2 +
                ((ulong)(&stack0x70fbb43f54d664cb + ((ulong)&local_50 & 0x70fbb43f54d6651b) * -2) ^
                0x2bc2c4f5c38abf99) * -0x295bb3 + 0x7fceedbfccffa000);
    local_48 = (int)((ulong)(&stack0x70fbb43f54d664cb + ((ulong)&local_50 & 0x70fbb43f54d6651b) * -2
                            ) ^ 0x2bc2c4f5c38abf99) * 0x295bb3 + iVar7 + -0x6d95cfcc;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d9bb0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4) +
                 0x10005c318);
                    /* WARNING: Could not recover jumptable at 0x00010005c3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d9bb0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4),0);
    return uVar6;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006d9bb0 + (ulong)(bVar8 + 6) * 4) + 0x10005274d,
                    (long)*(int *)(&DAT_1006d9bb0 + (ulong)(bVar8 + 6) * 4),0);
}

