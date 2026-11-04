// name: FUN_100042b90
// address: 100042b90

void FUN_100042b90(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_d8 [136];
  undefined8 local_50;
  int local_48;
  int local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  FUN_1000cb740(local_d8,0,0x80);
  local_48 = (int)((ulong)(&stack0x4f995e7de449efe9 + ((ulong)&local_50 & 0x4f995e7de449f039) * -2)
                  ^ 0x14a02eb773152abb) * 0x295bb3 + -0x6d95cfca;
  local_50 = ((ulong)(&stack0x4f995e7de449efe9 + ((ulong)&local_50 & 0x4f995e7de449f039) * -2) ^
             0x14a02eb773152abb) * -0x295bb3 + 0x3d8c459344aa9757;
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
  bVar4 = local_44 == 0x3a3402de;
  iVar1 = (uint)bVar4 * -0x1d30ef8a + (uint)!bVar4 * -0x1d30efc9;
  iVar2 = iVar1 + 0x1d30efd1;
  iVar3 = iVar2;
  switch(bVar4) {
  case true:
    iVar3 = iVar1 + 0x1d30ef92;
    local_50 = ((ulong)param_1 ^ 0x7f8e4dd745fef7de) + (ulong)(param_1 & 0x45fef7de) * 2 +
               ((ulong)(&stack0x51ac594417082d24 + ((ulong)&local_50 & 0x51ac594417082d74) * -2) ^
               0xa95298e8054f7f6) * -0x295bb3 + -0x4202084401546088;
    local_48 = (int)((ulong)(&stack0x51ac594417082d24 + ((ulong)&local_50 & 0x51ac594417082d74) * -2
                            ) ^ 0xa95298e8054f7f6) * 0x295bb3 + iVar2 + -0x6d95d011;
    local_40 = local_d8;
    FUN_1000a30e0(&local_50);
    switch(bVar4) {
    case false:
      local_50 = CONCAT44(local_50._4_4_,local_44) ^ 0x391ff14a;
      local_48 = iVar3;
      FUN_10009a7a0(local_d8);
                    /* WARNING: Could not emulate address calculation at 0x00010002a8a9 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10002a7ae +
                *(int *)(&DAT_1006e0070 + (long)(int)(((int)local_40 == 0x3a3402de) + 0x6d7390) * 4)
                ))(&UNK_10002a7ae +
                   *(int *)(&DAT_1006e0070 +
                           (long)(int)(((int)local_40 == 0x3a3402de) + 0x6d7390) * 4),
                   (long)*(int *)(&DAT_1006e0070 +
                                 (long)(int)(((int)local_40 == 0x3a3402de) + 0x6d7390) * 4),
                   (int)local_40 == 0x3a3402de,0);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100033927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(switchD_100042c65::caseD_0 +
    (int)(&switchD_100042c65::switchdataD_1006d7390)[(int)((uint)(local_44 == 0x3a3402de) + iVar3)])
  )();
  return;
}

