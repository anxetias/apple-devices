// name: FUN_1004d8316
// address: 1004d8316

void FUN_1004d8316(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined4 local_28;
  long local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  if (lVar2 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_28 = 0x8400102;
      local_24 = lVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "devicesAgentDidChangeState: %@",&local_28,0xc);
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

