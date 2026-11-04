// name: FUN_10004aec0
// address: 10004aec0

ulong FUN_10004aec0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  iVar6 = (int)((ulong)(&stack0x07dae71fe7ac7711 + ((ulong)&local_50 & 0x7dae71fe7ac7761) * -2) ^
               0x95be5c0ea232b38) * 0x8182e91;
  lVar5 = ((ulong)(&stack0x07dae71fe7ac7711 + ((ulong)&local_50 & 0x7dae71fe7ac7761) * -2) ^
          0x95be5c0ea232b38) * 0x35dd08d8;
  iVar8 = (int)lVar5;
  local_48 = iVar6 + iVar8 ^ 8;
  local_44 = iVar6 + iVar8 + 0x78d10b13;
  bVar1 = (byte)(((byte)lVar5 & 0x28 ^ 0xc) + 0x4b | 0x6f) % 0x47 + 0x93;
  cVar3 = (char)((uint)bVar1 + (uint)bVar1 * 8 >> 8);
  bVar2 = bVar1 + ((byte)(((byte)(bVar1 - cVar3) >> 1) + cVar3) >> 4) * -0x1f + 0x84;
  uVar7 = (char)(bVar2 ^ 0x32) * 0x56 & 0xffff;
  bVar2 = (char)(uVar7 >> 8) + (char)(uVar7 >> 0xf) ^ bVar2;
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
             (((ulong)(&stack0x70c497cccaa88c46 + ((ulong)&local_50 & 0x70c497cccaa88c96) * -2) ^
              0x2bfde7065df45614) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x70c497cccaa88c46 + ((ulong)&local_50 & 0x70c497cccaa88c96) * -2)
                  ^ 0x2bfde7065df45614) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar8 = (uint)(local_44 == 0x3a3402de) * -0x59dbe600 + 0x59dbe60a;
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x7508da8e26df3212 + ((ulong)&local_50 & 0x7508da8e26df3262) * -2
                            ) ^ 0x2e31aa44b183e8e0) * 0x295bb3 + iVar8 + -0x6d95cfd4;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7dce5fd7e5afdf77) + (ulong)(param_1 & 0xe5afdf77) * 2 +
                ((ulong)(&stack0x7508da8e26df3212 + ((ulong)&local_50 & 0x7508da8e26df3262) * -2) ^
                0x2e31aa44b183e8e0) * -0x295bb3 + -0x40421a44a1054821);
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006d5e80 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar8) * 4) +
                 0x100046bad);
                    /* WARNING: Could not recover jumptable at 0x000100046c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006d5e80 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar8) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar4;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

