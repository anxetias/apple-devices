// name: FUN_100039920
// address: 100039920

void FUN_100039920(uint *param_1)

{
  uint uVar1;
  int local_40 [2];
  undefined8 local_38;
  
  local_38 = *(undefined8 *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_1 ^
          ((uint)param_1 + ((uint)param_1 & 0x37cfda93) * -2 + 0x37cfda93 ^ 0x4620b88a) * 0x540651b;
  local_40[0] = (((uint)local_40 & 0x2c2eb3e8) * -2 + (uint)local_40 + 0x2c2eb3ea ^ 0xf579fc8e) *
                0x34a356b1 + uVar1 + 0x47767aeb;
  FUN_1000bf1d0();
                    /* WARNING: Could not recover jumptable at 0x0001000399bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_1006dcc40 + (long)(int)uVar1 * 4) + 0x1000399a7))();
  return;
}

