// name: FUN_1000f3ad0
// address: 1000f3ad0

void FUN_1000f3ad0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  int iVar7;
  undefined1 local_d8 [136];
  undefined8 local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_44 = (int)((ulong)(&stack0x07d7ab872c21cb1b + ((ulong)&local_50 & 0x7d7ab872c21cb6b) * -2) ^
                  0x956a95821ae9732) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xfe6224ae;
  bVar1 = (byte)(((byte)((ulong)(&stack0x07d7ab872c21cb1b +
                                ((ulong)&local_50 & 0x7d7ab872c21cb6b) * -2) ^ 0x956a95821ae9732) &
                  0x29 ^ 0xc) + 0x4b | 0x6f) % 0x47 + 0x93;
  cVar3 = (char)((uint)bVar1 + (uint)bVar1 * 8 >> 8);
  bVar2 = bVar1 + ((byte)(((byte)(bVar1 - cVar3) >> 1) + cVar3) >> 4) * -0x1f + 0x84;
  uVar5 = (char)(bVar2 ^ 0x32) * 0x56 & 0xffff;
  bVar2 = (char)(uVar5 >> 8) + (char)(uVar5 >> 0xf) ^ bVar2;
  bVar1 = bVar2 + 3;
  if (bVar2 < 0xfd) {
    bVar1 = bVar2;
  }
  bVar1 = 0xd5 < bVar1 | 0x6c;
  cVar3 = (char)((uint)bVar1 + (uint)bVar1 * 8 >> 8);
  cVar3 = bVar1 + ((byte)(((byte)(bVar1 - cVar3) >> 1) + cVar3) >> 4) * -0x1f;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(cVar3 * cVar3) - 0xd7)] + -2))(&local_50);
  uVar5 = (uint)&local_50;
  uVar5 = (uVar5 & 0x7ad9478) * -2 + uVar5 + 0x87ad947c ^ 0xbc4d3ad1;
  local_44 = uVar5 * 0x22116dab;
  local_40._0_4_ = local_44 + 0x984301e;
  local_50 = (undefined1 *)
             (CONCAT44(local_44,uVar5 * -0x22116dab + 0x2b7d1cab) ^ 0x42f3bc6600000000);
  local_44 = local_44 ^ 0x7b1aeb73;
  FUN_1000ac960(&local_50);
  iVar4 = local_48 + 0x1115f4df;
  iVar6 = (uint)(0x5efee35b < iVar4) * 5 + (uint)(iVar4 < 0x5efee35c) * 2;
  iVar7 = iVar6 + 2;
  switch(0x5efee35b < iVar4) {
  case false:
    uVar5 = ((uint)&local_50 & 0x446c15b0) * -2 + (uint)&local_50 + 0x446c15b6 ^ 0x7f8cbb1b;
    local_44 = uVar5 * 0x22116dab;
    local_40 = (undefined1 *)CONCAT44(local_40._4_4_,local_44 + 0x9843010);
    local_50 = (undefined1 *)
               CONCAT44(iVar6 + 0x42f3bc64U ^ local_44,uVar5 * -0x22116dab + 0x2b7d1ca9);
    local_44 = local_44 ^ 0x7b1aeb70;
    FUN_1000ac960();
                    /* WARNING: Could not recover jumptable at 0x0001000f311f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_1000f3cb5::caseD_0 + *(int *)(&DAT_1006ff690 + (long)iVar7 * 4)))();
    return;
  case true:
    local_48 = (int)((ulong)(&stack0x0c1adb7596014a31 + ((ulong)&local_50 & 0xc1adb7596014a81) * -2)
                    ^ 0x5723abbf015d9003) * 0x295bb3 + iVar7 + -0x6d95cfd1;
    local_50 = (undefined1 *)
               (((ulong)(&stack0x0c1adb7596014a31 + ((ulong)&local_50 & 0xc1adb7596014a81) * -2) ^
                0x5723abbf015d9003) * -0x295bb3 + 0x3d8c459344aa9759);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006ff690 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4) +
                 0x1000f4d50);
                    /* WARNING: Could not recover jumptable at 0x0001000f4de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (UNRECOVERED_JUMPTABLE,
               (long)*(int *)(&DAT_1006ff690 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar7) * 4),0);
    return;
  }
}

