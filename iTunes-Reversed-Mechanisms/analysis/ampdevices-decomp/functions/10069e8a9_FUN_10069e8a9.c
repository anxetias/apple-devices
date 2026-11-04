// name: FUN_10069e8a9
// address: 10069e8a9

void FUN_10069e8a9(undefined8 param_1)

{
  undefined4 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  long local_10;
  
  local_10 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_28 = 0x8000200;
  local_1c = 0x800;
  local_24 = param_1;
  __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"inHeight %f, inWidth %f",
                      &local_28,0x16);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

