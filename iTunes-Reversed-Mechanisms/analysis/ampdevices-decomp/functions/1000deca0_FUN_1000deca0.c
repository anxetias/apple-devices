// name: FUN_1000deca0
// address: 1000deca0

void FUN_1000deca0(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_d8 [136];
  undefined1 *local_50;
  uint local_48;
  int local_44;
  undefined1 *local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = (((uint)param_1 & 0x11c87e7c) * -2 + (uint)param_1 + 0x11c87e7c ^ 0x1d38d51b) * 0x2b3eb91b
          ^ *(uint *)(param_1 + 8);
  FUN_1000cb740(local_d8,0,0x80);
  uVar1 = (uint)&local_50;
  uVar1 = ((uVar1 & 0x5ef5ae0) * -2 + uVar1 + 0x5ef5ae5 ^ 0x86006bc) * 0x3df53769;
  local_48 = uVar2 + 8 ^ uVar1;
  local_44 = uVar1 + 0xd4830ea3;
  local_50 = local_d8;
  (*(code *)((&PTR_DAT_10082ee00)[(int)(uVar2 + 10)] + -2))(&local_50);
  local_48 = uVar2 + (int)((ulong)(&stack0x0f3518857c0ad410 +
                                  ((ulong)&local_50 & 0xf3518857c0ad460) * -2) ^ 0x540c684feb560ee2)
                     * 0x295bb3 + -0x6d95cfca;
  local_50 = (undefined1 *)
             (((ulong)(&stack0x0f3518857c0ad410 + ((ulong)&local_50 & 0xf3518857c0ad460) * -2) ^
              0x540c684feb560ee2) * -0x295bb3 + 0x3d8c459344aa9757);
  local_40 = local_d8;
  FUN_1000a30e0(&local_50);
                    /* WARNING: Could not recover jumptable at 0x0001000dedd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006f9db0 + (long)(int)(uVar2 + (local_44 == 0x3a3402de)) * 4) +
            0x1000dedb0))();
  return;
}

