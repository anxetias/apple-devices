// name: FUN_100242b38
// address: 100242b38

int FUN_100242b38(long param_1)

{
  undefined *puVar1;
  undefined *op;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  short sVar6;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined2 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xcb5;
      local_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    sVar6 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x120) != 0) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x2de8;
        local_48 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      FUN_1001782e9(0,0);
    }
    local_60 = 2;
    if (*(int *)(param_1 + 0xe0) != 1) {
      local_60 = (ulong)(*(int *)(param_1 + 0xe0) == 2);
    }
    IVar4 = NSMutableDictionary::dictionary
                      ((ID)PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0,
                       PTR_s_dictionary_10088c4a0);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar4);
    uVar5 = FUN_1001bdcb0(param_1 + 0x28,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar1 = PTR_s_setObject_forKeyedSubscript__10088be60;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setObject_forKeyedSubscript__10088be60,uVar5,
               *(undefined8 *)PTR__AMPDeviceAskUserMessageKey_10082b758);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    cVar2 = FUN_1001b8428(param_1 + 8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserUUIDKey_10082b7a0);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x38);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x38,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserExplanationKey_10082b750);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x48);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x48,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserOKButtonTitleKey_10082b760);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x58);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x58,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDeviceAskUserCancelButtonTitleKey_10082b738);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x68);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x68,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDeviceAskUserOtherButtonTitleKey_10082b770);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    cVar2 = FUN_1001b8428(param_1 + 0xe8);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0xe8,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserOtherButtonURLKey_10082b778)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    if (*(char *)(param_1 + 0x130) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDeviceAskUserOtherButtonShouldDismissKey_10082b768);
    }
    cVar2 = FUN_1001b8428(param_1 + 0x88);
    if (cVar2 == '\0') {
      uVar5 = FUN_1001bdcb0(param_1 + 0x88,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserCheckboxTitleKey_10082b740);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,PTR____kCFBooleanTrue_10082e000,
                 *(undefined8 *)PTR__AMPDeviceAskUserCheckboxValueKey_10082b748);
    }
    op = PTR_s_numberWithUnsignedInteger__10088c4a8;
    if (*(short *)(param_1 + 0xb0) != 0) {
      IVar4 = NSNumber::numberWithUnsignedInteger_
                        ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                         PTR_s_numberWithUnsignedInteger__10088c4a8);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserTimeoutSecondsKey_10082b798)
      ;
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001b7a5c(&local_58,param_1 + 200);
      uVar5 = FUN_1001bdcb0(&local_58,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDeviceAskUserTimeoutExplanationSingularKey_10082b790);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001b7a50(&local_58);
      FUN_1001b7a5c(&local_58,param_1 + 0xb8);
      uVar5 = FUN_1001bdcb0(&local_58,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDeviceAskUserTimeoutExplanationPluralKey_10082b788);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
      FUN_1001b7a50(&local_58);
      IVar4 = NSNumber::numberWithInteger_
                        ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,PTR_s_numberWithInteger__10088c4b0
                         ,(long)*(short *)(param_1 + 0xd8));
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar3,puVar1,uVar5,
                 *(undefined8 *)PTR__AMPDeviceAskUserTimeoutDismissButtonKey_10082b780);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
    IVar4 = NSNumber::numberWithUnsignedInteger_
                      ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,op,local_60);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,puVar1,uVar5,*(undefined8 *)PTR__AMPDeviceAskUserAlertStyleKey_10082b730);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    local_58 = 0;
    uStack_54 = 0;
    local_50 = SUB84(&local_58,0);
    uStack_4c = (undefined2)((ulong)&local_58 >> 0x20);
    uStack_4a = (undefined2)((ulong)&local_58 >> 0x30);
    local_48 = 0x2020000000;
    uStack_42 = 0;
    local_40 = 0;
    local_78 = &local_80;
    local_80 = 0;
    local_70 = 0x2020000000;
    local_68 = 0;
    IVar4 = AMPDevicesClientBroadcaster::sharedInstance(0x10088e6f8,PTR_s_sharedInstance_10088c4b8);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar5,PTR_s_askUserWithParameters_withReply__10088c4c0,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    uVar5 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
    while (*(char *)(local_78 + 3) == '\0') {
      _CFRunLoopRunInMode(DAT_100712580,uVar5,0);
    }
    sVar6 = *(short *)(CONCAT26(uStack_4a,CONCAT24(uStack_4c,local_50)) + 0x18);
    __Block_object_dispose(&local_80,8);
    __Block_object_dispose(&local_58,8);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (int)sVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

