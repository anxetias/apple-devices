// name: FUN_100416d80
// address: 100416d80

void FUN_100416d80(long param_1)

{
  char cVar1;
  int iVar2;
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_10041558d(local_2c);
  if (iVar2 != 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_28 = 0x4000100;
      local_24 = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,"AuthDB init error (%d)",
                          &local_28,8);
    }
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    local_28 = iVar2;
    (**(code **)(**(long **)(param_1 + 0x30) + 0x30))();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

