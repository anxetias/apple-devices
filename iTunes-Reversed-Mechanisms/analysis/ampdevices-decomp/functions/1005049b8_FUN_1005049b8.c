// name: FUN_1005049b8
// address: 1005049b8

undefined4
FUN_1005049b8(undefined8 param_1,long param_2,undefined8 param_3,char param_4,char param_5,
             undefined4 *param_6)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined1 local_280 [16];
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 *local_240;
  undefined4 local_238;
  cfstringStruct *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = (cfstringStruct *)0x1007a0a90;
      local_22c = 0x822;
      local_22a = "backupDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_100504deb;
  }
  local_240 = param_6;
  lVar5 = FUN_1004de449();
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = (cfstringStruct *)0x1007a0a90;
      local_22c = 0x822;
      local_22a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0x45f;
    goto LAB_100504deb;
  }
  cVar3 = FUN_1005c43fa(*(undefined8 *)(lVar5 + 0x7168));
  if (cVar3 == '\0') {
    uVar7 = FUN_100171475(param_2,&cf_RestoreCompatibility);
    cVar3 = FUN_100170633(uVar7,&cf_ApplicationDataOnlyCompatible);
    if (cVar3 != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      local_270 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        local_234 = (cfstringStruct *)FUN_100166c1b(param_2,&cf_TargetIdentifier);
        local_22a = *(char **)(lVar5 + 0x152c8);
        local_238 = 0x8420202;
        local_22c = 0x842;
        __os_log_impl(0x100000000,local_270,1,
                      "backup of device %{public}@ is only compatible with application data for device %{public}@"
                      ,&local_238,0x16);
      }
      cVar3 = FUN_1005454d0(*(undefined4 *)(lVar5 + 0x66b0));
      if (cVar3 == '\0') goto LAB_100504de6;
    }
    if (param_5 == '\0') {
      FUN_100171552(*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x70),*(undefined8 *)(lVar5 + 0x152c8)
                   );
      local_258 = *local_240;
      uStack_254 = local_240[1];
      uStack_250 = local_240[2];
      uStack_24c = local_240[3];
      if (*(long *)(local_240 + 2) != 0) {
        LOCK();
        plVar9 = (long *)(*(long *)(local_240 + 2) + 8);
        *plVar9 = *plVar9 + 1;
        UNLOCK();
      }
      uVar4 = FUN_100202e6f(lVar5,param_2,param_3,(uint)(param_4 != '\0') << 0xb | 0x400,&local_258)
      ;
      plVar9 = (long *)CONCAT44(uStack_24c,uStack_250);
    }
    else {
      uVar7 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      FUN_100171502(uVar7,&cf_Backup,param_2);
      FUN_100171502(uVar7,&cf_Password,param_3);
      FUN_100168b0b(uVar7,&cf_SetPasswordInKeychain,param_4,1);
      lVar8 = *(long *)(*(long *)(lVar5 + 0x20) + 0x70);
      if (lVar8 == 0) {
        lVar8 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        *(long *)(*(long *)(lVar5 + 0x20) + 0x70) = lVar8;
      }
      FUN_100171502(lVar8,*(undefined8 *)(lVar5 + 0x152c8),uVar7);
      FUN_10017060f(uVar7);
      local_268 = *local_240;
      uStack_264 = local_240[1];
      uStack_260 = local_240[2];
      uStack_25c = local_240[3];
      if (*(long *)(local_240 + 2) != 0) {
        LOCK();
        plVar9 = (long *)(*(long *)(local_240 + 2) + 8);
        *plVar9 = *plVar9 + 1;
        UNLOCK();
      }
      uVar4 = FUN_1001fecea(lVar5,&local_268);
      plVar9 = (long *)CONCAT44(uStack_25c,uStack_260);
    }
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      iVar2 = *(int *)(lVar5 + 0x66b0);
      if (iVar2 < 0x69506f64) {
        if (iVar2 == 0x69506164) {
          pcVar6 = &cf_iPad;
        }
        else {
          if (iVar2 != 0x6950686e) goto LAB_100504c96;
          pcVar6 = &cf_iPhone;
        }
      }
      else {
        pcVar6 = &cf_iPod;
        if ((iVar2 != 0x69506f64) && (iVar2 != 0x69506f74)) {
LAB_100504c96:
          pcVar6 = (cfstringStruct *)0x0;
        }
      }
      local_22a = *(char **)(lVar5 + 0x152c8);
      local_238 = 0x8420202;
      local_22c = 0x842;
      local_234 = pcVar6;
      __os_log_impl(0x100000000,uVar7,1,"Find My %{public}@ is enabled for device %{public}@",
                    &local_238,0x16);
    }
    uVar4 = *(undefined4 *)(lVar5 + 0x66b0);
    FUN_1004f0e83(lVar5,&local_238);
    FUN_1001b8dfc(local_280,&local_238);
    FUN_1004fda52(&local_238,*(undefined4 *)(lVar5 + 0x28));
    FUN_1005462f1(uVar4,local_280,&local_238);
    FUN_1001b7a50(&local_238);
    FUN_1001b7a50(local_280);
LAB_100504de6:
    uVar4 = 0xffffff80;
  }
LAB_100504deb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

