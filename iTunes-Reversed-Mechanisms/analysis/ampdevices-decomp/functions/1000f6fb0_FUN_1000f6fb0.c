// name: FUN_1000f6fb0
// address: 1000f6fb0

ulong FUN_1000f6fb0(ulong param_1)

{
  ulong uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  undefined1 local_d8 [136];
  long local_50;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_50 = ((ulong)(&stack0x51bd7fee59a28236 + ((ulong)&local_50 & 0x51bd7fee59a28286) * -2) ^
             0xa840f24cefe5804) * -0x295bb3 + 0x3d8c459344aa9757;
  local_48 = (int)((ulong)(&stack0x51bd7fee59a28236 + ((ulong)&local_50 & 0x51bd7fee59a28286) * -2)
                  ^ 0xa840f24cefe5804) * 0x295bb3 + -0x6d95cfca;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  switch(local_44 == 0x3a3402de) {
  case true:
    iVar2 = (uint)(local_44 == 0x3a3402de) * -0x17f11f17 + 0x17f11f20;
    local_48 = (int)((ulong)(&stack0x1a2d23f51bc7fa34 + ((ulong)&local_50 & 0x1a2d23f51bc7fa84) * -2
                            ) ^ 0x4114533f8c9b2006) * 0x295bb3 + iVar2 + -0x6d95cfd3;
    local_50 = (param_1 ^ 0xbd9dd5df54ab977e) + (param_1 & 0x3d9dd5df54ab977e) * 2 +
               ((ulong)(&stack0x1a2d23f51bc7fa34 + ((ulong)&local_50 & 0x1a2d23f51bc7fa84) * -2) ^
               0x4114533f8c9b2006) * -0x295bb3 + 0x7fee6fb3effeffd8;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    bVar3 = local_44 == 0x3a3402de;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)*(int *)(&DAT_1006f5880 + (long)(int)((uint)bVar3 + iVar2) * 4) +
                 0x1000e2015);
                    /* WARNING: Could not recover jumptable at 0x0001000e20c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)
                      ((long)*(int *)(&DAT_1006f5880 + (long)(int)((uint)bVar3 + iVar2) * 4),
                       UNRECOVERED_JUMPTABLE,bVar3,0,!bVar3);
    return uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (ulong)(local_44 ^ 0x3a3402de);
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

