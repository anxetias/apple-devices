// name: FUN_1000f20c0
// address: 1000f20c0

void FUN_1000f20c0(int *param_1)

{
  int iVar1;
  int local_50 [2];
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *param_1 +
          (((uint)param_1 & 0x67aa6b8f) * -2 + (uint)param_1 + 0xe7aa6b8f ^ 0xab7d7731) * -0xca815c1
  ;
  local_48 = *(undefined8 *)(param_1 + 2);
  local_50[0] = (((uint)local_50 & 0x4732b3b0) * -2 + (uint)local_50 + 0x4732b3b6 ^ 0xbe5af08) *
                0xca815c1 + iVar1 + -7;
  FUN_1000b5d50();
                    /* WARNING: Could not recover jumptable at 0x0001000f21ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006fbc10 + (long)(int)(iVar1 + (uint)(local_40 == 0x10162463)) * 4
                           ) + 0x1000f2185))();
  return;
}

