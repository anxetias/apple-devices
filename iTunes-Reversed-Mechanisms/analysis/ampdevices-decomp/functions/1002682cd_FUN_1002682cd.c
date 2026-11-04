// name: FUN_1002682cd
// address: 1002682cd

undefined8 FUN_1002682cd(long param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100263428();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "ITIPodRefIsValid(iPod)";
LAB_1002683e8:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
LAB_10026839d:
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (param_2 == (undefined2 *)0x0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "currentLimit != nullptr";
        goto LAB_1002683e8;
      }
      goto LAB_10026839d;
    }
    *param_2 = 0;
    uVar2 = 0xfffffffc;
    if ((*(char *)(param_1 + 0x3c) == '\0') && (*(char *)(param_1 + 0x3f) == '\0')) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        uVar2 = FUN_1002d34a5(param_1,param_2);
        return uVar2;
      }
      goto LAB_10026840f;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar2;
  }
LAB_10026840f:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

