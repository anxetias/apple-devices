// name: FUN_1001a59b2
// address: 1001a59b2

void FUN_1001a59b2(long *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_48;
  char *local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = *(char *)((long)param_1 + 0x39);
  uVar2 = FUN_1001a25a0();
  if (cVar1 == '\x01') {
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_44 = "DOWN";
      if (param_2 != '\0') {
        local_44 = "UP";
      }
      local_48 = 0x8220102;
      __os_log_impl(0x100000000,uVar2,1,"network is %{public}s",&local_48,0xc);
    }
    if (param_2 == '\0') {
      FUN_1001a565e(param_1);
      (**(code **)(*param_1 + 0x10))(param_1,0x6e74646e,0,0,0);
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,0x6e747570,0,0,0);
      FUN_1001a587a(param_1);
    }
  }
  else {
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = local_48 & 0xffff0000;
      __os_log_impl(0x100000000,uVar2,0x10,"network status changed while uninitialized",&local_48,2)
      ;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

