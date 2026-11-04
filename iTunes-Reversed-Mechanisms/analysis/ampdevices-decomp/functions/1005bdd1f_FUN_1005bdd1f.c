// name: FUN_1005bdd1f
// address: 1005bdd1f

int FUN_1005bdd1f(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = FUN_1005b7cbc();
  if (iVar2 == -0x80) goto LAB_1005be167;
  if (iVar2 != 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x202;
      uStack_56 = 0x822;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005be167;
  }
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_BasebandStatus,uVar3);
  *param_2 = uVar3;
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_SIMStatus,uVar3);
  param_2[1] = uVar3;
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_MobileEquipmentIdentifier,uVar3);
  param_2[2] = uVar3;
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_kCTPostponementInfoCarrierID,uVar3);
  param_2[3] = uVar3;
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_MobileSubscriberCountryCode,uVar3);
  param_2[4] = uVar3;
  uVar3 = _CFStringGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_MobileSubscriberNetworkCode,uVar3);
  param_2[5] = uVar3;
  uVar3 = _CFDataGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_SIMGID1,uVar3);
  param_2[6] = uVar3;
  uVar3 = _CFDataGetTypeID();
  uVar3 = FUN_1005b8d4a(param_1,0,&cf_SIMGID2,uVar3);
  param_2[7] = uVar3;
  uVar3 = FUN_1005bac19(param_1);
  param_2[8] = uVar3;
  *(undefined1 *)(param_2 + 10) = 0;
  uVar3 = _CFArrayGetTypeID();
  local_60 = FUN_1005ba383(param_1,0,&cf_CarrierBundleInfoArray,uVar3,0);
  if (local_60 == 0) {
    cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar1 != '\0') {
      local_58 = 0;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "Couldn\'t obtain CarrierBundleInfoArray from device!",&local_58,2);
    }
    local_60 = 0;
  }
  else {
    cVar1 = FUN_100165720(local_60,&cf_kCTPostponementInfoCarrierID,0);
    *(char *)((long)param_2 + 0x51) = cVar1;
    if (cVar1 == '\0') {
      uVar3 = _CFStringGetTypeID();
      lVar4 = FUN_1005ba383(param_1,0,&cf_MobileEquipmentIdentifier,uVar3,0);
      local_58 = (undefined2)lVar4;
      uStack_56 = (undefined2)((ulong)lVar4 >> 0x10);
      uStack_54 = (undefined4)((ulong)lVar4 >> 0x20);
      if (lVar4 == 0) {
        FUN_10016d588(&local_58);
        goto LAB_1005be019;
      }
      uVar3 = _CFStringGetTypeID();
      lVar4 = FUN_1005ba383(param_1,0,&cf_kCTPostponementInfoCarrierID,uVar3,0);
      FUN_10016d588();
      FUN_10016d588(&local_58);
      if (lVar4 == 0) goto LAB_1005be019;
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar1 != '\0') {
        local_58 = 0;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "Synthesizing unknown bundle entry due to no carrier ID in array and MEID present!"
                      ,&local_58,2);
      }
      lVar4 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                            PTR__kCFTypeDictionaryValueCallBacks_10082e140);
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "unknownCarrierBundleInfoDictionary != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1005be14c;
      }
      FUN_10016832e(lVar4,&cf_CFBundleIdentifier,"com.apple.Unknown",0);
LAB_1005be02d:
      lVar5 = FUN_100166c1b(lVar4,&cf_CFBundleIdentifier);
      if (lVar5 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          local_4c = 0x822;
          local_4a = "carrierBundleInfoBundleIdentifier != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        cVar1 = FUN_100169ddb(lVar5,"com.apple.Unknown");
        if (cVar1 != '\0') {
          cVar1 = FUN_100165720(local_60,&cf_CFBundleIdentifier,lVar5);
          if (cVar1 == '\0') {
            cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
            if (cVar1 != '\0') {
              local_58 = 0;
              __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                            "Synthesizing unknown bundle entry",&local_58,2);
            }
            lVar5 = FUN_10017072a(DAT_1008c4d90,0,local_60);
            if (lVar5 == 0) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x202;
                uStack_56 = 0x822;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = "carrierBundleInfoMutableArray != nullptr";
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              FUN_1001709a5(lVar5,lVar4);
              FUN_10017060f(local_60);
              *(undefined1 *)(param_2 + 10) = 1;
              local_60 = lVar5;
            }
          }
        }
      }
    }
    else {
LAB_1005be019:
      lVar4 = FUN_1005bac19(param_1);
      if (lVar4 != 0) goto LAB_1005be02d;
LAB_1005be14c:
      lVar4 = 0;
    }
    FUN_10017060f(lVar4);
  }
  param_2[9] = local_60;
  FUN_1005b8595(param_1);
LAB_1005be167:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

