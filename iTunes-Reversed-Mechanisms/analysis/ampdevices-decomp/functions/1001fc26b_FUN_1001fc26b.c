// name: FUN_1001fc26b
// address: 1001fc26b

undefined1 FUN_1001fc26b(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined1 uVar8;
  undefined4 local_48;
  int iStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      iStack_44 = 0x7a0a90;
      local_40 = 1;
      local_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7ad2e7;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_2 = 0;
    if (param_1 == 0) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        iStack_44 = 0x7a0a90;
        local_40 = 1;
        local_3e = 0;
        uStack_3c = 0x822;
        uStack_3a = 0x7ad2fb;
        uStack_36 = 1;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      FUN_10016bec9(&local_48,param_1);
      iVar4 = _AMSGetBackupPasswordFromKeychainForTarget(CONCAT44(iStack_44,local_48),param_2);
      FUN_10016d588(&local_48);
      uVar1 = uStack_3a;
      uStack_3a = (undefined4)((ulong)param_1 >> 0x20);
      uVar2 = uStack_3a;
      uStack_3a = uVar1;
      if (iVar4 == 0) {
        if (*param_2 != 0) {
          lVar6 = FUN_1001737f8();
          uVar8 = 1;
          if (lVar6 != 0) goto LAB_1001fc38c;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar5 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        uVar8 = 1;
        if (cVar3 != '\0') {
          pcVar7 = "empty";
          if (*param_2 == 0) {
            pcVar7 = "no";
          }
          local_48 = 0x8220202;
          iStack_44 = (int)pcVar7;
          local_40 = (undefined2)((ulong)pcVar7 >> 0x20);
          local_3e = 0;
          uStack_3c = 0x842;
          uStack_3a = (undefined4)param_1;
          uStack_36 = uVar2;
          __os_log_impl(0x100000000,uVar5,1,
                        "AMSGetBackupPasswordFromKeychainForTarget returned %{public}s password for device %{public}@"
                        ,&local_48,0x16);
        }
        goto LAB_1001fc38c;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar5 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x4000202;
        local_40 = 0x842;
        local_3e = (undefined2)param_1;
        uStack_3c = (undefined2)((ulong)param_1 >> 0x10);
        iStack_44 = iVar4;
        uStack_3a = uVar2;
        __os_log_impl(0x100000000,uVar5,0x10,
                      "AMSGetBackupPasswordFromKeychainForTarget failed (%d) for device %{public}@",
                      &local_48,0x12);
      }
    }
  }
  uVar8 = 0;
LAB_1001fc38c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

