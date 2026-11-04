// name: FUN_1006a4192
// address: 1006a4192

void FUN_1006a4192(undefined8 param_1)

{
  undefined4 local_28;
  char *local_24;
  undefined2 local_1c;
  undefined4 local_1a;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8220202;
  local_24 = "Assertion failure";
  local_1c = 0x400;
  local_1a = 0xffffff94;
  __os_log_error_impl(0x100000000,param_1,0x10,"%{public}s: err == (%d)",&local_28,0x12);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

