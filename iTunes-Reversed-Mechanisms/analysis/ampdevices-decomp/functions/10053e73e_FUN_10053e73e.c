// name: FUN_10053e73e
// address: 10053e73e

int FUN_10053e73e(long *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)(*param_1 + 0x40))();
  if (iVar2 == -0x80) goto LAB_10053e872;
  if (iVar2 == 0) {
    if (param_1[0x95] == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "mMetaDataObj != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
      goto LAB_10053e872;
    }
    iVar2 = FUN_1003b07e0(param_3,param_4,param_5);
    if (iVar2 == -0x80) goto LAB_10053e872;
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x88))(param_1);
      iVar2 = 0;
      goto LAB_10053e872;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10053e872;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_10053e872;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
  }
  local_4c = 0x400;
  local_54 = "Assertion failure";
  local_58 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
LAB_10053e872:
  (**(code **)(*param_1 + 0x48))(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

