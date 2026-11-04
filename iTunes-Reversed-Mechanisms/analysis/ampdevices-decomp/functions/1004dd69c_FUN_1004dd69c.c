// name: FUN_1004dd69c
// address: 1004dd69c

void FUN_1004dd69c(long param_1,char *param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  undefined2 uStack_36;
  undefined4 uStack_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004dd824:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 0x7ad2b2;
      uStack_36 = 1;
      uStack_34._0_2_ = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004dd942;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be true)";
      local_3c = 0x822;
      local_3a = 0x7ad710;
      uStack_36 = 1;
      uStack_34._0_2_ = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_1004dd824;
  }
  if (*(char *)(param_1 + 0x6abd) == '\0') {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 0x7d61d3;
      uStack_36 = 1;
      uStack_34._0_2_ = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 == '\0') goto LAB_1004dd942;
    pcVar6 = "release> %{public}s - not connected";
    uVar7 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x66e0) != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,2);
      if (cVar3 != '\0') {
        local_3a = *(int *)(param_1 + 0x66e0);
        local_48 = 0x8220302;
        local_3c = 0x400;
        uStack_34 = local_3a + -1;
        uStack_36 = 0x400;
        local_44 = param_2;
        __os_log_impl(0x100000000,uVar5,2,"release> %{public}s (%u -> %u)",&local_48,0x18);
      }
      piVar1 = (int *)(param_1 + 0x66e0);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_1004e7a5c(param_1);
        lVar2 = param_1 + 0x14c68;
        iVar4 = FUN_100505b70(lVar2);
        if (iVar4 == 0) {
          if (*(long *)(param_1 + 0x14cb0) == 0) {
            FUN_1001e9eb9(lVar2);
          }
          else {
            FUN_100505cd3(param_1);
            FUN_10017cdfb(*(undefined8 *)(param_1 + 0x14cb0));
            *(undefined8 *)(param_1 + 0x14cb0) = 0;
            FUN_1001e9eb9(lVar2);
            FUN_1001893a7(param_1 + 0x75e0,"iTunesLock");
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = iVar4;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
        FUN_1004e48c6(param_1);
        FUN_1004e4afa(param_1,1);
        iVar4 = FUN_1002666aa(*(undefined8 *)(param_1 + 0x66d8));
        if ((iVar4 != -0x80) && (iVar4 != 0)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = iVar4;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
        }
      }
      goto LAB_1004dd942;
    }
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = 0x7d6210;
      uStack_36 = 1;
      uStack_34._0_2_ = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar3 == '\0') goto LAB_1004dd942;
    pcVar6 = "release> %{public}s - invalid retain count";
    uVar7 = 0x10;
  }
  local_48 = 0x8220102;
  local_44 = param_2;
  __os_log_impl(0x100000000,uVar5,uVar7,pcVar6,&local_48,0xc);
LAB_1004dd942:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

