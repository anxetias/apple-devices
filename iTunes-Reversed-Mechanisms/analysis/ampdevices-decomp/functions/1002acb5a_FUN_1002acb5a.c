// name: FUN_1002acb5a
// address: 1002acb5a

undefined8 FUN_1002acb5a(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_248;
  char *local_244;
  undefined2 local_23c;
  int local_23a;
  undefined4 local_228;
  char *local_224;
  undefined2 local_21c;
  char *local_21a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_228 = 0x8220202;
      local_224 = "Assertion failure";
      local_21c = 0x822;
      local_21a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_228,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x68) != 0) {
      iVar2 = FUN_100300f72(param_1,&local_228);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          uVar3 = FUN_1002acaee(&local_228);
          goto LAB_1002acbfe;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_248 = 0x8220202;
          local_244 = "Assertion failure";
          local_23c = 0x400;
          local_23a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_248,0x12);
        }
      }
    }
    uVar3 = 0;
  }
LAB_1002acbfe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

