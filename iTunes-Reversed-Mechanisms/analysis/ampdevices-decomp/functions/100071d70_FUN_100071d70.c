// name: FUN_100071d70
// address: 100071d70

void FUN_100071d70(uint *param_1)

{
  uint uVar1;
  int local_40 [2];
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  
  local_28 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (((uint)param_1 & 0x65b9b4ba) * -2 + (uint)param_1 + 0xe5b9b4ba ^ 0xde591a17) * 0x22116dab
          ^ *param_1;
  local_38 = *(undefined8 *)(param_1 + 2);
  local_40[0] = (((uint)local_40 & 0x2bc154a0) * -2 + (uint)local_40 + 0xabc154a2 ^ 0xe716481c) *
                0xca815c1 + uVar1 + -1;
  FUN_1000b5d50();
                    /* WARNING: Could not recover jumptable at 0x000100071e11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006e61e0 + (long)(int)(uVar1 + (local_30 == 0x10162463)) * 4) +
            0x100071de7))();
  return;
}

