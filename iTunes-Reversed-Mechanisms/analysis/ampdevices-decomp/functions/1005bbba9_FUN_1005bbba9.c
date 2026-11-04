// name: FUN_1005bbba9
// address: 1005bbba9

int FUN_1005bbba9(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  int local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = _AMDeviceSetValue(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8420302;
          local_4c = 0x842;
          local_42 = 0x400;
          local_54 = param_2;
          local_4a = param_3;
          local_40 = iVar2;
          __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                              "AMDeviceSetValue(%{public}@, %{public}@) failed (0x%08X)",&local_58,
                              0x1c);
        }
      }
      FUN_1005b8595(param_1);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = CONCAT44(local_4a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

