// name: FUN_10032001c
// address: 10032001c

undefined8 FUN_10032001c(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  int local_45a;
  undefined4 local_448;
  char *local_444;
  undefined2 local_43c;
  char *local_43a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
      iVar2 = FUN_1002b4324(param_1,&local_448);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          cVar1 = FUN_10018cc4d(&local_448);
          if (cVar1 != '\0') {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
              uVar3 = FUN_10031ff33(param_1);
              return uVar3;
            }
            goto LAB_100320267;
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_468 = 0x8220202;
            local_464 = "Assertion failure";
            local_45c = 0x400;
            local_45a = iVar2;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_468,0x12);
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar3 = FUN_10032026c(param_1);
        return uVar3;
      }
      goto LAB_100320267;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_448 = 0x8220202;
      local_444 = "Assertion failure";
      local_43c = 0x822;
      local_43a = "trackInstance->trackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_448,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffd5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
LAB_100320267:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

