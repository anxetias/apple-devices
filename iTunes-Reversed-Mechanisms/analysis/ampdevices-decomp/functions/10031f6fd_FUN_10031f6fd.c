// name: FUN_10031f6fd
// address: 10031f6fd

undefined8 FUN_10031f6fd(long param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_10031f79e:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_68 = 0x8220202;
        local_64 = "Assertion failure (expected to be true)";
        local_5c = 0x822;
        local_5a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10031f79e;
    }
    FUN_1001c62d9(&local_68,0x38);
    local_68 = param_2;
    uVar2 = FUN_1002fc1ae(param_1,0x67657374,&local_68);
    if (param_3 != (undefined4 *)0x0 && (int)uVar2 == 0) {
      *param_3 = local_64._0_4_;
      uVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

