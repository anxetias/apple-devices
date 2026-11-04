// name: FUN_1006babaf
// address: 1006babaf

void FUN_1006babaf(undefined8 param_1)

{
  undefined4 local_28;
  char *local_24;
  undefined2 local_1c;
  char *local_1a;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8220202;
  local_24 = "Assertion failure";
  local_1c = 0x822;
  local_1a = "offset >= 1 || offset + count - 1 <= uString[0]";
  __os_log_error_impl(0x100000000,param_1,0x10,"%{public}s: (%{public}s)",&local_28,0x16);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

