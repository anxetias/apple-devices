// name: FUN_1004dccf5
// address: 1004dccf5

int FUN_1004dccf5(long param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 local_8a8 [48];
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined2 uStack_446;
  undefined2 uStack_444;
  undefined2 uStack_442;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004dcf40:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = 0x7ad2b2;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar4 = -0x32;
    goto LAB_1004dcf6c;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure (expected to be true)";
      local_44c = 0x822;
      local_44a = 0x7ad710;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_1004dcf40;
  }
  if (*(char *)(param_1 + 0x6abd) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = 0x7d61d3;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    iVar4 = -0x23;
    if (cVar2 == '\0') goto LAB_1004dcf6c;
    local_458 = 0x8220102;
    pcVar7 = "retain> %{public}s - not connected";
    uVar8 = 0xc;
    local_454 = param_2;
LAB_1004dd092:
    __os_log_impl(0x100000000,uVar6,1,pcVar7,&local_458,uVar8);
    goto LAB_1004dcf6c;
  }
  *(int *)(param_1 + 0x66e0) = *(int *)(param_1 + 0x66e0) + 1;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,2);
  if (cVar2 != '\0') {
    iVar4 = *(int *)(param_1 + 0x66e0);
    local_44a = iVar4 + -1;
    local_458 = 0x8220302;
    local_44c = 0x400;
    uStack_446 = 0x400;
    uStack_444 = (undefined2)iVar4;
    uStack_442 = (undefined2)((uint)iVar4 >> 0x10);
    local_454 = param_2;
    __os_log_impl(0x100000000,uVar6,2,"retain> %{public}s (%u -> %u)",&local_458,0x18);
  }
  if (*(int *)(param_1 + 0x66e0) == 1) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_458 = local_458 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,"sync> retaining device",&local_458,2);
    }
    *(undefined1 *)(param_1 + 0x6ada) = 1;
    uVar3 = FUN_1001b19b0();
    *(undefined4 *)(param_1 + 0x66e8) = uVar3;
    if (*(char *)(param_1 + 0x6ad7) == '\0') {
LAB_1004dce8e:
      FUN_1001c62d9(param_1 + 0x6b40,0x420);
      FUN_10023318f(param_1,"");
    }
    else {
      cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
      if (cVar2 == '\0') goto LAB_1004dce8e;
      iVar4 = FUN_10026677e(*(undefined8 *)(param_1 + 0x66d8),local_878);
      if (iVar4 != 0) goto LAB_1004dce8e;
    }
    FUN_1001ceabd(local_8a8,0,FUN_1004e5223,param_1,0,0);
    iVar4 = FUN_1002665ba(*(undefined8 *)(param_1 + 0x66d8),1,local_8a8);
    *(int *)(param_1 + 0x66e4) = iVar4;
    FUN_1004e537e(*(undefined8 *)(param_1 + 0x20),0);
    *(undefined4 *)(param_1 + 0x66e8) = 0;
    *(undefined1 *)(param_1 + 0x6ada) = 0;
    FUN_10023318f(param_1,"");
    if (iVar4 == 0) {
      if (*(char *)(param_1 + 0x6adb) != '\0') goto LAB_1004dd0a9;
LAB_1004dd133:
      if (*(char *)(param_1 + 0x6ad7) != '\0') {
        cVar2 = FUN_10017cbd0(param_1 + 0x6b40);
        if (cVar2 != '\0') {
          iVar5 = FUN_100505b70(param_1 + 0x14c68);
          if (iVar5 == 0) {
            if (*(long *)(param_1 + 0x14cb0) == 0) {
              lVar1 = param_1 + 0x75e0;
              iVar5 = FUN_1001888ba(lVar1,"iTunesLock",&local_458,0);
              if (iVar5 == 0) {
                *(undefined1 *)(param_1 + 0x6ad4) = 1;
              }
              else {
                FUN_100189206(lVar1,"iTunesLock",&local_458);
                FUN_100189139(&local_458,0x60606);
              }
              iVar5 = FUN_1001888ba(lVar1,"iTunesControl",&local_458,0);
              if (iVar5 != 0) {
                iVar5 = FUN_100189206(lVar1,"iTunesControl",&local_458);
                FUN_100189139(&local_458,0x60606);
                if (iVar5 != 0) goto LAB_1004dd3a4;
              }
              iVar5 = FUN_10017cc65(&local_458,0x64617461,3,param_1 + 0x14cb0);
              if (iVar5 == 0) {
                FUN_100505cd3(param_1);
              }
            }
LAB_1004dd3a4:
            FUN_1001e9eb9(param_1 + 0x14c68);
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_458 = 0x8220202;
              local_454 = "Assertion failure";
              local_44c = 0x400;
              local_44a = iVar5;
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
            }
          }
        }
      }
      FUN_1004e4afa(param_1,1);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        pcVar7 = "sync> done retaining device";
        goto LAB_1004dd3fa;
      }
    }
    else {
      cVar2 = FUN_100266cae(*(undefined8 *)(param_1 + 0x66d8));
      if (cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x151e3) = 0;
      }
LAB_1004dd0a9:
      if (*(char *)(param_1 + 0x6abd) == '\0') {
        FUN_1005c9f7c(param_1,iVar4);
      }
      if (iVar4 == 0) goto LAB_1004dd133;
      if (iVar4 != -0x80) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x400;
          local_44a = iVar4;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
      }
    }
LAB_1004dd40d:
    if (iVar4 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_458 = 0x4000100;
        local_454 = (char *)CONCAT44(local_454._4_4_,iVar4);
        __os_log_impl(0x100000000,uVar6,0x10,"retain> retain failed (%d)",&local_458,8);
      }
      *(int *)(param_1 + 0x66e0) = *(int *)(param_1 + 0x66e0) + -1;
      goto LAB_1004dcf6c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x6ada) != '\0') {
      iVar5 = FUN_1001b19b0();
      iVar4 = *(int *)(param_1 + 0x66e8);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (iVar5 == iVar4) {
        iVar4 = 0;
        if (cVar2 == '\0') goto LAB_1004dcf6c;
        local_458 = (uint)local_458._2_2_ << 0x10;
        pcVar7 = "sync> waiting for device to be retained on same fiber!";
        uVar8 = 2;
        goto LAB_1004dd092;
      }
      if (cVar2 != '\0') {
        local_458 = (uint)local_458._2_2_ << 0x10;
        __os_log_impl(0x100000000,uVar6,1,"sync> waiting for device to be retained",&local_458,2);
      }
      while (*(char *)(param_1 + 0x6ada) != '\0') {
        FUN_1004e32ed();
      }
      iVar4 = *(int *)(param_1 + 0x66e4);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 == '\0') goto LAB_1004dd40d;
      pcVar7 = "sync> done waiting for device to be retained";
LAB_1004dd3fa:
      local_458 = local_458 & 0xffff0000;
      __os_log_impl(0x100000000,uVar6,1,pcVar7,&local_458,2);
      goto LAB_1004dd40d;
    }
    if (*(int *)(param_1 + 0x66e4) != 0) {
      uVar6 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_458 = 0x8220202;
        local_454 = "Assertion failure";
        local_44c = 0x822;
        local_44a = 0x7d61ea;
        uStack_446 = 1;
        uStack_444 = 0;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      iVar4 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1004dcf6c;
    }
  }
  iVar4 = 0;
LAB_1004dcf6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

