// name: FUN_1000ddf00
// address: 1000ddf00

void FUN_1000ddf00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int local_48;
  uint local_44;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar2 = ((uint)param_1 & 0x62f40ddc) * -2 + (uint)param_1 + 0x62f40ddc ^ 0xf5a8d75e;
  iVar1 = *param_1;
  local_44 = (((uint)&local_48 & 0x33027b8) * -2 + (uint)&local_48 + 0x833027bf ^ 0x8ebf7be6) *
             0x3df53769 ^ uVar2 * -0x295bb3 + iVar1 + 0xcc71bcc1;
  FUN_10009ae70();
                    /* WARNING: Could not recover jumptable at 0x0001000ddfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006fe6b0 +
                           (long)(int)(iVar1 + uVar2 * -0x295bb3 + (uint)(local_48 == 0x3a3402de)) *
                           4) + 0x1000ddf83))();
  return;
}

