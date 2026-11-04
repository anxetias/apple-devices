// name: FUN_1000f4b40
// address: 1000f4b40

ulong FUN_1000f4b40(uint param_1)

{
  char cVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = ((uint)(&stack0x06c6c15ff6cd43bf + ((ulong)&local_50 & 0x6c6c15ff6cd440f) * -2) ^
             0xfb421856) * 0x3df53769;
  local_44 = local_48 + 0x15a9e7;
  local_48 = local_48 ^ 8;
  cVar1 = (char)(&stack0x06c6c15ff6cd43bf + ((ulong)&local_50 & 0x6c6c15ff6cd440f) * -2);
  cVar3 = (char)((uint)(cVar1 * -0x45) >> 8) + cVar1;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)
             [(byte)(((byte)((0xa9 < (byte)(cVar1 + ((cVar3 >> 3) - (cVar3 >> 7)) * -0xb) ^ 0xb9U) %
                            0x56) >> 4 | 0xfd) + 0x65) - 0x58] + -2))(&local_50);
  local_48 = (int)((ulong)(&stack0x0cc514c721323e8c + ((ulong)&local_50 & 0xcc514c721323edc) * -2) ^
                  0x57fc640db66ee45e) * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0cc514c721323e8c + ((ulong)&local_50 & 0xcc514c721323edc) * -2) ^
              0x57fc640db66ee45e) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar5 = local_44 == 0x3a3402de;
  switch(bVar5) {
  case true:
    iVar4 = (uint)!bVar5 * -0x43907f5d + (uint)bVar5 * -4 + 8;
    local_48 = (int)((ulong)(&stack0x71e0425292829470 + ((ulong)&local_50 & 0x71e04252928294c0) * -2
                            ) ^ 0x2ad9329805de4e42) * 0x295bb3 + iVar4 + -0x6d95cfce;
    local_50 = (undefined1 *)
               (((ulong)param_1 ^ 0x7f8ced9b75babfd6) + (ulong)(param_1 & 0x75babfd6) * 2 +
                ((ulong)(&stack0x71e0425292829470 + ((ulong)&local_50 & 0x71e04252928294c0) * -2) ^
                0x2ad9329805de4e42) * -0x295bb3 + -0x4200a80831102880);
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar5 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006fbc60 + (long)(int)((uint)bVar5 + iVar4) * 4) +
                 0x1000da377);
                    /* WARNING: Could not recover jumptable at 0x0001000da429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006fbc60 + (long)(int)((uint)bVar5 + iVar4) * 4),
                       UNRECOVERED_JUMPTABLE,0,bVar5,!bVar5);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)*(int *)(&DAT_1006fbc60 + (ulong)(bVar5 + 8) * 4) + 0x1000f4c76,
                    (long)*(int *)(&DAT_1006fbc60 + (ulong)(bVar5 + 8) * 4),0);
}

