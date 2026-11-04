// name: FUN_1000720b0
// address: 1000720b0

ulong FUN_1000720b0(ulong param_1)

{
  char cVar1;
  ulong uVar2;
  byte bVar3;
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
  uVar5 = (uint)&local_50;
  local_44 = ((uVar5 & 0x4a5cac18) * -2 + uVar5 + 0x4a5cac1e ^ 0x47d3f047) * 0x3df53769;
  local_48 = local_44 ^ 8;
  local_44 = local_44 + 0x49923d35;
  cVar1 = (((byte)local_44 >> 1 & 0x34) % 0x2a | 0x1f) + 0x45;
  cVar1 = cVar1 * cVar1;
  uVar5 = cVar1 * 0x67;
  cVar1 = cVar1 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 0xc)) * -0x28;
  bVar3 = cVar1 >> 1;
  bVar4 = bVar3 - 0x24;
  if (-1 < cVar1) {
    bVar4 = bVar3;
  }
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)((bVar4 ^ 0x34) - 0x32)] + -2))(&local_50);
  local_50 = (undefined1 *)
             (((ulong)(&stack0x6fdc997b6892ae20 + ((ulong)&local_50 & 0x6fdc997b6892ae70) * -2) ^
              0x34e5e9b1ffce74f2) * -0x295bb3 + 0x3d8c459344aa9757);
  local_48 = (int)((ulong)(&stack0x6fdc997b6892ae20 + ((ulong)&local_50 & 0x6fdc997b6892ae70) * -2)
                  ^ 0x34e5e9b1ffce74f2) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar7 = local_44 == 0x3a3402de;
  switch(bVar7) {
  case true:
    iVar6 = (uint)!bVar7 * 0x3ead0b2d + (uint)bVar7 * 2;
    local_50 = (undefined1 *)
               ((param_1 ^ 0xbd8e47f35eabb7df) + (param_1 & 0x3d8e47f35eabb7df) * 2 +
                ((ulong)(&stack0x4bc7da55e0648f91 + ((ulong)&local_50 & 0x4bc7da55e0648fe1) * -2) ^
                0x10feaa9f77385563) * -0x295bb3 + 0x7ffdfd9fe5fedf77);
    local_40 = local_d8;
    local_48 = (int)((ulong)(&stack0x4bc7da55e0648f91 + ((ulong)&local_50 & 0x4bc7da55e0648fe1) * -2
                            ) ^ 0x10feaa9f77385563) * 0x295bb3 + iVar6 + -0x6d95cfcc;
    FUN_1000a30e0(&local_50);
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(int)(&switchD_100072215::switchdataD_1006e80b0)
                             [(int)((uint)(local_44 == 0x3a3402de) + iVar6)] + 0x10007e9ae);
                    /* WARNING: Could not recover jumptable at 0x00010007ea6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)(int)(&switchD_100072215::switchdataD_1006e80b0)
                                  [(int)((uint)(local_44 == 0x3a3402de) + iVar6)],0);
    return uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail((long)(int)(&switchD_100072215::switchdataD_1006e80b0)[bVar7] + 0x1000721f1,
                    (long)(int)(&switchD_100072215::switchdataD_1006e80b0)[bVar7],0);
}

