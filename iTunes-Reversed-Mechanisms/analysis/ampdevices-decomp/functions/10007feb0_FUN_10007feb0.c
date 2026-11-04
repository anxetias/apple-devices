// name: FUN_10007feb0
// address: 10007feb0

ulong FUN_10007feb0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  uint uVar5;
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
  local_44 = ((uint)(&stack0x0b15037afd040139 + ((ulong)&local_50 & 0xb15037afd040189) * -2) ^
             0xf08b5dd0) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0xc8d8499;
  bVar1 = (byte)(((byte)(&stack0x0b15037afd040139 + ((ulong)&local_50 & 0xb15037afd040189) * -2) &
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
  local_48 = (int)((ulong)(&stack0x73dce34daac29d52 + ((ulong)&local_50 & 0x73dce34daac29da2) * -2)
                  ^ 0x28e593873d9e4720) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x73dce34daac29d52 + ((ulong)&local_50 & 0x73dce34daac29da2) * -2) ^
              0x28e593873d9e4720) * -0x295bb3 + 0x3d8c459344aa9758);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar6 = (uint)(local_44 == 0x3a3402de) * 0x1327d39f + -0x1327d39f;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7d9edff3ccbabfd7) + (ulong)(param_1 & 0xccbabfd7) * 2 +
                ((ulong)(&stack0x0250f8ed797bb8f4 + ((ulong)&local_50 & 0x250f8ed797bb944) * -2) ^
                0x59698827ee2763c6) * -0x295bb3 + -0x40129a6088102881);
    local_48 = (int)((ulong)(&stack0x0250f8ed797bb8f4 + ((ulong)&local_50 & 0x250f8ed797bb944) * -2)
                    ^ 0x59698827ee2763c6) * 0x295bb3 + iVar6 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar7 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e13a0 + (long)(int)((uint)bVar7 + iVar6) * 4) +
                 0x10008472a);
                    /* WARNING: Could not recover jumptable at 0x0001000847db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006e13a0 + (long)(int)((uint)bVar7 + iVar6) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar7,!bVar7);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

