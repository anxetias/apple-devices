// name: FUN_1002f5a24
// address: 1002f5a24

int FUN_1002f5a24(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  int local_46a;
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0(param_3);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "JRFileSpecIsValid(updateFileSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1002f5c72;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_1002f4ef6(param_1);
    if (iVar2 == -0x80) goto LAB_1002f5c72;
    if (iVar2 != 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x400;
        local_44a = (char *)CONCAT44(local_44a._4_4_,iVar2);
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_458,0x12);
      }
      goto LAB_1002f5c72;
    }
  }
  iVar2 = FUN_1003870d4(param_2,3,&local_458);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = FUN_100182d59(&local_458,3);
      if ((iVar2 != -0x80) && (iVar2 != 0)) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
      }
      iVar2 = 0;
      iVar3 = FUN_1001f938c(param_3,&local_458,1,0);
      if ((iVar3 == -0x80) || (iVar3 == 0)) {
        FUN_1002f78b7(param_2);
        if (iVar3 == 0) goto LAB_1002f5c5b;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_478 = 0x8220202;
          local_474 = "Assertion failure";
          local_46c = 0x400;
          local_46a = iVar3;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
        }
        FUN_1002f78b7(param_2);
      }
      FUN_100182d59(&local_458,1);
      iVar2 = iVar3;
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_478 = 0x8220202;
        local_474 = "Assertion failure";
        local_46c = 0x400;
        local_46a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
LAB_1002f5c5b:
  FUN_100182d4d(param_3);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1002f4bfe(param_1);
  }
LAB_1002f5c72:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

