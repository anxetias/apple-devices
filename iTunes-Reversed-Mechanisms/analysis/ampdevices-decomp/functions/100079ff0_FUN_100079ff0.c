// name: FUN_100079ff0
// address: 100079ff0

ulong FUN_100079ff0(ulong param_1)

{
  char cVar1;
  byte bVar2;
  ulong uVar3;
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
  local_44 = ((uint)(&stack0x00a9027688eb2628 + ((ulong)&local_50 & 0xa9027688eb2678) * -2) ^
             0x85647a21) * 0x3df53769;
  local_48 = local_44 ^ 8;
  cVar1 = (((byte)((ulong)(&stack0x00a9027688eb2628 + ((ulong)&local_50 & 0xa9027688eb2678) * -2) >>
                  1) & 0x34) % 0x2a | 0x1f) + 0x45;
  cVar1 = cVar1 * cVar1;
  uVar5 = cVar1 * 0x67;
  local_44 = local_44 + 0x17b5b44c;
  cVar1 = cVar1 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 0xc)) * -0x28;
  bVar4 = cVar1 >> 1;
  bVar2 = bVar4 - 0x24;
  if (-1 < cVar1) {
    bVar2 = bVar4;
  }
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((bVar2 ^ 0x34) - 0x32)] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x55614fd109a8f93f + ((ulong)&local_50 & 0x55614fd109a8f98f) * -2)
                  ^ 0xe583f1b9ef4230d) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x55614fd109a8f93f + ((ulong)&local_50 & 0x55614fd109a8f98f) * -2) ^
              0xe583f1b9ef4230d) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * 0x33f7452f + (uint)bVar7 * -8 + 8;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbfdfc5b36dba97df) + (param_1 & 0x3fdfc5b36dba97df) * 2 +
                ((ulong)(&stack0x7073ac0ec5cc3a84 + ((ulong)&local_50 & 0x7073ac0ec5cc3ad4) * -2) ^
                0x2b4adcc45290e056) * -0x295bb3 + 0x7dac7fdfd6efff77);
    local_48 = (int)((ulong)(&stack0x7073ac0ec5cc3a84 + ((ulong)&local_50 & 0x7073ac0ec5cc3ad4) * -2
                            ) ^ 0x2b4adcc45290e056) * 0x295bb3 + iVar6 + -0x6d95cfca;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006e1260 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4) +
                 0x10008b22f);
                    /* WARNING: Could not recover jumptable at 0x00010008b2ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006e1260 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar6) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006e1260 + (ulong)(bVar7 + 8) * 4) + 0x10007a140,
                    (long)*(int *)(&DAT_1006e1260 + (ulong)(bVar7 + 8) * 4),0);
}

