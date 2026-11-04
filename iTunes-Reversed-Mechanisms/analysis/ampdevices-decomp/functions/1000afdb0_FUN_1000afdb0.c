// name: FUN_1000afdb0
// address: 1000afdb0

void FUN_1000afdb0(int *param_1)

{
  int iVar1;
  uint local_24;
  int local_20;
  int local_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = (((uint)param_1 & 0x54b43eaf) * -2 + (uint)param_1 + 0xd4b43eaf ^ 0x98632211) * 0xca815c1;
  local_24 = (((uint)&local_24 & 0x4efee080) * -2 + (uint)&local_24 + 0x4efee083 ^ 0x420e4be4) *
             0x2b3eb91b;
  local_20 = *param_1 + iVar1 + local_24 + -0x15de50aa;
  local_24 = local_24 ^ 0x35a29dc3;
  (*(code *)((&PTR_DAT_10082ee00)[iVar1 + *param_1 + -0x15de508e] + -0xe))();
  param_1[1] = local_1c;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

