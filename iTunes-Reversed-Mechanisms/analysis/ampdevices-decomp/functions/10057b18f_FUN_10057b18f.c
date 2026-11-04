// name: FUN_10057b18f
// address: 10057b18f

void FUN_10057b18f(short *param_1,undefined2 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_428;
  char *local_424;
  undefined2 local_41c;
  char *local_41a;
  undefined1 local_228 [528];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_428 = 0x8220202;
      local_424 = "Assertion failure";
      local_41c = 0x822;
      local_41a = "label != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_428,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    if (*param_1 != 0) {
      FUN_10057b268(param_1,&local_428);
      FUN_1001e1c39(local_228,param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

