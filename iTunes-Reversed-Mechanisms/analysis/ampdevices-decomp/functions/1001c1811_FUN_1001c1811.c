// name: FUN_1001c1811
// address: 1001c1811

void FUN_1001c1811(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  uint local_38;
  uint local_34;
  undefined2 local_30;
  uint local_2e;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a21f0 == param_1) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = local_38 & 0xffff0000;
      __os_log_impl(0x100000000,uVar2,0x10,
                    "utilities> SetApplicationRunState() is not advancing the run state",&local_38,2
                   );
    }
    goto LAB_1001c196d;
  }
  switch(param_1) {
  case 1:
    if (DAT_1008a21f0 != 0) goto switchD_1001c1899_default;
    break;
  case 2:
    DAT_1008a21f4 = 1;
    if (DAT_1008a21f0 != 1) goto switchD_1001c1899_default;
    break;
  case 3:
    DAT_1008a21f4 = 1;
    if ((4 < DAT_1008a21f0) || ((0x16U >> (DAT_1008a21f0 & 0x1f) & 1) == 0))
    goto switchD_1001c1899_default;
    break;
  case 4:
    if (DAT_1008a21f0 != 3) goto switchD_1001c1899_default;
    break;
  case 5:
    if (1 < DAT_1008a21f0 - 3) goto switchD_1001c1899_default;
    break;
  case 6:
    break;
  default:
switchD_1001c1899_default:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a540d(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x4000200;
      local_34 = DAT_1008a21f0;
      local_30 = 0x400;
      local_2e = param_1;
      __os_log_impl(0x100000000,uVar2,0x10,
                    "utilities> Invalid SetApplicationRunState() state change: old = %d, new = %d",
                    &local_38,0xe);
    }
  }
  DAT_1008a21f0 = param_1;
LAB_1001c196d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

