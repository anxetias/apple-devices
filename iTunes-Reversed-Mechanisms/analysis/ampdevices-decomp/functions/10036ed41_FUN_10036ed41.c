// name: FUN_10036ed41
// address: 10036ed41

int FUN_10036ed41(char *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (char *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "connection != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x17ffbff9;
    goto LAB_10036f17f;
  }
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "operation != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x17ffbffd;
    goto LAB_10036f17f;
  }
  cVar1 = _AFCConnectionIsValid();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "AFCConnectionIsValid(connection)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8000100;
      local_44 = param_1;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "connection %p is not valid",&local_48,0xc);
    }
  }
  cVar1 = FUN_1001ee068();
  if (cVar1 == '\0') {
    lVar5 = _AFCConnectionGetIOTimeout(param_1);
    iVar3 = _AFCConnectionProcessOperation((double)lVar5,param_1,param_2);
    if (iVar3 == -0x80) goto LAB_10036f17f;
    if (iVar3 == 0) {
LAB_10036ef4f:
      iVar3 = _AFCOperationGetResultStatus(param_2);
      goto LAB_10036f17f;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10036f17f;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    iVar2 = FUN_1001e96d3(&local_58,0,0);
    iVar3 = -0x17ffbfff;
    if (iVar2 == -0x80) goto LAB_10036f17f;
    if (iVar2 == 0) {
      _AFCOperationSetContext(param_2,&local_58);
      iVar3 = _AFCConnectionSubmitOperation(param_1,param_2);
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          iVar3 = FUN_1001e9afc(&local_58);
          if (iVar3 != -0x80) {
            if (iVar3 == 0) {
              iVar3 = FUN_1001e9bb5(&local_58);
              if ((iVar3 != -0x80) && (iVar3 != 0)) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_48 = 0x8220202;
                  local_44 = "Assertion failure";
                  local_3c = 0x400;
                  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,
                                      0x12);
                }
              }
              goto LAB_10036ef4f;
            }
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
          iVar3 = -0x17ffbfff;
          goto LAB_10036f17f;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      _AFCOperationSetContext(param_2,0);
      goto LAB_10036f17f;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10036f17f;
    local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
  }
  local_3c = 0x400;
  local_44 = "Assertion failure";
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
LAB_10036f17f:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

