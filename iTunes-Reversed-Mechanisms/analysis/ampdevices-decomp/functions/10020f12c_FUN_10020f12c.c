// name: FUN_10020f12c
// address: 10020f12c

int FUN_10020f12c(long *param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long local_4a0;
  long local_498;
  long local_490;
  long local_488;
  undefined4 local_480;
  undefined4 local_47c;
  undefined1 local_478 [1056];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = (**(code **)*param_1)();
  if (iVar2 == -0x80) goto LAB_10020f399;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 == '\0') goto LAB_10020f399;
    local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_10020f260:
    uStack_50 = 1;
    uStack_54 = 0x7a0a90;
    local_4c = 0x400;
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    goto LAB_10020f399;
  }
  if (param_2 == 0) {
LAB_10020f278:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "::UpdateRestoreDeviceSpecIsValid(updateRestoreDeviceSpec)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10020f393;
  }
  if (*(int *)(param_2 + 0x680) != 0x7572646d) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7ab58c;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "updateRestoreDeviceSpec->magic == ((OSType) \'urdm\')";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_10020f278;
  }
  if (*(int *)(param_2 + 0x208) == 0) {
    if (*(int *)(param_2 + 0x20c) != 0) {
      puVar6 = operator_new(0x6878,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar6 == (undefined4 *)0x0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "rawDeviceDescription != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -0x6c;
        goto LAB_10020f399;
      }
      uVar4 = FUN_1005e9a2c();
      iVar2 = FUN_1005e7c6c(uVar4,*(undefined4 *)(param_2 + 0x20c),puVar6);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          local_47c = *puVar6;
          local_480 = puVar6[0x111];
          lVar7 = *(long *)(puVar6 + 0x18ea);
          operator_delete(puVar6);
          lVar5 = 0;
          goto LAB_10020f31f;
        }
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      operator_delete(puVar6);
      goto LAB_10020f399;
    }
LAB_10020f36d:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = 
      "((updateRestoreDeviceSpec->dulcimerObjectID != 0) && (updateRestoreDeviceSpec->rawObjectID == 0)) || ((updateRestoreDeviceSpec->dulcimerObjectID == 0) && (updateRestoreDeviceSpec->rawObjectID != 0))"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 0x20c) != 0) goto LAB_10020f36d;
    lVar5 = FUN_1004de449();
    if (lVar5 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (*(long *)(lVar5 + 0x7168) != 0) {
        lVar7 = *(long *)(lVar5 + 0x61e8);
        local_480 = 0;
        local_47c = 0;
LAB_10020f31f:
        if (*(char *)(param_2 + 0x210) == '\x01') {
          _memcpy(local_478,param_1 + 0x47f,0x420);
        }
        if (*(int *)((long)param_1 + 0x2ad4) == 0) {
          iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
          if (iVar2 == -0x80) goto LAB_10020f399;
          if (iVar2 != 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 == '\0') goto LAB_10020f399;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            goto LAB_10020f260;
          }
          if (param_1[0x437] == -1) {
LAB_10020f4e6:
            param_1[0x437] = lVar7;
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7ab58c;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "mInitialECID == kInvalidECID";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar1 = FUN_1001782e9(0,0);
            if (cVar1 != '\0') goto LAB_10020f4e6;
          }
          *(undefined1 *)((long)param_1 + 0x2857) = *(undefined1 *)(param_2 + 0x669);
        }
        else {
          cVar1 = FUN_10020efac(param_1,lVar7);
          iVar2 = 0;
          if (cVar1 != '\0') goto LAB_10020f399;
          FUN_10020fb16(param_1);
        }
        if (*(int *)(param_2 + 0x208) == 0) {
          if (*(int *)(param_2 + 0x20c) == 0) {
            iVar2 = *(int *)((long)param_1 + 0x2ad4);
          }
          else {
            uVar4 = FUN_1005e9a2c();
            iVar3 = FUN_1005e7d5a(uVar4,*(undefined4 *)(param_2 + 0x20c),&local_4a0,&local_498,
                                  &local_490,&local_488);
            iVar2 = 0x655;
            if (iVar3 == -0x80) goto LAB_10020f399;
            if (iVar3 != 0) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 == '\0') goto LAB_10020f399;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
              goto LAB_10020f260;
            }
            *(undefined4 *)((long)param_1 + 0x21ac) = *(undefined4 *)(param_2 + 0x20c);
            param_1[0x439] = local_4a0;
            param_1[0x43a] = local_498;
            param_1[0x438] = local_488;
            param_1[0x43c] = local_490;
            if (((((uint)(local_498 != 0) - (uint)(local_4a0 == 0)) - (uint)(local_488 == 0)) + 3) -
                (uint)(local_490 == 0) != 1) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = 
                "(UInt32)(mDFUDeviceRef != nullptr) + (UInt32)(mRecoveryDeviceRef != nullptr) + (UInt32)(mRestorableDeviceRef != nullptr) + (UInt32)(mMobileDeviceRef != nullptr) == 1"
                ;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              iVar2 = 0x66a;
              goto LAB_10020f399;
            }
            iVar2 = *(int *)((long)param_1 + 0x2ad4);
            if (iVar2 == 0) {
              iVar3 = *(int *)(param_2 + 0x66c);
              *(bool *)((long)param_1 + 0x2851) = iVar3 == 4;
              *(bool *)(param_1 + 0x50a) = iVar3 == 3 || iVar3 == 4;
              *(bool *)((long)param_1 + 0x2854) = iVar3 == 5;
              *(bool *)((long)param_1 + 0x2855) = iVar3 == 6;
            }
          }
        }
        else {
          lVar7 = FUN_1001705fc(*(undefined8 *)(lVar5 + 0x7168));
          param_1[0x438] = lVar7;
          *(undefined4 *)(param_1 + 0x435) = *(undefined4 *)(param_2 + 0x208);
          iVar2 = *(int *)((long)param_1 + 0x2ad4);
          if (iVar2 == 0) {
            *(undefined1 *)((long)param_1 + 0x2853) = *(undefined1 *)(param_2 + 0x670);
            *(bool *)((long)param_1 + 0x2856) = *(int *)(param_2 + 0x66c) == 2;
          }
          local_47c = *(undefined4 *)(lVar5 + 0x66b0);
          local_480 = *(undefined4 *)(lVar5 + 0x284);
        }
        *(bool *)((long)param_1 + 0x2852) = *(int *)(param_2 + 0x66c) == 1;
        puVar8 = local_478;
        if (*(char *)(param_2 + 0x210) == '\0') {
          puVar8 = (undefined1 *)(param_2 + 0x218);
        }
        _memcpy(param_1 + 0x47f,puVar8,0x420);
        *(undefined1 *)(param_1 + 0x503) = *(undefined1 *)(param_2 + 0x211);
        if (iVar2 == 0) {
          FUN_1001e1c39(param_2 + 4,param_1 + 0x43d);
          FUN_1001dfbb3(param_2 + 0x638,param_1 + 0x506,0x20);
        }
        *(undefined4 *)(param_1 + 0x434) = local_47c;
        *(undefined4 *)((long)param_1 + 0x21a4) = local_480;
        iVar2 = (int)param_1[0x435];
        if (iVar2 == 0) {
          iVar2 = *(int *)((long)param_1 + 0x21ac);
        }
        uVar4 = FUN_100425f2b(iVar2);
        local_58 = (undefined4)uVar4;
        uStack_54 = (undefined4)((ulong)uVar4 >> 0x20);
        FUN_1001b81f2(param_1 + 0x47d,uVar4);
        FUN_10016d588(&local_58);
        lVar7 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x678));
        param_1[0x505] = lVar7;
        iVar2 = 0;
        if ((short)param_1[0x43d] == 0) {
          uVar4 = FUN_100416f20((int)param_1[0x434],0x10cc007b);
          FUN_1001e115f(uVar4,param_1 + 0x43d);
        }
        goto LAB_10020f399;
      }
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "handlerData->mobileDeviceRef != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
LAB_10020f393:
  iVar2 = -0x32;
LAB_10020f399:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

