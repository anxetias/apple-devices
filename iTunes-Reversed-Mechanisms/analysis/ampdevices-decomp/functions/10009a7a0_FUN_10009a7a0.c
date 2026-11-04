// name: FUN_10009a7a0
// address: 10009a7a0

void FUN_10009a7a0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int local_30;
  int local_2c;
  undefined8 local_28;
  uint local_20;
  uint local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = (((uint)param_1 & 0x3cb053c) * -2 + (uint)param_1 + 0x83cb053c ^ 0xcf1c1982) * 0xca815c1;
  local_28 = *(undefined8 *)(param_1 + 2);
  uVar2 = (((uint)&local_30 & 0x7d8c8600) * -2 + (uint)&local_30 + 0xfd8c8600 ^ 0x33afc1d5) *
          0x4516280f;
  local_20 = param_1[5] + uVar1 + 0xe11e96da ^ uVar2;
  local_30 = ((uVar1 ^ *param_1) - ((uVar1 ^ *param_1) * 2 + 0x29098274 & 0xf857bd10)) + uVar2 +
             0x10b09fc2;
  local_2c = uVar2 + 0x353ab85d;
  (*(code *)((&PTR_DAT_10082ee00)[(int)(param_1[5] + uVar1 + -0x1ee168eb)] + -7))();
  param_1[4] = local_1c;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

