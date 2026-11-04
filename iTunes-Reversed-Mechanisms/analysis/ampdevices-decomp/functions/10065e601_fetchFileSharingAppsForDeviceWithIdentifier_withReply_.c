// name: fetchFileSharingAppsForDeviceWithIdentifier:withReply:
// address: 10065e601

/* Function Stack Size: 0x20 bytes */

void AMPDevicesClientConnection::fetchFileSharingAppsForDeviceWithIdentifier_withReply_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  lVar5 = (*(code *)puVar1)(param_4);
  local_60 = uVar4;
  lVar6 = FUN_1005b8e71(uVar4);
  if (lVar6 == 0) {
    uVar4 = FUN_1001cc310();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceRef != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    FUN_1001782e9(0,0);
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,0x2365
                      );
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (**(code **)(lVar5 + 0x10))(lVar5,0,uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    local_80 = 0;
    iVar3 = FUN_1005c3d08(lVar6,&local_80);
    if (iVar3 == 0) {
      local_78 = 0;
      local_68 = &local_80;
      iVar3 = FUN_1005c1244(lVar6,2);
      if (iVar3 == 0) {
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
        local_70 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar4 = local_78;
        local_b8 = PTR___NSConcreteStackBlock_10082caf0;
        local_b0 = 0xc2000000;
        local_a8 = FUN_10065eab5;
        local_a0 = &DAT_100871950;
        local_98 = (*(code *)puVar1)(local_60);
        local_88 = local_80;
        uVar7 = (*(code *)puVar1)(local_70);
        local_90 = uVar7;
        (*(code *)PTR__objc_msgSend_10082c770)
                  (uVar4,PTR_s_enumerateKeysAndObjectsUsingBloc_10088d428,&local_b8);
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        (**(code **)(lVar5 + 0x10))(lVar5,uVar7,0);
        (*(code *)PTR__objc_release_10082c7b0)(local_90);
        (*(code *)PTR__objc_release_10082c7b0)(local_98);
      }
      else {
        uVar4 = FUN_1001cc310();
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "result == kAMDSuccess";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        (*(code *)PTR__objc_release_10082c7b0)(uVar4);
        FUN_1001782e9(0,0);
        uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithAMDError__10088dd80,
                           iVar3);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
        (**(code **)(lVar5 + 0x10))(lVar5,0,uVar7);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar7);
      FUN_10065eca4(&local_68);
    }
    else {
      uVar4 = FUN_1001cc310();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "result == kAMDSuccess";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
      FUN_1001782e9(0,0);
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithAMDError__10088dd80,
                         iVar3);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      (**(code **)(lVar5 + 0x10))(lVar5,0,uVar4);
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    FUN_10017060f(lVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

