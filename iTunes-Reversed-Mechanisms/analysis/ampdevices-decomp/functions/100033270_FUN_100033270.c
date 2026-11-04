// name: FUN_100033270
// address: 100033270

void FUN_100033270(uint param_1)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  int local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar3 = ((ulong)(&stack0x068c9a06dc606d5f + ((ulong)&local_50 & 0x68c9a06dc606daf) * -2) ^
          0x80d98d9d1ef31f6) * 0x3df53769;
  uVar2 = (uint)lVar3;
  local_48 = uVar2 ^ 8;
  local_44 = uVar2 + 0x16e2b0;
  bVar1 = (char)lVar3 >> 5 | 3;
  cVar4 = (char)((uint)((char)bVar1 * -0x77) >> 8) + bVar1;
  cVar4 = bVar1 + ((cVar4 >> 3) - (cVar4 >> 7)) * -0xf;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((byte)(((char)(cVar4 * cVar4 * -0x80) >> 6) - 0xc) - 0xe8)]
            + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x7d5bfe1b02ba8c78 + ((ulong)&local_50 & 0x7d5bfe1b02ba8cc8) * -2) ^
              0x26628ed195e6564a) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x7d5bfe1b02ba8c78 + ((ulong)&local_50 & 0x7d5bfe1b02ba8cc8) * -2)
                  ^ 0x26628ed195e6564a) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar6 = local_44 == 0x3a3402de;
  iVar5 = 9 - ((uint)!bVar6 * 8 + (uint)bVar6 * 4);
  switch(bVar6) {
  case false:
                    /* WARNING: Could not recover jumptable at 0x00010004fa37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(switchD_100033402::caseD_0 +
      *(int *)(&DAT_1006d8470 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4)))
              (switchD_100033402::caseD_0 +
               *(int *)(&DAT_1006d8470 + (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),
               (long)*(int *)(&DAT_1006d8470 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4),0);
    return;
  case true:
    local_50 = (undefined1 *)
               (((ulong)param_1 * 2 & 0x1fdfd2ebc) + ((ulong)param_1 ^ 0xffbfef93fefe975e) +
                ((ulong)(&stack0x6b7b045dd1f560c4 + ((ulong)&local_50 & 0x6b7b045dd1f56114) * -2) ^
                0x3042749746a9bb96) * -0x295bb3 + 0x3dcc55ff45abfff8);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x6b7b045dd1f560c4 + ((ulong)&local_50 & 0x6b7b045dd1f56114) * -2
                            ) ^ 0x3042749746a9bb96) * 0x295bb3 + iVar5 + -0x6d95cfcf;
    FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x00010005b6ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_1006d8470 +
                             (long)(int)((uint)(local_44 == 0x3a3402de) + iVar5) * 4) + 0x10005b61e)
    )();
    return;
  }
}

