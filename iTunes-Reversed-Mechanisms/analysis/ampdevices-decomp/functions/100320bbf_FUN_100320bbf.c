// name: FUN_100320bbf
// address: 100320bbf

double FUN_100320bbf(byte param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((char)param_1 < '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "rating >= 0";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    param_1 = 0;
  }
  else {
    if (param_1 < 0x65) goto LAB_100320c7a;
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    param_1 = 100;
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "rating <= 100";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  FUN_1001782e9(0,0);
LAB_100320c7a:
  param_1 = param_1 / 10;
  if (param_2 == '\0') {
    param_1 = param_1 & 0x1e;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return (double)param_1 * DAT_100700b00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

