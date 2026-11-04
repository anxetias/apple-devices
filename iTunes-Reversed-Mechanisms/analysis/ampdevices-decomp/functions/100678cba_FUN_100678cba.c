// name: FUN_100678cba
// address: 100678cba

void FUN_100678cba(undefined8 param_1)

{
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  undefined2 local_22;
  char *local_20;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_38 = 0x8220302;
  local_34 = "Assertion failure";
  local_2c = 0x822;
  local_2a = "false";
  local_22 = 0x822;
  local_20 = "WKType-encoded value meant for JSON is of unexpected type. Ignoring";
  __os_log_error_impl(0x100000000,param_1,0x10,"%{public}s: err == (%d)",&local_38,0x20);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

