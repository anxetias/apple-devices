// name: FUN_1005a5736
// address: 1005a5736

undefined8 FUN_1005a5736(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)((long)param_1 + 0x15a2) != '\0') {
    *(undefined1 *)((long)param_1 + 0x15a4) = *(undefined1 *)(*param_1 + 0x14de5);
    *(undefined1 *)(param_1 + 0x2b4) = 1;
    if (*(char *)((long)param_1 + 0x15a3) != '\0') {
      FUN_10017060f(param_1[0x2be]);
      lVar3 = FUN_100172473(DAT_1008c4d90,*param_1 + 0x14dd6,0x600);
      param_1[0x2be] = lVar3;
      lVar3 = FUN_1001705fc(lVar3);
      FUN_10017060f(param_1[0x2d5]);
      param_1[0x2d5] = lVar3;
    }
  }
  iVar2 = FUN_1005aeaea(param_1);
  if (iVar2 != 0) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    uVar8 = 1;
    if (cVar1 == '\0') goto LAB_1005a5bbe;
    pcVar6 = "speech> no CacheInfo.plist";
LAB_1005a581c:
    local_48 = local_48 & 0xffff0000;
    uVar7 = 2;
LAB_1005a582a:
    uVar8 = 1;
    __os_log_impl(0x100000000,uVar4,1,pcVar6,&local_48,uVar7);
    goto LAB_1005a5bbe;
  }
  iVar2 = FUN_1005a6584(param_1);
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    uVar8 = 1;
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    goto LAB_1005a5bbe;
  }
  if (param_1[2] == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "mSpeakableCheckpointDict != nullptr";
LAB_1005a5ce3:
      uStack_3c = 0x822;
      uStack_3e = 0;
      uStack_40 = 1;
      local_44 = 0x7a0a90;
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005a5bb2:
    FUN_1001782e9(0,0);
  }
  else {
    if (param_1[700] == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "mCachedInfoDict != nullptr";
        goto LAB_1005a5ce3;
      }
      goto LAB_1005a5bb2;
    }
    lVar3 = FUN_100166c1b(param_1[700],&cf_Format);
    if (lVar3 == 0) {
LAB_1005a5b38:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_3a = (char *)param_1[0x2ae];
      local_44 = (int)lVar3;
      uStack_40 = (undefined2)((ulong)lVar3 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar3 >> 0x30);
      pcVar6 = "speech> format changed (\"%{public}@\" vs. \"%{public}@\")";
LAB_1005a5c3b:
      uStack_3c = 0x842;
      local_48 = 0x8420202;
      uVar7 = 0x16;
      goto LAB_1005a582a;
    }
    cVar1 = FUN_100170633(lVar3,param_1[0x2ae]);
    if (cVar1 == '\0') goto LAB_1005a5b38;
    lVar3 = FUN_100166c1b(param_1[700],&cf_Locale);
    if (lVar3 == 0) {
LAB_1005a5be3:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_3a = (char *)param_1[0x2be];
      local_44 = (int)lVar3;
      uStack_40 = (undefined2)((ulong)lVar3 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar3 >> 0x30);
      pcVar6 = "speech> locale changed (\"%{public}@\" vs. \"%{public}@\")";
      goto LAB_1005a5c3b;
    }
    cVar1 = FUN_100170633(lVar3,param_1[0x2be]);
    if (cVar1 == '\0') goto LAB_1005a5be3;
    cVar1 = FUN_100167740(param_1[700],&cf_FamilyID,&local_54);
    if ((cVar1 == '\0') || (local_54 != (int)param_1[0x2c3])) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_44 = local_54;
      uStack_3e = (undefined2)(int)param_1[0x2c3];
      uStack_3c = (undefined2)((uint)(int)param_1[0x2c3] >> 0x10);
      pcVar6 = "speech> family id changed (%u vs. %u)";
LAB_1005a5cac:
      uStack_40 = 0x400;
      local_48 = 0x4000200;
      uVar7 = 0xe;
      goto LAB_1005a582a;
    }
    lVar3 = FUN_100166c1b(param_1[700],&cf_BuildID);
    if (lVar3 == 0) {
LAB_1005a5d0d:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_3a = (char *)param_1[0x2c1];
      local_44 = (int)lVar3;
      uStack_40 = (undefined2)((ulong)lVar3 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar3 >> 0x30);
      pcVar6 = "speech> build id changed (\"%{public}@\" vs. \"%{public}@\")";
      goto LAB_1005a5c3b;
    }
    cVar1 = FUN_100170633(lVar3,param_1[0x2c1]);
    if (cVar1 == '\0') goto LAB_1005a5d0d;
    lVar3 = FUN_100166c1b(param_1[700],&cf_BuildVersion);
    if ((lVar3 != 0) && (param_1[0x2c2] != 0)) {
      cVar1 = FUN_100170633(lVar3);
      if (cVar1 != '\0') goto LAB_1005a59c5;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_3a = (char *)param_1[0x2c2];
      local_44 = (int)lVar3;
      uStack_40 = (undefined2)((ulong)lVar3 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar3 >> 0x30);
      pcVar6 = "speech> build version changed (\"%{public}@\" vs. \"%{public}@\")";
      goto LAB_1005a5c3b;
    }
LAB_1005a59c5:
    lVar3 = FUN_100166b7f(param_1[700],&cf_VoiceInfo);
    if (lVar3 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      pcVar6 = "speech> no voice info";
      goto LAB_1005a581c;
    }
    lVar5 = FUN_100166c1b(lVar3,&cf_Voice);
    if (lVar5 == 0) {
LAB_1005a5d6e:
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_3a = (char *)param_1[0x2bf];
      local_44 = (int)lVar5;
      uStack_40 = (undefined2)((ulong)lVar5 >> 0x20);
      uStack_3e = (undefined2)((ulong)lVar5 >> 0x30);
      pcVar6 = "speech> voice changed (\"%{public}@\" vs. \"%{public}@\")";
      goto LAB_1005a5c3b;
    }
    cVar1 = FUN_100170633(lVar5,param_1[0x2bf]);
    if (cVar1 == '\0') goto LAB_1005a5d6e;
    cVar1 = FUN_100167896(lVar3,&cf_Speed,&local_50);
    if ((cVar1 == '\0') || (local_50 != (int)param_1[0x2c0])) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      uVar8 = 1;
      if (cVar1 == '\0') goto LAB_1005a5bbe;
      local_44 = local_50;
      uStack_3e = (undefined2)(int)param_1[0x2c0];
      uStack_3c = (undefined2)((uint)(int)param_1[0x2c0] >> 0x10);
      pcVar6 = "speech> rate changed (%d vs. %d)";
      goto LAB_1005a5cac;
    }
    if (*(char *)((long)param_1 + 0x15a2) == '\0') {
LAB_1005a5f4a:
      uVar8 = 0;
      goto LAB_1005a5bbe;
    }
    uVar8 = 0;
    cVar1 = FUN_100537ef0(0);
    if (cVar1 == '\0') goto LAB_1005a5bbe;
    cVar1 = FUN_10016801e(param_1[700],&cf_VoiceOverKitVersion,&local_4c);
    if (cVar1 == '\0') {
LAB_1005a5f0d:
      cVar1 = FUN_100167dd2(param_1[700],&cf_PreferSystemVoice,0);
      if (cVar1 == *(char *)((long)param_1 + 0x15a4)) {
        cVar1 = FUN_100167dd2(param_1[700],&cf_UseAlexVoice,1);
        if (cVar1 == *(char *)((long)param_1 + 0x15a5)) goto LAB_1005a5f4a;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          pcVar6 = "speech> use Alex voice changed";
          goto LAB_1005a5ff0;
        }
      }
      else {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          pcVar6 = "speech> prefer system voice changed";
LAB_1005a5ff0:
          local_48 = local_48 & 0xffff0000;
          uVar8 = 2;
          goto LAB_1005a5ffe;
        }
      }
    }
    else {
      cVar1 = FUN_1002f544e(param_1[0x2b3],local_4c);
      if (cVar1 == '\0') goto LAB_1005a5f0d;
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') goto LAB_1005a5bbb;
      local_48 = 0x4000100;
      local_44 = local_4c;
      pcVar6 = "speech> VoiceOver Kit version changed (0x%08X)";
      uVar8 = 8;
LAB_1005a5ffe:
      __os_log_impl(0x100000000,uVar4,1,pcVar6,&local_48,uVar8);
    }
  }
LAB_1005a5bbb:
  uVar8 = 1;
LAB_1005a5bbe:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

