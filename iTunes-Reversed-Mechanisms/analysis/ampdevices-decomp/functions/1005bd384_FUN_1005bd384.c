// name: FUN_1005bd384
// address: 1005bd384

undefined8 FUN_1005bd384(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "diskUsageInfo != __null";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      return 0xffffffce;
    }
  }
  else {
    FUN_1001c62d9(param_2,0x30);
    cVar1 = FUN_1001ee068();
    if (cVar1 == '\0') {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_1005bd4a2(param_1,param_2);
        return uVar2;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
      uVar2 = FUN_1005ba4e2(param_1,5,0,param_2);
      return uVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

