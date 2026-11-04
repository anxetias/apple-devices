// name: FUN_1005e9d24
// address: 1005e9d24

void FUN_1005e9d24(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 local_6e8;
  undefined1 local_6e0 [16];
  long local_6d0;
  undefined4 local_6c8;
  char *local_6c4;
  undefined2 local_6bc;
  int local_6ba;
  uint local_6a8;
  char *local_6a4;
  undefined2 local_69c;
  char *local_69a;
  undefined4 local_4a4;
  undefined4 local_49c;
  undefined1 local_498;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_6e0);
  if ((((param_2 != 0) != (param_1 != 0)) == (param_3 != 0)) ||
     (param_3 != 0 && (param_2 != 0 && param_1 != 0))) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_6a8 = 0x8220202;
      local_6a4 = "Assertion failure";
      local_69c = 0x822;
      local_69a = 
      "((dfuDeviceRef != nullptr) ^ (recoveryDeviceRef != nullptr) ^ (restorableDeviceRef != nullptr)) && ((dfuDeviceRef == nullptr) || (recoveryDeviceRef == nullptr) || (restorableDeviceRef == nullptr))"
      ;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_6a8,0x16);
    }
    FUN_1001782e9(0,0);
    goto switchD_1005ea1b1_caseD_4;
  }
  cVar1 = FUN_1001cd44e("ignore-devices",0,0);
  if (cVar1 == '\0') {
    cVar1 = FUN_100248343(local_6e0);
    if (cVar1 == '\0') {
      if ((param_3 != 0) || (cVar1 = FUN_1005ed719(0,param_1,param_2), cVar1 == '\0')) {
        cVar1 = FUN_1001ebbad();
        if (cVar1 == '\0') {
          uVar4 = FUN_10039a28c();
          cVar1 = FUN_1002d6e80(uVar4,2);
          if (cVar1 == '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 == '\0') goto switchD_1005ea1b1_caseD_4;
            local_6a8 = local_6a8 & 0xffff0000;
            pcVar6 = "non-foreground user and idle; ignoring restorable device";
            goto LAB_1005e9de4;
          }
        }
        iVar2 = FUN_1005e8202(&DAT_1008c7b60,param_1,param_2,param_3,0,0,0,&local_6d0);
        if (iVar2 == 0) {
          plVar5 = (long *)FUN_10039a28c();
          cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,0,0,0,0);
          if (cVar1 != '\0') {
            local_30 = 0;
            FUN_1001c62d9(&local_6a8,0x680);
            local_6a8 = 2;
            local_49c = *(undefined4 *)(local_6d0 + 0x6884);
            local_4a4 = *(undefined4 *)(local_6d0 + 0x444);
            local_498 = 1;
            plVar5 = (long *)FUN_10039a28c();
            iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5,&local_6a8,&local_6e8);
            iVar2 = local_6ba;
            if (iVar3 != -0x80) {
              if (iVar3 == 0) {
                plVar5 = (long *)FUN_10039a28c();
                iVar3 = (**(code **)(*plVar5 + 8))(plVar5,local_6e8);
                iVar2 = local_6ba;
                if ((iVar3 == -0x80) || (iVar3 == 0)) goto LAB_1005ea1fe;
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                iVar2 = local_6ba;
              }
              else {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                iVar2 = local_6ba;
              }
              local_6ba = iVar3;
              if (cVar1 != '\0') {
                local_6bc = 0x400;
                local_6c4 = "Assertion failure";
                local_6c8 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_6c8,0x12
                                   );
                iVar2 = local_6ba;
              }
            }
LAB_1005ea1fe:
            local_6ba = iVar2;
            FUN_10026340c(&local_30);
            goto switchD_1005ea1b1_caseD_4;
          }
          switch(*(undefined4 *)(local_6d0 + 0x68b8)) {
          case 1:
            *(undefined1 *)(local_6d0 + 0x68c5) = 1;
            *(undefined4 *)(local_6d0 + 0x68b8) = 6;
            *(uint *)(local_6d0 + 0x68bc) = (*(int *)(local_6d0 + 0x6898) == 3) + 1;
            pcVar7 = FUN_1005ef948;
            break;
          case 2:
            *(undefined1 *)(local_6d0 + 0x68c5) = 1;
            pcVar7 = FUN_1005ee334;
            break;
          case 3:
            *(undefined4 *)(local_6d0 + 0x2f8) = *(undefined4 *)(local_6d0 + 0x2fc);
            pcVar7 = FUN_1005f116e;
            break;
          default:
            goto switchD_1005ea1b1_caseD_4;
          case 5:
            iVar2 = 0x653;
            goto LAB_1005e9f9b;
          }
          FUN_1005ee25a(*(undefined4 *)(local_6d0 + 0x6884),pcVar7,
                        *(undefined4 *)(local_6d0 + 0x6884));
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_6a8 = 0x8220202;
            local_6a4 = "Assertion failure";
            local_69c = 0x400;
            local_69a = (char *)CONCAT44(local_69a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_6a8,0x12);
          }
LAB_1005e9f9b:
          plVar5 = (long *)FUN_10039a28c();
          cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,0,0,0,0);
          if (cVar1 == '\0') {
            FUN_1005f1447(iVar2);
          }
        }
        goto switchD_1005ea1b1_caseD_4;
      }
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') goto switchD_1005ea1b1_caseD_4;
      local_6a8 = local_6a8 & 0xffff0000;
      pcVar6 = "mobile device is being restored by other process; ignoring restorable device";
      goto LAB_1005e9de4;
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto switchD_1005ea1b1_caseD_4;
    local_6a4 = (char *)FUN_1001b83ae(local_6e0);
    local_6a8 = 0x8220102;
    pcVar6 = "%{public}s is running; ignoring restorable device";
    uVar8 = 0xc;
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar4 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 == '\0') goto switchD_1005ea1b1_caseD_4;
    local_6a8 = local_6a8 & 0xffff0000;
    pcVar6 = "ignore-devices pref is set, ignoring restorable device";
LAB_1005e9de4:
    uVar8 = 2;
  }
  __os_log_impl(0x100000000,uVar4,1,pcVar6,&local_6a8,uVar8);
switchD_1005ea1b1_caseD_4:
  FUN_1001b7a50(local_6e0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

