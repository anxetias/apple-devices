// name: FUN_10013db81
// address: 10013db81

void FUN_10013db81(undefined8 param_1)

{
  undefined4 local_28;
  undefined8 local_24;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8400102;
  local_24 = param_1;
  __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                      "Error requesting Mescal setup cert. Error details: %@",&local_28,0xc);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

