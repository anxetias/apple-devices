// name: FUN_1003338b9
// address: 1003338b9

int FUN_1003338b9(double param_1,long param_2,uint param_3,uint param_4,char param_5,
                 undefined1 param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
  double dVar11;
  undefined1 local_b0 [16];
  long local_a0;
  char *local_98;
  long local_90;
  double local_88;
  double local_80;
  undefined1 local_78 [20];
  uint local_64;
  double local_60;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_88 = param_1;
  local_64 = param_3;
  if (param_2 == 0) {
LAB_1003339ba:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_1003339e0:
    iVar9 = -0x32;
    goto LAB_1003344ca;
  }
  if (*(int *)(param_2 + 8) != 0x64756c63) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_1003339ba;
  }
  if (*(long *)(param_2 + 0x16688) == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "handlerData->airTrafficHostConnection != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar9 = 0x484;
    goto LAB_1003344ca;
  }
  param_4 = param_4 | local_64;
  if (param_4 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "requestedSyncDataclasses != kAirTrafficDataclasses_None";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    dVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    iVar9 = 0x487;
    if (cVar2 != '\0') {
      local_58 = local_58 & 0xffff0000;
      __os_log_impl(0x100000000,dVar11,0x10,"airtraffic> no dataclasses specified for sync",
                    &local_58,2);
    }
    goto LAB_1003344ca;
  }
  cVar2 = FUN_1001ee068();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "JRIsCurrentThreadSecondaryCooperativeThread()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003339e0;
  }
  if (*(int *)(param_2 + 0x166d4) - 2U < 5) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    dVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_54 = *(char **)(param_2 + 0x152c8);
      if ((ulong)*(uint *)(param_2 + 0x166d4) < 10) {
        local_4a = (&PTR_s_Unknown_100854818)[*(uint *)(param_2 + 0x166d4)];
      }
      else {
        local_4a = "UNKNOWN";
      }
      local_58 = 0x8420202;
      local_4c = 0x822;
      __os_log_impl(0x100000000,dVar11,1,
                    "airtraffic> canceling previous sync for device %{public}@, current state is %{public}s"
                    ,&local_58,0x16);
    }
    FUN_100333742(param_2,2);
  }
  if (param_5 == '\0') {
    if (*(char *)(param_2 + 0x16843) == '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      dVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_54 = *(char **)(param_2 + 0x152c8);
        pcVar7 = "airtraffic> manual sync not allowed for device %{public}@";
        goto LAB_100333c6d;
      }
    }
  }
  else if (*(char *)(param_2 + 0x16842) == '\0') {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    dVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar2 != '\0') {
      local_54 = *(char **)(param_2 + 0x152c8);
      pcVar7 = "airtraffic> auto sync not allowed for device %{public}@";
LAB_100333c6d:
      local_58 = 0x8420102;
      __os_log_impl(0x100000000,dVar11,0x10,pcVar7,&local_58,0xc);
    }
  }
  FUN_10033470c(param_2,2,0);
  *(undefined4 *)(param_2 + 0x166d8) = 0;
  *(uint *)(param_2 + 0x166dc) = param_4;
  *(undefined4 *)(param_2 + 0x16700) = *(undefined4 *)(param_2 + 0x166fc);
  *(undefined8 *)(param_2 + 0x16704) = 0;
  *(undefined4 *)(param_2 + 0x16738) = *(undefined4 *)(param_2 + 0x16734);
  *(undefined8 *)(param_2 + 0x1673c) = 0;
  *(undefined4 *)(param_2 + 0x16770) = *(undefined4 *)(param_2 + 0x1676c);
  *(undefined8 *)(param_2 + 0x16774) = 0;
  *(undefined4 *)(param_2 + 0x167a8) = *(undefined4 *)(param_2 + 0x167a4);
  *(undefined8 *)(param_2 + 0x167ac) = 0;
  *(undefined1 *)(param_2 + 0x1684b) = param_6;
  FUN_10017156e(*(undefined8 *)(param_2 + 0x16800));
  if (*(int *)(param_2 + 8) == 0x64756c63) {
LAB_100333d3b:
    local_60 = (double)FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if ((param_4 & 1) != 0) {
      FUN_1001709a5(local_60,&cf_Media);
    }
    if ((param_4 & 2) != 0) {
      FUN_1001709a5(local_60,&cf_Ringtone);
    }
    if ((param_4 & 8) != 0) {
      FUN_1001709a5(local_60,&cf_Book);
    }
    if ((param_4 & 0x10) != 0) {
      FUN_1001709a5(local_60,&cf_Application);
    }
    if ((param_4 & 0x20) != 0) {
      FUN_1001709a5(local_60,&cf_Keybag);
    }
    if ((param_4 & 0x40) != 0) {
      FUN_1001709a5(local_60,&cf_Photo);
    }
    if ((char)param_4 < '\0') {
      FUN_1001709a5(local_60,&cf_Data);
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 != '\0') goto LAB_100333d3b;
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    local_60 = 0.0;
  }
  lVar5 = FUN_100334975(param_2,local_64,0);
  lVar6 = FUN_1003335d2(param_2);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  dVar11 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_98 = *(char **)(param_2 + 0x152c8);
    FUN_1001b7a44(local_b0);
    FUN_1001b7b04(local_78,"{ ");
    local_80 = dVar11;
    FUN_1001bbcfe(local_b0,local_78);
    local_a0 = lVar5;
    local_90 = lVar6;
    FUN_1001b7a50(local_78);
    lVar5 = FUN_10017076e(local_60);
    if (0 < lVar5) {
      lVar6 = 0;
      do {
        if (lVar6 != 0) {
          FUN_1001b7b04(local_78,", ");
          FUN_1001bbcfe(local_b0,local_78);
          FUN_1001b7a50(local_78);
        }
        uVar4 = FUN_100164a01(local_60,lVar6);
        FUN_1001b7eb0(local_78,uVar4);
        FUN_1001bbcfe(local_b0,local_78);
        FUN_1001b7a50(local_78);
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    FUN_1001b7b04(local_78," }");
    FUN_1001bbcfe(local_b0,local_78);
    dVar11 = local_80;
    lVar5 = local_a0;
    FUN_1001b7a50(local_78);
    pcVar7 = (char *)FUN_1001b83ae(local_b0);
    FUN_100334b21(local_78,lVar5);
    local_40 = FUN_1001b83ae(local_78);
    local_58 = 0x8420302;
    local_54 = local_98;
    local_4c = 0x822;
    local_42 = 0x822;
    local_4a = pcVar7;
    __os_log_impl(0x100000000,dVar11,1,
                  "airtraffic> sending RequestingSync for device %{public}@, dataclasses = %{public}s, anchors = %{public}s"
                  ,&local_58,0x20);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(local_b0);
    lVar6 = local_90;
  }
  _ATHostConnectionSendSyncRequest(*(undefined8 *)(param_2 + 0x16688),local_60,lVar5,lVar6);
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
  FUN_10017060f(local_60);
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  dVar11 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_54 = *(char **)(param_2 + 0x152c8);
    local_58 = 0x8420102;
    __os_log_impl(0x100000000,dVar11,1,"airtraffic> waiting for ReadyForSync for device %{public}@",
                  &local_58,0xc);
  }
  local_60 = DAT_100744e08;
  if (0.0 <= local_88) {
    local_60 = (double)FUN_1001ebd46();
    local_60 = local_60 + local_88;
  }
  local_a0 = param_2 + 0x166e8;
  local_98 = (char *)(param_2 + 0x16720);
  local_90 = param_2 + 0x16758;
  local_80 = *(double *)(param_2 + 0x16820);
  while( true ) {
    uVar1 = *(uint *)(param_2 + 0x166d4);
    if ((ulong)uVar1 != 2) break;
    dVar11 = local_60;
    if (local_80 < *(double *)(param_2 + 0x16820)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      dVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_54 = *(char **)(param_2 + 0x152c8);
        local_58 = 0x8420102;
        __os_log_impl(0x100000000,dVar11,1,
                      "airtraffic> got Ping for device %{public}@ waiting for ReadyForSync",
                      &local_58,0xc);
      }
      local_80 = *(double *)(param_2 + 0x16820);
      dVar11 = DAT_100744e08;
      if (DAT_100701af0 <= local_88) {
        dVar11 = (double)FUN_1001ebd46();
        dVar11 = dVar11 + local_88;
      }
    }
    local_60 = dVar11;
    dVar11 = (double)FUN_1001ebd46();
    if (local_60 <= dVar11) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      dVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_54 = *(char **)(param_2 + 0x152c8);
        local_58 = 0x8420102;
        __os_log_impl(0x100000000,dVar11,1,
                      "airtraffic> timed out waiting for ReadyForSync for device %{public}@",
                      &local_58,0xc);
      }
      FUN_100333742(param_2,7);
      iVar9 = 0x47f;
      goto LAB_1003344ca;
    }
    cVar2 = FUN_100333382(param_2);
    if (cVar2 != '\0') {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      dVar11 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_54 = *(char **)(param_2 + 0x152c8);
        local_58 = 0x8420102;
        __os_log_impl(0x100000000,dVar11,1,
                      "airtraffic> sync canceled waiting for ReadyForSync for device %{public}@",
                      &local_58,0xc);
      }
      FUN_100333742(param_2,2);
      bVar10 = *(char *)(param_2 + 0x6abd) == '\0';
      iVar3 = 0x482;
      iVar9 = -0x80;
      goto LAB_1003343a2;
    }
    FUN_1001b0d8d(DAT_10070f2b8);
  }
  if (uVar1 == 3) {
    FUN_100334d9c(local_a0,param_4,local_64);
    FUN_100334d9c(local_98,param_4,local_64);
    FUN_100334d9c(local_90,param_4,local_64);
    FUN_10033470c(param_2,4,0);
    *(uint *)(param_2 + 0x166d8) = param_4;
    iVar9 = 0;
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    dVar11 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      pcVar7 = *(char **)(param_2 + 0x152c8);
      if (uVar1 < 10) {
        pcVar8 = &DAT_1007450e0 + *(int *)(&DAT_1007450e0 + (ulong)uVar1 * 4);
      }
      else {
        pcVar8 = "UNKNOWN";
      }
      local_40 = FUN_10032f390(*(undefined4 *)(param_2 + 0x169f8));
      local_58 = 0x8420302;
      local_4c = 0x822;
      local_42 = 0x822;
      local_54 = pcVar7;
      local_4a = pcVar8;
      __os_log_impl(0x100000000,dVar11,1,
                    "airtraffic> did not receive ReadyForSync for device %{public}@, current state is %{public}s, last error is %{public}s"
                    ,&local_58,0x20);
    }
    if (*(int *)(param_2 + 0x169f8) == 9) {
      iVar9 = 0x48d - (uint)(*(char *)(param_2 + 0x16846) == '\0');
    }
    else {
      iVar9 = 0x48a;
      if (*(char *)(param_2 + 0x16844) == '\0') {
        bVar10 = uVar1 == 9;
        iVar3 = -0x80;
        iVar9 = 0x47f;
LAB_1003343a2:
        if (bVar10) {
          iVar9 = iVar3;
        }
      }
    }
  }
LAB_1003344ca:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar9;
}

