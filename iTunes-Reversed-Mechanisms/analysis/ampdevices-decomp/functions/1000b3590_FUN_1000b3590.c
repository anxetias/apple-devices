// name: FUN_1000b3590
// address: 1000b3590

ulong FUN_1000b3590(uint param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar8;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  lVar4 = ((ulong)(&stack0x06e1bdcfc2e07741 + ((ulong)&local_50 & 0x6e1bdcfc2e07791) * -2) ^
          0x860bf10cf6f2bc8) * 0x3df53769;
  local_48 = (uint)lVar4;
  local_44 = local_48 + 0x1c44d38;
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
  local_48 = (int)((ulong)(&stack0x53cd155a4fcb717d + ((ulong)&local_50 & 0x53cd155a4fcb71cd) * -2)
                  ^ 0x8f46590d897ab4f) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x53cd155a4fcb717d + ((ulong)&local_50 & 0x53cd155a4fcb71cd) * -2) ^
              0x8f46590d897ab4f) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar8 = local_44 == 0x3a3402de;
  switch(bVar8) {
  case true:
    iVar7 = (uint)!bVar8 * -0x516bc719 + (uint)bVar8 * 2 + 1;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7f9c6db3f4af9fde) + (ulong)(param_1 & 0xf4af9fde) * 2 +
                ((ulong)(&stack0x458c9e00432ce48f + ((ulong)&local_50 & 0x458c9e00432ce4df) * -2) ^
                0x1eb5eecad4703e5d) * -0x295bb3 + -0x42102820b0050888);
    local_48 = (int)((ulong)(&stack0x458c9e00432ce48f + ((ulong)&local_50 & 0x458c9e00432ce4df) * -2
                            ) ^ 0x1eb5eecad4703e5d) * 0x295bb3 + iVar7 + -0x6d95cfcd;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar8 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f44a0 + (long)(int)((uint)bVar8 + iVar7) * 4) +
                 0x1000bb32d);
                    /* WARNING: Could not recover jumptable at 0x0001000bb3da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f44a0 + (long)(int)((uint)bVar8 + iVar7) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar8,!bVar8);
    return uVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006f44a0 + (ulong)(bVar8 + 1) * 4) + 0x1000b3720,
                    (long)*(int *)(&DAT_1006f44a0 + (ulong)(bVar8 + 1) * 4),0);
}

