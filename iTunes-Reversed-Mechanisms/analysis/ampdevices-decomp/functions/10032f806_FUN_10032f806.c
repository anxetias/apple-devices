// name: FUN_10032f806
// address: 10032f806

void FUN_10032f806(long param_1,char *param_2,long param_3,long param_4,long param_5,int param_6,
                  uint param_7,char param_8)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  char *pcVar13;
  undefined8 local_90;
  undefined4 local_78;
  char *local_74;
  undefined2 local_6c;
  char *local_6a;
  undefined2 local_62;
  long local_60;
  undefined2 local_58;
  int local_56;
  undefined2 local_52;
  uint local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 local_48;
  undefined4 local_46;
  undefined2 uStack_42;
  undefined2 uStack_40;
  undefined6 uStack_3e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x16688) == 0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_6a = "handlerData->airTrafficHostConnection != nullptr";
LAB_10032f9f8:
      local_6c = 0x822;
      local_74 = "Assertion failure";
      local_78 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
  }
  else if (param_2 == (char *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_6a = "assetIdentifier != nullptr";
      goto LAB_10032f9f8;
    }
  }
  else {
    if (param_3 != 0) {
      if ((param_7 != 0) == (param_4 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x822;
          local_6a = "(assetPath != nullptr) ^ (atError != ATErrorUnknown)";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (param_6 == 0 && param_5 != 0) {
        uVar10 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar10,0x10);
        if (cVar8 != '\0') {
          local_78 = 0x8220202;
          local_74 = "Assertion failure";
          local_6c = 0x822;
          local_6a = "metadata == nullptr || newSyncAnchor != 0";
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar9 = FUN_100167d66(*(undefined8 *)(param_1 + 0x16800),param_3);
      uVar6 = uStack_4a;
      uVar4 = uStack_4c;
      uVar2 = local_50;
      iVar9 = iVar9 + 1;
      if (param_4 == 0) {
        if ((param_7 & 0xfffffffd) == 0) goto LAB_10032fa26;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar10 = DAT_1008c75b8;
        cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar8 != '\0') {
          pcVar1 = *(char **)(param_1 + 0x152c8);
          uVar11 = FUN_10032f390(param_7);
          pcVar13 = "NO";
          if (param_8 != '\0') {
            pcVar13 = "YES";
          }
          local_78 = 0x8420702;
          local_6c = 0x842;
          local_62 = 0x842;
          local_58 = 0x400;
          local_52 = 0x400;
          local_50 = param_7;
          uStack_4c = 0x822;
          uStack_4a = (undefined2)uVar11;
          local_48 = (undefined2)((ulong)uVar11 >> 0x10);
          local_46 = (undefined4)((ulong)uVar11 >> 0x20);
          uStack_42 = 0x822;
          uStack_40 = SUB82(pcVar13,0);
          uStack_3e = (undefined6)((ulong)pcVar13 >> 0x10);
          local_74 = pcVar1;
          local_6a = param_2;
          local_60 = param_3;
          local_56 = iVar9;
          __os_log_impl(0x100000000,uVar10,1,
                        "airtraffic> sending FileError for device %{public}@, asset identifier \"%{public}@\", dataclass %{public}@ (%u), error %d (%{public}s), reported = %{public}s"
                        ,&local_78,0x40);
        }
        puVar12 = (undefined8 *)PTR__kCFBooleanFalse_10082e030;
        if (param_8 != '\0') {
          puVar12 = (undefined8 *)PTR__kCFBooleanTrue_10082e038;
        }
        _ATHostConnectionSendFileErrorWithParams
                  (*(undefined8 *)(param_1 + 0x16688),param_2,param_3,param_7,*puVar12);
      }
      else {
        uStack_4c = (undefined2)((ulong)param_4 >> 0x20);
        uVar5 = uStack_4c;
        uStack_4a = (undefined2)((ulong)param_4 >> 0x30);
        uVar7 = uStack_4a;
        local_50 = (uint)param_4;
        uVar3 = local_50;
        local_50 = uVar2;
        uStack_4c = uVar4;
        uStack_4a = uVar6;
        if (param_5 == 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar8 != '\0') {
            local_74 = *(char **)(param_1 + 0x152c8);
            local_78 = 0x8420502;
            local_6c = 0x842;
            local_62 = 0x842;
            local_58 = 0x400;
            local_52 = 0x842;
            local_6a = param_2;
            local_60 = param_3;
            local_56 = iVar9;
            local_50 = uVar3;
            uStack_4c = uVar5;
            uStack_4a = uVar7;
            __os_log_impl(0x100000000,uVar10,1,
                          "airtraffic> sending FileComplete for device %{public}@, asset identifier \"%{public}@\", dataclass %{public}@ (%u), path \"%{public}@\""
                          ,&local_78,0x30);
          }
          _ATHostConnectionSendAssetCompleted
                    (*(undefined8 *)(param_1 + 0x16688),param_2,param_3,param_4);
        }
        else {
          if (param_6 == 0) {
            local_90 = 0;
          }
          else {
            local_90 = FUN_1001736b8(DAT_1008c4d90,0,&cf__u,param_6);
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar10 = DAT_1008c75b8;
          cVar8 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar8 != '\0') {
            local_74 = *(char **)(param_1 + 0x152c8);
            local_78 = 0x8420602;
            local_6c = 0x842;
            local_62 = 0x842;
            local_58 = 0x400;
            local_52 = 0x842;
            local_48 = 0x842;
            local_46 = (undefined4)local_90;
            uStack_42 = (undefined2)((ulong)local_90 >> 0x20);
            uStack_40 = (undefined2)((ulong)local_90 >> 0x30);
            local_6a = param_2;
            local_60 = param_3;
            local_56 = iVar9;
            local_50 = uVar3;
            uStack_4c = uVar5;
            uStack_4a = uVar7;
            __os_log_impl(0x100000000,uVar10,1,
                          "airtraffic> sending FileComplete for device %{public}@, asset identifier \"%{public}@\", dataclass %{public}@ (%u), path \"%{public}@\", new sync anchor %{public}@"
                          ,&local_78,0x3a);
          }
          _ATHostConnectionSendAssetCompletedWithMetadata
                    (*(undefined8 *)(param_1 + 0x16688),param_2,param_3,param_4,param_5,local_90);
          FUN_10017060f(local_90);
        }
      }
      FUN_100168746(*(undefined8 *)(param_1 + 0x16800),param_3,iVar9,0);
      goto LAB_10032fa26;
    }
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_6a = "dataclass != nullptr";
      goto LAB_10032f9f8;
    }
  }
  FUN_1001782e9(0,0);
LAB_10032fa26:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

