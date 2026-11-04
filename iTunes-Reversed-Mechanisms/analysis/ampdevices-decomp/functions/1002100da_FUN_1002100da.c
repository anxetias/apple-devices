// name: FUN_1002100da
// address: 1002100da

undefined8 FUN_1002100da(long *param_1,undefined8 *param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  uint local_c48;
  char *local_c44;
  undefined2 local_c3c;
  char *local_c3a;
  uint *local_c28;
  long *local_bf0;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((((param_1[0x438] == 0) && (param_1[0x439] == 0)) && (param_1[0x43a] == 0)) &&
      ((param_1[0x43b] == 0 && (param_1[0x43c] == 0)))) ||
     (cVar1 = (**(code **)(*param_1 + 0x28))(param_1,0,0,0,0), cVar1 != '\0')) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_c48 = 0x8220202;
      local_c44 = "Assertion failure";
      local_c3c = 0x822;
      local_c3a = "IsControllerReadyForRestore()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_c48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffee;
    goto LAB_10021044a;
  }
  if ((*(char *)((long)param_1 + 0x2855) != '\0') && (param_1[0x43a] == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_c48 = 0x8220202;
      local_c44 = "Assertion failure";
      local_c3c = 0x822;
      local_c3a = "(mRebootDeviceAndWait == false) || (mRecoveryDeviceRef != nullptr)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_c48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x65d;
    goto LAB_10021044a;
  }
  if ((((param_3 & 2) != 0) && (*(char *)((long)param_1 + 0x2856) == '\0')) &&
     (cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar1 != '\0')) {
    local_c48 = local_c48 & 0xffff0000;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "preboard prevention mode without preboard prevention set!",&local_c48,2);
  }
  if (param_1[0x438] == 0) {
    if (param_1[0x439] == 0) {
      if (param_1[0x43a] == 0) {
        if (param_1[0x43c] != 0) goto LAB_10021038f;
      }
      else if (*(char *)((long)param_1 + 0x2855) == '\x01') {
        *(undefined4 *)((long)param_1 + 0x2ad4) = 10;
      }
      else {
        *(undefined4 *)((long)param_1 + 0x2ad4) = 5;
      }
    }
    else if (*(char *)((long)param_1 + 0x2854) == '\x01') {
      *(undefined4 *)((long)param_1 + 0x2ad4) = 3;
    }
    else {
      *(undefined4 *)((long)param_1 + 0x2ad4) = 1;
    }
  }
  else {
    cVar1 = FUN_1005b7c7f();
    if ((cVar1 == '\0') ||
       (cVar1 = FUN_1005e7022(*(undefined4 *)((long)param_1 + 0x21a4)), cVar1 == '\0')) {
      *(undefined4 *)((long)param_1 + 0x2ad4) = 4;
    }
    else {
      if (param_1[0x43c] != 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_c48 = 0x8220202;
          local_c44 = "Assertion failure";
          local_c3c = 0x822;
          local_c3a = "mRestorableDeviceRef == nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_c48,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_10017060f(param_1[0x43c]);
      }
      uVar3 = FUN_1005e9a2c();
      lVar4 = FUN_1005f1520(uVar3,param_1[0x438]);
      param_1[0x43c] = lVar4;
      if (lVar4 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_c48 = 0x8220202;
          local_c44 = "Assertion failure";
          local_c3c = 0x822;
          local_c3a = "mRestorableDeviceRef != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_c48,0x16);
        }
        FUN_1001782e9(0,0);
        *(undefined4 *)((long)param_1 + 0x2ad4) = 0;
        uVar3 = 0x683;
        goto LAB_10021044a;
      }
      if (*(char *)((long)param_1 + 0x2856) == '\x01') {
        *(undefined4 *)((long)param_1 + 0x2ad4) = 0xd;
      }
      else {
LAB_10021038f:
        *(undefined4 *)((long)param_1 + 0x2ad4) = 0xc;
      }
    }
  }
  if (*(char *)((long)param_1 + 0x2856) != '\0') goto LAB_1002103ae;
  local_c48 = local_c48 & 0xffffff00;
  if (param_1[0x43c] == 0) {
    _AMRestoreSetLogLevel(7);
  }
  else {
    _AMRestorableSetLogLevel(7);
  }
  iVar2 = (int)param_1[0x434];
  if (iVar2 < 0x69427269) {
    if (iVar2 == 0x48506f64) {
      lVar4 = 0x14a8;
    }
    else if (iVar2 == 0x4d616320) {
      lVar4 = 0x18c8;
    }
    else {
      if (iVar2 != 0x57617463) goto LAB_1002104e3;
      lVar4 = 0x1088;
    }
LAB_10021050b:
    plVar6 = (long *)(lVar4 + (long)param_1);
    cVar1 = FUN_10017cbd0(plVar6);
    if (cVar1 != '\0') goto LAB_10021051e;
    uVar5 = (undefined4)param_1[0x434];
LAB_1002106be:
    iVar2 = FUN_100398956(uVar5,0,plVar6);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) goto LAB_10021051e;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') goto LAB_1002103ae;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
LAB_100210777:
      local_3c = 0x400;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  else {
    if (0x6950686d < iVar2) {
      lVar4 = 0x428;
      if (iVar2 != 0x6950686e) {
        if (iVar2 != 0x69545620) goto LAB_1002104e3;
        lVar4 = 0xc68;
      }
      goto LAB_10021050b;
    }
    if (iVar2 == 0x69427269) {
      lVar4 = 0x1ce8;
      goto LAB_10021050b;
    }
    if (iVar2 == 0x69506164) {
      lVar4 = 0x848;
      goto LAB_10021050b;
    }
LAB_1002104e3:
    plVar6 = param_1 + 1;
    cVar1 = FUN_10017cbd0(plVar6);
    if (cVar1 == '\0') {
      uVar5 = 0x69506f74;
      goto LAB_1002106be;
    }
LAB_10021051e:
    iVar2 = FUN_1001823de(plVar6,&local_c48,0xbfe);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        iVar2 = _AMRestoreEnableFileLogging(&local_c48);
        if (iVar2 != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "result == kAMDSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        _AMRLog(5,&cf_AMPDevicesAgent_1_5_6_12);
        lVar4 = param_1[0x438];
        if (lVar4 != 0) {
          uVar3 = _CFStringGetTypeID();
          lVar4 = FUN_1005ba740(lVar4,0,&cf_BuildVersion,uVar3,0);
          if (lVar4 != 0) {
            _AMRLog(5,&cf_AMPDevicesAgent_Currentsoftwareversion___,lVar4);
            FUN_10017060f(lVar4);
          }
        }
        uVar3 = _AMDGetBundleVersion();
        _AMRLog(5,&cf_AMPDevicesAgent_AppleMobileDeviceversion___,uVar3);
        lVar4 = FUN_10020ed42(param_1);
        if (lVar4 != 0) {
          _AMRLog(5,&cf_AMPDevicesAgent_Softwarepayloadversion___,lVar4);
          FUN_10017060f(lVar4);
        }
        if (param_1[0x43c] == 0) {
          _AMRLog(5,&cf_AMPDevicesAgent_UsingiTunesstatemachine);
        }
        else {
          _AMRLog(5,&cf_AMPDevicesAgent_UsingMobileRestorestatemachine);
          _AMRestoreDisableFileLogging();
          lVar4 = FUN_10016ff43(DAT_1008c4d90,plVar6);
          if (lVar4 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "logFileCFURL != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            cVar1 = _AMRestorableDeviceSetLogFileURL(param_1[0x43c],lVar4,&cf_HostLogType);
            if (cVar1 == '\0') {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = 
                "AMRestorableDeviceSetLogFileURL(mRestorableDeviceRef, logFileCFURL, ((CFStringRef) __builtin___CFStringMakeConstantString (\"\" \"HostLogType\" \"\")))"
                ;
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            FUN_10017060f(lVar4);
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          goto LAB_100210777;
        }
      }
    }
  }
LAB_1002103ae:
  DAT_1008c7590 = DAT_1008c7590 + 1;
  FUN_10021838c(&local_c48,param_1,*param_2,param_2[1]);
  FUN_10017869a(&local_c48);
  if (local_bf0 != (long *)0x0) {
    LOCK();
    plVar6 = local_bf0 + 1;
    lVar4 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_bf0 + 0x10))(local_bf0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_c28 == &local_c48) {
    lVar4 = 0x20;
LAB_100210442:
    (**(code **)(*(long *)local_c28 + lVar4))();
  }
  else {
    lVar4 = 0x28;
    if (local_c28 != (uint *)0x0) goto LAB_100210442;
  }
  uVar3 = 0;
LAB_10021044a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

