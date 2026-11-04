// name: FUN_100373d20
// address: 100373d20

int FUN_100373d20(void *param_1,undefined8 param_2,uint param_3,void *param_4,long param_5,
                 long param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  char local_8c0 [80];
  long local_870;
  long local_868;
  void *local_860;
  undefined4 local_858;
  char *local_854;
  undefined2 local_84c;
  int local_84a;
  undefined4 local_838;
  char *local_834;
  undefined2 local_82c;
  char *local_82a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (0x3ff < param_3) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_838 = 0x8220202;
      local_834 = "Assertion failure";
      local_82c = 0x822;
      local_82a = "pathLength <= 1023";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_838,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_100373ef9;
  }
  local_870 = param_6;
  lVar4 = FUN_10036d859();
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_838 = 0x8220202;
      local_834 = "Assertion failure";
      local_82c = 0x822;
      local_82a = "afcVolumeInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_838,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x23;
    goto LAB_100373ef9;
  }
  local_868 = lVar4;
  local_860 = param_4;
  iVar2 = FUN_10036dfdc(param_1,local_8c0,0);
  pvVar7 = local_860;
  if (iVar2 == -0x80) {
    iVar3 = 0;
    goto LAB_100373e7c;
  }
  if (iVar2 == 0) {
    if (local_8c0[0] == '\0') {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_838 = 0x8220202;
        local_834 = "Assertion failure";
        local_82c = 0x822;
        local_82a = "fileInfo.isDirectory";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_838,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = -0x57f;
      goto LAB_100373ed2;
    }
    if (param_3 == 0) {
      _memcpy(local_860,param_1,0x420);
LAB_100373f8a:
      if (param_5 != 0 || local_870 != 0) {
        iVar2 = FUN_10036dfdc(pvVar7,param_5);
        goto LAB_100373ed2;
      }
      lVar4 = FUN_10036d2f1(local_868,0);
      if (lVar4 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_838 = 0x8220202;
          local_834 = "Assertion failure";
          local_82c = 0x822;
          local_82a = "afcConnection != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_838,0x16);
        }
        lVar4 = 0;
        FUN_1001782e9(0,0);
        iVar3 = -0x17ffbfe9;
        iVar2 = 0;
      }
      else {
        lVar5 = FUN_10036e72b(pvVar7);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar6,0x10);
          if (cVar1 != '\0') {
            local_838 = 0x8220202;
            local_834 = "Assertion failure";
            local_82c = 0x822;
            local_82a = "tempPath != nullptr";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_838,0x16);
          }
          iVar2 = 0;
          FUN_1001782e9(0,0);
          iVar3 = -0x17ffbffd;
        }
        else {
          iVar2 = 0;
          uVar6 = _AFCOperationCreateGetFileInfo(DAT_1008c4d90,lVar5,0);
          iVar3 = FUN_10036ed41(lVar4,uVar6);
          FUN_10017060f(uVar6);
          FUN_10017060f(lVar5);
        }
      }
    }
    else {
      FUN_1001c631b(param_2,(long)&local_838 + 2,param_3 * 2);
      local_838 = CONCAT22(local_838._2_2_,(short)param_3);
      iVar2 = 0;
      iVar3 = FUN_100377aa5(param_1,&local_838,0,0,1,local_860);
      if (iVar3 != -0x80) {
        pvVar7 = local_860;
        if (iVar3 == 0) goto LAB_100373f8a;
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_858 = 0x8220202;
          local_854 = "Assertion failure";
          local_84c = 0x400;
          local_84a = iVar3;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_858,0x12);
        }
      }
LAB_100373e7c:
      lVar4 = 0;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_838 = 0x8220202;
      local_834 = "Assertion failure";
      local_82c = 0x400;
      local_82a = (char *)CONCAT44(local_82a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_838,0x12);
    }
LAB_100373ed2:
    lVar4 = 0;
    iVar3 = 0;
  }
  FUN_10017060f(lVar4);
  FUN_10036d4d2(local_868);
  if (iVar2 == 0) {
    iVar2 = FUN_10036db97(iVar3);
  }
LAB_100373ef9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

