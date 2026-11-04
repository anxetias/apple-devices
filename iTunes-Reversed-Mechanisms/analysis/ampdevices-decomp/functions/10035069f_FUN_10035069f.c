// name: FUN_10035069f
// address: 10035069f

int FUN_10035069f(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,uint param_9
                 )

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a4;
  long local_4a0;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  char local_78 [32];
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  local_4a0 = lVar5;
  if (lVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_498 = 0x8220202;
      local_494 = "Assertion failure";
      local_48c = 0x822;
      local_48a = "syncOperationsDict != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_100350a52;
  }
  local_4b0 = param_4;
  if ((long)param_5 < 0) {
    FUN_100171502(lVar5,&cf_operations,param_6);
LAB_1003507ba:
    FUN_100168746(lVar5,&cf_revision,param_9,0);
    FUN_10016909e(param_1,lVar5,&cf_timestamp);
    uVar10 = param_5 & 0xffffffff;
    if ((long)param_5 < 0) {
      uVar10 = (ulong)param_9;
    }
    _snprintf(local_78,0x20,"Sync_%08X.plist",uVar10);
    lVar6 = FUN_10016aaf8(DAT_1008c4d90,lVar5,0);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_498 = 0x8220202;
        local_494 = "Assertion failure";
        local_48c = 0x822;
        local_48a = "syncOperationsData != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
      }
      lVar6 = 0;
      FUN_1001782e9(0,0);
      iVar2 = -0x32;
    }
    else {
      iVar2 = FUN_10016614c(lVar6,local_4b0,local_78,&local_498,3);
      if (iVar2 == -0x80) {
LAB_1003509e1:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_100350a42;
        local_54 = (int)local_78;
        uStack_50 = (undefined2)((ulong)local_78 >> 0x20);
        uStack_4e = (undefined2)((ulong)local_78 >> 0x30);
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
        pcVar8 = "airtraffic> failed to save sync operation file \"%{public}s\" (%d)";
LAB_100350a32:
        uStack_4c = 0x400;
        local_58 = 0x8220202;
        uVar9 = 0x12;
      }
      else {
        if (iVar2 != 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto LAB_1003509e1;
        }
        cVar1 = FUN_100170633(param_3,&cf_Media);
        iVar2 = 0;
        if (cVar1 == '\0') goto LAB_100350a42;
        if (*(long *)(param_2 + 0x16688) == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = 0x7a0a90;
            uStack_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            local_4a = "handlerData->airTrafficHostConnection != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = 0x484;
          goto LAB_100350a42;
        }
        iVar3 = _ATHostConnectionGetGrappaSessionId();
        if (iVar3 == 0) goto LAB_100350a42;
        local_4b8 = 0;
        local_4a4 = 0;
        uVar7 = FUN_100170f3b(lVar6);
        uVar4 = FUN_100170ef7(lVar6);
        iVar2 = FUN_1000c0d60(iVar3,uVar7,uVar4,&local_4b8,&local_4a4);
        if (iVar2 == 0) {
          FUN_1001df1e7(".cig",local_78,0x20);
          iVar2 = FUN_1001809f6(local_4b8,local_4a4,local_4b0,local_78,0,3);
          FUN_100099d20(local_4b8);
          lVar5 = local_4a0;
          if (iVar2 != -0x80) {
            if (iVar2 == 0) {
              iVar2 = 0;
              goto LAB_100350a42;
            }
            uVar7 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar7,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4e = 0;
              uStack_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar7 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar1 == '\0') goto LAB_100350a42;
          local_54 = (int)local_78;
          uStack_50 = (undefined2)((ulong)local_78 >> 0x20);
          uStack_4e = (undefined2)((ulong)local_78 >> 0x30);
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          pcVar8 = "airtraffic> failed to save signature file \"%{public}s\" (%d)";
          goto LAB_100350a32;
        }
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        lVar5 = local_4a0;
        uVar7 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar1 == '\0') goto LAB_100350a42;
        local_58 = 0x4000200;
        uStack_50 = 0x400;
        uStack_4e = (undefined2)iVar3;
        uStack_4c = (undefined2)((uint)iVar3 >> 0x10);
        pcVar8 = "airtraffic> GrappaHostSign failed (%d) with session id %u";
        uVar9 = 0xe;
        local_54 = iVar2;
      }
      __os_log_impl(0x100000000,uVar7,0x10,pcVar8,&local_58,uVar9);
    }
  }
  else {
    lVar6 = FUN_100170720(DAT_1008c4d90,0,PTR__kCFTypeArrayCallBacks_10082e130);
    if (lVar6 != 0) {
      FUN_100170664(lVar6,param_6,param_7,param_8);
      lVar5 = local_4a0;
      FUN_100171502(local_4a0,&cf_operations,lVar6);
      FUN_10017060f(lVar6);
      goto LAB_1003507ba;
    }
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_498 = 0x8220202;
      local_494 = "Assertion failure";
      local_48c = 0x822;
      local_48a = "syncOperationsCopy != nullptr";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
    }
    lVar6 = 0;
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    lVar5 = local_4a0;
  }
LAB_100350a42:
  FUN_10017060f(lVar6);
  FUN_10017060f(lVar5);
LAB_100350a52:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

