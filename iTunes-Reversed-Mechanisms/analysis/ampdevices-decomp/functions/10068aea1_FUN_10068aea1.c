// name: FUN_10068aea1
// address: 10068aea1

void FUN_10068aea1(undefined4 param_1,undefined8 param_2)

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
  local_1a = param_1;
  __os_log_error_impl(0x100000000,param_2,0x10,"%{public}s: err == (%d)",&local_28,0x12);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

