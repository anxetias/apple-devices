// name: FUN_100276e24
// address: 100276e24

long FUN_100276e24(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100276e94:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "TrackDataIsValid(trackData)";
LAB_100276f62:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be true)";
        local_2c = 0x822;
        local_2a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_100276e94;
    }
    if (*(long *)(param_1 + 0x1b78) != 0) {
      lVar3 = FUN_1003a0352();
      goto LAB_100276ebd;
    }
    lVar3 = FUN_10039fb84(1,param_1,0,0);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x1b78) = lVar3;
      goto LAB_100276ebd;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "albumInfo != __null";
      goto LAB_100276f62;
    }
  }
  lVar3 = 0;
  FUN_1001782e9(0,0);
LAB_100276ebd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

