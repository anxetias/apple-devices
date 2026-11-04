// name: FUN_1003dab5e
// address: 1003dab5e

void FUN_1003dab5e(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x594) == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "mPlayerOpen";
LAB_1003dac38:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    uVar2 = FUN_1003da99e(param_1,param_2,0,0);
    if (uVar2 <= *(ulong *)(param_1 + 0x4d0)) {
      *(ulong *)(param_1 + 0x558) = uVar2;
      goto LAB_1003dabfd;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "stopTimeInBytes <= mFormatInfo.endPos";
      goto LAB_1003dac38;
    }
  }
  FUN_1001782e9(0,0);
LAB_1003dabfd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

