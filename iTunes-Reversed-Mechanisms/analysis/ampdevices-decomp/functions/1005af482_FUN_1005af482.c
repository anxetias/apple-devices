// name: FUN_1005af482
// address: 1005af482

int FUN_1005af482(long param_1,long param_2,char param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  int local_88a;
  undefined4 local_478;
  char *local_474;
  undefined2 local_46c;
  char *local_46a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_478 = 0x8220202;
      local_474 = "Assertion failure";
      local_46c = 0x822;
      local_46a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_478,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_1005af7ad;
  }
  iVar3 = FUN_1002441f8(*(undefined4 *)(param_1 + 0x66b0),param_1 + 0x6b40,0x73706368,1,&local_478);
  if (iVar3 == -0x80) goto LAB_1005af7ad;
  if (iVar3 != 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_898 = 0x8220202;
      local_894 = "Assertion failure";
      local_88c = 0x400;
      local_88a = iVar3;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_898,0x12);
    }
    goto LAB_1005af7ad;
  }
  iVar3 = FUN_1001888ba(&local_478,"CacheInfo.plist",&local_898,0);
  if (iVar3 == 0) {
    lVar4 = FUN_10016aa24(DAT_1008c4d90,&local_898,1,0);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "dictSpeakableInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_1005af512;
    }
  }
  else {
LAB_1005af512:
    lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "dictSpeakableInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      lVar4 = 0;
      FUN_1001782e9(0,0);
    }
  }
  FUN_100168746(lVar4,&cf_Version,(*(char *)(param_1 + 0x399) != '\0') * '\x02',0);
  if (param_2 != 0) {
    FUN_100171502(lVar4,&cf_Locale,param_2);
  }
  if (param_3 != '\0') {
    if (*(char *)(param_1 + 0x399) == '\0') {
      lVar6 = FUN_100166b7f(lVar4,&cf_Channels);
      if (lVar6 == 0) {
        lVar6 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        if (lVar6 == 0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "dictChannelsInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_100171502(lVar4,&cf_Channels,lVar6);
      }
      FUN_100171502(lVar6,&cf_DefaultAccessibility,*(undefined8 *)PTR__kCFBooleanTrue_10082e038);
      FUN_10017060f(lVar6);
    }
    else {
      FUN_100168b0b(lVar4,&cf_Speech,1,1);
    }
  }
  if (*(char *)(param_1 + 0x399) != '\0') {
    uVar2 = FUN_100167dd2(lVar4,&cf_Speech,0);
    *(undefined1 *)(param_1 + 0x16648) = uVar2;
    uVar2 = FUN_100167dd2(lVar4,&cf_Invert,0);
    *(undefined1 *)(param_1 + 0x16649) = uVar2;
    uVar2 = FUN_100167dd2(lVar4,&cf_MonoAudio,0);
    *(undefined1 *)(param_1 + 0x1664a) = uVar2;
  }
  iVar3 = FUN_10016a60e(lVar4,&local_478,"CacheInfo.plist",&local_898,0,100,0);
  FUN_10017060f(lVar4);
LAB_1005af7ad:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

