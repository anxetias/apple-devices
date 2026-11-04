// name: FUN_100578e86
// address: 100578e86

int FUN_100578e86(long param_1,long param_2,char param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long local_4a8;
  long local_4a0;
  long local_498;
  char local_48d;
  int local_48c;
  uint local_488;
  undefined4 local_484;
  undefined2 uStack_480;
  undefined2 uStack_47e;
  undefined2 uStack_47c;
  int iStack_47a;
  undefined2 uStack_476;
  undefined2 uStack_474;
  undefined2 uStack_472;
  uint *local_468;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_48c = 0;
  local_498 = 0;
  local_4a8 = param_2;
  local_48d = param_3;
  local_468 = operator_new(0x30);
  *(undefined ***)local_468 = &PTR_FUN_10086a7a0;
  *(long *)(local_468 + 2) = param_1;
  *(long **)(local_468 + 4) = &local_4a8;
  *(char **)(local_468 + 6) = &local_48d;
  *(int **)(local_468 + 8) = &local_48c;
  *(undefined1 **)(local_468 + 10) = local_458;
  FUN_1001edd53(&local_488);
  if (local_468 == &local_488) {
    lVar5 = 0x20;
LAB_100578f41:
    (**(code **)(*(long *)local_468 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (local_468 != (uint *)0x0) goto LAB_100578f41;
  }
  if (local_48c == 0) {
    if (local_48d == '\0') {
LAB_10057908c:
      local_48c = FUN_100180f0c(local_458,DAT_1008c4d90,&local_498,0);
    }
    else {
      lVar5 = FUN_10016aa24(DAT_1008c4d90,local_458,1,0);
      if (lVar5 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_488 = 0x8220202;
          local_484 = 0x7a0a90;
          uStack_480 = 1;
          uStack_47e = 0;
          uStack_47c = 0x822;
          iStack_47a = 0x7e98d3;
          uStack_476 = 1;
          uStack_474 = 0;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
        }
        FUN_1001782e9(0,0);
        local_498 = 0;
        goto LAB_10057908c;
      }
      FUN_100171552(lVar5,&cf_ConfiguratorVersions);
      FUN_100171552(lVar5,&cf_MobileDeviceSoftwareVersions);
      FUN_100171552(lVar5,&cf_MobileDeviceSoftwareVersionsByVersion);
      FUN_100171552(lVar5,&cf_NikeVoiceKits);
      FUN_100171552(lVar5,&cf_NikeVoiceKitsByVersion);
      FUN_100171552(lVar5,&cf_iBooksDictionaries);
      FUN_100171552(lVar5,&cf_iPodMacUpdaterVersions);
      FUN_100171552(lVar5,&cf_iPodSoftwareVersions);
      FUN_100171552(lVar5,&cf_iPodVoiceOverKit);
      FUN_100171552(lVar5,&cf_iPodWindowsUpdaterVersions);
      FUN_100171552(lVar5,&cf_iTunesRequiredMacOSVersions);
      lVar6 = FUN_10016aaf8(DAT_1008c4d90,lVar5,0);
      FUN_10017060f(lVar5);
      local_498 = lVar6;
      if (lVar6 == 0) goto LAB_10057908c;
    }
    if (local_48c != 0) goto LAB_1005790b9;
    uVar12 = FUN_100170ef7(local_498);
    if (uVar12 == 0) {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      if (cVar2 != '\0') {
        local_488 = 0x8220202;
        local_484 = 0x7ab58c;
        uStack_480 = 1;
        uStack_47e = 0;
        uStack_47c = 0x822;
        iStack_47a = 0x7e9833;
        uStack_476 = 1;
        uStack_474 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
      }
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar2 != '\0') {
          local_488 = 0x8420102;
          local_484 = (undefined4)local_4a8;
          uStack_480 = (undefined2)((ulong)local_4a8 >> 0x20);
          uStack_47e = (undefined2)((ulong)local_4a8 >> 0x30);
          __os_log_impl(0x100000000,uVar9,0x10,"skynet> file size zero for %{public}@",&local_488,
                        0xc);
        }
        local_48c = -0x27;
        FUN_10017060f(local_498);
        local_498 = 0;
      }
      goto LAB_1005790b9;
    }
  }
  else {
LAB_1005790b9:
    uVar12 = 0;
  }
  lVar6 = local_4a8;
  lVar10 = (long)local_48c;
  lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar5 == 0) {
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_488 = 0x8220202;
      local_484 = 0x7a0a90;
      uStack_480 = 1;
      uStack_47e = 0;
      uStack_47c = 0x822;
      iStack_47a = 0x7e98d3;
      uStack_476 = 1;
      uStack_474 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
    FUN_1001782e9(0,0);
    uVar9 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar9,0x10);
    if (cVar2 != '\0') {
      local_488 = 0x8220202;
      local_484 = 0x7a0a90;
      uStack_480 = 1;
      uStack_47e = 0;
      uStack_47c = 0x822;
      iStack_47a = 0x7e9848;
      uStack_476 = 1;
      uStack_474 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
    iVar3 = -0x6c;
    FUN_1001782e9(0,0);
    goto LAB_10057947b;
  }
  FUN_10016843e(lVar5,&cf_messageName,"StartFileTransfer",0);
  FUN_100168746(lVar5,&cf_fileSize,uVar12,0);
  if (lVar6 != 0) {
    FUN_10016826a(lVar5,&cf_originalURL,lVar6,0);
  }
  FUN_100168746(lVar5,&cf_status,lVar10,0);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_488 = 0x4000302;
    local_484 = (undefined4)uVar12;
    uStack_480 = 0x842;
    uStack_47e = (undefined2)local_4a8;
    uStack_47c = (undefined2)((ulong)local_4a8 >> 0x10);
    iStack_47a = (int)((ulong)local_4a8 >> 0x20);
    uStack_476 = 0x400;
    uStack_474 = (undefined2)local_48c;
    uStack_472 = (undefined2)((uint)local_48c >> 0x10);
    __os_log_impl(0x100000000,uVar9,1,
                  "skynet> starting file transfer of %d bytes from %{public}@ with status %d",
                  &local_488,0x18);
  }
  iVar3 = FUN_100578a84(param_1,lVar5);
  local_48c = iVar3;
  iVar1 = iStack_47a;
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      local_4a0 = lVar5;
      if (local_498 != 0) {
        uVar7 = FUN_100170f3b();
        uVar11 = uVar7 + uVar12;
        do {
          if ((long)uVar12 < 1) goto LAB_100579399;
          uVar8 = 0x1000;
          if (uVar12 < 0x1000) {
            uVar8 = uVar12;
          }
          uVar4 = _AMDServiceConnectionSend(*(undefined8 *)(param_1 + 0x20),uVar7,uVar8);
          uVar8 = (ulong)uVar4;
          if ((int)uVar4 < 1) {
            uVar8 = 0;
          }
          uVar12 = uVar12 - uVar8;
          uVar7 = uVar7 + uVar8;
        } while (uVar7 < uVar11);
        if (0 < (long)uVar12) {
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_488 = 0x8220202;
            local_484 = 0x7a0a90;
            uStack_480 = 1;
            uStack_47e = 0;
            uStack_47c = 0x822;
            iStack_47a = 0x7e986c;
            uStack_476 = 1;
            uStack_474 = 0;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
          }
          FUN_1001782e9(0,0);
          lVar5 = local_4a0;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          iVar1 = iStack_47a;
          iVar3 = -0x27;
          if (cVar2 != '\0') {
            local_488 = 0x4000100;
            local_484 = (undefined4)uVar12;
            __os_log_impl(0x100000000,uVar9,0x10,"skynet> incomplete file send; %d bytes remaining",
                          &local_488,8);
            iVar1 = iStack_47a;
          }
          goto LAB_100579473;
        }
      }
LAB_100579399:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      lVar5 = local_4a0;
      uVar9 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_488 = local_488 & 0xffff0000;
        __os_log_impl(0x100000000,uVar9,1,"skynet> (receive only)",&local_488,2);
      }
      iVar3 = FUN_100578a84(param_1,0);
      local_48c = iVar3;
      iVar1 = iStack_47a;
      if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_100579473;
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      iVar1 = iStack_47a;
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar9,0x10);
      iVar1 = iStack_47a;
    }
    iStack_47a = iVar3;
    iVar3 = local_48c;
    if (cVar2 != '\0') {
      uStack_47c = 0x400;
      uStack_47e = 0;
      uStack_480 = 1;
      local_484 = 0x7a0a90;
      local_488 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_488,0x12);
      iVar1 = iStack_47a;
      iVar3 = local_48c;
    }
  }
LAB_100579473:
  iStack_47a = iVar1;
  FUN_10017060f(lVar5);
LAB_10057947b:
  FUN_10017060f(local_498);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

