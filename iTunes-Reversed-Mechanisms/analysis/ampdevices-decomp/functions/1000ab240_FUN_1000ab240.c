// name: FUN_1000ab240
// address: 1000ab240

ulong FUN_1000ab240(uint param_1)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined1 local_d8 [136];
  long local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x7822574885733863 + ((ulong)&local_50 & 0x78225748857338b3) * -2)
                  ^ 0x231b2782122fe231) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x7822574885733863 + ((ulong)&local_50 & 0x78225748857338b3) * -2) ^
             0x231b2782122fe231) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0();
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * 0x70b07b22 + -0x70b07b18;
    local_40 = local_d8;
    local_50 = ((ulong)param_1 ^ 0xbdef75f35eebf7f7) + (ulong)(param_1 & 0x5eebf7f7) * 2 +
               ((ulong)(&stack0x55b4cd01550c1d19 + ((ulong)&local_50 & 0x55b4cd01550c1d69) * -2) ^
               0xe8dbdcbc250c7eb) * -0x295bb3 + 0x7f9ccf9fe5be9f5f;
    local_48 = (int)((ulong)(&stack0x55b4cd01550c1d19 + ((ulong)&local_50 & 0x55b4cd01550c1d69) * -2
                            ) ^ 0xe8dbdcbc250c7eb) * 0x295bb3 + iVar2 + -0x6d95cfd4;
    FUN_1000a30e0();
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f3be0 +
                                (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4) +
                 0x1000c24b2);
                    /* WARNING: Could not recover jumptable at 0x0001000c2571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      (UNRECOVERED_JUMPTABLE,
                       (long)*(int *)(&DAT_1006f3be0 +
                                     (long)(int)((uint)(local_44 == 0x3a3402de) + iVar2) * 4),
                       local_44 == 0x3a3402de,0);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

