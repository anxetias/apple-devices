// name: FUN_1005a1903
// address: 1005a1903

void FUN_1005a1903(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  int local_6c4 [4];
  char local_6b3;
  undefined1 local_67c [724];
  long local_3a8;
  long local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  long local_388;
  long local_380;
  int local_378 [3];
  undefined2 uStack_36c;
  undefined2 uStack_36a;
  undefined1 uStack_368;
  char cStack_367;
  undefined4 uStack_366;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar1 = *param_3;
  local_390 = *(undefined8 *)(param_3 + 2);
  local_398 = param_1;
  FUN_10035dd18(local_6c4);
  FUN_10059def0(param_2,&PTR_s_AppleVideoDRM_10086d330,0x1d,local_6c4);
  lVar4 = FUN_100166b7f(param_2,&cf_AudioCodecs);
  if (lVar4 == 0) {
    iVar3 = FUN_1005a2040(param_2,&cf_AAC,iVar1,local_67c);
    if (iVar3 == -0x80) goto LAB_1005a1e5c;
    if (iVar3 == 0) {
      iVar3 = FUN_1005a2040(param_2,&cf_AppleLossless,iVar1,local_67c);
      if (iVar3 == -0x80) goto LAB_1005a1e5c;
      if (iVar3 == 0) goto LAB_1005a19b4;
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        uStack_36a = (undefined2)iVar3;
        uStack_368 = (undefined1)((uint)iVar3 >> 0x10);
        cStack_367 = (char)((uint)iVar3 >> 0x18);
        goto LAB_1005a1ef3;
      }
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        uStack_36a = (undefined2)iVar3;
        uStack_368 = (undefined1)((uint)iVar3 >> 0x10);
        cStack_367 = (char)((uint)iVar3 >> 0x18);
        goto LAB_1005a1ef3;
      }
    }
  }
  else {
    FUN_1001c62d9(local_378,0x10);
    local_378[2] = (int)local_67c;
    uStack_36c = (undefined2)((ulong)local_67c >> 0x20);
    uStack_36a = (undefined2)((ulong)local_67c >> 0x30);
    local_378[0] = iVar1;
    FUN_1001714c2(lVar4,FUN_1005a15c4,local_378);
LAB_1005a19b4:
    FUN_10035d862(local_67c);
    if (((iVar1 == 0x69506164) || (iVar1 == 0x69506f74)) || (iVar1 == 0x6950686e)) {
      FUN_10035d175(local_67c,0x696d6134);
      FUN_10035d175(local_67c,0x756c6177);
      FUN_10035d175(local_67c,0x616c6177);
    }
    if ((local_6c4[0] == 0x68766331) && (local_6b3 == '\0')) {
      lVar4 = FUN_100166b7f(param_2,&cf_Profiles);
      if (lVar4 == 0) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          pcVar9 = "profilesDict != nullptr";
LAB_1005a1f7c:
          uStack_36c = 0x822;
          local_378[2] = 1;
          local_378[1] = 0x7a0a90;
          local_378[0] = 0x8220202;
          uStack_36a = SUB82(pcVar9,0);
          uStack_368 = (undefined1)((ulong)pcVar9 >> 0x10);
          cStack_367 = '\0';
          uStack_366 = (undefined4)((ulong)pcVar9 >> 0x20);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",local_378,0x16);
        }
      }
      else {
        local_3a8 = FUN_100166b7f(param_2,&cf_ProfileConstraints);
        lVar5 = FUN_100171426(lVar4);
        if (0 < lVar5) {
          local_3a0 = lVar5;
          lVar6 = FUN_1001c6429(lVar5 * 8);
          local_388 = FUN_1001c6429(lVar5 * 8);
          local_380 = lVar6;
          FUN_1001714b1(lVar4,lVar6,local_388);
          lVar4 = 0;
          do {
            _memcpy(local_378,local_6c4,0x31c);
            lVar5 = *(long *)(local_388 + lVar4 * 8);
            if (lVar5 == 0) {
              lVar5 = 0;
            }
            else {
              lVar6 = _CFNumberGetTypeID();
              lVar7 = _CFGetTypeID(lVar5);
              if (lVar6 != lVar7) {
                lVar5 = 0;
              }
            }
            cVar2 = FUN_100169491(lVar5,&cStack_367);
            if (cVar2 == '\0') {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_4a = "JRCFNumberGetUInt8(profile, &videoCodecInfo.profile)";
LAB_1005a1fca:
                local_4c = 0x822;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
LAB_1005a1df3:
              FUN_1001782e9(0,0);
              FUN_1001c64c1(local_380);
              FUN_1001c64c1(local_388);
              goto LAB_1005a1e14;
            }
            if (cStack_367 == '\0') {
              uVar8 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar8,0x10);
              if (cVar2 != '\0') {
                local_4a = "videoCodecInfo.profile != 0";
                goto LAB_1005a1fca;
              }
              goto LAB_1005a1df3;
            }
            if (local_3a8 != 0) {
              uVar8 = FUN_100166b7f(local_3a8,*(undefined8 *)(local_380 + lVar4 * 8));
              FUN_10059def0(uVar8,&PTR_s_MaximumAverageBitrateMegabits_10086d8a0,1,local_378);
            }
            iVar3 = FUN_10035dd6e(local_378,local_398,iVar1,local_390);
            if (iVar3 != 0) {
              if (iVar3 != -0x80) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                FUN_1001c64c1(local_380);
                FUN_1001c64c1(local_388);
                if (iVar3 == 0) goto LAB_1005a1e5c;
                goto LAB_1005a1e19;
              }
              break;
            }
            lVar4 = lVar4 + 1;
          } while (local_3a0 != lVar4);
          FUN_1001c64c1(local_380);
          FUN_1001c64c1(local_388);
          goto LAB_1005a1e5c;
        }
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          pcVar9 = "numProfiles > 0";
          goto LAB_1005a1f7c;
        }
      }
      FUN_1001782e9(0,0);
LAB_1005a1e14:
      iVar3 = -0x32;
LAB_1005a1e19:
      uVar8 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar8,0x10);
      if (cVar2 != '\0') {
        uStack_36a = (undefined2)iVar3;
        uStack_368 = (undefined1)((uint)iVar3 >> 0x10);
        cStack_367 = (char)((uint)iVar3 >> 0x18);
LAB_1005a1ef3:
        uStack_36c = 0x400;
        local_378[2] = 1;
        local_378[1] = 0x7a0a90;
        local_378[0] = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_378,0x12);
      }
    }
    else {
      iVar3 = FUN_10035dd6e(local_6c4,local_398,iVar1,local_390);
      if ((iVar3 != -0x80) && (iVar3 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar8,0x10);
        if (cVar2 != '\0') {
          uStack_36a = (undefined2)iVar3;
          uStack_368 = (undefined1)((uint)iVar3 >> 0x10);
          cStack_367 = (char)((uint)iVar3 >> 0x18);
          goto LAB_1005a1ef3;
        }
      }
    }
  }
  if ((iVar3 != -0x80) && (iVar3 != 0)) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_378[0] = 0x8220202;
      local_378[1] = 0x7a0a90;
      local_378[2] = 1;
      uStack_36c = 0x400;
      uStack_36a = (undefined2)iVar3;
      uStack_368 = (undefined1)((uint)iVar3 >> 0x10);
      cStack_367 = (char)((uint)iVar3 >> 0x18);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",local_378,0x12);
    }
  }
LAB_1005a1e5c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

