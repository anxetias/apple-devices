// name: FUN_1002c11e9
// address: 1002c11e9

undefined8 FUN_1002c11e9(long *param_1,ulong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "idList != nullptr";
LAB_1002c12c1:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if ((param_2 & 0xffffffff) < (ulong)(param_1[1] - *param_1 >> 3)) {
      uVar2 = *(undefined8 *)(*param_1 + (param_2 & 0xffffffff) * 8);
      goto LAB_1002c1283;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "index < idList->size()";
      goto LAB_1002c12c1;
    }
  }
  uVar2 = 0;
  FUN_1001782e9(0,0);
LAB_1002c1283:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

