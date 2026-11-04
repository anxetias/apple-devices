// name: FUN_10032de84
// address: 10032de84

undefined8
FUN_10032de84(long param_1,undefined8 *param_2,short *param_3,long param_4,undefined4 param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char *local_78;
  undefined4 local_6c;
  long local_68;
  char *local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_6c = param_5;
  if ((param_3 == (short *)0x0) || (*param_3 == 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "fileName != nullptr && fileName[0] != 0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (param_4 != 0) {
      local_68 = FUN_100166b7f(*(undefined8 *)(param_1 + 0x16210),&cf_VoiceMemos);
      if (local_68 == 0) {
        lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                              PTR__kCFTypeDictionaryValueCallBacks_10082e140);
        FUN_100171502(*(undefined8 *)(param_1 + 0x16210),&cf_VoiceMemos,lVar5);
        local_68 = lVar5;
        lVar5 = FUN_100170620(lVar5);
        if (lVar5 < 2) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "JRCFGetRetainCount(voiceMemosDict) > 1";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        FUN_10017060f(local_68);
      }
      local_60 = (char *)FUN_1001658f1(DAT_1008c4d90,param_3);
      if (local_60 == (char *)0x0) {
        uVar6 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar6,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "voiceMemoFileName != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
LAB_10032e023:
        uVar6 = 0xffffff94;
LAB_10032e2c7:
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_100166b7f(local_68);
        if (lVar5 == 0) {
          lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (lVar5 == 0) {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "voiceMemoInfoDict != nullptr";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            goto LAB_10032e023;
          }
        }
        else {
          lVar5 = FUN_1001705fc(lVar5);
        }
        FUN_100168746(lVar5,&cf_Size,*(undefined8 *)(param_4 + 0x20),1);
        if (*(ushort *)(param_1 + 100) < 0x800) {
          uVar3 = FUN_100177d41(*(undefined4 *)(param_4 + 8));
          FUN_100168746(lVar5,&cf_ModificationDate,uVar3,0);
        }
        uVar4 = FUN_1004744bf(param_2,0);
        if ((uVar4 >> 0x14 & 1) == 0) {
          cVar2 = FUN_100167dd2(lVar5,&cf_RecordedOnDevice,0);
          if (cVar2 != '\0') {
            FUN_100171552(lVar5,&cf_TrackLibraryID);
            FUN_100171552(lVar5,&cf_TrackPersistentID);
            goto LAB_10032e16d;
          }
          FUN_10017060f(lVar5);
LAB_10032e25f:
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          pcVar1 = local_60;
          uVar6 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_58 = 0x8420102;
            local_54 = pcVar1;
            __os_log_impl(0x100000000,uVar6,1,
                          "sync> removing voice memos info for file \"%{public}@\"",&local_58,0xc);
          }
          FUN_100171552(local_68,pcVar1);
          uVar6 = 0;
          goto LAB_10032e2c7;
        }
        if (param_2[2] != 0) {
          if (*(int *)(param_2[2] + 0x80) == 0x74646174) {
LAB_10032e11c:
            uVar6 = FUN_10030064f(param_2);
            FUN_100168746(lVar5,&cf_TrackLibraryID,uVar6,0);
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar6,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be true)";
              local_4c = 0x822;
              local_4a = "trackData->magic == \'tdat\'";
              __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar2 = FUN_1001782e9(0,1);
            if (cVar2 != '\0') goto LAB_10032e11c;
          }
          if (param_2[2] != 0) {
            FUN_100168746(lVar5,&cf_TrackPersistentID,*param_2,0);
          }
        }
        FUN_100168b0b(lVar5,&cf_RecordedOnDevice,(undefined1)local_6c,1);
LAB_10032e16d:
        if (lVar5 == 0) goto LAB_10032e25f;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_78 = (char *)FUN_10016fefa(lVar5);
          local_58 = 0x8420202;
          local_54 = local_60;
          local_4c = 0x842;
          local_4a = local_78;
          __os_log_impl(0x100000000,uVar6,1,
                        "sync> updating voice memos info for file \"%{public}@\":\n%{public}@",
                        &local_58,0x16);
          FUN_10014d890(&local_78);
        }
        FUN_100171502(local_68,local_60,lVar5);
        uVar6 = 0;
      }
      FUN_10017060f(lVar5);
      FUN_10017060f(local_60);
      goto LAB_10032e2db;
    }
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "fileInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar6 = 0xffffffce;
LAB_10032e2db:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

