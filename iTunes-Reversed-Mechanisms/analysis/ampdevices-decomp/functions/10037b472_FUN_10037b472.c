// name: FUN_10037b472
// address: 10037b472

void FUN_10037b472(long param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 & 0xffffffff) < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3))
  {
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8) = param_3;
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inIndex < mItems.size()";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

