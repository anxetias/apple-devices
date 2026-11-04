// name: FUN_100524929
// address: 100524929

void FUN_100524929(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "propertyList != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      return;
    }
  }
  else {
    _memcpy((void *)(param_4 + 0x50),(void *)(*param_1 + 0x75e0),0x420);
    FUN_1001e04f5(param_3,param_4 + 0x470);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
      FUN_100245a08(param_4,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

