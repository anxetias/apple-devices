// name: FUN_1005afc12
// address: 1005afc12

int FUN_1005afc12(long param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined4 local_888;
  char *local_884;
  undefined2 local_87c;
  int local_87a;
  undefined4 local_468;
  char *local_464;
  undefined2 local_45c;
  char *local_45a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_45a = "handlerData != nullptr";
LAB_1005aff73:
      local_45c = 0x822;
      local_464 = "Assertion failure";
      local_468 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_468,0x16);
    }
  }
  else {
    if (*(char *)(param_1 + 0x399) != '\0') {
      iVar2 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x73706368,1,
                            &local_468);
      if (iVar2 == -0x80) goto LAB_1005afd6c;
      if (iVar2 != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_888 = 0x8220202;
          local_884 = "Assertion failure";
          local_87c = 0x400;
          local_87a = iVar2;
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_888,0x12);
        }
        goto LAB_1005afd6c;
      }
      iVar2 = FUN_1001888ba(&local_468,"CacheInfo.plist",&local_888,0);
      if (iVar2 == 0) {
        pcVar3 = (char *)FUN_10016aa24(DAT_1008c4d90,&local_888,1,0);
        if (pcVar3 == (char *)0x0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "dictSpeakableInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1005afca5;
        }
      }
      else {
LAB_1005afca5:
        pcVar3 = (char *)FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (pcVar3 == (char *)0x0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "dictSpeakableInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          pcVar3 = (char *)0x0;
          FUN_1001782e9(0,0);
        }
      }
      FUN_100168746(pcVar3,&cf_Version,(*(char *)(param_1 + 0x399) != '\0') * '\x02',0);
      FUN_100168b0b(pcVar3,&cf_Speech,*(undefined1 *)(param_1 + 0x16648),1);
      FUN_100168b0b(pcVar3,&cf_Invert,*(undefined1 *)(param_1 + 0x16649),1);
      FUN_100168b0b(pcVar3,&cf_MonoAudio,*(undefined1 *)(param_1 + 0x1664a),1);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        local_48 = 0x8420102;
        local_44 = pcVar3;
        __os_log_impl(0x100000000,uVar4,1,
                      "speech> WriteAccessibilityPrefs() - dictSpeakableInfo =\n%{public}@",
                      &local_48,0xc);
      }
      iVar2 = FUN_10016a60e(pcVar3,&local_468,"CacheInfo.plist",&local_888,0,100,0);
      FUN_10017060f(pcVar3);
      goto LAB_1005afd6c;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_45a = "handlerData->deviceInfo.supportsAccessibility";
      goto LAB_1005aff73;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1005afd6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

