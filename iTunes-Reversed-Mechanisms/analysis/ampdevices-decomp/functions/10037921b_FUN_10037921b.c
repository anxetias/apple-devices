// name: FUN_10037921b
// address: 10037921b

void FUN_10037921b(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = param_1;
  FUN_1001eed65(&local_40);
  iVar2 = _AMDeviceIsValid(param_2);
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (iVar2 == 0) {
    if (cVar1 != '\0') {
      local_38 = 0x8000100;
      local_34 = param_2;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"device %p no longer valid",
                    &local_38,0xc);
    }
  }
  else {
    if (cVar1 != '\0') {
      local_38 = 0x8000100;
      local_34 = param_2;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                    "device %p still valid, retrying kAMDeviceAttached action",&local_38,0xc);
    }
    FUN_10037930c(param_2,1);
  }
  FUN_10017060f(param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

